/*
 * XREFs of HUBDSM_ValidatingLanguageIdStringDescriptor @ 0x1C001AFF0
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_ValidateAndCacheLanguageIdStringDescriptor @ 0x1C0024A88 (HUBDTX_ValidateAndCacheLanguageIdStringDescriptor.c)
 */

__int64 __fastcall HUBDSM_ValidatingLanguageIdStringDescriptor(__int64 a1)
{
  return HUBDTX_ValidateAndCacheLanguageIdStringDescriptor(*(_QWORD *)(a1 + 960));
}
