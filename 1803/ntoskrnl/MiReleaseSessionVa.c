/*
 * XREFs of MiReleaseSessionVa @ 0x1400CD1E0
 * Callers:
 *     MiMakeSystemRangeAvailable @ 0x140049550 (MiMakeSystemRangeAvailable.c)
 * Callees:
 *     RtlClearBitsEx @ 0x140009400 (RtlClearBitsEx.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiReleaseSessionVa(__int64 a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 v3; // rdi
  unsigned __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  ULONG_PTR v9; // rsi
  struct _KTHREAD *v10; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v12; // r14
  unsigned int v13; // r8d
  bool v14; // zf
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  _KLOCK_ENTRY *v18; // rdi
  __int64 v19; // rdx
  int v21; // [rsp+68h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = (unsigned __int64)(a1 - qword_1403CB600) >> 21;
  v5 = CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 8016, 0LL);
  RtlClearBitsEx(v5 + 8024, v3, a2);
  if ( v3 < *(_QWORD *)(v5 + 8040) )
    *(_QWORD *)(v5 + 8040) = v3;
  *(_DWORD *)(v5 + 8132) -= a2;
  v9 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 8016;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v9, v6, v7, v8);
  v21 = 0;
  v10 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v9) == 1 )
    SessionId = MmGetSessionIdEx(v10->ApcState.Process);
  else
    SessionId = -1;
  --v10->SpecialApcDisable;
  v12 = ++v10->AbAllocationRegionCount;
  v13 = ((char)v10->AbEntrySummary | (char)v10->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v14 = !_BitScanReverse((unsigned int *)&v15, v13);
    if ( v14 )
      break;
    v16 = 1 << v15;
    v17 = v15;
    v18 = &v10->LockEntries[v17];
    v13 &= ~v16;
    if ( (v18->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v18->LockState.0 & 1) == 0
      && (*(_QWORD *)&v18->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v9 & 0x7FFFFFFFFFFFFFFCLL)
      && v18->LockState.SessionId == SessionId )
    {
      v18->AcquiredByte &= ~1u;
      if ( v18->LockState.0 )
      {
        if ( v18 )
        {
          v18->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v18->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v10->LockEntries[v17].TreeNode);
          v21 = 0;
          v21 = v18->BoostBitmap.AllFields & 0x1FFFF;
          v18->BoostBitmap.AllFields &= 0xFFFE0000;
          v18->ThreadLocalFlags &= ~1u;
          v18->LockState.0 = 0LL;
          v19 = ((char *)v18 - (char *)v10 - 800) / 96;
          if ( v12 == 1 )
            v10->AbEntrySummary |= 1 << v19;
          else
            _InterlockedOr8((volatile signed __int8 *)&v10->AbOrphanedEntrySummary, 1 << v19);
          goto LABEL_19;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v10->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v10, v9, SessionId, 0LL);
LABEL_19:
  --v10->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(v10, v9, &v21);
  v14 = v10->SpecialApcDisable++ == -1;
  if ( v14 && ($005F0E83B22994B61E86C72E0CE43C71 *)v10->ApcState.ApcListHead[0].Flink != &v10->152 )
    KiCheckForKernelApcDelivery();
  return KiLeaveGuardedRegionUnsafe(CurrentThread);
}
