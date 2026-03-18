/*
 * XREFs of UsbhPCE_Resume @ 0x1C00418D4
 * Callers:
 *     UsbhOvercurrentResetWorker @ 0x1C003E200 (UsbhOvercurrentResetWorker.c)
 *     UsbhSyncResumePort @ 0x1C0045104 (UsbhSyncResumePort.c)
 * Callees:
 *     UsbhGetPortData @ 0x1C000A320 (UsbhGetPortData.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C000ED90 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhPCE_Resume(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  __int64 result; // rax
  int v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+68h] [rbp+20h]

  FdoExt(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v7 = a3;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x3Bu,
      (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      v7);
  }
  Log(a1, 512, 1346711603, 0LL, a3);
  result = UsbhGetPortData(a1, a3);
  if ( result )
  {
    LODWORD(v8) = 0;
    return UsbhDispatch_PortChangeQueueEventEx(a1, result, 3LL, a2, v8, 0, 0LL, 0LL);
  }
  return result;
}
