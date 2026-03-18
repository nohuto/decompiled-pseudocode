/*
 * XREFs of PopSqmFanEnumeration @ 0x1406D6880
 * Callers:
 *     PopFanAdd @ 0x1406CF610 (PopFanAdd.c)
 *     PopFanReportBootStartDevices @ 0x140825F90 (PopFanReportBootStartDevices.c)
 * Callees:
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void PopSqmFanEnumeration()
{
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  if ( hProvider.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&hProvider, 0x400000000000uLL) )
      TlgWrite(&hProvider, &unk_1402ADD87, 0LL, 0LL, 2u, &pData);
  }
}
