/*
 * XREFs of NormalizationListEntry_Alloc @ 0x140244C34
 * Callers:
 *     RtlpGetNormalization @ 0x1406EFEA8 (RtlpGetNormalization.c)
 * Callees:
 *     <none>
 */

PVOID NormalizationListEntry_Alloc()
{
  return ExAllocatePoolWithTag(PagedPool, 0x90uLL, 0x456C6F4Eu);
}
