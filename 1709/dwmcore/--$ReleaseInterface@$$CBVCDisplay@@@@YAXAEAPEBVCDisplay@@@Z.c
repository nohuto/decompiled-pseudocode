/*
 * XREFs of ??$ReleaseInterface@$$CBVCDisplay@@@@YAXAEAPEBVCDisplay@@@Z @ 0x180083920
 * Callers:
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x18001E590 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 *     ?ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ @ 0x180023CA8 (-ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ.c)
 *     ?GetDisplaySize@CTreeEffectLayer@@SAJVDisplayId@@U_LUID@@PEAI2@Z @ 0x180083878 (-GetDisplaySize@CTreeEffectLayer@@SAJVDisplayId@@U_LUID@@PEAI2@Z.c)
 *     ?GetSnapshotBitmapSourceInfo@CCachedVisualImage@@AEAAJPEBUtagRECT@@PEAUBitmapSourceInfo@@@Z @ 0x18008E4AC (-GetSnapshotBitmapSourceInfo@CCachedVisualImage@@AEAAJPEBUtagRECT@@PEAUBitmapSourceInfo@@@Z.c)
 *     ?CreateOverlayableRenderTargetBitmap@CPlaneCaptureRenderTargetEngine@@IEAAJPEAPEAVIRenderTargetBitmap@@@Z @ 0x18013901C (-CreateOverlayableRenderTargetBitmap@CPlaneCaptureRenderTargetEngine@@IEAAJPEAPEAVIRenderTargetB.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x18013A398 (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ @ 0x180149C10 (-EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ.c)
 *     ?GetPrimaryHMonitor@CHolographicInteropTexture@@AEAAJAEAPEAUHMONITOR__@@@Z @ 0x1801BE8AC (-GetPrimaryHMonitor@CHolographicInteropTexture@@AEAAJAEAPEAUHMONITOR__@@@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ReleaseInterface<CDisplay const>(CMILRefCountBase **a1)
{
  CMILRefCountBase *v2; // rcx
  void (*v3)(void); // rax

  v2 = *a1;
  if ( v2 )
  {
    v3 = *(void (**)(void))(*(_QWORD *)v2 + 8LL);
    if ( (char *)v3 == (char *)CMILRefCountBase::Release )
      CMILRefCountBase::Release(v2);
    else
      v3();
    *a1 = 0LL;
  }
}
