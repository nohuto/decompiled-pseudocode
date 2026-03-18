/*
 * XREFs of PopSqmFanEnumeration @ 0x14070CAE8
 * Callers:
 *     PopFanAdd @ 0x140707220 (PopFanAdd.c)
 *     PopFanReportBootStartDevices @ 0x14085768C (PopFanReportBootStartDevices.c)
 * Callees:
 *     _TlgWrite @ 0x1400AE914 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1400BA32C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

void PopSqmFanEnumeration()
{
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  if ( pCallbackContext.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&pCallbackContext, 0x400000000000uLL) )
      TlgWrite(&pCallbackContext, &unk_1402D2E01, 0LL, 0LL, 2u, &pData);
  }
}
