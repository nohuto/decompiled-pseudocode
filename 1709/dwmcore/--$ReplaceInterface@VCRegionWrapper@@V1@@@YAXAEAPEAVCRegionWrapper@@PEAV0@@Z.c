/*
 * XREFs of ??$ReplaceInterface@VCRegionWrapper@@V1@@@YAXAEAPEAVCRegionWrapper@@PEAV0@@Z @ 0x1800C0664
 * Callers:
 *     ?CombineNewAndOldDisplaySets@CDisplayManager@@AEAAJPEAVCDisplaySet@@0@Z @ 0x180010CC8 (-CombineNewAndOldDisplaySets@CDisplayManager@@AEAAJPEAVCDisplaySet@@0@Z.c)
 *     ?InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N4@Z @ 0x180019AC4 (-InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@.c)
 *     ?EnsureRenderTarget@CHwndRenderTargetRemoteApp@@UEAAJXZ @ 0x180147830 (-EnsureRenderTarget@CHwndRenderTargetRemoteApp@@UEAAJXZ.c)
 *     ?NotifyTreeDirtyRegion@CHwndRenderTargetRemoteApp@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegion@@@Z @ 0x180147A00 (-NotifyTreeDirtyRegion@CHwndRenderTargetRemoteApp@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegion@@@Z.c)
 *     ?TransferAdvancedDirectFlipState@CDirectFlipInfo@@QEAAJAEBV1@@Z @ 0x180149748 (-TransferAdvancedDirectFlipState@CDirectFlipInfo@@QEAAJAEBV1@@Z.c)
 *     ?NotifyTreeDirtyRegion@CHolographicInteropTexture@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegion@@@Z @ 0x1801BEB00 (-NotifyTreeDirtyRegion@CHolographicInteropTexture@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegion@@@Z.c)
 *     ?SetAdvancedDirectFlipState@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJPEAVIRenderTargetBitmap@@PEAVIRenderTargetDisplay@@PEAVCRegionWrapper@@@Z @ 0x1801D2A60 (-SetAdvancedDirectFlipState@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJPEAVIRenderTarget.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ReplaceInterface<CRegionWrapper,CRegionWrapper>(__int64 *a1, __int64 (__fastcall ***a2)(_QWORD))
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  *a1 = (__int64)a2;
  if ( a2 )
    return (**a2)(a2);
  return result;
}
