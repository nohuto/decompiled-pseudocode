/*
 * XREFs of ApiSetEditionGetAppImeCompatFlags @ 0x1C013AB88
 * Callers:
 *     NlsKbdSendIMEProc @ 0x1C012E098 (NlsKbdSendIMEProc.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionGetAppImeCompatFlags(__int64 a1)
{
  unsigned int AppImeCompatFlags; // ebx

  AppImeCompatFlags = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      14,
      252,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  if ( (int)IsEditionGetAppImeCompatFlagsSupported() >= 0 )
    AppImeCompatFlags = EditionGetAppImeCompatFlags(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      14,
      253,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  return AppImeCompatFlags;
}
