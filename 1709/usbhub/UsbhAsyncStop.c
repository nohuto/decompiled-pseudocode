/*
 * XREFs of UsbhAsyncStop @ 0x1C004BAD0
 * Callers:
 *     Usbh_FDO_WaitPnpStop_CB @ 0x1C0008730 (Usbh_FDO_WaitPnpStop_CB.c)
 * Callees:
 *     Usbh_HubRootHubInitNotification @ 0x1C0007FB8 (Usbh_HubRootHubInitNotification.c)
 *     UsbhReleaseFdoPnpLock @ 0x1C00087D8 (UsbhReleaseFdoPnpLock.c)
 *     UsbhWaitEventWithTimeoutEx @ 0x1C0013490 (UsbhWaitEventWithTimeoutEx.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     Usbh_SSH_Event @ 0x1C00174D0 (Usbh_SSH_Event.c)
 *     UsbhSyncBusPause @ 0x1C00195FC (UsbhSyncBusPause.c)
 *     UsbhDisableTimerObject @ 0x1C001CC00 (UsbhDisableTimerObject.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 *     UsbhAcquireFdoPnpLock @ 0x1C003F788 (UsbhAcquireFdoPnpLock.c)
 *     Usbh_BusPnpFreeResources_PdoEvent @ 0x1C00455C4 (Usbh_BusPnpFreeResources_PdoEvent.c)
 *     UsbhDisableHardReset @ 0x1C004768C (UsbhDisableHardReset.c)
 *     UsbhSshDisabled @ 0x1C0057C5C (UsbhSshDisabled.c)
 */

void __fastcall UsbhAsyncStop(__int64 a1, int a2)
{
  _DWORD *v4; // rsi
  _DWORD *v5; // rax
  _DWORD *v6; // rbx
  __int64 v7; // r9
  int v8; // eax
  int v9; // r10d
  __int64 v10; // r9
  __int64 v11; // rcx
  int Timeout; // [rsp+20h] [rbp-28h]
  __int64 v13; // [rsp+28h] [rbp-20h]

  v4 = FdoExt(*(_QWORD *)(a1 + 8));
  Log(*(_QWORD *)(a1 + 8), 2, 1114850114, 0LL, 0LL);
  UsbhDisableTimerObject(*(_QWORD *)(a1 + 8), *((_QWORD *)v4 + 346));
  if ( (unsigned int)Usbh_HubRootHubInitNotification(*(_QWORD *)(a1 + 8), 0LL, 0LL) == -1073741536 )
  {
    v5 = FdoExt(*(_QWORD *)(a1 + 8));
    v4[640] |= 0x400u;
    v6 = v5;
    KeSetEvent((PRKEVENT)(v4 + 644), 0, 0);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 306), v6 + 390, 0x20u);
  }
  Log(*(_QWORD *)(a1 + 8), 2, 1684357954, 0LL, 0LL);
  v8 = UsbhWaitEventWithTimeoutEx(*(_QWORD *)(a1 + 8), v4 + 644, 5000, 1667394391, (unsigned int)v7 & Timeout, v7 & v13);
  Log(*(_QWORD *)(a1 + 8), 2, 1667379249, v8, 5000LL);
  if ( v9 == 258 )
  {
    Log(*(_QWORD *)(a1 + 8), 2, 1667379250, 0LL, 5000LL);
    v11 = *(_QWORD *)(a1 + 8);
    if ( (v4[640] & 0x400) != 0 )
    {
      Log(v11, 2, 1667379252, v10, 5000LL);
      UsbhTrapFatal_Dbg(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 8));
    }
    Log(v11, 2, 1667379251, v10, 5000LL);
    UsbhReleaseFdoPnpLock(*(_QWORD *)(a1 + 8), a1);
    KeWaitForSingleObject(v4 + 644, Executive, 0, 0, 0LL);
    UsbhAcquireFdoPnpLock(*(_QWORD *)(a1 + 8), a1, 12, 1330933353, 1);
    if ( a2 == 5 )
    {
      UsbhDisableHardReset(*(_QWORD *)(a1 + 8));
      Usbh_SSH_Event(*(PDEVICE_OBJECT *)(a1 + 8), 6u, a1);
      UsbhSshDisabled(*(_QWORD *)(a1 + 8), a1);
      UsbhSyncBusPause(*(struct _DEVICE_OBJECT **)(a1 + 8), a1, 5);
      Usbh_BusPnpFreeResources_PdoEvent(*(_QWORD *)(a1 + 8), a1);
    }
  }
}
