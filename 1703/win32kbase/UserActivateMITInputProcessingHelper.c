/*
 * XREFs of UserActivateMITInputProcessingHelper @ 0x1C012E300
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     ?InitializeInputSensors@@YAJXZ @ 0x1C012E15C (-InitializeInputSensors@@YAJXZ.c)
 */

__int64 __fastcall UserActivateMITInputProcessingHelper(int a1)
{
  PDEVICE_OBJECT v2; // rcx
  unsigned int v4; // ebx

  v2 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      1,
      23,
      (__int64)&WPP_d4fd6595d53e3e8daa2bb4a528c81212_Traceguids);
    v2 = WPP_GLOBAL_Control;
  }
  if ( a1 )
  {
    if ( LOWORD(v2->DeviceType) )
    {
      WPP_RECORDER_SF_(gBaseLog, 5, 2, 24, (__int64)&WPP_d4fd6595d53e3e8daa2bb4a528c81212_Traceguids);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          5,
          1,
          25,
          (__int64)&WPP_d4fd6595d53e3e8daa2bb4a528c81212_Traceguids);
    }
    return 0LL;
  }
  else
  {
    v4 = InitializeInputSensors();
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        5,
        1,
        26,
        (__int64)&WPP_d4fd6595d53e3e8daa2bb4a528c81212_Traceguids);
    return v4;
  }
}
