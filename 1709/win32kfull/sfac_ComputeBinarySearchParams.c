/*
 * XREFs of sfac_ComputeBinarySearchParams @ 0x1C02C2F4C
 * Callers:
 *     sfac_ComputeIndex4 @ 0x1C02C304C (sfac_ComputeIndex4.c)
 *     sfac_ComputeMapping @ 0x1C02C32F0 (sfac_ComputeMapping.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall sfac_ComputeBinarySearchParams(unsigned __int16 a1, _WORD *a2, _WORD *a3, _WORD *a4)
{
  __int16 v4; // r11
  unsigned __int16 v5; // r10
  __int16 result; // ax

  v4 = 0;
  v5 = 1;
  if ( a1 >= 2u )
  {
    do
    {
      v5 *= 2;
      ++v4;
    }
    while ( 2 * (unsigned int)v5 <= a1 );
  }
  result = 2 * v5;
  *a2 = 2 * v5;
  *a3 = v4;
  *a4 = 2 * (a1 - v5);
  return result;
}
