/*
 * XREFs of UserActivateMITInputProcessingHelper @ 0x1C012D860
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     ?InitializeInputSensors@@YAJXZ @ 0x1C012D6C0 (-InitializeInputSensors@@YAJXZ.c)
 */

__int64 __fastcall UserActivateMITInputProcessingHelper(int a1)
{
  unsigned int v3; // ebx

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      1u,
      0x17u,
      (__int64)&WPP_e624157c96f9336a4a666bf5b4df8523_Traceguids);
  if ( a1 )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(gBaseLog, 5u, 2u, 0x18u, (__int64)&WPP_e624157c96f9336a4a666bf5b4df8523_Traceguids);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        1u,
        0x19u,
        (__int64)&WPP_e624157c96f9336a4a666bf5b4df8523_Traceguids);
    return 0LL;
  }
  else
  {
    v3 = InitializeInputSensors();
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        1u,
        0x1Au,
        (__int64)&WPP_e624157c96f9336a4a666bf5b4df8523_Traceguids);
    return v3;
  }
}
