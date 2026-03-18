/*
 * XREFs of HUBDSM_ValidatingBOSDescriptor @ 0x1C001CAA0
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_ValidateAndCacheBOSDescriptor @ 0x1C0024260 (HUBDTX_ValidateAndCacheBOSDescriptor.c)
 */

__int64 __fastcall HUBDSM_ValidatingBOSDescriptor(__int64 a1)
{
  return HUBDTX_ValidateAndCacheBOSDescriptor(*(_QWORD *)(a1 + 960));
}
