/*
 * XREFs of wcstoul @ 0x140160A10
 * Callers:
 *     PnpStringToDwordValue @ 0x140132148 (PnpStringToDwordValue.c)
 *     LocalGetAclForString @ 0x14057BEE8 (LocalGetAclForString.c)
 *     BiCleanupLoadedStores @ 0x1405ADCF8 (BiCleanupLoadedStores.c)
 *     BiOpenSystemStore @ 0x1405AECB4 (BiOpenSystemStore.c)
 *     _CmCreateOrdinalInstanceKey @ 0x1405D6894 (_CmCreateOrdinalInstanceKey.c)
 *     LocalpConvertStringSidToSid @ 0x1405D73CC (LocalpConvertStringSidToSid.c)
 *     KsepMatchInitBiosInfo @ 0x14083F264 (KsepMatchInitBiosInfo.c)
 * Callees:
 *     wcstoxlX @ 0x140160794 (wcstoxlX.c)
 */

unsigned int __cdecl wcstoul(const wchar_t *Str, wchar_t **EndPtr, int Radix)
{
  return wcstoxlX((__int64)&_initiallocalestructinfo, (wint_t *)Str, EndPtr, Radix, 1, 0);
}
