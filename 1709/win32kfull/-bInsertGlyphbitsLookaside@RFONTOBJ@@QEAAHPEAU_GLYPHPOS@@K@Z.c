/*
 * XREFs of ?bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z @ 0x1C02AD8FC
 * Callers:
 *     ?STROBJ_bEnumLinked@@YAHPEAVESTROBJ@@PEAKPEAPEAU_GLYPHPOS@@@Z @ 0x1C000D89C (-STROBJ_bEnumLinked@@YAHPEAVESTROBJ@@PEAKPEAPEAU_GLYPHPOS@@@Z.c)
 *     STROBJ_bEnum @ 0x1C000DCD0 (STROBJ_bEnum.c)
 *     ?cGetGlyphData@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z @ 0x1C01A0C58 (-cGetGlyphData@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z.c)
 *     FONTOBJ_cGetGlyphs @ 0x1C026FCF0 (FONTOBJ_cGetGlyphs.c)
 *     ?bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C0296678 (-bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 * Callees:
 *     ?ulCallAndConvertFontOutput@@YAKPEAVRFONT@@PEAU_FONTOBJ@@KPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C00393D4 (-ulCallAndConvertFontOutput@@YAKPEAVRFONT@@PEAU_FONTOBJ@@KPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     ?bInsertPathLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@@Z @ 0x1C02ADB08 (-bInsertPathLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@@Z.c)
 */

__int64 __fastcall RFONTOBJ::bInsertGlyphbitsLookaside(RFONTOBJ *this, struct _GLYPHPOS *a2, int a3)
{
  __int64 result; // rax
  __int64 v6; // rax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rbx

  if ( a3 == 2 )
    return RFONTOBJ::bInsertPathLookaside(this, a2);
  v6 = *(_QWORD *)this;
  v7 = *(_DWORD *)(*(_QWORD *)this + 352LL) + 64;
  if ( v7 < 0x50 )
    return 0LL;
  if ( *(_QWORD *)(v6 + 640) < (unsigned __int64)v7 )
  {
    v8 = *(_QWORD *)(v6 + 632);
    if ( v8 )
      Win32FreePool(v8, a2);
    *(_QWORD *)(*(_QWORD *)this + 632LL) = PALLOCMEM2(v7, 1667326791LL, 1);
    v9 = *(_QWORD *)this;
    if ( !*(_QWORD *)(*(_QWORD *)this + 632LL) )
    {
      *(_QWORD *)(v9 + 640) = 0LL;
      return 0LL;
    }
    *(_QWORD *)(v9 + 640) = v7;
  }
  v10 = *(_QWORD *)(*(_QWORD *)this + 632LL);
  if ( (unsigned int)ulCallAndConvertFontOutput(
                       *(struct RFONT **)this,
                       *(struct _FONTOBJ **)this,
                       a2->hg,
                       (struct _GLYPHDATA *)v10,
                       (struct _GLYPHBITS *)(v10 + 64),
                       *(_DWORD *)(*(_QWORD *)this + 352LL)) == -1 )
    return 0LL;
  a2->pgdf = (GLYPHDEF *)v10;
  result = 1LL;
  *(_QWORD *)v10 = v10 + 64;
  return result;
}
