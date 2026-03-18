/*
 * XREFs of STROBJ_dwGetCodePage @ 0x1C026C9C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

DWORD __stdcall STROBJ_dwGetCodePage(STROBJ *pstro)
{
  return HIDWORD(pstro[2].pgp);
}
