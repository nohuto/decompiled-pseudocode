/*
 * XREFs of RtlTimelineBitmapUpdateRange @ 0x140234FD8
 * Callers:
 *     PoEnergyContextCleanup @ 0x140498B70 (PoEnergyContextCleanup.c)
 *     PsQueryProcessEnergyValues @ 0x1405400F0 (PsQueryProcessEnergyValues.c)
 *     PoEnergyContextUpdateComponentPower @ 0x1406D031C (PoEnergyContextUpdateComponentPower.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall RtlTimelineBitmapUpdateRange(unsigned int *a1, unsigned int a2, unsigned int a3)
{
  unsigned int *result; // rax
  unsigned int v4; // ecx
  int v5; // r9d
  unsigned int v6; // ecx

  result = a1;
  v4 = *a1;
  if ( a3 <= v4 )
  {
    v6 = v4 - a3;
    if ( v6 >= 0x20 )
      return result;
    v5 = 1 << v6;
  }
  else
  {
    *result = a3;
    v5 = 1;
    if ( a3 - v4 >= 0x20 )
      result[1] = 0;
    else
      result[1] <<= a3 - v4;
  }
  result[1] |= v5;
  while ( a2 < a3 )
  {
    v5 *= 2;
    if ( !v5 )
      break;
    result[1] |= v5;
    ++a2;
  }
  return result;
}
