/*
 * XREFs of ?CheckOcclusionState@CVisualCapture@@UEAAJXZ @ 0x180078AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckForCaptureCompleted@CVisualCapture@@IEAAXXZ @ 0x180078B84 (-CheckForCaptureCompleted@CVisualCapture@@IEAAXXZ.c)
 */

__int64 __fastcall CVisualCapture::CheckOcclusionState(CVisualCapture *this)
{
  CVisualCapture::CheckForCaptureCompleted((CVisualCapture *)((char *)this - 64));
  return *((_BYTE *)this + 146) == 0 ? 0x87A0001 : 0;
}
