/*
 * XREFs of UsbhHandleSuspend @ 0x1C0007790
 * Callers:
 *     UsbhHubDispatchPortEvent @ 0x1C000FF30 (UsbhHubDispatchPortEvent.c)
 * Callees:
 *     UsbhResumeSuspendedPort @ 0x1C000784C (UsbhResumeSuspendedPort.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D10C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0050FFC (WPP_RECORDER_SF_DDD.c)
 *     UsbhHandleOvercurrent @ 0x1C00515E0 (UsbhHandleOvercurrent.c)
 *     UsbhPortDisconnect @ 0x1C0051BD0 (UsbhPortDisconnect.c)
 */

__int64 __fastcall UsbhHandleSuspend(__int64 a1, unsigned int a2, unsigned __int8 a3, __int64 a4, __int64 a5)
{
  unsigned int v9; // edi
  int v10; // r8d
  __int64 v11; // r9
  unsigned int v12; // ebx
  unsigned int v13; // ebx
  unsigned int v14; // ebx

  v9 = 5;
  Log(a1, 1024, 1398100816, a4, a2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_DDD(
      WPP_GLOBAL_Control->DeviceExtension,
      *(unsigned __int16 *)(v11 + 4),
      v10,
      44,
      (__int64)&WPP_d88ed72d10863ed7c1a47d127bebfa74_Traceguids,
      *(_WORD *)(v11 + 4),
      a3,
      a2);
  v12 = a2 - 1;
  if ( !v12 )
    return (unsigned int)UsbhPortDisconnect(a1, a4, a5);
  v13 = v12 - 7;
  if ( !v13 )
    return (unsigned int)UsbhHandleOvercurrent(a1, a5);
  v14 = v13 - 262136;
  if ( v14 )
  {
    if ( v14 == 786432 )
      return (unsigned int)UsbhResumeSuspendedPort(a1, a5);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        45,
        (__int64)&WPP_d88ed72d10863ed7c1a47d127bebfa74_Traceguids);
    Log(a1, 1024, 1937077062, *(unsigned __int16 *)(a4 + 420), a3);
    return 4;
  }
  return v9;
}
