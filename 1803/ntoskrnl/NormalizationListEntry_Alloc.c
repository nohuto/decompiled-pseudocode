/*
 * XREFs of NormalizationListEntry_Alloc @ 0x140294078
 * Callers:
 *     RtlpGetNormalization @ 0x14078B538 (RtlpGetNormalization.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

PVOID NormalizationListEntry_Alloc()
{
  return ExAllocatePoolWithTag(PagedPool, 0x90uLL, 0x456C6F4Eu);
}
