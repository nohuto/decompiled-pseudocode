/*
 * XREFs of UsbhHandleSuspend @ 0x1C000880C
 * Callers:
 *     UsbhHubDispatchPortEvent @ 0x1C0010E20 (UsbhHubDispatchPortEvent.c)
 * Callees:
 *     UsbhResumeSuspendedPort @ 0x1C00088C8 (UsbhResumeSuspendedPort.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     WPP_RECORDER_SF_ @ 0x1C003BD8C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C004D47C (WPP_RECORDER_SF_DDD.c)
 *     UsbhHandleOvercurrent @ 0x1C0050820 (UsbhHandleOvercurrent.c)
 *     UsbhPortDisconnect @ 0x1C0050E10 (UsbhPortDisconnect.c)
 */

__int64 __fastcall UsbhHandleSuspend(__int64 a1, unsigned int a2, unsigned __int8 a3, __int64 a4, __int64 a5)
{
  unsigned int v9; // edi
  int v10; // r8d
  __int64 v11; // r9
  PDEVICE_OBJECT v12; // rcx
  unsigned int v13; // ebx
  unsigned int v14; // ebx
  unsigned int v15; // ebx

  v9 = 5;
  Log(a1, 1024, 1398100816, a4, a2);
  v12 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_DDD(
      WPP_GLOBAL_Control->DeviceExtension,
      *(unsigned __int16 *)(v11 + 4),
      v10,
      44,
      (__int64)&WPP_d88ed72d10863ed7c1a47d127bebfa74_Traceguids,
      *(_WORD *)(v11 + 4),
      a3,
      a2);
    v12 = WPP_GLOBAL_Control;
  }
  v13 = a2 - 1;
  if ( !v13 )
    return (unsigned int)UsbhPortDisconnect(a1, a4, a5);
  v14 = v13 - 7;
  if ( !v14 )
    return (unsigned int)UsbhHandleOvercurrent(a1, a5);
  v15 = v14 - 262136;
  if ( v15 )
  {
    if ( v15 == 786432 )
      return (unsigned int)UsbhResumeSuspendedPort(a1, a5);
    if ( LOWORD(v12->DeviceType) )
      WPP_RECORDER_SF_(v12->DeviceExtension, 0, 1, 45, (__int64)&WPP_d88ed72d10863ed7c1a47d127bebfa74_Traceguids);
    Log(a1, 1024, 1937077062, *(unsigned __int16 *)(a4 + 420), a3);
    return 4;
  }
  return v9;
}
