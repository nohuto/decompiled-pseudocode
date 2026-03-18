/*
 * XREFs of MmSetMinimumAgeRate @ 0x14048C4C4
 * Callers:
 *     PfSetSuperfetchInformation @ 0x14048DBD0 (PfSetSuperfetchInformation.c)
 * Callees:
 *     PsGetNextPartition @ 0x1400043F8 (PsGetNextPartition.c)
 */

void *__fastcall MmSetMinimumAgeRate(unsigned int a1)
{
  void *result; // rax
  void *v3; // r8
  __int64 v4; // r9
  unsigned int v5; // ecx
  unsigned int v6; // eax
  __int16 v7; // cx

  for ( result = PsGetNextPartition(0LL); ; result = PsGetNextPartition(v3) )
  {
    v3 = result;
    if ( !result )
      break;
    v4 = *(_QWORD *)(*(_QWORD *)result + 6768LL);
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
    }
    else
    {
      v7 = 0;
    }
    *(_WORD *)(v4 + 2356) = v7;
  }
  return result;
}
