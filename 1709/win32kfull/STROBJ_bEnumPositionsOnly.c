/*
 * XREFs of STROBJ_bEnumPositionsOnly @ 0x1C0297710
 * Callers:
 *     ?NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z @ 0x1C028CC4C (-NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z.c)
 * Callees:
 *     ?STROBJ_bEnumPositionsOnlyLinked@@YAHPEAVESTROBJ@@PEAKPEAPEAU_GLYPHPOS@@@Z @ 0x1C0295E8C (-STROBJ_bEnumPositionsOnlyLinked@@YAHPEAVESTROBJ@@PEAKPEAPEAU_GLYPHPOS@@@Z.c)
 */

BOOL __stdcall STROBJ_bEnumPositionsOnly(STROBJ *pstro, ULONG *pc, PGLYPHPOS *ppgpos)
{
  if ( (pstro[1].rclBkGround.top & 0x1400) != 0 )
    return STROBJ_bEnumPositionsOnlyLinked((struct ESTROBJ *)pstro, pc, ppgpos);
  *pc = pstro->cGlyphs;
  *ppgpos = *(PGLYPHPOS *)&pstro[1].rclBkGround.bottom;
  return 0;
}
