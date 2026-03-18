/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CVisualCapture@@UEAAXXZ @ 0x1801B7160
 * Callers:
 *     <none>
 * Callees:
 *     ?SendCaptureCompleted@CVisualCapture@@IEAAXXZ @ 0x18000CB4C (-SendCaptureCompleted@CVisualCapture@@IEAAXXZ.c)
 */

void __fastcall CVisualCapture::ReleaseResourcesForDisplayChange(CVisualCapture *this)
{
  COffScreenRenderTarget *v1; // rbx

  v1 = (CVisualCapture *)((char *)this - 64);
  if ( !*((_BYTE *)this + 385) )
    CVisualCapture::SendCaptureCompleted((CVisualCapture *)((char *)this - 64));
  COffScreenRenderTarget::ReleaseRenderTargets(v1);
}
