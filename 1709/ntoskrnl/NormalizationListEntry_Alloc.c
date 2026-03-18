/*
 * XREFs of NormalizationListEntry_Alloc @ 0x14025BFCC
 * Callers:
 *     RtlpGetNormalization @ 0x140727948 (RtlpGetNormalization.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

PVOID NormalizationListEntry_Alloc()
{
  return ExAllocatePoolWithTag(PagedPool, 0x90uLL, 0x456C6F4Eu);
}
