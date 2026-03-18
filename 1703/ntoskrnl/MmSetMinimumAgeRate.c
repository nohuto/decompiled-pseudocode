/*
 * XREFs of MmSetMinimumAgeRate @ 0x14045B610
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1405630D4 (PfSetSuperfetchInformation.c)
 * Callees:
 *     MmGetNextPartition @ 0x14003A82C (MmGetNextPartition.c)
 */

__int64 __fastcall MmSetMinimumAgeRate(unsigned int a1)
{
  __int64 result; // rax
  ULONG_PTR v3; // r8
  __int64 v4; // r9
  unsigned int v5; // ecx
  unsigned int v6; // eax
  __int16 v7; // cx

  for ( result = MmGetNextPartition(0LL); ; result = MmGetNextPartition(v3) )
  {
    v3 = result;
    if ( !result )
      break;
    v4 = *(_QWORD *)(*(_QWORD *)result + 5544LL);
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
