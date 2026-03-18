/*
 * XREFs of ApiSetEdtionGetInputDesktopId @ 0x1C013CBD4
 * Callers:
 *     ?IsCurrentInputDesktopInterceptable@MouseInterceptState@CMouseProcessor@@AEBA_NXZ @ 0x1C0084494 (-IsCurrentInputDesktopInterceptable@MouseInterceptState@CMouseProcessor@@AEBA_NXZ.c)
 *     EnableMouseIntercept @ 0x1C012E770 (EnableMouseIntercept.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 */

__int64 ApiSetEdtionGetInputDesktopId()
{
  __int64 InputDesktopId; // rbx

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      14,
      182,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  InputDesktopId = 0LL;
  if ( (int)IsEditionGetInputDesktopIdSupported() >= 0 )
    InputDesktopId = EditionGetInputDesktopId();
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      14,
      183,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  return InputDesktopId;
}
