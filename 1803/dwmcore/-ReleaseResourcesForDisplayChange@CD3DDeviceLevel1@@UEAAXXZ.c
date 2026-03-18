/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ @ 0x1800D7EC0
 * Callers:
 *     ?CheckDeviceState@CD3DDeviceLevel1@@QEAAJPEAVCSwapChainBase@@@Z @ 0x180075068 (-CheckDeviceState@CD3DDeviceLevel1@@QEAAJPEAVCSwapChainBase@@@Z.c)
 *     ?ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ @ 0x180076548 (-ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ.c)
 *     ?Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z @ 0x18007BBA0 (-Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z.c)
 *     ?ReleaseResourcesForDisplayChange@CHwFullScreenRenderTarget@@UEAAXXZ @ 0x1800D7CB0 (-ReleaseResourcesForDisplayChange@CHwFullScreenRenderTarget@@UEAAXXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CRenderTargetManager@@QEAAXXZ @ 0x1801524C4 (-ReleaseResourcesForDisplayChange@CRenderTargetManager@@QEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180021CF0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?DeleteFreedResources@CD3DDeviceLevel1@@QEAAXXZ @ 0x1800D7EA0 (-DeleteFreedResources@CD3DDeviceLevel1@@QEAAXXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CD2DContext@@MEAAXXZ @ 0x1800D8310 (-ReleaseResourcesForDisplayChange@CD2DContext@@MEAAXXZ.c)
 *     ?ReleaseRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ @ 0x1800D8564 (-ReleaseRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD3DDeviceLevel1::ReleaseResourcesForDisplayChange(CD3DDeviceLevel1 *this)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 1048) )
  {
    _InterlockedIncrement((volatile signed __int32 *)this + 120);
    CRenderTargetBitmapCache::ReleaseRenderTargetBitmaps((CD3DDeviceLevel1 *)((char *)this + 536));
    CD2DContext::ReleaseResourcesForDisplayChange(this);
    CD3DDeviceLevel1::DeleteFreedResources(this);
    CD3DDeviceLevel1::DeleteFreedResources(this);
    v2 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v2);
    if ( (***((int (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 76))(
           *((_QWORD *)this + 76),
           &GUID_6007896c_3244_4afd_bf18_a6d3beda5023,
           &v2) >= 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 136LL))(v2);
    CMILPoolResource::Release((CD3DDeviceLevel1 *)((char *)this + 472));
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v2);
  }
}
