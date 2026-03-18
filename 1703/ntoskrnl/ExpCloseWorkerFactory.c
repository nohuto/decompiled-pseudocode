/*
 * XREFs of ExpCloseWorkerFactory @ 0x14055E070
 * Callers:
 *     <none>
 * Callees:
 *     ExpShutdownWorkerFactory @ 0x14012AB80 (ExpShutdownWorkerFactory.c)
 */

__int64 __fastcall ExpCloseWorkerFactory(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  if ( a4 == 1 )
    return ExpShutdownWorkerFactory(a2);
  return result;
}
