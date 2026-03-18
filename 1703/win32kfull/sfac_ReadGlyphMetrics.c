/*
 * XREFs of sfac_ReadGlyphMetrics @ 0x1C02CAD54
 * Callers:
 *     fs_FindBitMapSize @ 0x1C02BAEC8 (fs_FindBitMapSize.c)
 *     fsg_ExecuteGlyph @ 0x1C02C7254 (fsg_ExecuteGlyph.c)
 * Callees:
 *     sfac_ReadGlyphHorMetrics @ 0x1C02CAC54 (sfac_ReadGlyphHorMetrics.c)
 *     sfac_ReadGlyphVertMetrics @ 0x1C02CADA4 (sfac_ReadGlyphVertMetrics.c)
 */

__int64 __fastcall sfac_ReadGlyphMetrics(__int64 a1, unsigned __int16 a2, _WORD *a3, __int64 a4, _WORD *a5, __int64 a6)
{
  __int64 result; // rax

  result = sfac_ReadGlyphHorMetrics(a1, a2, a3, a5);
  if ( !(_DWORD)result )
    return sfac_ReadGlyphVertMetrics(a1, a2, a4, a6);
  return result;
}
