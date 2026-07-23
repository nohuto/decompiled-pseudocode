/*
 * XREFs of MI_UNLOCK_RELOCATIONS_EXCLUSIVE @ 0x14006C674
 * Callers:
 *     MiRelocateImageAgain @ 0x1404F16CC (MiRelocateImageAgain.c)
 *     MiRelocateImage @ 0x14053C470 (MiRelocateImage.c)
 *     MiCaptureSecureImageBaseAddress @ 0x140754540 (MiCaptureSecureImageBaseAddress.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

__int64 __fastcall MI_UNLOCK_RELOCATIONS_EXCLUSIVE(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v4; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v8; // r14
  unsigned int v9; // r8d
  bool v10; // zf
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  _KLOCK_ENTRY *v14; // rdi
  __int64 v15; // rdx
  int v17; // [rsp+60h] [rbp+8h] BYREF
  int v18; // [rsp+68h] [rbp+10h]

  v4 = a2 + 24;
  *(_QWORD *)(a2 + 8) = a1 | 1;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 24), a2, a3, a4);
  v17 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v4) == 1 )
    SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  --CurrentThread->SpecialApcDisable;
  v8 = ++CurrentThread->AbAllocationRegionCount;
  v9 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v10 = !_BitScanReverse((unsigned int *)&v11, v9);
    v18 = v11;
    if ( v10 )
      break;
    v12 = 1 << v11;
    v13 = v11;
    v14 = &CurrentThread->LockEntries[v13];
    v9 &= ~v12;
    if ( (v14->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v14->LockState.0 & 1) == 0
      && (*(_QWORD *)&v14->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v4 & 0x7FFFFFFFFFFFFFFCLL)
      && v14->LockState.SessionId == SessionId )
    {
      v14->AcquiredByte &= ~1u;
      if ( v14->LockState.0 )
      {
        if ( v14 )
        {
          v14->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v14->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v13].TreeNode);
          v17 = 0;
          v17 = v14->BoostBitmap.AllFields & 0x1FFFF;
          v14->BoostBitmap.AllFields &= 0xFFFE0000;
          v14->ThreadLocalFlags &= ~1u;
          v14->LockState.0 = 0LL;
          v15 = ((char *)v14 - (char *)CurrentThread - 800) / 96;
          if ( v8 == 1 )
            CurrentThread->AbEntrySummary |= 1 << v15;
          else
            _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v15);
          goto LABEL_17;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v4, SessionId, 0LL);
LABEL_17:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(CurrentThread, v4, &v17);
  v10 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v10 && ($005F0E83B22994B61E86C72E0CE43C71 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return KiLeaveGuardedRegionUnsafe(a1);
}
