/*
 * XREFs of PopSqmFanEnumeration @ 0x140626EDC
 * Callers:
 *     PopFanAdd @ 0x140626E70 (PopFanAdd.c)
 *     PopFanReportBootStartDevices @ 0x1408A5DDC (PopFanReportBootStartDevices.c)
 * Callees:
 *     _TlgWrite @ 0x14000769C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x14006F0F0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

void PopSqmFanEnumeration()
{
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  if ( pCallbackContext.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&pCallbackContext, 0x400000000000uLL) )
      TlgWrite(&pCallbackContext, &unk_14030CCDA, 0LL, 0LL, 2u, &pData);
  }
}
