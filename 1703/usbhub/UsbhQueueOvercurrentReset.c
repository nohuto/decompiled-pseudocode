/*
 * XREFs of UsbhQueueOvercurrentReset @ 0x1C003D720
 * Callers:
 *     <none>
 * Callees:
 *     UsbhQueueWorkItemEx @ 0x1C00022F4 (UsbhQueueWorkItemEx.c)
 *     UsbhDispatch_HardResetEvent @ 0x1C0009330 (UsbhDispatch_HardResetEvent.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhGetPortData @ 0x1C0016C70 (UsbhGetPortData.c)
 *     WPP_RECORDER_SF_ @ 0x1C003BD8C (WPP_RECORDER_SF_.c)
 *     Usbh_OvercurrentDerefHubBusy @ 0x1C003D87C (Usbh_OvercurrentDerefHubBusy.c)
 *     UsbhPCE_Disable @ 0x1C004060C (UsbhPCE_Disable.c)
 */

__int64 __fastcall UsbhQueueOvercurrentReset(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rbx
  __int64 result; // rax
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // r8
  _DWORD *v9; // rax

  v4 = FdoExt(a1);
  Log(a1, 0x4000, 1870033457, 0LL, *(unsigned __int16 *)(a2 + 20));
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xAu,
      (__int64)&WPP_3974b72a889c3e805634d3484bf216ee_Traceguids);
  if ( !*((_BYTE *)v4 + 3010) )
  {
    *((_BYTE *)v4 + 3010) = 1;
    UsbhQueueWorkItemEx(a1, 1u, (int)UsbhSetHubOvercurrentDetectedKey, 0LL, 0, 1666340431, 0LL);
  }
  result = UsbhGetPortData(a1, *(_WORD *)(a2 + 20));
  v6 = result;
  if ( result )
  {
    v7 = result + 200;
    UsbhPCE_Disable(a1, *(unsigned __int16 *)(a2 + 20), result + 200);
    result = UsbhQueueWorkItemEx(
               a1,
               1u,
               (int)UsbhAutoOvercurrentResetWorker,
               v7,
               *(unsigned __int16 *)(v6 + 4),
               1666340431,
               0LL) & 0xC0000000LL;
    if ( (_DWORD)result == -1073741824 )
    {
      LOBYTE(v8) = 1;
      Usbh_OvercurrentDerefHubBusy(a1, v6, v8);
      v9 = FdoExt(a1);
      return UsbhDispatch_HardResetEvent(a1, (__int64)(v9 + 346), 3);
    }
  }
  return result;
}
