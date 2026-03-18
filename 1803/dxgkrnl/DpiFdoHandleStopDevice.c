/*
 * XREFs of DpiFdoHandleStopDevice @ 0x1C01F5E10
 * Callers:
 *     DpiFdoHandleRemoveDevice @ 0x1C01F5450 (DpiFdoHandleRemoveDevice.c)
 *     DpiFdoHandleSurpriseRemoval @ 0x1C01F60B0 (DpiFdoHandleSurpriseRemoval.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0001CC0 (DpiEnableD3Requests.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C0001CD4 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000B870 (DpiCheckForOutstandingD3Requests.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C00DCF54 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     ?StartPnPTransition@DXGSESSIONMGR@@QEAAJXZ @ 0x1C01D0B5C (-StartPnPTransition@DXGSESSIONMGR@@QEAAJXZ.c)
 *     DpiFdoStopAdapter @ 0x1C01FAB88 (DpiFdoStopAdapter.c)
 *     DpiFdoStopMiracastSession @ 0x1C01FB3E0 (DpiFdoStopMiracastSession.c)
 *     DpiEnableMsBddFallbackDriver @ 0x1C01FD2B4 (DpiEnableMsBddFallbackDriver.c)
 *     DpiPnpEnableVga @ 0x1C01FDF14 (DpiPnpEnableVga.c)
 *     DpiLdaStopAllAdaptersInChain @ 0x1C0209B04 (DpiLdaStopAllAdaptersInChain.c)
 */

__int64 __fastcall DpiFdoHandleStopDevice(struct _DEVICE_OBJECT *a1, PIRP Irp)
{
  __int64 v4; // rdx
  unsigned int v5; // edi
  PVOID DeviceExtension; // rbx
  __int64 v7; // rdx
  int v8; // r14d
  void *v9; // rcx
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v14; // rcx
  unsigned int started; // r14d
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v18; // [rsp+20h] [rbp-88h] BYREF
  _QWORD v19[10]; // [rsp+30h] [rbp-78h] BYREF

  memset(v19, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v19[1]);
  LOBYTE(v4) = 1;
  v5 = 0;
  DeviceExtension = a1->DeviceExtension;
  v19[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v19[3]) = 5;
  LOBYTE(v19[6]) = -1;
  v18 = -300000000LL;
  DpiFdoStopMiracastSession(a1, v4, &v18, 130LL);
  KeEnterCriticalRegion();
  if ( *((_BYTE *)DeviceExtension + 483) )
    DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
  v8 = *((_DWORD *)DeviceExtension + 60);
  if ( *((_DWORD *)DeviceExtension + 126) )
  {
    DpiLdaStopAllAdaptersInChain(a1);
  }
  else if ( v8 == 2 )
  {
    DpiFdoStopAdapter(a1);
  }
  v9 = (void *)*((_QWORD *)DeviceExtension + 144);
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0);
    *((_QWORD *)DeviceExtension + 144) = 0LL;
  }
  if ( *((_DWORD *)DeviceExtension + 59) != 4 )
  {
    v9 = (void *)(*((_DWORD *)DeviceExtension + 69) & 7);
    *((_DWORD *)DeviceExtension + (_QWORD)v9 + 61) = *((_DWORD *)DeviceExtension + 60);
    v10 = *((_DWORD *)DeviceExtension + 59);
    ++*((_DWORD *)DeviceExtension + 69);
    *((_DWORD *)DeviceExtension + 60) = v10;
    *((_DWORD *)DeviceExtension + 59) = 4;
  }
  v11 = WdLogNewEntry5_WdEvent(v9, v7);
  *(_QWORD *)(v11 + 24) = a1;
  WdLogEvent5_WdEvent(v11);
  if ( *((_BYTE *)DeviceExtension + 483) )
    DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
  ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
  KeLeaveCriticalRegion();
  if ( (unsigned int)(*((_DWORD *)DeviceExtension + 60) - 5) <= 1 )
  {
    if ( v8 == 2 )
    {
      Global = DXGGLOBAL::GetGlobal(v12);
      started = DXGSESSIONMGR::StartPnPTransition(*((DXGSESSIONMGR **)Global + 74));
      if ( *((_BYTE *)DeviceExtension + 1136) )
      {
        AcquireMiniportListMutex();
        if ( dword_1C007AA88 == 2 )
          DpiEnableMsBddFallbackDriver(v19);
        if ( (struct _DEVICE_OBJECT *)qword_1C007A9D8 == a1 )
          qword_1C007A9D8 = 0LL;
        _InterlockedExchange64(&qword_1C007A788, 0LL);
        KeReleaseMutex((PRKMUTEX)Mutex, 0);
      }
      LOBYTE(v14) = 1;
      DpiPnpEnableVga(v14, 0LL, started, v19);
    }
    else if ( *((_BYTE *)DeviceExtension + 1136) )
    {
      AcquireMiniportListMutex();
      if ( (struct _DEVICE_OBJECT *)qword_1C007A9D8 == a1 )
        qword_1C007A9D8 = 0LL;
      _InterlockedExchange64(&qword_1C007A788, 0LL);
      KeReleaseMutex((PRKMUTEX)Mutex, 0);
    }
  }
  DxgkMiracastQueryMiracastSupportInternal(0LL);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->MinorFunction == 4 )
  {
    ++Irp->CurrentLocation;
    Irp->Tail.Overlay.CurrentStackLocation = CurrentStackLocation + 1;
    Irp->IoStatus.Status = 0;
    return (unsigned int)IofCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
  }
  return v5;
}
