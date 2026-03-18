/*
 * XREFs of UserDeactivateMITInputProcessingHelper @ 0x1C012E3F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     ?UninitializeInputSensors@@YAXXZ @ 0x1C012E25C (-UninitializeInputSensors@@YAXXZ.c)
 */

void __fastcall UserDeactivateMITInputProcessingHelper(int a1)
{
  PDEVICE_OBJECT v2; // rcx
  PDEVICE_OBJECT v3; // rcx
  int v4; // r9d

  v2 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      1,
      27,
      (__int64)&WPP_d4fd6595d53e3e8daa2bb4a528c81212_Traceguids);
    v2 = WPP_GLOBAL_Control;
  }
  if ( !a1 )
  {
    UninitializeInputSensors();
    v3 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return;
    v4 = 30;
    goto LABEL_9;
  }
  if ( LOWORD(v2->DeviceType) )
  {
    WPP_RECORDER_SF_(gBaseLog, 5, 2, 28, (__int64)&WPP_d4fd6595d53e3e8daa2bb4a528c81212_Traceguids);
    v3 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v4 = 29;
LABEL_9:
      WPP_RECORDER_SF_(v3->DeviceExtension, 5, 1, v4, (__int64)&WPP_d4fd6595d53e3e8daa2bb4a528c81212_Traceguids);
    }
  }
}
