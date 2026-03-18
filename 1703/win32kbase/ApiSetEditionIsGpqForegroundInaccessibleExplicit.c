/*
 * XREFs of ApiSetEditionIsGpqForegroundInaccessibleExplicit @ 0x1C004E10C
 * Callers:
 *     xxxKeyEvent @ 0x1C004D5A0 (xxxKeyEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionIsGpqForegroundInaccessibleExplicit(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  __int64 v6; // rbp
  unsigned int IsGpqForegroundInaccessibleExplicit; // edi
  int v9; // edx

  v6 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      14,
      268,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  IsGpqForegroundInaccessibleExplicit = 0;
  if ( (int)IsEditionIsGpqForegroundInaccessibleExplicitSupported() >= 0 )
    IsGpqForegroundInaccessibleExplicit = EditionIsGpqForegroundInaccessibleExplicit(a1, v6, a3, a4);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v9) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v9,
      14,
      269,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  return IsGpqForegroundInaccessibleExplicit;
}
