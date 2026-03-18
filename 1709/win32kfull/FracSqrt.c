/*
 * XREFs of FracSqrt @ 0x1C02B714C
 * Callers:
 *     itrp_GetCVTScale @ 0x1C02CC400 (itrp_GetCVTScale.c)
 *     itrp_Normalize @ 0x1C02D0E30 (itrp_Normalize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FracSqrt(unsigned int a1)
{
  int v1; // r8d
  unsigned int v2; // eax
  unsigned int v4; // edx
  unsigned int v5; // ecx
  unsigned int v6; // ecx

  v1 = 0;
  v2 = 0;
  if ( (a1 & 0x80000000) != 0 )
    return 0x80000000LL;
  if ( a1 >= 0x40000000 )
  {
    a1 -= 0x40000000;
    v2 = 0x40000000;
  }
  v4 = 0x10000000;
  do
  {
    if ( a1 >= v4 + v2 )
    {
      a1 -= v4 + v2;
      v2 += 2 * v4;
    }
    a1 *= 2;
    v4 >>= 1;
  }
  while ( v4 );
  if ( a1 <= v2 )
  {
    v6 = 2 * a1;
  }
  else
  {
    v5 = a1 - v2++;
    v6 = 2 * v5 - 1;
  }
  LOBYTE(v1) = v6 > v2;
  return v1 + v2;
}
