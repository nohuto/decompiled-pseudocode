/*
 * XREFs of ??4?$com_ptr_t@VCColorGradientStop@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCColorGradientStop@@@Z @ 0x1801B3050
 * Callers:
 *     ?SetRootVisual@CCaptureRenderTarget@@QEAAJPEAVCVisual@@@Z @ 0x1801568D4 (-SetRootVisual@CCaptureRenderTarget@@QEAAJPEAVCVisual@@@Z.c)
 *     ?ProcessSetRoot@CCaptureController@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CAPTURECONTROLLER_SETROOT@@@Z @ 0x180182E70 (-ProcessSetRoot@CCaptureController@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CAPTURECONTROLLER_SETROO.c)
 *     ?AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x1801A7194 (-AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV-$DynArray@UMilRectF@@$0A@@@@Z.c)
 *     ?EnsureDrawlistBrush@CLinearGradientLegacyMilBrush@@QEAAJXZ @ 0x1801B34C4 (-EnsureDrawlistBrush@CLinearGradientLegacyMilBrush@@QEAAJXZ.c)
 *     ?EnsureDDisplayResources@CDisplay@@QEBAJXZ @ 0x1801C7F50 (-EnsureDDisplayResources@CDisplay@@QEBAJXZ.c)
 *     _anonymous_namespace_::CreateD3D12ResourcesInternal @ 0x1801DF2E0 (_anonymous_namespace_--CreateD3D12ResourcesInternal.c)
 *     ?GetDwm3DRERenderTargetNoRef@CHwStereoFullScreenRenderTarget@@UEAAJPEAUIDwm3DRECompositor@@PEAPEAUIDwm3DRERenderTarget@@@Z @ 0x1801F1330 (-GetDwm3DRERenderTargetNoRef@CHwStereoFullScreenRenderTarget@@UEAAJPEAUIDwm3DRECompositor@@PEAPE.c)
 *     ?SetStereoContext@CHwStereoFullScreenRenderTarget@@UEAAJW4StereoContext@@@Z @ 0x1801F1780 (-SetStereoContext@CHwStereoFullScreenRenderTarget@@UEAAJW4StereoContext@@@Z.c)
 *     ?Initialize@CScheduler@CComputeScribbleRenderer@@AEAAJPEBVCDisplay@@@Z @ 0x18021D9CC (-Initialize@CScheduler@CComputeScribbleRenderer@@AEAAJPEBVCDisplay@@@Z.c)
 *     ?Initialize@CComputeScribbleStopwatch@@AEAAJPEAUID3D12CommandQueue@@@Z @ 0x18021EB60 (-Initialize@CComputeScribbleStopwatch@@AEAAJPEAUID3D12CommandQueue@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall wil::com_ptr_t<CColorGradientStop,wil::err_returncode_policy>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdi

  v2 = *a1;
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return a1;
}
