/*
 * XREFs of MmSetTrimWhileAgingState @ 0x1400043BC
 * Callers:
 *     PfSetSuperfetchInformation @ 0x14048DBD0 (PfSetSuperfetchInformation.c)
 * Callees:
 *     MiSetTrimWhileAgingState @ 0x1400042E0 (MiSetTrimWhileAgingState.c)
 *     PsGetNextPartition @ 0x1400043F8 (PsGetNextPartition.c)
 */

__int64 *__fastcall MmSetTrimWhileAgingState(int a1)
{
  __int64 *i; // rcx
  __int64 *result; // rax
  __int64 *v4; // rdi

  for ( i = 0LL; ; i = v4 )
  {
    result = (__int64 *)PsGetNextPartition(i);
    v4 = result;
    if ( !result )
      break;
    MiSetTrimWhileAgingState(*result, a1);
  }
  return result;
}
