/*
 * XREFs of CMFAllocFn @ 0x140721030
 * Callers:
 *     XpressDecodeCreate @ 0x14026B638 (XpressDecodeCreate.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall CMFAllocFn(__int64 a1, int a2)
{
  return ExAllocatePoolWithTag(PagedPool, a2, 0x636D6650u);
}
