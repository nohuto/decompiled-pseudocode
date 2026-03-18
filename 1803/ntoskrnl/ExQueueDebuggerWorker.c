/*
 * XREFs of ExQueueDebuggerWorker @ 0x140181D18
 * Callers:
 *     KdExitDebugger @ 0x140803DB4 (KdExitDebugger.c)
 *     ExpWorkerInitialization @ 0x1408C095C (ExpWorkerInitialization.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140039000 (KeInsertQueueDpc.c)
 */

char ExQueueDebuggerWorker()
{
  signed __int32 v0; // eax

  v0 = _InterlockedCompareExchange(&ExpDebuggerWork, 2, 1);
  if ( v0 == 1 )
    LOBYTE(v0) = KeInsertQueueDpc(&ExpDebuggerDpc, 0LL, 0LL);
  return v0;
}
