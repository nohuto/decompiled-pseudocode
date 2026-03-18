/*
 * XREFs of ?prunPlgRead24@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02B3B00
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x1C00A3750 (XLATEOBJ_iXlate.c)
 *     ?prunPumpDDA@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@@Z @ 0x1C02B4144 (-prunPumpDDA@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@@Z.c)
 *     ?vAdvXDDA@@YAXPEAU_PLGDDA@@@Z @ 0x1C02B432C (-vAdvXDDA@@YAXPEAU_PLGDDA@@@Z.c)
 */

struct _PLGRUN *__fastcall prunPlgRead24(
        struct _PLGDDA *a1,
        struct _PLGRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        XLATEOBJ *pxlo,
        int a6,
        int a7,
        int a8)
{
  unsigned __int8 *v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // r14
  unsigned __int8 *v13; // r14
  int v14; // r12d
  __int64 v15; // rsi
  __int64 v16; // r13
  ULONG v17; // eax
  ULONG iColor; // [rsp+60h] [rbp+40h]

  HIBYTE(iColor) = 0;
  v10 = &a3[2 * a6 + a6];
  if ( a4 )
  {
    v13 = &a4[4 * ((__int64)a8 >> 5)];
    v14 = *(_DWORD *)v13;
    if ( a6 != a7 )
    {
      v15 = a8 & 0x1F;
      v16 = (unsigned int)(a7 - a6);
      do
      {
        if ( v15 >= 32 )
        {
          v13 += 4;
          v15 = 0LL;
          v14 = *(_DWORD *)v13;
        }
        if ( (dword_1C02F43A0[v15] & v14) != 0 )
        {
          LOWORD(iColor) = *(_WORD *)v10;
          BYTE2(iColor) = v10[2];
          if ( pxlo )
            v17 = XLATEOBJ_iXlate(pxlo, iColor);
          else
            v17 = iColor;
          *(_DWORD *)a2 = v17;
          a2 = prunPumpDDA(a1, a2);
        }
        vAdvXDDA(a1);
        v10 += 3;
        ++v15;
        --v16;
      }
      while ( v16 );
    }
  }
  else if ( pxlo )
  {
    if ( a6 != a7 )
    {
      v12 = (unsigned int)(a7 - a6);
      do
      {
        LOWORD(iColor) = *(_WORD *)v10;
        BYTE2(iColor) = v10[2];
        *(_DWORD *)a2 = XLATEOBJ_iXlate(pxlo, iColor);
        a2 = prunPumpDDA(a1, a2);
        vAdvXDDA(a1);
        v10 += 3;
        --v12;
      }
      while ( v12 );
    }
  }
  else if ( a6 != a7 )
  {
    v11 = (unsigned int)(a7 - a6);
    do
    {
      LOWORD(iColor) = *(_WORD *)v10;
      BYTE2(iColor) = v10[2];
      *(_DWORD *)a2 = iColor;
      a2 = prunPumpDDA(a1, a2);
      vAdvXDDA(a1);
      v10 += 3;
      --v11;
    }
    while ( v11 );
  }
  return a2;
}
