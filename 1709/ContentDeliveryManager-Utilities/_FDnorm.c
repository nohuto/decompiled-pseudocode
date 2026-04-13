/*
 * XREFs of _FDnorm @ 0x1800B294C
 * Callers:
 *     _FDscale @ 0x18009EC4C (_FDscale.c)
 *     _FDunscale @ 0x1800B2B98 (_FDunscale.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FDnorm(unsigned __int16 *a1)
{
  __int16 v1; // r11
  unsigned __int16 v2; // r10
  unsigned __int16 v3; // ax
  unsigned __int16 v4; // r8
  unsigned __int16 v5; // r9
  __int16 v6; // ax
  __int16 v7; // r8
  unsigned int v8; // kr00_4
  unsigned __int16 v9; // r8
  unsigned __int16 v10; // r9

  v1 = a1[1] & 0x8000;
  v2 = 1;
  v3 = a1[1] & 0x7F;
  a1[1] = v3;
  if ( v3 || *a1 )
  {
    if ( !v3 )
    {
      v2 = -15;
      a1[1] = *a1;
      *a1 = 0;
    }
    v4 = a1[1];
    if ( v4 < 0x80u )
    {
      v5 = *a1;
      do
      {
        v6 = 2 * v4;
        v8 = 2 * v5;
        v7 = HIWORD(v8);
        v5 = v8;
        v4 = v6 | v7;
        --v2;
      }
      while ( v4 < 0x80u );
      a1[1] = v4;
      *a1 = v5;
    }
    v9 = a1[1];
    if ( v9 >= 0x100u )
    {
      v10 = *a1;
      do
      {
        ++v2;
        v10 = (v10 >> 1) | (v9 << 15);
        v9 >>= 1;
      }
      while ( v9 >= 0x100u );
      a1[1] = v9;
      *a1 = v10;
    }
    a1[1] &= 0x7Fu;
    v3 = a1[1];
  }
  a1[1] = v1 | v3;
  return v2;
}
