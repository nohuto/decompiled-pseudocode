/*
 * XREFs of ?EnsureRenderTargets@CMagnifierRenderTarget@@MEAAJXZ @ 0x180137E60
 * Callers:
 *     ?Slice@CMagnifierRenderTarget@@MEAAJXZ @ 0x180138AF0 (-Slice@CMagnifierRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseRenderTargets@COffScreenRenderTarget@@IEAAXXZ @ 0x180078594 (-ReleaseRenderTargets@COffScreenRenderTarget@@IEAAXXZ.c)
 *     ?EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ @ 0x180137EB8 (-EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ.c)
 */

__int64 __fastcall CMagnifierRenderTarget::EnsureRenderTargets(CMagnifierRenderTarget *this)
{
  unsigned int v1; // ebx
  signed int v3; // eax

  v1 = 0;
  if ( *((_DWORD *)this + 86) )
  {
    if ( !*((_DWORD *)this + 60) )
    {
      v3 = CMagnifierRenderTarget::EnsureSharedRenderTargets(this);
      v1 = v3;
      if ( v3 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0x1B9u);
        COffScreenRenderTarget::ReleaseRenderTargets(this);
      }
    }
  }
  return v1;
}
