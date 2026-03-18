/*
 * XREFs of MmSetMinimumAgeRate @ 0x14043D8DC
 * Callers:
 *     PfSetSuperfetchInformation @ 0x14043E10C (PfSetSuperfetchInformation.c)
 * Callees:
 *     PsGetNextPartition @ 0x140001044 (PsGetNextPartition.c)
 */

volatile signed __int64 *__fastcall MmSetMinimumAgeRate(unsigned int a1)
{
  volatile signed __int64 *result; // rax
  volatile signed __int64 *v3; // r8
  __int64 v4; // r9
  unsigned int v5; // ecx
  unsigned int v6; // eax
  __int16 v7; // cx

  for ( result = PsGetNextPartition(0LL); ; result = PsGetNextPartition(v3) )
  {
    v3 = result;
    if ( !result )
      break;
    v4 = *(_QWORD *)(*result + 5680);
    if ( a1 )
    {
      if ( a1 < 0xC )
        v5 = 1;
      else
        v5 = a1 / 6;
      v6 = 0x3E8 / v5;
      v7 = 1;
      if ( v6 > 1 )
        v7 = v6;
      *(_WORD *)(v4 + 2356) = v7;
    }
    else
    {
      *(_WORD *)(v4 + 2356) = 0;
    }
  }
  return result;
}
