/*
 * XREFs of MiIsPoolHeader @ 0x1400276F0
 * Callers:
 *     MiReplacePageOfProtoPool @ 0x140027284 (MiReplacePageOfProtoPool.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPoolHeader(_BYTE *a1)
{
  return !*a1 && !a1[1] && a1[2];
}
