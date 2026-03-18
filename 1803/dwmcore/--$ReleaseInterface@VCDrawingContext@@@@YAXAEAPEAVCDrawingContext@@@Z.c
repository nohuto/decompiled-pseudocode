/*
 * XREFs of ??$ReleaseInterface@VCDrawingContext@@@@YAXAEAPEAVCDrawingContext@@@Z @ 0x1800C9650
 * Callers:
 *     ?Render@COffScreenRenderTarget@@UEAAJPEA_N@Z @ 0x18000D7E0 (-Render@COffScreenRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?ReleaseResources@CHwndRenderTarget@@AEAAXXZ @ 0x18005FD88 (-ReleaseResources@CHwndRenderTarget@@AEAAXXZ.c)
 *     ?EnsureDrawingContextFrame@CContentBounder@@AEAAJXZ @ 0x1800703D0 (-EnsureDrawingContextFrame@CContentBounder@@AEAAJXZ.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x18015D484 (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?Realize@CViewportAlignedIntermediateRealizer@@QEAAJPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@PEAVCMILMatrix@@PEAH@Z @ 0x1801C4524 (-Realize@CViewportAlignedIntermediateRealizer@@QEAAJPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingC.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180078D7C (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 */

__int64 __fastcall ReleaseInterface<CDrawingContext>(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = CMILCOMBase::InternalRelease((CMILCOMBase *)(v2 + 16));
    *a1 = 0LL;
  }
  return result;
}
