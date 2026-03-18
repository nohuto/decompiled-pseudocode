/*
 * XREFs of UsbhPdoDevicePowerState @ 0x1C0003C98
 * Callers:
 *     UsbhPdoPower_SetPower @ 0x1C0003A70 (UsbhPdoPower_SetPower.c)
 * Callees:
 *     UsbhSet_D0_wQueued_Action @ 0x1C0001008 (UsbhSet_D0_wQueued_Action.c)
 *     UsbhPdoSetDx @ 0x1C0001100 (UsbhPdoSetDx.c)
 *     UsbhQueueWorkItemEx @ 0x1C0002284 (UsbhQueueWorkItemEx.c)
 *     Usb_Disconnected @ 0x1C00036E4 (Usb_Disconnected.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C0004944 (UsbhReleaseFdoPwrLock.c)
 *     UsbhAcquireFdoPwrLock @ 0x1C00049D0 (UsbhAcquireFdoPwrLock.c)
 *     UsbhEtwLogDevicePowerEvent @ 0x1C0004E6C (UsbhEtwLogDevicePowerEvent.c)
 *     GET_FDO_POWER_STATE @ 0x1C0004FA4 (GET_FDO_POWER_STATE.c)
 *     UsbhSetPdoPowerState @ 0x1C000577C (UsbhSetPdoPowerState.c)
 *     UsbhPoStartNextPowerIrp_Pdo @ 0x1C00058C0 (UsbhPoStartNextPowerIrp_Pdo.c)
 *     UsbhAcquirePdoStateLock @ 0x1C0005D8C (UsbhAcquirePdoStateLock.c)
 *     UsbhClearPdoIdleReady @ 0x1C0005F00 (UsbhClearPdoIdleReady.c)
 *     UsbhDecPdoIoCount @ 0x1C000A050 (UsbhDecPdoIoCount.c)
 *     UsbhIncPdoIoCount @ 0x1C000A1B0 (UsbhIncPdoIoCount.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhSet_Pdo_Dx @ 0x1C0019A34 (UsbhSet_Pdo_Dx.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     UsbhSetPdoIdleReady @ 0x1C0024AC0 (UsbhSetPdoIdleReady.c)
 *     WPP_RECORDER_SF_dd @ 0x1C003D2D8 (WPP_RECORDER_SF_dd.c)
 *     UsbhPCE_BusDisconnect @ 0x1C0041194 (UsbhPCE_BusDisconnect.c)
 */

__int64 __fastcall UsbhPdoDevicePowerState(__int64 a1, struct _DEVICE_OBJECT *a2, IRP *a3)
{
  __int64 v6; // r14
  __int64 v7; // rbx
  POWER_STATE v8; // r12d
  int v9; // r15d
  __int64 v10; // rcx
  bool v11; // zf
  KIRQL v12; // dl
  int v13; // r15d
  unsigned int v14; // r15d
  int v15; // edx
  __int64 v16; // rax
  void *v17; // r8
  int v19; // r8d
  int v20; // r15d
  int v21; // eax
  int v22; // r8d
  int v23; // r8d
  int v24; // r8d
  __int64 v25; // rax
  int v26; // eax
  int v27; // ecx
  BOOLEAN v28; // r9
  _IO_STACK_LOCATION *CurrentStackLocation; // [rsp+80h] [rbp+18h]

  v6 = PdoExt(a2);
  FdoExt(a1);
  v7 = PdoExt(a2) + 944;
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  v8.SystemState = (_SYSTEM_POWER_STATE)CurrentStackLocation->Parameters.Power.State;
  Log(a1, 16, 1885622372, (_DWORD)a2, (__int64)a3);
  v9 = UsbhIncPdoIoCount(a2, a3, 1884311383LL, 0LL);
  v10 = v9 & 0xC0000000;
  if ( (_DWORD)v10 != -1073741824 )
  {
    UsbhAcquirePdoStateLock(v10, v7, 12LL);
    v11 = *(_DWORD *)(PdoExt(a2) + 1124) == 3;
    *(_DWORD *)(v7 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    *(_DWORD *)(v7 + 88) = 1734964085;
    v12 = *(_BYTE *)(v7 + 132);
    if ( !v11 )
    {
      v14 = -1073741810;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v12);
LABEL_9:
      if ( Usb_Disconnected(v14) )
        UsbhPCE_BusDisconnect(a1, v7, *(unsigned __int16 *)(v6 + 1420));
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_dd(
          WPP_GLOBAL_Control->DeviceExtension,
          v15,
          1,
          22,
          (__int64)&WPP_ee5e40984a3c387d1cb2bd9d553f663f_Traceguids,
          *(_WORD *)(v6 + 1420),
          v8.SystemState);
      UsbhSet_Pdo_Dx(a2, CurrentStackLocation->Parameters.Power.State);
      *(_QWORD *)(v6 + 2552) = MEMORY[0xFFFFF78000000014];
      v16 = PdoExt(a2);
      UsbhPoStartNextPowerIrp_Pdo(*(_QWORD *)(v16 + 1176), a2, a3, 2101LL);
      v17 = &USBHUB_ETW_EVENT_DEVICE_POWER_SET_D0_COMPLETE;
      if ( v8.SystemState != PowerSystemWorking )
        v17 = &USBHUB_ETW_EVENT_DEVICE_POWER_SET_DX_COMPLETE;
      UsbhEtwLogDevicePowerEvent(v6, a3, v17, CurrentStackLocation->Parameters.Read.ByteOffset.LowPart, 0);
      a3->IoStatus.Status = v14;
      IofCompleteRequest(a3, 0);
      UsbhDecPdoIoCount((ULONG_PTR)a2, (ULONG_PTR)a3);
      return v14;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v12);
    UsbhAcquireFdoPwrLock(a1, v7, 126LL, 1986356304LL);
    v13 = *(_DWORD *)(PdoExt(a2) + 1128);
    if ( v8.SystemState != PowerSystemWorking )
    {
      if ( (unsigned int)(v8.SystemState - 2) > 2 )
      {
        v14 = -1073741811;
      }
      else
      {
        UsbhEtwLogDevicePowerEvent(
          v6,
          a3,
          &USBHUB_ETW_EVENT_DEVICE_POWER_SET_DX_DISPATCH,
          CurrentStackLocation->Parameters.Read.ByteOffset.LowPart,
          0);
        if ( *(_DWORD *)(PdoExt(a2) + 788) == v8.SystemState )
        {
          v14 = 0;
        }
        else
        {
          if ( *(_DWORD *)(v6 + 1144) == 2 )
          {
            if ( !CurrentStackLocation->Parameters.Create.EaLength )
            {
              if ( !*(_BYTE *)(v6 + 2725) )
              {
                *(_BYTE *)(v6 + 2725) = 1;
                UsbhQueueWorkItemEx(a1, 1u, (int)&UsbhSetPdoSelectiveSuspendedKey, (__int64)a2, 0, 2001228627, 0LL);
              }
              if ( v8.SystemState == PowerSystemSleeping3
                && (*(_DWORD *)(PdoExt(a2) + 1172) & 0x10) != 0
                && (*(_DWORD *)(v6 + 1412) & 0xC00000) == 0xC00000 )
              {
                KeSetEvent((PRKEVENT)(v6 + 2904), 0, 0);
                *(_DWORD *)(v6 + 1412) = *(_DWORD *)(v6 + 1412) & 0xFAFFFFFF | 0x4000000;
              }
            }
            v14 = UsbhPdoSetDx(v7, (__int64)a2, (__int64)a3);
            goto LABEL_9;
          }
          v14 = -1073741130;
        }
      }
      goto LABEL_42;
    }
    UsbhEtwLogDevicePowerEvent(
      v6,
      a3,
      &USBHUB_ETW_EVENT_DEVICE_POWER_SET_D0_DISPATCH,
      CurrentStackLocation->Parameters.Read.ByteOffset.LowPart,
      0);
    *(_QWORD *)(v6 + 2544) = MEMORY[0xFFFFF78000000014];
    v20 = v13 - 1;
    if ( v20 )
    {
      if ( v20 == 6 )
      {
        UsbhSetPdoPowerState(v7, (_DWORD)a2, v19, 7, 13);
        UsbhReleaseFdoPwrLock(a1, v7);
        Log(a1, 16, 2003059760, 0, *(unsigned __int16 *)(v6 + 1420));
        KeWaitForSingleObject((PVOID)(v6 + 2352), Executive, 0, v28, 0LL);
LABEL_49:
        v14 = 0;
        goto LABEL_9;
      }
      v21 = GET_FDO_POWER_STATE(v7);
      if ( v21 == 201 || v21 == 206 )
      {
LABEL_22:
        if ( (int)UsbhSet_D0_wQueued_Action(a1, v7, (int)a2, (__int64)a3) >= 0 )
        {
          KeResetEvent((PRKEVENT)(v6 + 2352));
          UsbhSetPdoPowerState(v7, (_DWORD)a2, v23, 2, 6);
          UsbhReleaseFdoPwrLock(a1, v7);
          return 259LL;
        }
        goto LABEL_39;
      }
      if ( v21 > 208 )
      {
        if ( v21 <= 211 )
          goto LABEL_22;
        if ( v21 <= 213 )
        {
LABEL_39:
          UsbhSetPdoPowerState(v7, (_DWORD)a2, v22, 6, 3);
          v26 = GET_FDO_POWER_STATE(v7);
          v27 = 0;
          if ( v26 == 213 )
            v27 = -1073741810;
          v14 = v27;
LABEL_42:
          UsbhReleaseFdoPwrLock(a1, v7);
          goto LABEL_9;
        }
      }
      UsbhSetPdoPowerState(v7, (_DWORD)a2, v22, 6, 3);
    }
    else
    {
      UsbhSetPdoPowerState(v7, (_DWORD)a2, v19, 1, 2);
    }
    UsbhReleaseFdoPwrLock(a1, v7);
    goto LABEL_49;
  }
  if ( *(_BYTE *)(v6 + 2732) )
  {
    UsbhAcquireFdoPwrLock(a1, v7, 126LL, 1986356304LL);
    if ( v8.SystemState == PowerSystemWorking )
    {
      UsbhSetPdoPowerState(v7, (_DWORD)a2, v24, 1, 2);
      UsbhReleaseFdoPwrLock(a1, v7);
      UsbhClearPdoIdleReady(a1, a2, a3);
    }
    else
    {
      UsbhSetPdoPowerState(v7, (_DWORD)a2, v24, 4, 4);
      UsbhReleaseFdoPwrLock(a1, v7);
      UsbhSetPdoIdleReady(a1, a2, a3);
    }
    UsbhSet_Pdo_Dx(a2, v8);
  }
  Log(a1, 16, 1886545441, v9, (__int64)a3);
  *(_QWORD *)(v6 + 2552) = MEMORY[0xFFFFF78000000014];
  v25 = PdoExt(a2);
  UsbhPoStartNextPowerIrp_Pdo(*(_QWORD *)(v25 + 1176), a2, a3, 1910LL);
  a3->IoStatus.Status = 0;
  IofCompleteRequest(a3, 0);
  return 0LL;
}
