/*
 * XREFs of CMFAllocFn @ 0x1407C8170
 * Callers:
 *     XpressDecodeCreate @ 0x1402CB1E8 (XpressDecodeCreate.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall CMFAllocFn(__int64 a1, int a2)
{
  return ExAllocatePoolWithTag(PagedPool, a2, 0x636D6650u);
}
