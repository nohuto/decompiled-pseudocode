/*
 * XREFs of PopTimeoutWakeTracking @ 0x14013CA74
 * Callers:
 *     PopWakeSourceTimeoutWorker @ 0x1405790C0 (PopWakeSourceTimeoutWorker.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     PopWakeInfoDereference @ 0x14013CC18 (PopWakeInfoDereference.c)
 *     PopFinalizeWakeInfo @ 0x140579248 (PopFinalizeWakeInfo.c)
 */

__int64 __fastcall PopTimeoutWakeTracking(__int64 *a1)
{
  __int16 *v2; // rdi
  __int64 v3; // rax
  __int64 result; // rax
  __int64 i; // rax
  __int16 v6; // [rsp+30h] [rbp-30h] BYREF
  char v7; // [rsp+32h] [rbp-2Eh]
  int v8; // [rsp+34h] [rbp-2Ch]
  _QWORD v9[2]; // [rsp+38h] [rbp-28h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-18h] BYREF

  v6 = 1;
  v9[1] = v9;
  v7 = 6;
  v9[0] = v9;
  v2 = 0LL;
  v8 = 0;
  KeAcquireInStackQueuedSpinLock(&PopWakeSourceLock, &LockHandle);
  if ( a1 == (__int64 *)PopCurrentWakeInfo )
  {
    PopCurrentWakeInfo = 0LL;
    PopPendingWakeInfo = (__int64)a1;
    if ( PopWakeSourceWorkInProgress )
    {
      for ( i = qword_14034BE88; (PVOID *)i != &PopWakeSourceWorkList; i = *(_QWORD *)(i + 8) )
      {
        if ( *(__int64 **)(i + 24) == a1 )
        {
          *(_QWORD *)(i + 32) = &v6;
          v2 = &v6;
          break;
        }
      }
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    if ( v2 )
      KeWaitForSingleObject(v2, Executive, 0, 0, 0LL);
    KeAcquireInStackQueuedSpinLock(&PopWakeSourceLock, &LockHandle);
    if ( a1 == (__int64 *)PopPendingWakeInfo )
    {
      v3 = PopWakeInfoList;
      if ( *(__int64 **)(PopWakeInfoList + 8) != &PopWakeInfoList )
        __fastfail(3u);
      ++PopWakeInfoCount;
      PopPendingWakeInfo = 0LL;
      a1[1] = (__int64)&PopWakeInfoList;
      *a1 = v3;
      *(_QWORD *)(v3 + 8) = a1;
      PopWakeInfoList = (__int64)a1;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      PopFinalizeWakeInfo(a1);
      KeAcquireInStackQueuedSpinLock(&PopWakeSourceLock, &LockHandle);
    }
  }
  PopWakeInfoDereference(a1);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
