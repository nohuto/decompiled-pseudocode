/*
 * XREFs of ApiSetEditionDoHotKeys @ 0x1C004DB9C
 * Callers:
 *     xxxKeyEvent @ 0x1C004D5A0 (xxxKeyEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionDoHotKeys(char a1, char a2, unsigned int a3, unsigned int a4, __int64 a5, __int64 a6)
{
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      14,
      272,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  v10 = 0;
  if ( (int)IsEditionDoHotKeysSupported() >= 0 )
  {
    LOBYTE(v11) = a2;
    LOBYTE(v12) = a1;
    v10 = EditionDoHotKeys(v12, v11, a3, a4, a5, a6);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      14,
      273,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  return v10;
}
