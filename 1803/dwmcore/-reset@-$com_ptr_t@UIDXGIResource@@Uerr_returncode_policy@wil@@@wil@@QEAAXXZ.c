/*
 * XREFs of ?reset@?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18021E83C
 * Callers:
 *     ?EnsureResources@CCaptureRenderTarget@@AEAAJXZ @ 0x180155D54 (-EnsureResources@CCaptureRenderTarget@@AEAAJXZ.c)
 *     ?Present@CCaptureRenderTarget@@UEAAJ_NI@Z @ 0x180156090 (-Present@CCaptureRenderTarget@@UEAAJ_NI@Z.c)
 *     ?ProcessSetFlipManager@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CAPTURERENDERTARGET_SETFLIPMANAGER@@@Z @ 0x1801563DC (-ProcessSetFlipManager@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CAPTURERENDERTA.c)
 *     ?ReleaseFlipResources@CCaptureRenderTarget@@AEAAXXZ @ 0x1801564CC (-ReleaseFlipResources@CCaptureRenderTarget@@AEAAXXZ.c)
 *     ?ReleaseRenderingResources@CCaptureRenderTarget@@AEAAXXZ @ 0x180156508 (-ReleaseRenderingResources@CCaptureRenderTarget@@AEAAXXZ.c)
 *     ??1Dwm3DRECompositorThunk@@MEAA@XZ @ 0x18017A56C (--1Dwm3DRECompositorThunk@@MEAA@XZ.c)
 *     ?DebugInspectSurface@@YAJPEAUID3D12CommandQueue@@PEAUID3D12Resource@@W4D3D12_RESOURCE_STATES@@@Z @ 0x1801C5C50 (-DebugInspectSurface@@YAJPEAUID3D12CommandQueue@@PEAUID3D12Resource@@W4D3D12_RESOURCE_STATES@@@Z.c)
 *     FlushAndWait @ 0x1801C6298 (FlushAndWait.c)
 *     _anonymous_namespace_::CreateD3D12ResourcesInternal @ 0x1801DF2E0 (_anonymous_namespace_--CreateD3D12ResourcesInternal.c)
 *     ?CreateSharedFence@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@PEAPEAUID3D12Fence@@@Z @ 0x1801DF6A4 (-CreateSharedFence@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@PEAPEAUID3D12F.c)
 *     ?CopyPixels@CColorKeyBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x180216A50 (-CopyPixels@CColorKeyBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE.c)
 *     ?LockForRead@CColorKeyBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x180216DE0 (-LockForRead@CColorKeyBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPE.c)
 *     ?ReadTexture@CColorKeyBitmap@@QEAAXXZ @ 0x180217064 (-ReadTexture@CColorKeyBitmap@@QEAAXXZ.c)
 *     ?Initialize@CFramebuffer@CComputeScribbleRenderer@@AEAAJXZ @ 0x18021C744 (-Initialize@CFramebuffer@CComputeScribbleRenderer@@AEAAJXZ.c)
 *     ?CreateWakeupFence@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@PEAPEAUIDisplayFence@DirectDisplay@Graphics@Windows@@PEAPEAUID3D12Fence@@@Z @ 0x18021D5C4 (-CreateWakeupFence@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@PEAPEAUIDispla.c)
 *     ?ProcessScribbleFrame@CScheduler@CComputeScribbleRenderer@@AEAAJXZ @ 0x18021DD44 (-ProcessScribbleFrame@CScheduler@CComputeScribbleRenderer@@AEAAJXZ.c)
 *     ?Schedule@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@@Z @ 0x18021E1C4 (-Schedule@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@@Z.c)
 *     ?SetupWakeupFence@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@@Z @ 0x18021E3E4 (-SetupWakeupFence@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@@Z.c)
 *     ?Initialize@CComputeScribbleStopwatch@@AEAAJPEAUID3D12CommandQueue@@@Z @ 0x18021EB60 (-Initialize@CComputeScribbleStopwatch@@AEAAJPEAUID3D12CommandQueue@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>::reset(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
