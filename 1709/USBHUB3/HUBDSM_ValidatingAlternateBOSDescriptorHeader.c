/*
 * XREFs of HUBDSM_ValidatingAlternateBOSDescriptorHeader @ 0x1C001C130
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_ValidateAndCacheBOSDescriptorHeader @ 0x1C0023B7C (HUBDTX_ValidateAndCacheBOSDescriptorHeader.c)
 */

__int64 __fastcall HUBDSM_ValidatingAlternateBOSDescriptorHeader(__int64 a1)
{
  return HUBDTX_ValidateAndCacheBOSDescriptorHeader(*(_QWORD *)(a1 + 960));
}
