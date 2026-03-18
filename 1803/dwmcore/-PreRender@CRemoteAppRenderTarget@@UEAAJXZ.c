/*
 * XREFs of ?PreRender@CRemoteAppRenderTarget@@UEAAJXZ @ 0x18015C990
 * Callers:
 *     <none>
 * Callees:
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180041320 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?EnsureRenderTarget@CRemoteAppRenderTarget@@IEAAJXZ @ 0x18015C58C (-EnsureRenderTarget@CRemoteAppRenderTarget@@IEAAJXZ.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::PreRender(struct CVisualTree **this)
{
  unsigned int v1; // ebx
  int v3; // eax
  int v4; // eax

  v1 = 0;
  if ( *((int *)*(this - 6) + 296) >= 3 && this[7] && *((_DWORD *)this + 6) && *((_DWORD *)this + 7) )
  {
    v3 = CRemoteAppRenderTarget::EnsureRenderTarget((CRemoteAppRenderTarget *)(this - 8));
    v1 = v3;
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x7Du);
    }
    else
    {
      v4 = CVisualTree::PreCompute(this[7], 0LL);
      v1 = v4;
      if ( v4 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x7Fu);
    }
  }
  return v1;
}
