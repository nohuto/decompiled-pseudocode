/*
 * XREFs of MmEnablePeriodicAccessClearing @ 0x140404DEC
 * Callers:
 *     PfTAccessTracingStart @ 0x140404D3C (PfTAccessTracingStart.c)
 *     PfTAccessTracingCleanup @ 0x14040E304 (PfTAccessTracingCleanup.c)
 * Callees:
 *     MmGetNextPartition @ 0x14003A82C (MmGetNextPartition.c)
 */

__int64 __fastcall MmEnablePeriodicAccessClearing(char a1)
{
  ULONG_PTR v2; // rcx
  __int64 result; // rax

  v2 = 0LL;
  while ( 1 )
  {
    result = MmGetNextPartition(v2);
    if ( !result )
      break;
    v2 = result;
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)result + 5544LL) + 55LL) = a1;
  }
  return result;
}
