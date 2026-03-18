/*
 * XREFs of wcstoul @ 0x14016C130
 * Callers:
 *     PnpStringToDwordValue @ 0x1401505CC (PnpStringToDwordValue.c)
 *     LocalGetAclForString @ 0x14057F594 (LocalGetAclForString.c)
 *     BiOpenSystemStore @ 0x14058A528 (BiOpenSystemStore.c)
 *     BiCleanupLoadedStores @ 0x14058A710 (BiCleanupLoadedStores.c)
 *     _CmCreateOrdinalInstanceKey @ 0x14059B8A4 (_CmCreateOrdinalInstanceKey.c)
 *     LocalpConvertStringSidToSid @ 0x1405C3DFC (LocalpConvertStringSidToSid.c)
 *     KsepMatchInitBiosInfo @ 0x1407F7CD4 (KsepMatchInitBiosInfo.c)
 * Callees:
 *     wcstoxlX @ 0x14016BEB4 (wcstoxlX.c)
 */

unsigned int __cdecl wcstoul(const wchar_t *Str, wchar_t **EndPtr, int Radix)
{
  return wcstoxlX((__int64)&_initiallocalestructinfo, (wint_t *)Str, EndPtr, Radix, 1, 0);
}
