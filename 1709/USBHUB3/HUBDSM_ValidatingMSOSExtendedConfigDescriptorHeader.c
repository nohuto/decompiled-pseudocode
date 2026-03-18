/*
 * XREFs of HUBDSM_ValidatingMSOSExtendedConfigDescriptorHeader @ 0x1C001BA20
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_ValidateAndCacheMSOSExtendedConfigDescriptorHeader @ 0x1C0024F84 (HUBDTX_ValidateAndCacheMSOSExtendedConfigDescriptorHeader.c)
 */

__int64 __fastcall HUBDSM_ValidatingMSOSExtendedConfigDescriptorHeader(__int64 a1)
{
  return HUBDTX_ValidateAndCacheMSOSExtendedConfigDescriptorHeader(*(_QWORD *)(a1 + 960));
}
