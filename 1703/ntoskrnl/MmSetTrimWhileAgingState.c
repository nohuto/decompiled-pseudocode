/*
 * XREFs of MmSetTrimWhileAgingState @ 0x14003A7F0
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1405630D4 (PfSetSuperfetchInformation.c)
 * Callees:
 *     MmGetNextPartition @ 0x14003A82C (MmGetNextPartition.c)
 *     MiSetTrimWhileAgingState @ 0x14003A8E0 (MiSetTrimWhileAgingState.c)
 */

_QWORD *__fastcall MmSetTrimWhileAgingState(unsigned int a1)
{
  ULONG_PTR i; // rcx
  _QWORD *result; // rax
  _QWORD *v4; // rdi

  for ( i = 0LL; ; i = (ULONG_PTR)v4 )
  {
    result = (_QWORD *)MmGetNextPartition(i);
    v4 = result;
    if ( !result )
      break;
    MiSetTrimWhileAgingState(*result, a1);
  }
  return result;
}
