/*
 * XREFs of KeSetSchedulingGroupCpuRates @ 0x1400D1B2C
 * Callers:
 *     NtSetInformationJobObject @ 0x140510C80 (NtSetInformationJobObject.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAssignSchedulingGroupWeights @ 0x1400D1BDC (KiAssignSchedulingGroupWeights.c)
 *     KiUpdateMinimumWeight @ 0x1400D1C94 (KiUpdateMinimumWeight.c)
 *     KiUpdateCpuTargetByRate @ 0x1400D1F04 (KiUpdateCpuTargetByRate.c)
 */

__int64 __fastcall KeSetSchedulingGroupCpuRates(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v5; // rdx
  int v6; // eax
  __int64 v7; // rdx
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&KiSchedulingGroupLock, &LockHandle);
  v6 = *(_DWORD *)(*a2 + 4LL);
  if ( (v6 & 1) == 0 )
  {
    LOBYTE(v5) = 1;
    *(_DWORD *)(*a2 + 4LL) = v6 | 1;
    KiUpdateMinimumWeight(0LL, v5, *(_QWORD *)(*a2 + 96LL));
    KiAssignSchedulingGroupWeights(0LL, 0LL);
  }
  LOBYTE(v5) = 1;
  *(_QWORD *)*a2 = *a3;
  KiUpdateCpuTargetByRate(*a2, v5);
  LOBYTE(v7) = 1;
  if ( (unsigned __int8)KiUpdateMinimumWeight(1LL, v7, *(_QWORD *)(*a2 + 96LL)) )
    KiAssignSchedulingGroupWeights(1LL, 0LL);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
