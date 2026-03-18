/*
 * XREFs of UsbhFdoD0Worker_Action @ 0x1C0003480
 * Callers:
 *     <none>
 * Callees:
 *     Usb_Disconnected @ 0x1C00036E4 (Usb_Disconnected.c)
 *     UsbhCompletePdoWakeIrps @ 0x1C0003700 (UsbhCompletePdoWakeIrps.c)
 *     UsbhSshExitSx @ 0x1C0003838 (UsbhSshExitSx.c)
 *     UsbhFdoUnblockAllPendedPdoD0Irps @ 0x1C0003908 (UsbhFdoUnblockAllPendedPdoD0Irps.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C0004944 (UsbhReleaseFdoPwrLock.c)
 *     UsbhAcquireFdoPwrLock @ 0x1C00049D0 (UsbhAcquireFdoPwrLock.c)
 *     UsbhSetFdoPowerState @ 0x1C0004A78 (UsbhSetFdoPowerState.c)
 *     UsbhReleasePowerContext @ 0x1C0004FD4 (UsbhReleasePowerContext.c)
 *     UsbhResumeHardReset @ 0x1C0005098 (UsbhResumeHardReset.c)
 *     UsbhFdoSetD0Cold @ 0x1C00050E0 (UsbhFdoSetD0Cold.c)
 *     UsbhCheckHubPowerStatus @ 0x1C000559C (UsbhCheckHubPowerStatus.c)
 *     UsbhDisarmHubForWakeDetect @ 0x1C00056DC (UsbhDisarmHubForWakeDetect.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001DAF0 (UsbhEtwLogHubIrpEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00294E0 (_guard_dispatch_icall_nop.c)
 *     UsbhSyncBusDisconnect @ 0x1C003F66C (UsbhSyncBusDisconnect.c)
 *     UsbhFdoSetD0Warm @ 0x1C0046A38 (UsbhFdoSetD0Warm.c)
 *     UsbhException @ 0x1C004FE34 (UsbhException.c)
 */

void __fastcall UsbhFdoD0Worker_Action(struct _DEVICE_OBJECT *a1, __int64 a2, void *a3)
{
  __int64 v5; // rax
  unsigned int v6; // edi
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rsi
  int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // r8
  int v13; // r10d
  int v14; // eax
  __int64 v15; // [rsp+20h] [rbp-58h]
  int v16; // [rsp+48h] [rbp-30h]

  UsbhDisarmHubForWakeDetect(a1);
  if ( (*(_DWORD *)(FdoExt(a1) + 2560) & 4) != 0 )
  {
    v5 = FdoExt(a1);
    if ( *(_QWORD *)(v5 + 4448) )
      v6 = (*(__int64 (__fastcall **)(_QWORD))(v5 + 4448))(*(_QWORD *)(v5 + 4232));
    else
      v6 = -1073741822;
  }
  else
  {
    v6 = -1073741810;
  }
  v7 = FdoExt(a1);
  v8 = FdoExt(a1);
  v9 = v8 + 1384;
  *(_QWORD *)(v8 + 1408) = KeGetCurrentThread();
  Log((_DWORD)a1, 16, 1349731376, v8 + 1384, (int)v6);
  if ( !(unsigned __int8)Usb_Disconnected(v6) )
    v6 = UsbhCheckHubPowerStatus((_DWORD)a1);
  if ( (unsigned __int8)Usb_Disconnected(v6) )
  {
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_D0_WORKER_HUB_DISCONNECT_AFTER_SUSPEND, 0, v6);
    UsbhAcquireFdoPwrLock(a1, v9, 114LL, 846671972LL);
    UsbhSetFdoPowerState(a1, v6, 213LL);
    UsbhReleasePowerContext(a1, a3);
    UsbhReleaseFdoPwrLock(a1, v9);
    UsbhSyncBusDisconnect(a1, v9);
  }
  else
  {
    if ( (v10 & 0xC0000000) == 0xC0000000 )
    {
      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_D0_WORKER_HUB_FAIL_AFTER_SUSPEND, 0, v6);
      v14 = *(_DWORD *)(v7 + 2560);
      *(_DWORD *)(v7 + 4216) = 2;
      if ( (v14 & 0x10) != 0 )
        *(_DWORD *)(v7 + 2560) = v14 & 0xFFFFFFEF;
      LOBYTE(v16) = 0;
      if ( (*(_DWORD *)(v7 + 2560) & 1) != 0 )
        UsbhException((int)a1, 0, 46, 0, 0, v6, 0, usbfile_fdopwr_c, 4046, v16);
      else
        UsbhException((int)a1, 0, 45, 0, 0, v6, 0, usbfile_fdopwr_c, 4051, v16);
      Log((_DWORD)a1, 16, 1346720304, 0, (int)v6);
    }
    v15 = *(int *)(v7 + 4216);
    if ( (v15 & 0xFFFFFFFD) != 0 )
    {
      Log((_DWORD)a1, 16, 1450668653, 0, v15);
      v6 = UsbhFdoSetD0Warm(a1);
      if ( (v6 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected(v6) )
      {
        LOBYTE(v16) = 0;
        UsbhException((int)a1, 0, 43, 0, 0, v6, 0, usbfile_fdopwr_c, 4094, v16);
      }
    }
    else
    {
      Log((_DWORD)a1, 16, 1449356388, 0, v15);
      v6 = UsbhFdoSetD0Cold((_DWORD)a1);
      UsbhResumeHardReset(a1, v9);
      if ( (v6 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected(v6) )
      {
        LOBYTE(v16) = 0;
        UsbhException((int)a1, 0, 44, 0, 0, v6, 0, usbfile_fdopwr_c, 4077, v16);
      }
    }
    Log((_DWORD)a1, 16, 1668301872, 0, 0LL);
    if ( (unsigned int)UsbhAcquireFdoPwrLock(a1, v9, 114LL, 829894756LL) == 210 )
    {
      if ( *(_DWORD *)(FdoExt(a1) + 4212) == 1 )
      {
        v11 = FdoExt(a1);
        v12 = 201LL;
      }
      else
      {
        v11 = FdoExt(a1);
        v12 = 206LL;
      }
      UsbhSetFdoPowerState(a1, *(unsigned int *)(v11 + 4212), v12);
    }
    UsbhReleasePowerContext(a1, a3);
    UsbhReleaseFdoPwrLock(a1, v9);
  }
  Log((_DWORD)a1, 16, 1668301872, 0, 0LL);
  Log((_DWORD)a1, v13, 1934645093, v6, 0LL);
  *(_QWORD *)(v7 + 5096) = MEMORY[0xFFFFF78000000014];
  UsbhFdoUnblockAllPendedPdoD0Irps(a1);
  UsbhSshExitSx(a1, v9);
  if ( (v6 & 0x80000000) == 0 )
    UsbhCompletePdoWakeIrps((_DWORD)a1);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v7 + 1224), a3, 0x20u);
}
