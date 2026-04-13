/*
 * XREFs of _Dnorm @ 0x1800B2C24
 * Callers:
 *     _Dscale @ 0x18009F844 (_Dscale.c)
 *     _Dunscale @ 0x1800B2F38 (_Dunscale.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Dnorm(unsigned __int16 *a1)
{
  __int16 v2; // di
  unsigned __int16 v3; // ax
  unsigned __int16 v4; // r10
  unsigned __int16 v5; // ax
  unsigned __int16 v6; // cx
  unsigned __int16 v7; // r9
  unsigned __int16 v8; // r8
  unsigned __int16 v9; // r8
  unsigned __int16 v10; // r11
  unsigned __int16 v11; // r9
  unsigned __int16 v12; // bx
  __int16 v13; // ax
  unsigned int v14; // kr00_4
  unsigned __int16 v15; // r8
  unsigned __int16 v16; // r9
  unsigned __int16 v17; // bx
  unsigned __int16 v18; // r11
  unsigned __int16 v19; // ax

  v2 = a1[3] & 0x8000;
  v3 = a1[3] & 0xF;
  a1[3] = v3;
  v4 = 1;
  if ( v3 || a1[2] || a1[1] || *a1 )
  {
    if ( !v3 )
    {
      v5 = a1[2];
      v6 = a1[1];
      v7 = *a1;
      do
      {
        v8 = v5;
        v4 -= 16;
        v5 = v6;
        v6 = v7;
        v7 = 0;
      }
      while ( !v8 );
      a1[3] = v8;
      a1[2] = v5;
      a1[1] = v6;
      *a1 = 0;
    }
    v9 = a1[3];
    if ( v9 < 0x10u )
    {
      v10 = a1[2];
      v11 = a1[1];
      v12 = *a1;
      do
      {
        v9 = (v10 >> 15) | (2 * v9);
        v10 = (2 * v10) | (v11 >> 15);
        --v4;
        v14 = 2 * v12;
        v13 = HIWORD(v14);
        v12 = v14;
        v11 = v13 | (2 * v11);
      }
      while ( v9 < 0x10u );
      a1[3] = v9;
      a1[2] = v10;
      a1[1] = v11;
      *a1 = v12;
    }
    v15 = a1[3];
    if ( v15 >= 0x20u )
    {
      v16 = a1[2];
      v17 = a1[1];
      v18 = *a1;
      do
      {
        v18 = (v17 << 15) | (v18 >> 1);
        v17 = (v17 >> 1) | (v16 << 15);
        ++v4;
        v19 = v15;
        v15 >>= 1;
        v16 = (v19 << 15) | (v16 >> 1);
      }
      while ( v15 >= 0x20u );
      a1[3] = v15;
      a1[2] = v16;
      a1[1] = v17;
      *a1 = v18;
    }
    a1[3] &= 0xFu;
    v3 = a1[3];
  }
  a1[3] = v2 | v3;
  return v4;
}
