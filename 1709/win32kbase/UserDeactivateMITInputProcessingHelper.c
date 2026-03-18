/*
 * XREFs of UserDeactivateMITInputProcessingHelper @ 0x1C012D960
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     ?UninitializeInputSensors@@YAXXZ @ 0x1C012D7C0 (-UninitializeInputSensors@@YAXXZ.c)
 */

void __fastcall UserDeactivateMITInputProcessingHelper(int a1)
{
  PDEVICE_OBJECT v2; // rcx
  unsigned __int16 v3; // r9

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      1u,
      0x1Bu,
      (__int64)&WPP_e624157c96f9336a4a666bf5b4df8523_Traceguids);
  if ( !a1 )
  {
    UninitializeInputSensors();
    v2 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return;
    v3 = 30;
    goto LABEL_10;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(gBaseLog, 5u, 2u, 0x1Cu, (__int64)&WPP_e624157c96f9336a4a666bf5b4df8523_Traceguids);
  v2 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v3 = 29;
LABEL_10:
    WPP_RECORDER_SF_(
      (__int64)v2->DeviceExtension,
      5u,
      1u,
      v3,
      (__int64)&WPP_e624157c96f9336a4a666bf5b4df8523_Traceguids);
  }
}
