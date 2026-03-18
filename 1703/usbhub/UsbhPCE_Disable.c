/*
 * XREFs of UsbhPCE_Disable @ 0x1C004060C
 * Callers:
 *     UsbhQueueDriverOvercurrent @ 0x1C003D5B0 (UsbhQueueDriverOvercurrent.c)
 *     UsbhQueueOvercurrentReset @ 0x1C003D720 (UsbhQueueOvercurrentReset.c)
 *     Usbh_PCE_SoftDisconnect_Action @ 0x1C0041FDC (Usbh_PCE_SoftDisconnect_Action.c)
 * Callees:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C000FBC0 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhGetPortData @ 0x1C0016C70 (UsbhGetPortData.c)
 *     UsbhLatchPdo @ 0x1C001A5DC (UsbhLatchPdo.c)
 *     UsbhCancelEnumeration @ 0x1C0027A44 (UsbhCancelEnumeration.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003C218 (WPP_RECORDER_SF_dq.c)
 *     UsbhBusUnlatchPdo @ 0x1C005059C (UsbhBusUnlatchPdo.c)
 */

__int64 __fastcall UsbhPCE_Disable(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 result; // rax
  __int64 v9; // rbx
  int v10; // esi
  unsigned int v11; // edx
  int v12; // r9d
  int v13; // [rsp+28h] [rbp-20h]
  __int64 v14; // [rsp+68h] [rbp+20h]

  FdoExt(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v13 = a2;
    WPP_RECORDER_SF_dq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v6,
      v7,
      0x42u,
      (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      v13,
      a3);
  }
  Log(a1, 512, 1346711602, 0LL, a2);
  result = UsbhGetPortData(a1, a2);
  v9 = result;
  if ( result )
  {
    LODWORD(v14) = 0;
    UsbhDispatch_PortChangeQueueEventEx(a1, result, 2, a3, v14, 0, 0LL, 0LL);
    result = UsbhLatchPdo(a1, *(_WORD *)(v9 + 4), 0LL, 0x7050444Fu);
    v10 = result;
    if ( result )
    {
      v11 = *(_DWORD *)(v9 + 400);
      *(_QWORD *)(v9 + 376) = v9 + 24;
      *(_DWORD *)(v9 + 416) = 1;
      result = UsbhCancelEnumeration(a1, v11, v9, result);
      *(_QWORD *)(v9 + 376) = 0LL;
      if ( *(_DWORD *)(v9 + 416) )
        return UsbhBusUnlatchPdo(a1, v10, v9, v12, 0LL);
      else
        *(_DWORD *)(v9 + 400) = 0;
    }
  }
  return result;
}
