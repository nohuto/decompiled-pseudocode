/*
 * XREFs of DpiFdoHandleStopDevice @ 0x1C01C4520
 * Callers:
 *     DpiFdoHandleRemoveDevice @ 0x1C01C41B0 (DpiFdoHandleRemoveDevice.c)
 *     DpiFdoHandleSurpriseRemoval @ 0x1C01C4780 (DpiFdoHandleSurpriseRemoval.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0001278 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C00012A0 (DpiCheckForOutstandingD3Requests.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C00013AC (-AcquireMiniportListMutex@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C008C2A0 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DpiFdoStopMiracastSession @ 0x1C0102E30 (DpiFdoStopMiracastSession.c)
 *     ?StartPnPTransition@DXGSESSIONMGR@@QEAAJXZ @ 0x1C011B794 (-StartPnPTransition@DXGSESSIONMGR@@QEAAJXZ.c)
 *     DpiPnpEnableVga @ 0x1C012220C (DpiPnpEnableVga.c)
 *     DpiFdoStopAdapter @ 0x1C01C545C (DpiFdoStopAdapter.c)
 *     DpiEnableMsBddFallbackDriver @ 0x1C01C66BC (DpiEnableMsBddFallbackDriver.c)
 *     DpiLdaStopAllAdaptersInChain @ 0x1C01CE0EC (DpiLdaStopAllAdaptersInChain.c)
 */

__int64 __fastcall DpiFdoHandleStopDevice(struct _DEVICE_OBJECT *a1, PIRP Irp)
{
  unsigned int v4; // edi
  PVOID DeviceExtension; // rbx
  int v6; // r14d
  void *v7; // rcx
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  struct DXGGLOBAL *Global; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  int started; // r14d
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  union _LARGE_INTEGER v21[2]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v22[8]; // [rsp+30h] [rbp-68h] BYREF

  memset(v22, 0, sizeof(v22));
  EtwActivityIdControl(3u, (LPGUID)&v22[1]);
  v4 = 0;
  DeviceExtension = a1->DeviceExtension;
  v22[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v22[3]) = 5;
  v21[0].QuadPart = -300000000LL;
  DpiFdoStopMiracastSession((__int64)a1, 1, v21, 0x82u);
  KeEnterCriticalRegion();
  if ( *((_BYTE *)DeviceExtension + 483) )
    DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
  v6 = *((_DWORD *)DeviceExtension + 60);
  if ( *((_DWORD *)DeviceExtension + 126) )
  {
    DpiLdaStopAllAdaptersInChain(a1);
  }
  else if ( v6 == 2 )
  {
    DpiFdoStopAdapter(a1);
  }
  v7 = (void *)*((_QWORD *)DeviceExtension + 144);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0);
    *((_QWORD *)DeviceExtension + 144) = 0LL;
  }
  if ( *((_DWORD *)DeviceExtension + 59) != 4 )
  {
    v7 = (void *)(*((_DWORD *)DeviceExtension + 69) & 7);
    *((_DWORD *)DeviceExtension + (_QWORD)v7 + 61) = *((_DWORD *)DeviceExtension + 60);
    v8 = *((_DWORD *)DeviceExtension + 59);
    ++*((_DWORD *)DeviceExtension + 69);
    *((_DWORD *)DeviceExtension + 60) = v8;
    *((_DWORD *)DeviceExtension + 59) = 4;
  }
  v9 = WdLogNewEntry5_WdEvent(v7);
  *(_QWORD *)(v9 + 24) = a1;
  WdLogEvent5_WdEvent(v9);
  if ( *((_BYTE *)DeviceExtension + 483) )
    DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
  ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
  KeLeaveCriticalRegion();
  if ( v6 == 2 && (unsigned int)(*((_DWORD *)DeviceExtension + 60) - 5) <= 1 )
  {
    Global = DXGGLOBAL::GetGlobal(v11, v10, v12, v13);
    started = DXGSESSIONMGR::StartPnPTransition(*((DXGSESSIONMGR **)Global + 73), v15, v16, v17);
    if ( *((_BYTE *)DeviceExtension + 1136) )
    {
      AcquireMiniportListMutex();
      if ( dword_1C006FCB0 == 2 )
        DpiEnableMsBddFallbackDriver(v22);
      if ( (struct _DEVICE_OBJECT *)qword_1C006FC00 == a1 )
        qword_1C006FC00 = 0LL;
      _InterlockedExchange64(&qword_1C006FA08, 0LL);
      KeReleaseMutex(Mutex, 0);
    }
    DpiPnpEnableVga(1u, 0, started, (__int64)v22);
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
