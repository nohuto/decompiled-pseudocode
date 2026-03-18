/*
 * XREFs of ?vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z @ 0x1C0264508
 * Callers:
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C025D114 (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C025F3C8 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpComputeClipEffective@@YAXPEAVSPRITE@@AEAVRGNOBJ@@@Z @ 0x1C026040C (-vSpComputeClipEffective@@YAXPEAVSPRITE@@AEAVRGNOBJ@@@Z.c)
 * Callees:
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C00182EC (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 */

void __fastcall vSpUpdatePerPixelAlphaFromColorKey(
        struct _SURFOBJ *a1,
        int a2,
        struct _RECTL *a3,
        unsigned __int8 **a4)
{
  unsigned __int8 *v5; // r10
  int v6; // r13d
  LONG cy; // edi
  LONG cx; // r14d
  int v9; // r12d
  int v10; // r15d
  LONG lDelta; // r11d
  int v12; // r14d
  int v13; // edi
  int v14; // r8d
  signed int v15; // ecx
  char *v16; // r8
  int v17; // r11d
  int v18; // r9d
  char *v19; // rdx
  int v20; // eax
  __int64 v21; // [rsp+28h] [rbp-70h] BYREF
  LONG v22; // [rsp+30h] [rbp-68h]
  LONG v23; // [rsp+34h] [rbp-64h]
  int v24; // [rsp+38h] [rbp-60h]
  LONG v25; // [rsp+3Ch] [rbp-5Ch]
  int v26; // [rsp+40h] [rbp-58h]
  unsigned __int8 *v27; // [rsp+48h] [rbp-50h]
  unsigned __int8 *v28; // [rsp+50h] [rbp-48h]
  char *v29; // [rsp+58h] [rbp-40h]
  char *v30; // [rsp+60h] [rbp-38h]
  LONG v31; // [rsp+A0h] [rbp+8h]

  v5 = 0LL;
  v27 = 0LL;
  if ( a1->iBitmapFormat == 6 && !a1->iType )
  {
    v6 = a2 & 0xFF00 | ((unsigned __int8)a2 << 16) | BYTE2(a2);
    v24 = v6;
    cy = a1->sizlBitmap.cy;
    cx = a1->sizlBitmap.cx;
    v9 = 0;
    v21 = 0LL;
    v10 = 0;
    v22 = cx;
    v23 = cy;
    if ( a3 )
    {
      ERECTL::operator*=(&v21, a3);
      cy = v23;
      cx = v22;
      v10 = HIDWORD(v21);
      v9 = v21;
    }
    lDelta = a1->lDelta;
    v31 = lDelta;
    v25 = lDelta;
    v12 = cx - v9;
    v26 = v12;
    v13 = cy - v10;
    if ( a4 )
    {
      v14 = abs32(v12);
      v15 = abs32(v13);
      if ( v14 )
      {
        if ( v15 && v14 < 0x7FFFFFFF / v15 )
        {
          v5 = (unsigned __int8 *)PALLOCMEM2((unsigned int)(v14 * v15), 1886221383LL, 0);
          v27 = v5;
          *a4 = v5;
          lDelta = v31;
        }
      }
    }
    v28 = v5;
    v16 = (char *)a1->pvScan0 + 4 * v9 + lDelta * v10;
    v17 = 0;
    while ( 1 )
    {
      v30 = v16;
      if ( !v13 )
        break;
      v18 = v12;
      v19 = v16;
      while ( 1 )
      {
        v29 = v19;
        if ( !v18 )
          break;
        if ( v5 )
          v5[v17] = v19[3];
        if ( *(_DWORD *)v19 == v6 )
          *(_DWORD *)v19 = 0;
        else
          v19[3] = -1;
        --v18;
        v19 += 4;
        v20 = v17 + 1;
        if ( !v5 )
          v20 = v17;
        v17 = v20;
      }
      --v13;
      v16 += v31;
    }
  }
}
