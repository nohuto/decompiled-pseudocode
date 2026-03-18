/*
 * XREFs of NtGdiSTROBJ_bEnumPositionsOnly @ 0x1C0290200
 * Callers:
 *     <none>
 * Callees:
 *     ?NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z @ 0x1C028CC4C (-NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z.c)
 */

__int64 __fastcall NtGdiSTROBJ_bEnumPositionsOnly(struct _STROBJ *a1, unsigned int *a2, struct _GLYPHPOS **a3)
{
  return NtGdiSTROBJ_bEnumInternal(a1, a2, a3, 1LL);
}
