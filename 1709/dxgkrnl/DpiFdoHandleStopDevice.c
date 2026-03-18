/*
 * XREFs of DpiFdoHandleStopDevice @ 0x1C01DDF40
 * Callers:
 *     DpiFdoHandleRemoveDevice @ 0x1C01DDBA0 (DpiFdoHandleRemoveDevice.c)
 *     DpiFdoHandleSurpriseRemoval @ 0x1C01DE1E0 (DpiFdoHandleSurpriseRemoval.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DpiEnableD3Requests @ 0x1C000F210 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000F314 (DpiCheckForOutstandingD3Requests.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000F49C (-AcquireMiniportListMutex@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C00FB1B0 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     DpiFdoStopMiracastSession @ 0x1C01019A0 (DpiFdoStopMiracastSession.c)
 *     ?StartPnPTransition@DXGSESSIONMGR@@QEAAJXZ @ 0x1C010E47C (-StartPnPTransition@DXGSESSIONMGR@@QEAAJXZ.c)
 *     DpiPnpEnableVga @ 0x1C011CCDC (DpiPnpEnableVga.c)
 *     DpiFdoStopAdapter @ 0x1C01DEF64 (DpiFdoStopAdapter.c)
 *     DpiEnableMsBddFallbackDriver @ 0x1C01E07E8 (DpiEnableMsBddFallbackDriver.c)
 *     DpiLdaStopAllAdaptersInChain @ 0x1C01E84FC (DpiLdaStopAllAdaptersInChain.c)
 */

__int64 __fastcall DpiFdoHandleStopDevice(struct _DEVICE_OBJECT *a1, PIRP Irp)
{
  unsigned int v4; // edi
  PVOID DeviceExtension; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // r14d
  void *v10; // rcx
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rcx
  struct DXGGLOBAL *Global; // rax
  int started; // r14d
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  union _LARGE_INTEGER v18[2]; // [rsp+20h] [rbp-88h] BYREF
  _QWORD v19[10]; // [rsp+30h] [rbp-78h] BYREF

  memset(v19, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v19[1]);
  v4 = 0;
  DeviceExtension = a1->DeviceExtension;
  v19[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v19[3]) = 5;
  LOBYTE(v19[6]) = -1;
  v18[0].QuadPart = -300000000LL;
  DpiFdoStopMiracastSession((__int64)a1, 1, v18, 0x82u);
  KeEnterCriticalRegion();
  if ( *((_BYTE *)DeviceExtension + 483) )
    DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
  v9 = *((_DWORD *)DeviceExtension + 60);
  if ( *((_DWORD *)DeviceExtension + 126) )
  {
    DpiLdaStopAllAdaptersInChain(a1);
  }
  else if ( v9 == 2 )
  {
    DpiFdoStopAdapter(a1);
  }
  v10 = (void *)*((_QWORD *)DeviceExtension + 144);
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0);
    *((_QWORD *)DeviceExtension + 144) = 0LL;
  }
  if ( *((_DWORD *)DeviceExtension + 59) != 4 )
  {
    v10 = (void *)(*((_DWORD *)DeviceExtension + 69) & 7);
    *((_DWORD *)DeviceExtension + (_QWORD)v10 + 61) = *((_DWORD *)DeviceExtension + 60);
    v11 = *((_DWORD *)DeviceExtension + 59);
    ++*((_DWORD *)DeviceExtension + 69);
    *((_DWORD *)DeviceExtension + 60) = v11;
    *((_DWORD *)DeviceExtension + 59) = 4;
  }
  v12 = WdLogNewEntry5_WdEvent(v10, v6, v7, v8);
  *(_QWORD *)(v12 + 24) = a1;
  WdLogEvent5_WdEvent(v12);
  if ( *((_BYTE *)DeviceExtension + 483) )
    DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
  ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
  KeLeaveCriticalRegion();
  if ( (unsigned int)(*((_DWORD *)DeviceExtension + 60) - 5) <= 1 )
  {
    if ( v9 == 2 )
    {
      Global = DXGGLOBAL::GetGlobal(v13);
      started = DXGSESSIONMGR::StartPnPTransition(*((DXGSESSIONMGR **)Global + 73));
      if ( *((_BYTE *)DeviceExtension + 1136) )
      {
        AcquireMiniportListMutex();
        if ( dword_1C0060B30 == 2 )
          DpiEnableMsBddFallbackDriver(v19);
        if ( (struct _DEVICE_OBJECT *)qword_1C0060A80 == a1 )
          qword_1C0060A80 = 0LL;
        _InterlockedExchange64(&qword_1C0060888, 0LL);
        KeReleaseMutex(Mutex, 0);
      }
      DpiPnpEnableVga(1u, 0, started, (__int64)v19);
    }
    else if ( *((_BYTE *)DeviceExtension + 1136) )
    {
      AcquireMiniportListMutex();
      if ( (struct _DEVICE_OBJECT *)qword_1C0060A80 == a1 )
        qword_1C0060A80 = 0LL;
      _InterlockedExchange64(&qword_1C0060888, 0LL);
      KeReleaseMutex(Mutex, 0);
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
  return v4;
}
