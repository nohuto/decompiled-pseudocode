/*
 * XREFs of ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14028607C
 * Callers:
 *     MiEndingOffsetWithLock @ 0x14002B0E0 (MiEndingOffsetWithLock.c)
 *     ExFreeLargePool @ 0x14002E0E0 (ExFreeLargePool.c)
 *     MiQueryAddressState @ 0x14003F110 (MiQueryAddressState.c)
 *     MiUnlinkPageFromList @ 0x14004B0F0 (MiUnlinkPageFromList.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x14005E0E0 (KiAbEntryGetLockedHeadEntry.c)
 *     KiAbEntryRemoveFromTree @ 0x14005EA50 (KiAbEntryRemoveFromTree.c)
 *     ExAcquireSpinLockShared @ 0x140066590 (ExAcquireSpinLockShared.c)
 *     MiOffsetToProtos @ 0x14007AFB0 (MiOffsetToProtos.c)
 *     MiMarkSharedImageCfgBits @ 0x1400A5EA0 (MiMarkSharedImageCfgBits.c)
 *     MiLockPagableImageSection @ 0x1400BC630 (MiLockPagableImageSection.c)
 *     MiProbeAndLockPrepare @ 0x1400BEF50 (MiProbeAndLockPrepare.c)
 *     ExpAddTagForBigPages @ 0x1400C1690 (ExpAddTagForBigPages.c)
 *     MiPageToNode @ 0x1400C7140 (MiPageToNode.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1400D56B0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400BF390 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     PerfLogSpinLockAcquire @ 0x14027EC18 (PerfLogSpinLockAcquire.c)
 */

char __fastcall ExpAcquireSpinLockSharedAtDpcLevelInstrumented(_DWORD *a1, unsigned __int8 a2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  int v3; // r9d
  char v5; // si
  unsigned __int64 v6; // rax
  int InterruptCount; // r14d
  int v8; // ebp
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  __int64 v11; // rax
  int v13; // [rsp+50h] [rbp+8h]

  CurrentPrcb = KeGetCurrentPrcb();
  v3 = 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    v5 = 1;
    v6 = __rdtsc();
    InterruptCount = CurrentPrcb->InterruptCount;
    v8 = v6;
  }
  else
  {
    v8 = v13;
    v5 = 0;
    InterruptCount = v13;
  }
  ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
  _m_prefetchw(a1);
  v10 = *a1 & 0x7FFFFFFF;
  v9 = _InterlockedCompareExchange(a1, v10 + 1, v10);
  if ( v10 != v9 )
  {
    v9 = ExpWaitForSpinLockSharedAndAcquire(a1, a2);
    ++CurrentPrcb->SynchCounters.SpinLockContentionCount;
    v3 = v9;
    CurrentPrcb->SynchCounters.SpinLockSpinCount += v9;
  }
  if ( v5 )
  {
    v11 = __rdtsc();
    LOBYTE(v9) = PerfLogSpinLockAcquire((__int64)a1, v11, v11 - v8, v3, InterruptCount, 2);
  }
  return v9;
}
