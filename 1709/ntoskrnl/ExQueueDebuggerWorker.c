/*
 * XREFs of ExQueueDebuggerWorker @ 0x1401538D0
 * Callers:
 *     KdExitDebugger @ 0x140796D74 (KdExitDebugger.c)
 *     ExpWorkerInitialization @ 0x14084F4D4 (ExpWorkerInitialization.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140094390 (KeInsertQueueDpc.c)
 */

char ExQueueDebuggerWorker()
{
  signed __int32 v0; // eax

  v0 = _InterlockedCompareExchange(&ExpDebuggerWork, 2, 1);
  if ( v0 == 1 )
    LOBYTE(v0) = KeInsertQueueDpc(&ExpDebuggerDpc, 0LL, 0LL);
  return v0;
}
