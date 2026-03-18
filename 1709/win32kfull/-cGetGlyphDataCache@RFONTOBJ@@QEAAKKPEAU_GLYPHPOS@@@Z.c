/*
 * XREFs of ?cGetGlyphDataCache@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z @ 0x1C0034418
 * Callers:
 *     ?STROBJ_bEnumLinked@@YAHPEAVESTROBJ@@PEAKPEAPEAU_GLYPHPOS@@@Z @ 0x1C000D89C (-STROBJ_bEnumLinked@@YAHPEAVESTROBJ@@PEAKPEAPEAU_GLYPHPOS@@@Z.c)
 *     STROBJ_bEnum @ 0x1C000DCD0 (STROBJ_bEnum.c)
 *     ?cGetGlyphData@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z @ 0x1C01A0C58 (-cGetGlyphData@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z.c)
 *     ?bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C0296678 (-bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 * Callees:
 *     ?bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1C0032534 (-bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 */

__int64 __fastcall RFONTOBJ::cGetGlyphDataCache(RFONTOBJ *this, unsigned int a2, struct _GLYPHPOS *a3)
{
  struct _GLYPHPOS *v5; // rbx
  struct _GLYPHPOS *v6; // rsi
  struct _GLYPHDATA *pgdf; // rdx

  if ( !*(_DWORD *)(*(_QWORD *)this + 72LL) )
    return a2;
  v5 = a3;
  v6 = &a3[a2];
  if ( a3 < v6 )
  {
    do
    {
      pgdf = (struct _GLYPHDATA *)v5->pgdf;
      if ( !pgdf->gdf.pgb && !(unsigned int)RFONTOBJ::bInsertGlyphbits(this, pgdf) )
        break;
      ++v5;
    }
    while ( v5 < v6 );
  }
  return v5 - a3;
}
