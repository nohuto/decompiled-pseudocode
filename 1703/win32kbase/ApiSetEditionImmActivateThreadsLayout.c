/*
 * XREFs of ApiSetEditionImmActivateThreadsLayout @ 0x1C013AF54
 * Callers:
 *     xxxInternalActivateKeyboardLayout @ 0x1C007A180 (xxxInternalActivateKeyboardLayout.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionImmActivateThreadsLayout(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      14,
      242,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  if ( (int)IsEditionImmActivateThreadsLayoutSupported() >= 0 )
    v4 = EditionImmActivateThreadsLayout(a1, 0LL, a3);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      14,
      243,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  return v4;
}
