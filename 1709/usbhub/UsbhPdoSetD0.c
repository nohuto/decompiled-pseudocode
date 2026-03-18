/*
 * XREFs of UsbhPdoSetD0 @ 0x1C0003260
 * Callers:
 *     <none>
 * Callees:
 *     UsbhCompletePdoIdleIrp @ 0x1C0001280 (UsbhCompletePdoIdleIrp.c)
 *     UsbhDisableDeviceForWake @ 0x1C0001418 (UsbhDisableDeviceForWake.c)
 *     UsbhPdoSetD0_Finish @ 0x1C00015A0 (UsbhPdoSetD0_Finish.c)
 *     Usb_Disconnected @ 0x1C00036E4 (Usb_Disconnected.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C0004944 (UsbhReleaseFdoPwrLock.c)
 *     UsbhAcquireFdoPwrLock @ 0x1C00049D0 (UsbhAcquireFdoPwrLock.c)
 *     UsbhEtwLogDevicePowerEvent @ 0x1C0004E6C (UsbhEtwLogDevicePowerEvent.c)
 *     GET_FDO_POWER_STATE @ 0x1C0004FA4 (GET_FDO_POWER_STATE.c)
 *     UsbhReleasePowerContext @ 0x1C0004FD4 (UsbhReleasePowerContext.c)
 *     UsbhSetPdoPowerState @ 0x1C000577C (UsbhSetPdoPowerState.c)
 *     UsbhClearPdoIdleReady @ 0x1C0005F00 (UsbhClearPdoIdleReady.c)
 *     UsbhDecPdoIoCount @ 0x1C000A050 (UsbhDecPdoIoCount.c)
 *     UsbhDecHubBusy @ 0x1C000B930 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x1C0013140 (UsbhIncHubBusy.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhSet_Pdo_Dx @ 0x1C0019A34 (UsbhSet_Pdo_Dx.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C003D2D8 (WPP_RECORDER_SF_dd.c)
 *     UsbhSyncResumeDeviceInternal @ 0x1C0044F98 (UsbhSyncResumeDeviceInternal.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1C0047184 (UsbhPdoWaitForD3Reconnect.c)
 *     UsbhException @ 0x1C004FE34 (UsbhException.c)
 */

void __fastcall UsbhPdoSetD0(PDEVICE_OBJECT DeviceObject, unsigned int a2, _QWORD *a3)
{
  struct _DEVICE_OBJECT *v3; // rsi
  __int64 v5; // r12
  __int64 v7; // r15
  __int64 v8; // r13
  __int64 v9; // rbx
  int v10; // r8d
  int v11; // ebp
  int v12; // eax
  int v13; // r8d
  KIRQL v14; // al
  _QWORD *v15; // r14
  _QWORD *v16; // r8
  int v17; // ebp
  __int64 v18; // rdx
  int v19; // ebp
  int v20; // r8d
  unsigned int v21; // eax
  BOOLEAN v22; // r9
  __int64 v23; // rdx
  int v24; // [rsp+48h] [rbp-40h]
  int v25; // [rsp+A0h] [rbp+18h]
  __int64 v26; // [rsp+A8h] [rbp+20h]

  v3 = (struct _DEVICE_OBJECT *)a3[6];
  v5 = a2;
  v7 = PdoExt(v3);
  v8 = FdoExt(*(_QWORD *)(v7 + 1176));
  v26 = *(_QWORD *)(a3[8] + 184LL);
  Log((_DWORD)DeviceObject, 16, 1346651184, (_DWORD)a3, (__int64)v3);
  v9 = PdoExt(v3) + 944;
  UsbhAcquireFdoPwrLock(DeviceObject, v9, 126LL, 1381131376LL);
  UsbhSetPdoPowerState(v9, (_DWORD)v3, v10, 8, 8);
  UsbhReleaseFdoPwrLock(DeviceObject, v9);
  a3[14] = UsbhIncHubBusy((_DWORD)DeviceObject, v9, (_DWORD)v3, 1430414448, 1);
  UsbhAcquireFdoPwrLock(DeviceObject, v9, 126LL, 809792336LL);
  v11 = *(_DWORD *)(PdoExt(a3[6]) + 1128);
  v12 = GET_FDO_POWER_STATE(v9);
  if ( v12 == 201 )
    goto LABEL_21;
  if ( v12 <= 201 )
  {
LABEL_15:
    UsbhSetPdoPowerState(v9, (_DWORD)v3, v13, v11, 3);
    UsbhReleaseFdoPwrLock(DeviceObject, v9);
    v17 = -1073741101;
    goto LABEL_35;
  }
  if ( v12 <= 205 )
    goto LABEL_19;
  if ( v12 == 206 )
  {
LABEL_21:
    v19 = v11 - 1;
    if ( v19 )
    {
      if ( v19 == 6 )
      {
        UsbhSetPdoPowerState(v9, (_DWORD)v3, v13, 7, 13);
        UsbhReleaseFdoPwrLock(DeviceObject, v9);
        Log((_DWORD)DeviceObject, 16, 1999782960, 0, *(unsigned __int16 *)(v7 + 1420));
        KeWaitForSingleObject((PVOID)(v7 + 2352), Executive, 0, v22, 0LL);
      }
      else
      {
        UsbhSetPdoPowerState(v9, (_DWORD)v3, v13, 7, 8);
        UsbhReleaseFdoPwrLock(DeviceObject, v9);
        if ( (*(_DWORD *)(v7 + 1412) & 0x4000000) != 0 )
        {
          UsbhPdoWaitForD3Reconnect(DeviceObject, v3);
        }
        else
        {
          UsbhSyncResumeDeviceInternal(DeviceObject, v9, v3);
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              0,
              1,
              16,
              (__int64)&WPP_ee5e40984a3c387d1cb2bd9d553f663f_Traceguids,
              *(_WORD *)(v7 + 1420));
          UsbhSet_Pdo_Dx(v3, (POWER_STATE)1);
        }
        UsbhAcquireFdoPwrLock(DeviceObject, v9, 126LL, 809792336LL);
        PdoExt(a3[6]);
        *(_DWORD *)(v7 + 2376) = *(_DWORD *)(v8 + 4216);
        UsbhSetPdoPowerState(v9, (_DWORD)v3, v20, 1, 8);
        KeSetEvent((PRKEVENT)(v7 + 2352), 0, 0);
        UsbhReleaseFdoPwrLock(DeviceObject, v9);
        UsbhCompletePdoIdleIrp((__int64)DeviceObject, (__int64)v3, 0);
        UsbhClearPdoIdleReady(DeviceObject, v3, a3);
        if ( (*(_DWORD *)(v7 + 1412) & 0x100) != 0 )
        {
          v21 = UsbhDisableDeviceForWake(*(_QWORD *)(v9 + 8), (__int64)v3);
          v18 = v21;
          if ( (v21 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected(v21) )
          {
            LOBYTE(v24) = 0;
            UsbhException(
              *(_QWORD *)(v9 + 8),
              *(unsigned __int16 *)(v7 + 1420),
              49,
              0,
              0,
              v18,
              v25,
              usbfile_pdopwr_c,
              1186,
              v24);
          }
        }
      }
    }
    else
    {
      UsbhSetPdoPowerState(v9, (_DWORD)v3, v13, 1, 13);
      UsbhReleaseFdoPwrLock(DeviceObject, v9);
      Log((_DWORD)DeviceObject, 16, 1999848496, 0, *(unsigned __int16 *)(v7 + 1420));
    }
    goto LABEL_34;
  }
  if ( v12 <= 208 )
    goto LABEL_15;
  if ( v12 > 211 )
  {
    if ( v12 != 212 )
    {
      if ( v12 == 213 )
      {
        v17 = -1073741810;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_dd(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            14,
            (__int64)&WPP_ee5e40984a3c387d1cb2bd9d553f663f_Traceguids,
            *(_WORD *)(v7 + 1420),
            14);
        UsbhReleaseFdoPwrLock(DeviceObject, v9);
        goto LABEL_35;
      }
      goto LABEL_15;
    }
LABEL_19:
    UsbhSetPdoPowerState(v9, (_DWORD)v3, v13, v11, 9);
    UsbhReleaseFdoPwrLock(DeviceObject, v9);
    v17 = -1073741101;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dd(
        WPP_GLOBAL_Control->DeviceExtension,
        v18,
        1,
        15,
        (__int64)&WPP_ee5e40984a3c387d1cb2bd9d553f663f_Traceguids,
        *(_WORD *)(v7 + 1420),
        211);
    goto LABEL_35;
  }
  UsbhSetPdoPowerState(v9, (_DWORD)v3, v13, 3, 7);
  UsbhReleaseFdoPwrLock(DeviceObject, v9);
  Log((_DWORD)DeviceObject, 16, 1349862448, (_DWORD)a3, (__int64)v3);
  UsbhClearPdoIdleReady(DeviceObject, v3, a3);
  Log((_DWORD)DeviceObject, 16, 2003321904, 0, v5);
  v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 4176));
  if ( !*(_BYTE *)(v8 + 4184) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v8 + 4176), v14);
    UsbhPdoSetD0_Finish(v9, v3, a3[8]);
LABEL_34:
    v17 = 0;
LABEL_35:
    *(_QWORD *)(v7 + 2552) = MEMORY[0xFFFFF78000000014];
    UsbhDecHubBusy(DeviceObject, v18, a3[14]);
    v23 = a3[8];
    a3[14] = 0LL;
    UsbhEtwLogDevicePowerEvent(
      v7,
      v23,
      &USBHUB_ETW_EVENT_DEVICE_POWER_SET_D0_COMPLETE,
      *(unsigned int *)(v26 + 24),
      v17);
    *(_DWORD *)(a3[8] + 48LL) = v17;
    IofCompleteRequest((PIRP)a3[8], 0);
    UsbhDecPdoIoCount((ULONG_PTR)v3, a3[8]);
    UsbhReleasePowerContext(DeviceObject, a3);
    return;
  }
  v15 = a3 + 12;
  v16 = *(_QWORD **)(v8 + 4200);
  if ( *v16 != v8 + 4192 )
    __fastfail(3u);
  *v15 = v8 + 4192;
  v15[1] = v16;
  *v16 = v15;
  *(_QWORD *)(v8 + 4200) = v15;
  KeReleaseSpinLock((PKSPIN_LOCK)(v8 + 4176), v14);
}
