/*
 * XREFs of ?SetHardwareProtection@CDWMSwapChain@@UEAAJ_N@Z @ 0x1801EA910
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetupDepthBuffer@CSwapChainBase@@IEAAJXZ @ 0x1800C0448 (-SetupDepthBuffer@CSwapChainBase@@IEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseD2DBitmaps@CSwapChainBase@@IEAAXXZ @ 0x1801EA79C (-ReleaseD2DBitmaps@CSwapChainBase@@IEAAXXZ.c)
 *     ?RefreshBackBufferViews@CSwapChainBase@@IEAAJXZ @ 0x1801EBCD0 (-RefreshBackBufferViews@CSwapChainBase@@IEAAJXZ.c)
 */

__int64 __fastcall CDWMSwapChain::SetHardwareProtection(CDWMSwapChain *this, unsigned __int8 a2)
{
  unsigned int v2; // ebx
  int v5; // eax
  int refreshed; // eax
  int v7; // eax

  v2 = 0;
  if ( a2 != *((_BYTE *)this + 568) )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 53) + 208LL))(*((_QWORD *)this + 53), a2);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x4B2u);
    }
    else
    {
      *((_DWORD *)this + 146) = *((_DWORD *)this + 40);
      *((_BYTE *)this + 568) = a2;
      CSwapChainBase::ReleaseD2DBitmaps(this);
      refreshed = CSwapChainBase::RefreshBackBufferViews(this);
      v2 = refreshed;
      if ( refreshed < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, refreshed, 0x4BAu);
      }
      else
      {
        v7 = CSwapChainBase::SetupDepthBuffer(this);
        v2 = v7;
        if ( v7 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x4BEu);
      }
    }
  }
  return v2;
}
