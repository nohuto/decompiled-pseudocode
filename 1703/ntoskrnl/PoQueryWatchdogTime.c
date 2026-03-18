/*
 * XREFs of PoQueryWatchdogTime @ 0x140027060
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     PopComputeWatchdogTimeout @ 0x1401465D0 (PopComputeWatchdogTimeout.c)
 */

BOOLEAN __stdcall PoQueryWatchdogTime(PDEVICE_OBJECT Pdo, PULONG SecondsRemaining)
{
  unsigned __int64 v2; // rbx
  BOOLEAN v3; // si
  _QWORD *DeviceNode; // rdi
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v9; // rax
  unsigned int v10; // eax
  __int64 v11; // r8
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  unsigned int v14; // eax
  __int64 v15; // r8
  __int64 v16; // rax
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
    v13 = *(char *)(v6 + 66) - 1;
    if ( *(_BYTE *)(*(_QWORD *)(v6 + 72 * v13 + 272) + 196LL) )
    {
      v14 = PopComputeWatchdogTimeout(*(_QWORD *)(v6 + 72 * v13 + 272));
      v16 = *(_QWORD *)(v15 + 48) + 10000000LL * v14;
      if ( v16 != -1 )
        v2 = v16;
    }
  }
  v7 = DeviceNode[33];
  if ( v7 )
  {
    v9 = *(char *)(v7 + 66) - 1;
    if ( *(_BYTE *)(*(_QWORD *)(v7 + 72 * v9 + 272) + 196LL) )
    {
      v10 = PopComputeWatchdogTimeout(*(_QWORD *)(v7 + 72 * v9 + 272));
      v12 = *(_QWORD *)(v11 + 48) + 10000000LL * v10;
      if ( v12 < v2 )
        v2 = v12;
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  if ( v2 != -1LL )
  {
    v3 = 1;
    if ( MEMORY[0xFFFFF78000000008] > v2 )
      *SecondsRemaining = 0;
    else
      *SecondsRemaining = (v2 - MEMORY[0xFFFFF78000000008]) / 0x989680;
  }
  return v3;
}
