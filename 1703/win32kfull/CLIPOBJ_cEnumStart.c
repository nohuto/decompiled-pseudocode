/*
 * XREFs of CLIPOBJ_cEnumStart @ 0x1C0107FC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
ULONG __stdcall CLIPOBJ_cEnumStart(CLIPOBJ *pco, BOOL bAll, ULONG iType, ULONG iDirection, ULONG cLimit)
{
  return XCLIPOBJ::cEnumStart((XCLIPOBJ *)pco, bAll, iType, iDirection, cLimit);
}
