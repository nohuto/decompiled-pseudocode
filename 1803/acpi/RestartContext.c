/*
 * XREFs of RestartContext @ 0x1C000252C
 * Callers:
 *     SyncEvalObject @ 0x1C00023B0 (SyncEvalObject.c)
 *     AsyncEvalObject @ 0x1C0002BD8 (AsyncEvalObject.c)
 *     AMLIRestartContext @ 0x1C00442C0 (AMLIRestartContext.c)
 *     RestartCtxtCallback @ 0x1C004BD10 (RestartCtxtCallback.c)
 *     SleepQueueDpc @ 0x1C004BDF0 (SleepQueueDpc.c)
 *     AsyncCallBack @ 0x1C004EA84 (AsyncCallBack.c)
 *     TimeoutCallback @ 0x1C004F040 (TimeoutCallback.c)
 *     SyncLoadDDB @ 0x1C009C4AC (SyncLoadDDB.c)
 * Callees:
 *     InsertReadyQueue @ 0x1C0002838 (InsertReadyQueue.c)
 *     LogSchedEvent @ 0x1C000295C (LogSchedEvent.c)
 *     OSQueueWorkItem @ 0x1C004309C (OSQueueWorkItem.c)
 */

__int64 __fastcall RestartContext(__int64 a1, char a2)
{
  __int64 v2; // rax
  __int64 v5; // r9
  __int64 v6; // rdx
  unsigned int inserted; // ebx
  __int64 v9; // rbx
  __int64 v10; // rcx

  v2 = *(_QWORD *)(a1 + 104);
  if ( v2 )
    v5 = *(_QWORD *)(v2 + 32);
  else
    v5 = *(_QWORD *)(a1 + 72);
  LogSchedEvent(1380275028, a1, a1, v5, *(_QWORD *)(a1 + 120));
  if ( KeGetCurrentIrql() >= 2u )
  {
    NewIrql = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    if ( !*(_QWORD *)(a1 + 432) )
      *(_QWORD *)(a1 + 432) = ++gAmliMethodCounter;
    *(_DWORD *)(a1 + 64) |= 0x20u;
    KeReleaseSpinLock(&SpinLock, NewIrql);
    v9 = a1 + 360;
    v10 = v9;
    if ( (gdwfAMLI & 4) != 0 )
    {
      if ( (unsigned __int8)ExTryQueueWorkItem(v9, 1LL) )
        return 32772;
      v10 = v9;
    }
    OSQueueWorkItem(v10);
    return 32772;
  }
  NewIrql = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  if ( !*(_QWORD *)(a1 + 432) )
    *(_QWORD *)(a1 + 432) = ++gAmliMethodCounter;
  LOBYTE(v6) = a2;
  inserted = InsertReadyQueue(a1, v6);
  KeReleaseSpinLock(&SpinLock, NewIrql);
  return inserted;
}
