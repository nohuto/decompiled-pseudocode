/*
 * XREFs of HUBDSM_ValidatingMSOSContainerIdHeaderDescriptor @ 0x1C001B780
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_ValidateAndCacheMSOSContainerIdDescriptorHeader @ 0x1C0024C4C (HUBDTX_ValidateAndCacheMSOSContainerIdDescriptorHeader.c)
 */

__int64 __fastcall HUBDSM_ValidatingMSOSContainerIdHeaderDescriptor(__int64 a1)
{
  return HUBDTX_ValidateAndCacheMSOSContainerIdDescriptorHeader(*(_QWORD *)(a1 + 960));
}
