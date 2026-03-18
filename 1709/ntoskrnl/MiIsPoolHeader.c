/*
 * XREFs of MiIsPoolHeader @ 0x14011DF0C
 * Callers:
 *     MiReplacePageOfProtoPool @ 0x14011DA1C (MiReplacePageOfProtoPool.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPoolHeader(_BYTE *a1)
{
  return !*a1 && !a1[1] && a1[2];
}
