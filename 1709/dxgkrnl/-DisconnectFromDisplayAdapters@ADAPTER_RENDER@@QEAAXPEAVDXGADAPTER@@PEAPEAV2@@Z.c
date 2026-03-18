/*
 * XREFs of ?DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@PEAPEAV2@@Z @ 0x1C01771AC
 * Callers:
 *     ?SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C01AC07C (-SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0008158 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@@Z @ 0x1C017811C (-StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@@Z.c)
 *     DxgkRequestAsyncDisplaySwitchCallout @ 0x1C01AC6B0 (DxgkRequestAsyncDisplaySwitchCallout.c)
 */

void __fastcall ADAPTER_RENDER::DisconnectFromDisplayAdapters(
        ADAPTER_RENDER *this,
        struct DXGADAPTER *a2,
        struct DXGADAPTER **a3)
{
  int v6; // r8d
  _DXGK_WIN32K_PARAM_DATA v7; // [rsp+20h] [rbp-99h] BYREF
  _QWORD v8[10]; // [rsp+40h] [rbp-79h] BYREF
  _QWORD v9[10]; // [rsp+90h] [rbp-29h] BYREF

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 24, 0LL);
  *((_QWORD *)this + 4) = KeGetCurrentThread();
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 40, 0LL);
  *((_QWORD *)this + 6) = KeGetCurrentThread();
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v8, *((struct DXGADAPTER *const *)this + 2), 0LL);
  if ( (int)COREADAPTERACCESS::AcquireExclusive(v8, v6 + 1) >= 0 )
  {
    ADAPTER_RENDER::StopDisplayDevices(this, 2LL);
    ADAPTER_RENDER::StopDisplayDevices(this, 1LL);
  }
  *a3 = a2;
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v8);
  *((_QWORD *)this + 4) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 24, 0LL);
  KeLeaveCriticalRegion();
  *((_QWORD *)this + 6) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 40, 0LL);
  KeLeaveCriticalRegion();
  memset(v9, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v9[1]);
  v9[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v9[3]) = 62;
  LOBYTE(v9[6]) = -1;
  memset(&v7, 0, sizeof(v7));
  v7.SDCFlags = 2447;
  DxgkRequestAsyncDisplaySwitchCallout(&v7, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v9);
}
