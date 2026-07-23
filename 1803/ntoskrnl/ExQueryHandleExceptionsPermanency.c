/*
 * XREFs of ExQueryHandleExceptionsPermanency @ 0x1400D182C
 * Callers:
 *     ObpCloseHandle @ 0x1404B5E0C (ObpCloseHandle.c)
 *     NtQueryInformationProcess @ 0x1404F9480 (NtQueryInformationProcess.c)
 *     NtClose @ 0x1405A2660 (NtClose.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExQueryHandleExceptionsPermanency(__int64 a1, _BYTE *a2, bool *a3)
{
  struct _KTHREAD *CurrentThread; // rbp
  ULONG_PTR v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  bool v12; // al
  struct _KTHREAD *v13; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v15; // r14
  unsigned int v16; // r8d
  bool v17; // zf
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  _KLOCK_ENTRY *v21; // rdi
  __int64 v22; // rdx
  int v24; // [rsp+60h] [rbp+8h] BYREF
  int v25; // [rsp+78h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = a1 + 56;
  ExAcquirePushLockExclusiveEx(a1 + 56, 0LL);
  v11 = *(_QWORD *)(a1 + 96);
  if ( v11 )
  {
    *a2 = 1;
    v12 = (*(_DWORD *)(v11 + 8) & 8) != 0;
  }
  else if ( (*(_BYTE *)(a1 + 44) & 2) != 0 )
  {
    *a2 = 1;
    v12 = 1;
  }
  else
  {
    *a2 = 0;
    v12 = 0;
  }
  *a3 = v12;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v7, v8, v9, v10);
  v24 = 0;
  v13 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v7) == 1 )
    SessionId = MmGetSessionIdEx(v13->ApcState.Process);
  else
    SessionId = -1;
  --v13->SpecialApcDisable;
  v15 = ++v13->AbAllocationRegionCount;
  v16 = ((char)v13->AbEntrySummary | (char)v13->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v17 = !_BitScanReverse((unsigned int *)&v18, v16);
    v25 = v18;
    if ( v17 )
      break;
    v19 = 1 << v18;
    v20 = v18;
    v21 = &v13->LockEntries[v20];
    v16 &= ~v19;
    if ( (v21->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v21->LockState.0 & 1) == 0
      && (*(_QWORD *)&v21->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v7 & 0x7FFFFFFFFFFFFFFCLL)
      && v21->LockState.SessionId == SessionId )
    {
      v21->AcquiredByte &= ~1u;
      if ( v21->LockState.0 )
      {
        if ( v21 )
        {
          v21->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v21->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v13->LockEntries[v20].TreeNode);
          v24 = 0;
          v24 = v21->BoostBitmap.AllFields & 0x1FFFF;
          v21->BoostBitmap.AllFields &= 0xFFFE0000;
          v21->ThreadLocalFlags &= ~1u;
          v21->LockState.0 = 0LL;
          v22 = ((char *)v21 - (char *)v13 - 800) / 96;
          if ( v15 == 1 )
            v13->AbEntrySummary |= 1 << v22;
          else
            _InterlockedOr8((volatile signed __int8 *)&v13->AbOrphanedEntrySummary, 1 << v22);
          goto LABEL_20;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v13->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v13, v7, SessionId, 0LL);
LABEL_20:
  --v13->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(v13, v7, &v24);
  v17 = v13->SpecialApcDisable++ == -1;
  if ( v17 && ($005F0E83B22994B61E86C72E0CE43C71 *)v13->ApcState.ApcListHead[0].Flink != &v13->152 )
    KiCheckForKernelApcDelivery();
  return KeLeaveCriticalRegionThread(CurrentThread);
}
