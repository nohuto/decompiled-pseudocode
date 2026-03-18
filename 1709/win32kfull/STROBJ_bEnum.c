/*
 * XREFs of STROBJ_bEnum @ 0x1C000DCD0
 * Callers:
 *     ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C000D300 (-bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 *     ?STROBJ_bEnumCheckBounds@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@PEAU_RECTL@@@Z @ 0x1C000DB00 (-STROBJ_bEnumCheckBounds@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@PEAU_RECTL@@@Z.c)
 *     EngTextOut @ 0x1C0011110 (EngTextOut.c)
 *     vStringBitmapTextOut @ 0x1C0144D08 (vStringBitmapTextOut.c)
 *     ?NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z @ 0x1C028CC4C (-NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z.c)
 *     ?bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C0296678 (-bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 * Callees:
 *     ?STROBJ_bEnumLinked@@YAHPEAVESTROBJ@@PEAKPEAPEAU_GLYPHPOS@@@Z @ 0x1C000D89C (-STROBJ_bEnumLinked@@YAHPEAVESTROBJ@@PEAKPEAPEAU_GLYPHPOS@@@Z.c)
 *     ?cGetGlyphDataCache@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z @ 0x1C0034418 (-cGetGlyphDataCache@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z.c)
 *     vGetPosInfo @ 0x1C0297820 (vGetPosInfo.c)
 *     ?bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z @ 0x1C02AD8FC (-bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z.c)
 */

BOOL __stdcall STROBJ_bEnum(STROBJ *pstro, ULONG *pc, PGLYPHPOS *ppgpos)
{
  LONG top; // eax
  __int64 cGlyphs; // rax
  unsigned int v8; // edx
  BOOL v9; // edi
  struct _GLYPHPOS *v10; // rbp
  RFONTOBJ *v11; // rcx
  __int64 v12; // r11
  __int64 v13; // rdx

  top = pstro[1].rclBkGround.top;
  if ( (top & 0x1400) != 0 )
    return STROBJ_bEnumLinked((struct ESTROBJ *)pstro, pc, ppgpos);
  if ( (top & 2) != 0 )
  {
    *pc = pstro->cGlyphs;
    *ppgpos = *(PGLYPHPOS *)&pstro[1].rclBkGround.bottom;
    return 0;
  }
  cGlyphs = pstro[1].cGlyphs;
  v8 = pstro->cGlyphs - cGlyphs;
  if ( pstro->cGlyphs == (_DWORD)cGlyphs
    || (v9 = 0,
        v10 = (struct _GLYPHPOS *)(*(_QWORD *)&pstro[1].rclBkGround.bottom + 24 * cGlyphs),
        (v11 = *(RFONTOBJ **)&pstro[1].ulCharInc) == 0LL)
    || ((*(_DWORD *)(*(_QWORD *)v11 + 68LL) & 1) != 0
      ? (v12 = (unsigned int)RFONTOBJ::bInsertGlyphbitsLookaside(v11, v10, *(_DWORD *)(*(_QWORD *)v11 + 72LL)) != 0)
      : (LODWORD(v12) = RFONTOBJ::cGetGlyphDataCache(v11, v8, v10)),
        !(_DWORD)v12) )
  {
    *pc = 0;
    return 0;
  }
  v13 = pstro[1].cGlyphs;
  if ( (_DWORD)v13 )
  {
    if ( pstro->ulCharInc )
      vGetPosInfo(pstro, v13, &v10->ptl);
  }
  pstro[1].cGlyphs += v12;
  *pc = v12;
  *ppgpos = v10;
  LOBYTE(v9) = pstro[1].cGlyphs < pstro->cGlyphs;
  return v9;
}
