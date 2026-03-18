/*
 * XREFs of ApiSetEditionIsHotKey @ 0x1C013B180
 * Callers:
 *     ?LowLevelHexNumpad@@YAXGEHG@Z @ 0x1C012F19C (-LowLevelHexNumpad@@YAXGEHG@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionIsHotKey(unsigned int a1, unsigned int a2)
{
  unsigned int v2; // edi
  unsigned int IsHotKey; // ebx
  int v5; // edx

  v2 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      14,
      286,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  IsHotKey = 0;
  if ( (int)IsEditionIsHotKeySupported() >= 0 )
    IsHotKey = EditionIsHotKey(a1, v2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v5) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      14,
      287,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  return IsHotKey;
}
