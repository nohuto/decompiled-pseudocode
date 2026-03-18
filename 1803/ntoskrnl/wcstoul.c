/*
 * XREFs of wcstoul @ 0x14018ABB0
 * Callers:
 *     PnpStringToDwordValue @ 0x140147B54 (PnpStringToDwordValue.c)
 *     _CmCreateOrdinalInstanceKey @ 0x1405D3828 (_CmCreateOrdinalInstanceKey.c)
 *     LocalGetAclForString @ 0x140601100 (LocalGetAclForString.c)
 *     BiCleanupLoadedStores @ 0x140606C04 (BiCleanupLoadedStores.c)
 *     BiOpenSystemStore @ 0x140608164 (BiOpenSystemStore.c)
 *     _CmSplitDevicePanelId @ 0x1406371E4 (_CmSplitDevicePanelId.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x140638910 (_CmDevicePanelEnumSubkeyCallback.c)
 *     LocalpConvertStringSidToSid @ 0x14064184C (LocalpConvertStringSidToSid.c)
 *     KsepMatchInitBiosInfo @ 0x1408A5780 (KsepMatchInitBiosInfo.c)
 * Callees:
 *     wcstoxlX @ 0x14018A93C (wcstoxlX.c)
 */

unsigned int __cdecl wcstoul(const wchar_t *Str, wchar_t **EndPtr, int Radix)
{
  return wcstoxlX((__int64)&_initiallocalestructinfo, (wint_t *)Str, EndPtr, Radix, 1, 0);
}
