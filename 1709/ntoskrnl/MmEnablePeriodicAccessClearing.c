/*
 * XREFs of MmEnablePeriodicAccessClearing @ 0x140430914
 * Callers:
 *     PfTAccessTracingCleanup @ 0x1404312A0 (PfTAccessTracingCleanup.c)
 *     PfTAccessTracingStart @ 0x140431394 (PfTAccessTracingStart.c)
 * Callees:
 *     PsGetNextPartition @ 0x140001044 (PsGetNextPartition.c)
 */

volatile signed __int64 *__fastcall MmEnablePeriodicAccessClearing(char a1)
{
  volatile signed __int64 *v2; // rcx
  volatile signed __int64 *result; // rax

  v2 = 0LL;
  while ( 1 )
  {
    result = PsGetNextPartition(v2);
    if ( !result )
      break;
    v2 = result;
    *(_BYTE *)(*(_QWORD *)(*result + 5680) + 55LL) = a1;
  }
  return result;
}
