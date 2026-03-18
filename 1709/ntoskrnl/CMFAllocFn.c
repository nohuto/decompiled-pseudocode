/*
 * XREFs of CMFAllocFn @ 0x140760F28
 * Callers:
 *     XpressDecodeCreate @ 0x140295BA8 (XpressDecodeCreate.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall CMFAllocFn(__int64 a1, int a2)
{
  return ExAllocatePoolWithTag(PagedPool, a2, 0x636D6650u);
}
