/*
 * XREFs of CmpFileRead @ 0x1404D47B0
 * Callers:
 *     CmpSaveKeyByFileCopy @ 0x140673320 (CmpSaveKeyByFileCopy.c)
 * Callees:
 *     CmpFileReadEx @ 0x14007FD50 (CmpFileReadEx.c)
 *     CmpDoSystemCacheRead @ 0x14066A624 (CmpDoSystemCacheRead.c)
 */

bool __fastcall CmpFileRead(__int64 a1, unsigned int a2, ULONG *a3, char *a4, ULONG a5)
{
  int v5; // eax

  if ( !a2 && (*(_BYTE *)(a1 + 124) & 4) != 0 )
    v5 = CmpDoSystemCacheRead(a1, a3, a4, a5);
  else
    v5 = CmpFileReadEx(a1, a2, a3, a4, a5);
  return v5 >= 0;
}
