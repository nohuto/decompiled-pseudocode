/*
 * XREFs of NtGdiSTROBJ_bEnumPositionsOnly @ 0x1C0293AC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiSTROBJ_bEnumPositionsOnly(struct _STROBJ *a1, unsigned int *a2, struct _GLYPHPOS **a3)
{
  return NtGdiSTROBJ_bEnumInternal(a1, a2, a3, 1);
}
