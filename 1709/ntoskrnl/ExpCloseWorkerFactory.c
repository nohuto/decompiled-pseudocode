/*
 * XREFs of ExpCloseWorkerFactory @ 0x1405387E0
 * Callers:
 *     <none>
 * Callees:
 *     ExpShutdownWorkerFactory @ 0x1400E3A58 (ExpShutdownWorkerFactory.c)
 */

char __fastcall ExpCloseWorkerFactory(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  char result; // al

  if ( a4 == 1 )
    return ExpShutdownWorkerFactory(a2);
  return result;
}
