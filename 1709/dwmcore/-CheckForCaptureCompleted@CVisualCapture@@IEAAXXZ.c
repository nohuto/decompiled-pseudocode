/*
 * XREFs of ?CheckForCaptureCompleted@CVisualCapture@@IEAAXXZ @ 0x180078B84
 * Callers:
 *     ?CheckOcclusionState@CVisualCapture@@UEAAJXZ @ 0x180078AE0 (-CheckOcclusionState@CVisualCapture@@UEAAJXZ.c)
 *     ?PostPresent@CVisualCapture@@UEAAJ_N0@Z @ 0x180078C20 (-PostPresent@CVisualCapture@@UEAAJ_N0@Z.c)
 * Callees:
 *     ?SendCaptureCompleted@CVisualCapture@@IEAAXXZ @ 0x180078B0C (-SendCaptureCompleted@CVisualCapture@@IEAAXXZ.c)
 */

void __fastcall CVisualCapture::CheckForCaptureCompleted(CVisualCapture *this)
{
  void *v2; // rcx

  if ( !*((_BYTE *)this + 385) )
  {
    v2 = (void *)*((_QWORD *)this + 47);
    if ( v2 )
    {
      if ( !WaitForSingleObject(v2, 0) )
        CVisualCapture::SendCaptureCompleted(this);
    }
  }
}
