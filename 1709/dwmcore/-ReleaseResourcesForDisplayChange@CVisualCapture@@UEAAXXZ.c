/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CVisualCapture@@UEAAXXZ @ 0x1801832D0
 * Callers:
 *     <none>
 * Callees:
 *     ?SendCaptureCompleted@CVisualCapture@@IEAAXXZ @ 0x180078B0C (-SendCaptureCompleted@CVisualCapture@@IEAAXXZ.c)
 */

void __fastcall CVisualCapture::ReleaseResourcesForDisplayChange(CVisualCapture *this)
{
  if ( !*((_BYTE *)this + 321) )
    CVisualCapture::SendCaptureCompleted((CVisualCapture *)((char *)this - 64));
  COffScreenRenderTarget::ReleaseRenderTargets((CVisualCapture *)((char *)this - 64));
}
