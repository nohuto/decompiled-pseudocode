/*
 * XREFs of _Dscale @ 0x1800ACAA8
 * Callers:
 *     _Stodx @ 0x1800A56C8 (_Stodx.c)
 *     _Xp_addh @ 0x1800ACD38 (_Xp_addh.c)
 *     _Xp_mulh @ 0x1800AD184 (_Xp_mulh.c)
 *     _Xp_setw @ 0x1800AD498 (_Xp_setw.c)
 *     _LDscale @ 0x1800AD808 (_LDscale.c)
 * Callees:
 *     _Dnorm @ 0x1800BFC7C (_Dnorm.c)
 */

__int64 __fastcall Dscale(unsigned __int16 *a1, int a2)
{
  __int16 v4; // cx
  double Double; // xmm0_8
  int v8; // ebp
  unsigned __int16 v9; // r11
  unsigned __int16 v10; // r15
  unsigned __int16 v11; // r14
  unsigned __int16 v12; // cx
  unsigned __int16 v13; // dx
  unsigned __int16 v14; // r9
  __int64 v15; // r8
  __int16 v16; // bp
  unsigned __int16 v17; // r9
  unsigned __int16 v18; // dx
  unsigned __int16 v19; // ax
  unsigned __int16 v20; // r11
  bool v21; // zf

  v4 = (a1[3] >> 4) & 0x7FF;
  if ( v4 == 2047 )
  {
    if ( (a1[3] & 0xF) != 0 || a1[2] || a1[1] || *a1 )
      return 2;
    else
      return 1;
  }
  if ( !v4 )
  {
    v4 = Dnorm(a1);
    if ( v4 > 0 )
      return 0LL;
  }
  if ( a2 <= 0 || 2047 - v4 > a2 )
  {
    if ( -v4 < a2 )
    {
      a1[3] = a1[3] & 0x800F | (16 * (v4 + a2));
      return 0xFFFFFFFFLL;
    }
    v8 = v4 + a2 - 1;
    v9 = a1[3] & 0xF | 0x10;
    v10 = a1[3] & 0x8000;
    a1[3] = v9;
    if ( v4 + a2 <= -53 || v8 >= 0 )
    {
      a1[3] = v10;
      *(_DWORD *)(a1 + 1) = 0;
      *a1 = 0;
    }
    else
    {
      v11 = 0;
      if ( (__int16)v8 <= -16 )
      {
        v12 = a1[2];
        v13 = a1[1];
        v14 = v9;
        v15 = (unsigned __int16)(((unsigned __int16)(-16 - v8) >> 4) + 1);
        LOWORD(v8) = 16 * v15 + v8;
        do
        {
          v11 = *a1 | (v11 != 0);
          *a1 = v13;
          v13 = v12;
          v12 = v14;
          v14 = 0;
          --v15;
        }
        while ( v15 );
        a1[3] = 0;
        v9 = 0;
        a1[2] = v12;
        a1[1] = v13;
      }
      v16 = -(__int16)v8;
      if ( v16 )
      {
        v17 = a1[1];
        v18 = a1[2];
        v11 = (v11 != 0) | (unsigned __int16)(*a1 << (16 - v16));
        *a1 = (*a1 >> v16) | (v17 << (16 - v16));
        a1[1] = (v17 >> v16) | (v18 << (16 - v16));
        v19 = (v18 >> v16) | (v9 << (16 - v16));
        v9 >>= v16;
        a1[3] = v9;
        a1[2] = v19;
      }
      v20 = v10 | v9;
      a1[3] = v20;
      if ( v11 > 0x8000u || v11 == 0x8000 && (*(_BYTE *)a1 & 1) != 0 )
      {
        v21 = (*a1)++ == 0xFFFF;
        if ( v21 )
        {
          v21 = a1[1]++ == 0xFFFF;
          if ( v21 )
          {
            v21 = a1[2]++ == 0xFFFF;
            if ( v21 )
            {
              a1[3] = v20 + 1;
              return 0xFFFFFFFFLL;
            }
          }
        }
      }
      if ( v20 != v10 || a1[2] || a1[1] || *a1 )
        return 0xFFFFFFFFLL;
    }
    return 0LL;
  }
  Double = Inf._Double;
  if ( (a1[3] & 0x8000u) != 0 )
    *(_QWORD *)&Double = *(_QWORD *)&Inf._Double ^ _xmm;
  *(double *)a1 = Double;
  return 1LL;
}
