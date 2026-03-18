/*
 * XREFs of ?CheckForCaptureCompleted@CVisualCapture@@IEAAXXZ @ 0x18000CBC4
 * Callers:
 *     ?CheckOcclusionState@CVisualCapture@@UEAAJXZ @ 0x18000CB20 (-CheckOcclusionState@CVisualCapture@@UEAAJXZ.c)
 *     ?PostPresent@CVisualCapture@@UEAAJ_N0@Z @ 0x18000CC70 (-PostPresent@CVisualCapture@@UEAAJ_N0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CVisualCapture::CheckForCaptureCompleted(CVisualCapture *this)
{
  void *v2; // rcx

  if ( !*((_BYTE *)this + 449) )
  {
    v2 = (void *)*((_QWORD *)this + 55);
    if ( v2 )
    {
      if ( !WaitForSingleObject(v2, 0) )
        CVisualCapture::SendCaptureCompleted(this);
    }
  }
}
