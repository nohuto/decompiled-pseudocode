/*
 * XREFs of ??$ReplaceInterface@UIDXGIResource@@U1@@@YAXAEAPEAUIDXGIResource@@PEAU0@@Z @ 0x18001FC90
 * Callers:
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x18000F688 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z.c)
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18000F84C (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?ProcessSetRoot@CRemotingRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_REMOTINGRENDERTARGET_SETROOT@@@Z @ 0x18012D3B0 (-ProcessSetRoot@CRemotingRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_REMOTINGRENDERTARGET_.c)
 *     ?Init@CDirectFlipInfo@@QEAAXPEAVCOverlayContext@@PEAVIRenderTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainContent@@_NPEBVCRegion@@5@Z @ 0x180155420 (-Init@CDirectFlipInfo@@QEAAXPEAVCOverlayContext@@PEAVIRenderTarget@@PEBVCVisual@@PEAVCCompositio.c)
 *     ?InitRemoteApp@CHwndRenderTargetRemoteApp@@QEAAJPEAVCDesktopRenderTarget@@PEAVCHwndRenderTarget@@PEAVCRemoteApplicationWindow@@@Z @ 0x180155BB4 (-InitRemoteApp@CHwndRenderTargetRemoteApp@@QEAAJPEAVCDesktopRenderTarget@@PEAVCHwndRenderTarget@.c)
 *     ?AddNewContent@CComposeTop@@QEAAJPEAVIImageSource@@PEAVCRegionShape@@AEBVCMILMatrix@@@Z @ 0x180176560 (-AddNewContent@CComposeTop@@QEAAJPEAVIImageSource@@PEAVCRegionShape@@AEBVCMILMatrix@@@Z.c)
 *     ?GetAdvancedDirectFlipRestoreBuffer@CHwFullScreenRenderTarget@@UEAAJ_NPEAPEAUID3D11Texture2D@@@Z @ 0x1801A0C00 (-GetAdvancedDirectFlipRestoreBuffer@CHwFullScreenRenderTarget@@UEAAJ_NPEAPEAUID3D11Texture2D@@@Z.c)
 *     ?SetDirectFlipOverride@CHwFullScreenRenderTarget@@UEAAJPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@AEBUtagRECT@@@Z @ 0x1801A1040 (-SetDirectFlipOverride@CHwFullScreenRenderTarget@@UEAAJPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYP.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ReplaceInterface<IDXGIResource,IDXGIResource>(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *a1 = a2;
  if ( a2 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  return result;
}
