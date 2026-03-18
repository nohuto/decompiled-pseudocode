/*
 * XREFs of ?bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C0296678
 * Callers:
 *     ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C000D300 (-bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C002EA10 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     ?bLinkedTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@AEAVXDCOBJ@@@Z @ 0x1C029645C (-bLinkedTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@AEAVXDCOBJ@@@Z.c)
 * Callees:
 *     STROBJ_bEnum @ 0x1C000DCD0 (STROBJ_bEnum.c)
 *     ?cGetGlyphDataCache@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z @ 0x1C0034418 (-cGetGlyphDataCache@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z.c)
 *     ?bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z @ 0x1C02AD8FC (-bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z.c)
 */

__int64 __fastcall ESTROBJ::bTextToPathWorkhorse(STROBJ *pstro, struct EPATHOBJ *a2)
{
  unsigned int v2; // ebx
  BOOL v4; // eax
  unsigned int GlyphDataCache; // edi
  PGLYPHPOS v6; // rsi
  ULONG ulCharInc; // r12d
  FIX y; // ecx
  int v9; // r12d
  ULONG v10; // r14d
  RFONTOBJ *v11; // rcx
  unsigned int v12; // r13d
  FIX x; // ecx
  FIX v14; // edx
  bool v15; // zf
  struct _POINTFIX v17; // [rsp+20h] [rbp-18h] BYREF
  PGLYPHPOS ppgpos; // [rsp+28h] [rbp-10h] BYREF
  ULONG v19; // [rsp+80h] [rbp+48h]
  ULONG pc; // [rsp+90h] [rbp+58h] BYREF
  BOOL v22; // [rsp+98h] [rbp+60h]

  v2 = 0;
  ppgpos = 0LL;
  *(_QWORD *)&pstro[1].cGlyphs = 0LL;
  do
  {
    v4 = STROBJ_bEnum(pstro, &pc, &ppgpos);
    GlyphDataCache = pc;
    v22 = v4;
    if ( !pc )
      break;
    v6 = ppgpos;
    if ( !ppgpos )
      break;
    ulCharInc = pstro->ulCharInc;
    if ( ulCharInc )
    {
      v15 = (pstro[1].rclBkGround.top & 0x100) == 0;
      v17.x = ppgpos->ptl.x;
      y = ppgpos->ptl.y;
      v17.y = y;
      if ( v15 )
      {
        v17.x *= 16;
        v17.y = 16 * y;
      }
      v9 = 16 * ulCharInc;
      v17.x -= v9;
    }
    else
    {
      v9 = 0;
    }
    v10 = pc;
    v19 = pc;
    do
    {
      if ( (pstro[1].rclBkGround.top & 2) == 0 )
      {
        v11 = *(RFONTOBJ **)&pstro[1].ulCharInc;
        if ( (*(_DWORD *)(*(_QWORD *)v11 + 68LL) & 1) != 0 )
          GlyphDataCache = v10
                        && (unsigned int)RFONTOBJ::bInsertGlyphbitsLookaside(
                                           v11,
                                           v6,
                                           *(_DWORD *)(*(_QWORD *)v11 + 72LL)) != 0;
        else
          GlyphDataCache = RFONTOBJ::cGetGlyphDataCache(v11, v10, v6);
        if ( !GlyphDataCache )
          break;
      }
      v12 = 0;
      if ( GlyphDataCache )
      {
        do
        {
          if ( v9 )
          {
            v17.x += v9;
          }
          else
          {
            v15 = (pstro[1].rclBkGround.top & 0x100) == 0;
            x = v6->ptl.x;
            v17.x = x;
            v14 = v6->ptl.y;
            v17.y = v14;
            if ( v15 )
            {
              v17.y = 16 * v14;
              v17.x = 16 * x;
            }
          }
          if ( !EPATHOBJ::bAppend(a2, (struct EPATHOBJ *)v6->pgdf->pgb, &v17) )
            break;
          ++v12;
          ++v6;
        }
        while ( v12 < GlyphDataCache );
        v10 = v19;
        ppgpos = v6;
        if ( v12 < GlyphDataCache )
          break;
      }
      v10 -= GlyphDataCache;
      v19 = v10;
    }
    while ( v10 );
    v15 = v10 == 0;
    if ( v10 )
      goto LABEL_29;
  }
  while ( v22 );
  v15 = 1;
LABEL_29:
  LOBYTE(v2) = v15;
  return v2;
}
