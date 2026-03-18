/*
 * XREFs of ?Render@CVisualCapture@@UEAAJPEA_N@Z @ 0x180078C70
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJPEA_N@Z @ 0x180078680 (-Render@COffScreenRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?SendCaptureCompleted@CVisualCapture@@IEAAXXZ @ 0x180078B0C (-SendCaptureCompleted@CVisualCapture@@IEAAXXZ.c)
 *     ?EnqueueSetEvent@CVisualCapture@@IEAAJXZ @ 0x180078CC8 (-EnqueueSetEvent@CVisualCapture@@IEAAJXZ.c)
 */

__int64 __fastcall CVisualCapture::Render(CVisualCapture *this, bool *a2)
{
  int v2; // ebx
  signed int v4; // eax
  signed int v5; // eax

  v2 = 0;
  if ( *((_BYTE *)this + 146) )
  {
    v4 = COffScreenRenderTarget::Render(this, a2);
    v2 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0x97u);
    }
    else
    {
      v5 = CVisualCapture::EnqueueSetEvent((CVisualCapture *)((char *)this - 64));
      v2 = v5;
      if ( v5 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0x99u);
    }
  }
  *((_BYTE *)this + 146) = 0;
  if ( v2 < 0 )
    CVisualCapture::SendCaptureCompleted((CVisualCapture *)((char *)this - 64));
  return 0LL;
}
