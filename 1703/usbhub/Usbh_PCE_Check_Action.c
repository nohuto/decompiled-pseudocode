/*
 * XREFs of Usbh_PCE_Check_Action @ 0x1C00415F4
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C000FBC0 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhUnlockPcqWithTag @ 0x1C0008C10 (UsbhUnlockPcqWithTag.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhLockPcqWithTag @ 0x1C0025430 (UsbhLockPcqWithTag.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003C218 (WPP_RECORDER_SF_dq.c)
 */

_DWORD *__fastcall Usbh_PCE_Check_Action(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // eax
  int v11; // edx
  __int64 v12; // rax
  __int64 v13; // rax
  int v15; // [rsp+28h] [rbp-30h]
  KIRQL v16; // [rsp+68h] [rbp+10h] BYREF

  FdoExt(a1);
  *a4 = 0;
  Log(a1, 512, 825585712, a2, *(unsigned __int16 *)(a2 + 4));
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v15 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_dq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v8,
      v9,
      0x2Cu,
      (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      v15,
      a3);
  }
  v10 = UsbhLockPcqWithTag(a1, a2, 20, &v16, 0);
  v11 = v10;
  if ( v10 < 5 || v10 > 6 && (v10 <= 10 || v10 > 13 && (unsigned int)(v10 - 16) > 1) )
  {
    v13 = *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = v11;
    *(_DWORD *)(32 * v13 + a2 + 1384) = v11;
    *a4 = 0;
  }
  else
  {
    *a4 = 1;
    v12 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = v11;
    *(_DWORD *)(v12 + a2 + 1384) = v11;
  }
  UsbhUnlockPcqWithTag(a1, a2, v16);
  return a4;
}
