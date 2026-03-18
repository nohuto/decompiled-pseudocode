/*
 * XREFs of MmEnablePeriodicAccessClearing @ 0x1404782E0
 * Callers:
 *     PfTAccessTracingCleanup @ 0x1404780E0 (PfTAccessTracingCleanup.c)
 *     PfTAccessTracingStart @ 0x140478230 (PfTAccessTracingStart.c)
 * Callees:
 *     PsGetNextPartition @ 0x1400043F8 (PsGetNextPartition.c)
 */

void *__fastcall MmEnablePeriodicAccessClearing(char a1)
{
  void *v2; // rcx
  void *result; // rax

  v2 = 0LL;
  while ( 1 )
  {
    result = PsGetNextPartition(v2);
    if ( !result )
      break;
    v2 = result;
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)result + 6768LL) + 55LL) = a1;
  }
  return result;
}
