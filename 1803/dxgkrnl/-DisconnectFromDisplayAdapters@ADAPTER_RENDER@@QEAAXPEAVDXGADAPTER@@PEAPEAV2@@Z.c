/*
 * XREFs of ?DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@PEAPEAV2@@Z @ 0x1C01597E4
 * Callers:
 *     ?SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C01A12A4 (-SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0002A74 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@@Z @ 0x1C015C1B4 (-StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@@Z.c)
 *     DxgkRequestAsyncDisplaySwitchCallout @ 0x1C01A1F70 (DxgkRequestAsyncDisplaySwitchCallout.c)
 */

void __fastcall ADAPTER_RENDER::DisconnectFromDisplayAdapters(
        ADAPTER_RENDER *this,
        struct DXGADAPTER *a2,
        struct DXGADAPTER **a3)
{
  _DXGK_WIN32K_PARAM_DATA v6; // [rsp+20h] [rbp-99h] BYREF
  _QWORD v7[10]; // [rsp+40h] [rbp-79h] BYREF
  _QWORD v8[10]; // [rsp+90h] [rbp-29h] BYREF

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 24, 0LL);
  *((_QWORD *)this + 4) = KeGetCurrentThread();
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 40, 0LL);
  *((_QWORD *)this + 6) = KeGetCurrentThread();
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v7, *((struct DXGADAPTER *const *)this + 2), 0LL);
  if ( (int)COREADAPTERACCESS::AcquireExclusive(v7) >= 0 )
  {
    ADAPTER_RENDER::StopDisplayDevices(this, 2LL);
    ADAPTER_RENDER::StopDisplayDevices(this, 1LL);
  }
  *a3 = a2;
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v7);
  *((_QWORD *)this + 4) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 24, 0LL);
  KeLeaveCriticalRegion();
  *((_QWORD *)this + 6) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 40, 0LL);
  KeLeaveCriticalRegion();
  memset(v8, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v8[1]);
  v8[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v8[3]) = 62;
  LOBYTE(v8[6]) = -1;
  memset(&v6, 0, sizeof(v6));
  v6.SDCFlags = 2447;
  DxgkRequestAsyncDisplaySwitchCallout(&v6, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v8);
}
