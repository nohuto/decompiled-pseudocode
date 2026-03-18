/*
 * XREFs of ?Render@CVisualCapture@@UEAAJPEA_N@Z @ 0x18000CCC0
 * Callers:
 *     <none>
 * Callees:
 *     ?SendCaptureCompleted@CVisualCapture@@IEAAXXZ @ 0x18000CB4C (-SendCaptureCompleted@CVisualCapture@@IEAAXXZ.c)
 *     ?EnqueueSetEvent@CVisualCapture@@IEAAJXZ @ 0x18000CD18 (-EnqueueSetEvent@CVisualCapture@@IEAAJXZ.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJPEA_N@Z @ 0x18000D7E0 (-Render@COffScreenRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CVisualCapture::Render(CVisualCapture *this, bool *a2)
{
  int v2; // ebx
  int v4; // eax
  int v5; // eax

  v2 = 0;
  if ( *((_BYTE *)this + 202) )
  {
    v4 = COffScreenRenderTarget::Render(this, a2);
    v2 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x97u);
    }
    else
    {
      v5 = CVisualCapture::EnqueueSetEvent((CVisualCapture *)((char *)this - 64));
      v2 = v5;
      if ( v5 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x99u);
    }
  }
  *((_BYTE *)this + 202) = 0;
  if ( v2 < 0 )
    CVisualCapture::SendCaptureCompleted((CVisualCapture *)((char *)this - 64));
  return 0LL;
}
