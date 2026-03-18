/*
 * XREFs of KeSetSchedulingGroupCpuRates @ 0x1400A7A44
 * Callers:
 *     NtSetInformationJobObject @ 0x140532FE4 (NtSetInformationJobObject.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiAssignSchedulingGroupWeights @ 0x1400A7AF4 (KiAssignSchedulingGroupWeights.c)
 *     KiUpdateMinimumWeight @ 0x1400A7BAC (KiUpdateMinimumWeight.c)
 *     KiUpdateCpuTargetByRate @ 0x1400A7E68 (KiUpdateCpuTargetByRate.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 __fastcall KeSetSchedulingGroupCpuRates(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rdx
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&KiSchedulingGroupLock, &LockHandle);
  v6 = *a2;
  v7 = *(_DWORD *)(*a2 + 4LL);
  if ( (v7 & 1) == 0 )
  {
    LOBYTE(v5) = 1;
    *(_DWORD *)(v6 + 4) = v7 | 1;
    KiUpdateMinimumWeight(0LL, v5, *(_QWORD *)(*a2 + 96LL));
    KiAssignSchedulingGroupWeights(0LL, 0LL);
    v6 = *a2;
  }
  LOBYTE(v5) = 1;
  *(_QWORD *)v6 = *a3;
  KiUpdateCpuTargetByRate(*a2, v5);
  LOBYTE(v8) = 1;
  if ( (unsigned __int8)KiUpdateMinimumWeight(1LL, v8, *(_QWORD *)(*a2 + 96LL)) )
    KiAssignSchedulingGroupWeights(1LL, 0LL);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
