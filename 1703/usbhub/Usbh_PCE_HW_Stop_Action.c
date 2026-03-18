/*
 * XREFs of Usbh_PCE_HW_Stop_Action @ 0x1C0041914
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C000FBC0 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhiSignalResumeEvent @ 0x1C0007C00 (UsbhiSignalResumeEvent.c)
 *     UsbhSetPcqEventStatus @ 0x1C0007EAC (UsbhSetPcqEventStatus.c)
 *     UsbhFlushPortChangeQueue @ 0x1C0009998 (UsbhFlushPortChangeQueue.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhLockPcqWithTag @ 0x1C0025430 (UsbhLockPcqWithTag.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003C218 (WPP_RECORDER_SF_dq.c)
 */

void __fastcall Usbh_PCE_HW_Stop_Action(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // eax
  __int64 v9; // r9
  int v10; // r10d
  int v11; // r11d
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // [rsp+28h] [rbp-20h]
  KIRQL v19; // [rsp+58h] [rbp+10h] BYREF

  FdoExt(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v18 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_dq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v6,
      v7,
      0x22u,
      (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      v18,
      a3);
  }
  v8 = UsbhLockPcqWithTag(a1, a2, 17, &v19, 0);
  Log(a1, 512, 825716784, v8, *(unsigned __int16 *)(a2 + 4));
  if ( v10 > 10 )
  {
    if ( v10 == 11 )
      goto LABEL_20;
    if ( v10 <= 14 )
      goto LABEL_18;
    if ( v10 <= 17 )
      goto LABEL_17;
    if ( v10 == 18 )
      goto LABEL_20;
    if ( v10 == 20 )
    {
LABEL_17:
      Log(a1, v11, 825716788, v9, *(unsigned __int16 *)(a2 + 4));
      goto LABEL_21;
    }
LABEL_19:
    v14 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 19;
    *(_DWORD *)(v14 + a2 + 1384) = 19;
    goto LABEL_21;
  }
  if ( v10 == 10 )
    goto LABEL_18;
  if ( v10 <= 0 )
    goto LABEL_19;
  if ( v10 <= 2 )
    goto LABEL_20;
  if ( v10 == 3 )
    goto LABEL_18;
  if ( v10 > 5 )
  {
    if ( v10 > 7 )
    {
      if ( v10 != 8 )
        goto LABEL_11;
LABEL_18:
      Log(a1, v11, 825716785, v9, *(unsigned __int16 *)(a2 + 4));
      v13 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 17;
      *(_DWORD *)(v13 + a2 + 1384) = 17;
      goto LABEL_21;
    }
LABEL_20:
    Log(a1, v11, 825716786, v9, *(unsigned __int16 *)(a2 + 4));
    UsbhSetPcqEventStatus(a1, a2, 2LL, 30);
    v15 = *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 15;
    *(_DWORD *)(32 * v15 + a2 + 1384) = 15;
    UsbhFlushPortChangeQueue(a1, a2, v16, v17);
    KeSetEvent((PRKEVENT)(a2 + 472), 0, 0);
    UsbhiSignalResumeEvent(a1, a2);
    goto LABEL_21;
  }
LABEL_11:
  Log(a1, v11, 825716787, v9, *(unsigned __int16 *)(a2 + 4));
  v12 = 32LL * *(unsigned int *)(a2 + 2400);
  *(_DWORD *)(a2 + 12) = 16;
  *(_DWORD *)(v12 + a2 + 1384) = 16;
LABEL_21:
  UsbhUnlockPcqWithTag(a1, a2, v19);
}
