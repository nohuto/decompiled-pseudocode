/*
 * XREFs of FONTOBJ_cGetGlyphs @ 0x1C026FCF0
 * Callers:
 *     NtGdiFONTOBJ_cGetGlyphs @ 0x1C028F3B0 (NtGdiFONTOBJ_cGetGlyphs.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0035428 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z @ 0x1C02AD8FC (-bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z.c)
 */

ULONG __stdcall FONTOBJ_cGetGlyphs(FONTOBJ *pfo, ULONG iMode, ULONG cGlyph, HGLYPH *phg, PVOID *ppvGlyph)
{
  HGLYPH v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  ULONG v8; // ebx
  struct _GLYPHPOS v10; // [rsp+20h] [rbp-28h] BYREF
  FONTOBJ *v11; // [rsp+68h] [rbp+20h] BYREF

  if ( !phg )
    return 0;
  v5 = *phg;
  v11 = pfo;
  v10.hg = v5;
  if ( (unsigned int)RFONTOBJ::bInsertGlyphbitsLookaside((RFONTOBJ *)&v11, &v10, iMode) )
  {
    v8 = 1;
    *ppvGlyph = v10.pgdf;
  }
  else
  {
    v8 = 0;
  }
  v11 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v11, v6, v7);
  return v8;
}
