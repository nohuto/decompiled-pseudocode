/*
 * XREFs of UsbhPdoSetD0 @ 0x1C0003620
 * Callers:
 *     <none>
 * Callees:
 *     UsbhCompletePdoIdleIrp @ 0x1C0001280 (UsbhCompletePdoIdleIrp.c)
 *     Usb_Disconnected @ 0x1C0003AA4 (Usb_Disconnected.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C0004E50 (UsbhReleaseFdoPwrLock.c)
 *     UsbhAcquireFdoPwrLock @ 0x1C0004EE0 (UsbhAcquireFdoPwrLock.c)
 *     UsbhEtwLogDevicePowerEvent @ 0x1C0005004 (UsbhEtwLogDevicePowerEvent.c)
 *     GET_FDO_POWER_STATE @ 0x1C0005578 (GET_FDO_POWER_STATE.c)
 *     UsbhReleasePowerContext @ 0x1C00055A8 (UsbhReleasePowerContext.c)
 *     UsbhSetPdoPowerState @ 0x1C0006018 (UsbhSetPdoPowerState.c)
 *     UsbhPdoSetD0_Finish @ 0x1C0006568 (UsbhPdoSetD0_Finish.c)
 *     UsbhClearPdoIdleReady @ 0x1C0006900 (UsbhClearPdoIdleReady.c)
 *     UsbhDisableDeviceForWake @ 0x1C0006A14 (UsbhDisableDeviceForWake.c)
 *     UsbhDecHubBusy @ 0x1C000B310 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x1C000BC70 (UsbhIncHubBusy.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhSet_Pdo_Dx @ 0x1C0018B68 (UsbhSet_Pdo_Dx.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     UsbhDecPdoIoCount @ 0x1C0020BD0 (UsbhDecPdoIoCount.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C003C01C (WPP_RECORDER_SF_dd.c)
 *     UsbhSyncResumeDeviceInternal @ 0x1C0044168 (UsbhSyncResumeDeviceInternal.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1C00463C4 (UsbhPdoWaitForD3Reconnect.c)
 *     UsbhException @ 0x1C004F144 (UsbhException.c)
 */

void __fastcall UsbhPdoSetD0(PDEVICE_OBJECT DeviceObject, unsigned int a2, __int64 a3)
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
  __int64 v23; // rax
  __int64 v24; // rdx
  int v25; // [rsp+48h] [rbp-40h]
  int v26; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v27; // [rsp+A8h] [rbp+20h]

  v3 = *(struct _DEVICE_OBJECT **)(a3 + 48);
  v5 = a2;
  v7 = PdoExt(v3);
  v8 = FdoExt(*(_QWORD *)(v7 + 1176));
  v27 = *(_QWORD *)(*(_QWORD *)(a3 + 64) + 184LL);
  Log((_DWORD)DeviceObject, 16, 1346651184, a3, (__int64)v3);
  v9 = PdoExt(v3) + 944;
  UsbhAcquireFdoPwrLock(DeviceObject, v9, 126LL, 1381131376LL);
  UsbhSetPdoPowerState(v9, (_DWORD)v3, v10, 8, 8);
  UsbhReleaseFdoPwrLock(DeviceObject, v9);
  *(_QWORD *)(a3 + 112) = UsbhIncHubBusy((_DWORD)DeviceObject, v9, (_DWORD)v3, 1430414448, 1);
  UsbhAcquireFdoPwrLock(DeviceObject, v9, 126LL, 809792336LL);
  v11 = *(_DWORD *)(PdoExt(*(_QWORD *)(a3 + 48)) + 1128);
  v12 = GET_FDO_POWER_STATE(v9);
  if ( v12 == 201 )
    goto LABEL_20;
  if ( v12 <= 201 )
  {
LABEL_15:
    UsbhSetPdoPowerState(v9, (_DWORD)v3, v13, v11, 3);
    UsbhReleaseFdoPwrLock(DeviceObject, v9);
    v17 = -1073741101;
LABEL_34:
    *(_QWORD *)(v7 + 2536) = MEMORY[0xFFFFF78000000014];
    UsbhDecHubBusy(DeviceObject, v18, *(_QWORD *)(a3 + 112));
    v23 = v27;
    v24 = *(_QWORD *)(a3 + 64);
    *(_QWORD *)(a3 + 112) = 0LL;
    UsbhEtwLogDevicePowerEvent(
      v7,
      v24,
      &USBHUB_ETW_EVENT_DEVICE_POWER_SET_D0_COMPLETE,
      *(unsigned int *)(v23 + 24),
      v17);
    *(_DWORD *)(*(_QWORD *)(a3 + 64) + 48LL) = v17;
    IofCompleteRequest(*(PIRP *)(a3 + 64), 0);
    UsbhDecPdoIoCount((ULONG_PTR)v3, *(_QWORD *)(a3 + 64));
    UsbhReleasePowerContext(DeviceObject, a3);
    return;
  }
  if ( v12 <= 205 )
    goto LABEL_18;
  if ( v12 == 206 )
  {
LABEL_20:
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
        PdoExt(*(_QWORD *)(a3 + 48));
        *(_DWORD *)(v7 + 2376) = *(_DWORD *)(v8 + 4216);
        UsbhSetPdoPowerState(v9, (_DWORD)v3, v20, 1, 8);
        KeSetEvent((PRKEVENT)(v7 + 2352), 0, 0);
        UsbhReleaseFdoPwrLock(DeviceObject, v9);
        UsbhCompletePdoIdleIrp((int)DeviceObject, (__int64)v3, 0);
        UsbhClearPdoIdleReady(DeviceObject, v3, a3);
        if ( (*(_DWORD *)(v7 + 1412) & 0x100) != 0 )
        {
          v21 = UsbhDisableDeviceForWake(*(_QWORD *)(v9 + 8), v3, &v26);
          v18 = v21;
          if ( (v21 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected(v21) )
          {
            LOBYTE(v25) = 0;
            UsbhException(
              *(_QWORD *)(v9 + 8),
              *(unsigned __int16 *)(v7 + 1420),
              49,
              0,
              0,
              v18,
              v26,
              usbfile_pdopwr_c,
              1186,
              v25);
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
    goto LABEL_33;
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
        goto LABEL_34;
      }
      goto LABEL_15;
    }
LABEL_18:
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
    goto LABEL_34;
  }
  UsbhSetPdoPowerState(v9, (_DWORD)v3, v13, 3, 7);
  UsbhReleaseFdoPwrLock(DeviceObject, v9);
  Log((_DWORD)DeviceObject, 16, 1349862448, a3, (__int64)v3);
  UsbhClearPdoIdleReady(DeviceObject, v3, a3);
  Log((_DWORD)DeviceObject, 16, 2003321904, 0, v5);
  v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 4176));
  if ( !*(_BYTE *)(v8 + 4184) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v8 + 4176), v14);
    UsbhPdoSetD0_Finish(v9, v3, *(_QWORD *)(a3 + 64));
LABEL_33:
    v17 = 0;
    goto LABEL_34;
  }
  v15 = (_QWORD *)(a3 + 96);
  v16 = *(_QWORD **)(v8 + 4200);
  if ( *v16 != v8 + 4192 )
    __fastfail(3u);
  *v15 = v8 + 4192;
  v15[1] = v16;
  *v16 = v15;
  *(_QWORD *)(v8 + 4200) = v15;
  KeReleaseSpinLock((PKSPIN_LOCK)(v8 + 4176), v14);
}
