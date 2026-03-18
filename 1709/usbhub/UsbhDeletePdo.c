/*
 * XREFs of UsbhDeletePdo @ 0x1C0055030
 * Callers:
 *     UsbhWaitConnect @ 0x1C00121B0 (UsbhWaitConnect.c)
 *     UsbhRequestPortSuspend @ 0x1C00268FC (UsbhRequestPortSuspend.c)
 *     Usbh_BusPause_PdoEvent @ 0x1C004544C (Usbh_BusPause_PdoEvent.c)
 *     Usbh_BusPnpFreeResources_PdoEvent @ 0x1C00455C4 (Usbh_BusPnpFreeResources_PdoEvent.c)
 *     Usbh_BusPnpStop_PdoEvent @ 0x1C0045744 (Usbh_BusPnpStop_PdoEvent.c)
 *     Usbh_BusRemove_PdoEvent @ 0x1C00458DC (Usbh_BusRemove_PdoEvent.c)
 *     Usbh_Disconnect_PdoEvent @ 0x1C0045B84 (Usbh_Disconnect_PdoEvent.c)
 *     Usbh_ErrorDisconnect_PdoEvent @ 0x1C0045C7C (Usbh_ErrorDisconnect_PdoEvent.c)
 *     Usbh_PdoRemove_PdoEvent @ 0x1C0045DDC (Usbh_PdoRemove_PdoEvent.c)
 * Callees:
 *     UsbhUnlinkPdoDeviceHandle @ 0x1C00070F0 (UsbhUnlinkPdoDeviceHandle.c)
 *     UsbhDecPdoIoCount @ 0x1C000A050 (UsbhDecPdoIoCount.c)
 *     UsbhDecHubBusy @ 0x1C000B930 (UsbhDecHubBusy.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhSshSetPortsBusyState @ 0x1C0019684 (UsbhSshSetPortsBusyState.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     UsbhDisableTimerObject @ 0x1C001CC00 (UsbhDisableTimerObject.c)
 *     UsbhDisconnectPdoFromHub @ 0x1C003B35C (UsbhDisconnectPdoFromHub.c)
 *     WPP_RECORDER_SF_q @ 0x1C003D59C (WPP_RECORDER_SF_q.c)
 *     SET_PDO_HWPNPSTATE @ 0x1C0043344 (SET_PDO_HWPNPSTATE.c)
 *     UsbhBillboardCleanup @ 0x1C0054BA4 (UsbhBillboardCleanup.c)
 *     UsbhDeleteOrphanPdo @ 0x1C0054EC4 (UsbhDeleteOrphanPdo.c)
 *     UsbhRemoveAndDeletePdo @ 0x1C00565F4 (UsbhRemoveAndDeletePdo.c)
 *     UsbhResetPortData @ 0x1C0056728 (UsbhResetPortData.c)
 *     UsbhEtwLogDeviceInformation @ 0x1C0058F78 (UsbhEtwLogDeviceInformation.c)
 */

void __fastcall UsbhDeletePdo(__int64 a1, struct _DEVICE_OBJECT *a2, int a3, int a4, __int64 a5)
{
  __int64 v9; // r15
  char v10; // r12
  __int64 v11; // rdx
  int v12; // r10d
  _DWORD *v13; // rbx
  _DWORD *v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rdx
  void *v17; // rcx
  void *v18; // rcx
  void *v19; // rcx
  void *v20; // rcx
  void *v21; // rcx
  void *v22; // rcx
  void *v23; // rcx
  __int64 v24; // rdx
  _QWORD *v25; // r8

  v9 = 0LL;
  v10 = 0;
  Log(a1, 256, 1682981967, (__int64)a2, a3);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) != (_WORD)v12 )
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v11,
      v12 + 1,
      v12 + 25,
      (__int64)&WPP_eedbca65ee47349068ca6cb62991bd41_Traceguids,
      a2);
  v13 = PdoExt((__int64)a2);
  if ( a1 )
  {
    FdoExt(a1);
    v9 = a5 + 132;
  }
  else
  {
    UsbhDeleteOrphanPdo(a2);
  }
  if ( a3 == 6 )
  {
    *(_DWORD *)(a5 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    *(_DWORD *)(a5 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a5 + 132));
  }
  else
  {
    if ( a3 != 1 )
      UsbhEtwLogDeviceInformation(v13, &USBHUB_ETW_EVENT_DEVICE_REMOVE, 0LL);
    v14 = v13 + 328;
    if ( *((_QWORD *)v13 + 164) || *((_QWORD *)v13 + 165) )
    {
      v15 = *(_QWORD *)v14;
      if ( *(_DWORD **)(*(_QWORD *)v14 + 8LL) != v14 || (v16 = (_QWORD *)*((_QWORD *)v13 + 165), (_DWORD *)*v16 != v14) )
        __fastfail(3u);
      *v16 = v15;
      *(_QWORD *)(v15 + 8) = v16;
      *(_QWORD *)v14 = 0LL;
      *((_QWORD *)v13 + 165) = 0LL;
    }
    if ( (v13[354] & 8) != 0 )
    {
      UsbhResetPortData(a1, a2, v9);
      v10 = 1;
    }
    SET_PDO_HWPNPSTATE((__int64)a2, 6, a4);
    *(_DWORD *)(a5 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    *(_DWORD *)(a5 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a5 + 132));
    if ( v10 )
      UsbhSshSetPortsBusyState(a1, *((_WORD *)v13 + 710), 1, 0);
    if ( a1 )
      UsbhDisableTimerObject(a1, (__int64)(v13 + 424));
    KeWaitForSingleObject(v13 + 322, Executive, 0, 0, 0LL);
    if ( *((_QWORD *)v13 + 300) )
      UsbhBillboardCleanup(a2);
    v17 = (void *)*((_QWORD *)v13 + 142);
    if ( v17 )
    {
      ExFreePoolWithTag(v17, 0);
      *((_QWORD *)v13 + 142) = 0LL;
    }
    v18 = (void *)*((_QWORD *)v13 + 279);
    if ( v18 )
    {
      ExFreePoolWithTag(v18, 0);
      *((_QWORD *)v13 + 279) = 0LL;
    }
    v19 = (void *)*((_QWORD *)v13 + 354);
    if ( v19 )
    {
      ExFreePoolWithTag(v19, 0);
      *((_QWORD *)v13 + 354) = 0LL;
    }
    v20 = (void *)*((_QWORD *)v13 + 298);
    if ( v20 )
    {
      ExFreePoolWithTag(v20, 0);
      *((_QWORD *)v13 + 298) = 0LL;
    }
    v21 = (void *)*((_QWORD *)v13 + 299);
    if ( v21 )
    {
      ExFreePoolWithTag(v21, 0);
      *((_QWORD *)v13 + 299) = 0LL;
    }
    v22 = (void *)*((_QWORD *)v13 + 315);
    if ( v22 )
    {
      ExFreePoolWithTag(v22, 0);
      *((_QWORD *)v13 + 315) = 0LL;
    }
    v23 = (void *)*((_QWORD *)v13 + 106);
    if ( v23 )
    {
      ExFreePoolWithTag(v23, 0);
      *((_QWORD *)v13 + 106) = 0LL;
    }
    UsbhUnlinkPdoDeviceHandle(a1, (__int64)a2, 2017740855, 1);
    Log(a1, 256, 1682457649, (__int64)a2, 0LL);
    if ( (v13[354] & 1) != 0 )
    {
      UsbhDecPdoIoCount((ULONG_PTR)a2, (ULONG_PTR)a2);
      KeWaitForSingleObject(v13 + 308, Executive, 0, 0, 0LL);
    }
    v25 = (_QWORD *)*((_QWORD *)v13 + 107);
    if ( v25 )
    {
      UsbhDecHubBusy(a1, v24, v25);
      *((_QWORD *)v13 + 107) = 0LL;
    }
    if ( (v13[354] & 2) != 0 )
      UsbhDisconnectPdoFromHub((__int64)a2);
    v13[354] = 16;
    UsbhRemoveAndDeletePdo(a2);
  }
}
