/*
 * XREFs of sub_18000F0DC @ 0x18000F0DC
 * Callers:
 *     sub_18000ECC4 @ 0x18000ECC4 (sub_18000ECC4.c)
 *     sub_18000EF18 @ 0x18000EF18 (sub_18000EF18.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000F0DC(unsigned int a1, int a2)
{
  unsigned int v3; // edx
  unsigned int v4; // ecx

  if ( (dword_180158684 & 4) == 0 )
  {
    v3 = 2 * a2;
    if ( ((v3 - 1) & v3) != 0 )
    {
      _BitScanReverse(&v4, v3);
      v3 = 1 << (v4 + 1);
    }
    if ( v3 <= 0x1000 )
      v3 = 4096;
    if ( v3 >= a1 )
      return a1;
    return v3;
  }
  return a1;
}
