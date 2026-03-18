/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ @ 0x1801A83C0
 * Callers:
 *     ?CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ @ 0x18002C000 (-CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ.c)
 *     ?Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x18002ED10 (-Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z.c)
 *     ?ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ @ 0x18011B56C (-ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CRenderTargetManager@@QEAAXXZ @ 0x180130E7C (-ReleaseResourcesForDisplayChange@CRenderTargetManager@@QEAAXXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CHwFullScreenRenderTarget@@UEAAXXZ @ 0x1801B89A0 (-ReleaseResourcesForDisplayChange@CHwFullScreenRenderTarget@@UEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180081030 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?ReleaseRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ @ 0x18008D224 (-ReleaseRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?DeleteFreedResources@CD3DDeviceLevel1@@QEAAXXZ @ 0x18011B3D8 (-DeleteFreedResources@CD3DDeviceLevel1@@QEAAXXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CD2DContext@@MEAAXXZ @ 0x1801AADD0 (-ReleaseResourcesForDisplayChange@CD2DContext@@MEAAXXZ.c)
 */

void __fastcall CD3DDeviceLevel1::ReleaseResourcesForDisplayChange(CD3DDeviceLevel1 *this)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 1040) )
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
