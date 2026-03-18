/*
 * XREFs of Usbh_PCE_QueueDriverReset_Action @ 0x1C0006488
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C000ED90 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhSetPcqEventStatus @ 0x1C0006B28 (UsbhSetPcqEventStatus.c)
 *     UsbhLogSignalDriverResetEvent @ 0x1C0006BA0 (UsbhLogSignalDriverResetEvent.c)
 *     UsbhUnlockPcqWithTag @ 0x1C0007AAC (UsbhUnlockPcqWithTag.c)
 *     UsbhSignalSyncDeviceResetPdo @ 0x1C0007CD8 (UsbhSignalSyncDeviceResetPdo.c)
 *     UsbhInsertQueuePortChangeObject @ 0x1C000C580 (UsbhInsertQueuePortChangeObject.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhLockPcqWithTag @ 0x1C0025F00 (UsbhLockPcqWithTag.c)
 *     UsbhHubQueueProcessChangeWorker @ 0x1C0027810 (UsbhHubQueueProcessChangeWorker.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C003D2D8 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D4D4 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_dc @ 0x1C004327C (WPP_RECORDER_SF_dc.c)
 */

__int64 Usbh_PCE_QueueDriverReset_Action(__int64 a1, __int64 a2, char a3, ...)
{
  int v3; // ebx
  int v7; // eax
  int v8; // r14d
  __int64 v9; // rbx
  int v10; // r10d
  int v11; // r8d
  __int64 v12; // r8
  __int64 v13; // r12
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 result; // rax
  int v18; // edx
  int v19; // r8d
  __int64 v20; // rdx
  __int64 v21; // r12
  __int64 v22; // rax
  int v23; // edx
  char v24; // r10
  __int64 v25; // rax
  __int64 v26; // r8
  int v27; // [rsp+20h] [rbp-20h]
  char v28; // [rsp+88h] [rbp+48h] BYREF
  __int64 v29; // [rsp+98h] [rbp+58h] BYREF
  va_list va; // [rsp+98h] [rbp+58h]
  __int64 v31; // [rsp+A0h] [rbp+60h]
  __int64 v32; // [rsp+A8h] [rbp+68h]
  va_list va1; // [rsp+B0h] [rbp+70h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v29 = va_arg(va1, _QWORD);
  v31 = va_arg(va1, _QWORD);
  v32 = va_arg(va1, _QWORD);
  v3 = v29;
  FdoExt(a1);
  v7 = UsbhLockPcqWithTag(a1, a2, 15, (unsigned int)&v28, v3);
  v8 = v7;
  if ( !*(_BYTE *)(a2 + 2839) && !*(_BYTE *)(a2 + 2840) && (unsigned int)(*(_DWORD *)(a2 + 400) - 1) > 1 )
  {
    v9 = *(unsigned __int16 *)(a2 + 4);
    Log(a1, 512, 825585712, v7, v9);
    Log(a1, v10, 825585713, a2, *(unsigned __int16 *)(a2 + 4));
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dq(
        WPP_GLOBAL_Control->DeviceExtension,
        (unsigned int)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
        v11,
        27,
        (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
        *(_WORD *)(a2 + 4),
        a3);
    UsbhSetPcqEventStatus(a1, a2, 3LL);
    KeResetEvent((PRKEVENT)(a2 + 824));
    if ( v8 > 13 )
    {
      if ( v8 == 14 )
        goto LABEL_18;
      if ( v8 > 18 && v8 != 20 )
      {
LABEL_37:
        v25 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 19;
        *(_DWORD *)(v25 + a2 + 1384) = 19;
LABEL_24:
        LOBYTE(v12) = v28;
        result = UsbhUnlockPcqWithTag(a1, a2, v12, 0LL);
LABEL_14:
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          return WPP_RECORDER_SF_dc(WPP_GLOBAL_Control->DeviceExtension, v18, v19, 32, v27, v9, v8);
        return result;
      }
    }
    else if ( v8 < 5 && v8 != 1 )
    {
      switch ( v8 )
      {
        case 2:
          Log(a1, 512, 825585714, 2, *(unsigned __int16 *)(a2 + 4));
          v13 = v32;
          if ( (int)UsbhInsertQueuePortChangeObject(a1, (unsigned __int16)v9, (unsigned int)va, v31, v32) >= 0 )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              WPP_RECORDER_SF_d(
                WPP_GLOBAL_Control->DeviceExtension,
                0,
                1,
                28,
                (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
                v9);
            Log(a1, 8, 825585715, a2, v9);
            v14 = *(unsigned int *)(a2 + 2400);
            v15 = 4LL;
            *(_DWORD *)(a2 + 12) = 4;
            *(_DWORD *)(32 * v14 + a2 + 1384) = 4;
            LOBYTE(v15) = v28;
            UsbhUnlockPcqWithTag(a1, a2, v15, 0LL);
            result = UsbhHubQueueProcessChangeWorker(v16, a2);
            goto LABEL_14;
          }
          Log(a1, 8, 825585716, a2, v9);
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_dd(
              WPP_GLOBAL_Control->DeviceExtension,
              v23,
              1,
              29,
              (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
              v9,
              v24);
LABEL_21:
          v20 = v13;
          goto LABEL_22;
        case 3:
          Log(a1, 8, 825585718, a2, v9);
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              0,
              1,
              31,
              (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
              v9);
          v21 = v32;
          if ( (int)UsbhInsertQueuePortChangeObject(a1, (unsigned __int16)v9, (unsigned int)va, v31, v32) < 0 )
          {
            UsbhSignalSyncDeviceResetPdo(a1, v21, 3221225473LL);
            if ( (unsigned int)UsbhLogSignalDriverResetEvent(a1, a2) )
              UsbhSetPcqEventStatus(a1, a2, 3LL);
          }
          v22 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 14;
          *(_DWORD *)(v22 + a2 + 1384) = 14;
          goto LABEL_24;
        case 4:
LABEL_18:
          Log(a1, 8, 825585717, a2, v9);
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              0,
              1,
              30,
              (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
              v9);
          v13 = v32;
          if ( (int)UsbhInsertQueuePortChangeObject(a1, (unsigned __int16)v9, (unsigned int)va, v31, v32) >= 0 )
            goto LABEL_24;
          goto LABEL_21;
      }
      goto LABEL_37;
    }
    Log(a1, 512, 825585713, v8, *(unsigned __int16 *)(a2 + 4));
    v20 = v32;
LABEL_22:
    UsbhSignalSyncDeviceResetPdo(a1, v20, 3221225473LL);
    if ( (unsigned int)UsbhLogSignalDriverResetEvent(a1, a2) )
      UsbhSetPcqEventStatus(a1, a2, 3LL);
    goto LABEL_24;
  }
  UsbhSignalSyncDeviceResetPdo(a1, v32, 3221225473LL);
  if ( (unsigned int)UsbhLogSignalDriverResetEvent(a1, a2) )
    UsbhSetPcqEventStatus(a1, a2, 3LL);
  LOBYTE(v26) = v28;
  return UsbhUnlockPcqWithTag(a1, a2, v26, 0LL);
}
