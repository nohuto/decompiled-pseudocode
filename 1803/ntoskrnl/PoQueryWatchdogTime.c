/*
 * XREFs of PoQueryWatchdogTime @ 0x1400B8790
 * Callers:
 *     <none>
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140069270 (KiQueryUnbiasedInterruptTime.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     PopComputeWatchdogTimeout @ 0x140167974 (PopComputeWatchdogTimeout.c)
 */

BOOLEAN __stdcall PoQueryWatchdogTime(PDEVICE_OBJECT Pdo, PULONG SecondsRemaining)
{
  unsigned __int64 v2; // rbx
  BOOLEAN v3; // si
  _QWORD *DeviceNode; // rdi
  __int64 v6; // rdx
  __int64 v7; // rdx
  unsigned __int64 UnbiasedInterruptTime; // rax
  __int64 v10; // rax
  unsigned int v11; // eax
  __int64 v12; // r8
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  unsigned int v15; // eax
  __int64 v16; // r8
  __int64 v17; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = -1LL;
  v3 = 0;
  if ( Pdo )
    DeviceNode = Pdo->DeviceObjectExtension->DeviceNode;
  else
    DeviceNode = 0LL;
  KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
  v6 = DeviceNode[31];
  if ( v6 )
  {
    v14 = *(char *)(v6 + 66) - 1;
    if ( *(_BYTE *)(*(_QWORD *)(v6 + 72 * v14 + 272) + 196LL) )
    {
      v15 = PopComputeWatchdogTimeout(*(_QWORD *)(v6 + 72 * v14 + 272));
      v17 = *(_QWORD *)(v16 + 48) + 10000000LL * v15;
      if ( v17 != -1 )
        v2 = v17;
    }
  }
  v7 = DeviceNode[33];
  if ( v7 )
  {
    v10 = *(char *)(v7 + 66) - 1;
    if ( *(_BYTE *)(*(_QWORD *)(v7 + 72 * v10 + 272) + 196LL) )
    {
      v11 = PopComputeWatchdogTimeout(*(_QWORD *)(v7 + 72 * v10 + 272));
      v13 = *(_QWORD *)(v12 + 48) + 10000000LL * v11;
      if ( v13 < v2 )
        v2 = v13;
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  if ( v2 != -1LL )
  {
    v3 = 1;
    UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
    if ( UnbiasedInterruptTime > v2 )
      *SecondsRemaining = 0;
    else
      *SecondsRemaining = (v2 - UnbiasedInterruptTime) / 0x989680;
  }
  return v3;
}
