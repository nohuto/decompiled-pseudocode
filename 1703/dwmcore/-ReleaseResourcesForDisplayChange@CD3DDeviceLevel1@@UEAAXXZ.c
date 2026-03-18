/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ @ 0x1800CDE60
 * Callers:
 *     ?CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ @ 0x18003A580 (-CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ.c)
 *     ?Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x18003A700 (-Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z.c)
 *     ?ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ @ 0x180078E6C (-ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CHwFullScreenRenderTarget@@UEAAXXZ @ 0x1800CDBD0 (-ReleaseResourcesForDisplayChange@CHwFullScreenRenderTarget@@UEAAXXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CRenderTargetManager@@QEAAXXZ @ 0x180144E74 (-ReleaseResourcesForDisplayChange@CRenderTargetManager@@QEAAXXZ.c)
 * Callees:
 *     ?Release@CScratchRenderTargetBitmap@@UEAAKXZ @ 0x1800061E0 (-Release@CScratchRenderTargetBitmap@@UEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18004C100 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?DeleteFreedResources@CD3DDeviceLevel1@@QEAAXXZ @ 0x1800CDE20 (-DeleteFreedResources@CD3DDeviceLevel1@@QEAAXXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CD2DContext@@MEAAXXZ @ 0x1800CDF30 (-ReleaseResourcesForDisplayChange@CD2DContext@@MEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD3DDeviceLevel1::ReleaseResourcesForDisplayChange(CD3DDeviceLevel1 *this)
{
  char *v2; // rsi
  __int64 v3; // rdi
  CScratchRenderTargetBitmap *v4; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 1121) )
  {
    _InterlockedIncrement((volatile signed __int32 *)this + 124);
    v2 = (char *)this + 552;
    v3 = 0LL;
    if ( *((_DWORD *)this + 144) )
    {
      do
      {
        v4 = *(CScratchRenderTargetBitmap **)(*(_QWORD *)v2 + 8 * v3);
        *((_BYTE *)v4 + 256) = 0;
        CScratchRenderTargetBitmap::Release(v4);
        v3 = (unsigned int)(v3 + 1);
      }
      while ( (unsigned int)v3 < *((_DWORD *)v2 + 6) );
    }
    *((_DWORD *)v2 + 6) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)v2, 8u);
    CD2DContext::ReleaseResourcesForDisplayChange(this);
    CD3DDeviceLevel1::DeleteFreedResources(this);
    CD3DDeviceLevel1::DeleteFreedResources(this);
    v5 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease(&v5);
    if ( (***((int (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 75))(
           *((_QWORD *)this + 75),
           &GUID_6007896c_3244_4afd_bf18_a6d3beda5023,
           &v5) >= 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 136LL))(v5);
    CMILPoolResource::Release((CD3DDeviceLevel1 *)((char *)this + 488));
    Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease(&v5);
  }
}
