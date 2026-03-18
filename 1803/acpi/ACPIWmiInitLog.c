/*
 * XREFs of ACPIWmiInitLog @ 0x1C009B63C
 * Callers:
 *     ACPIDispatchAddDevice @ 0x1C0099120 (ACPIDispatchAddDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0009204 (WPP_RECORDER_SF_.c)
 */

NTSTATUS __fastcall ACPIWmiInitLog(struct _DEVICE_OBJECT *a1)
{
  NTSTATUS result; // eax
  int v2; // edx

  result = IoWMIRegistrationControl(a1, 1u);
  if ( result < 0 )
  {
    LOBYTE(v2) = 2;
    return WPP_RECORDER_SF_(
             WPP_GLOBAL_Control->DeviceExtension,
             v2,
             1,
             10,
             (__int64)&WPP_2bd5b8f060d2313f062dd09aad0687a8_Traceguids);
  }
  return result;
}
