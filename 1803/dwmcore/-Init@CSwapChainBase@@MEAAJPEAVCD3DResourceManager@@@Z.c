/*
 * XREFs of ?Init@CSwapChainBase@@MEAAJPEAVCD3DResourceManager@@@Z @ 0x1800C0340
 * Callers:
 *     ?Init@CDWMSwapChain@@MEAAJPEAVCD3DResourceManager@@@Z @ 0x18007D6E0 (-Init@CDWMSwapChain@@MEAAJPEAVCD3DResourceManager@@@Z.c)
 * Callees:
 *     ?Init@CD3DResource@@IEAAXPEAVIMILPoolManager@@I@Z @ 0x180021AD4 (-Init@CD3DResource@@IEAAXPEAVIMILPoolManager@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetupBackBuffers@CSwapChainBase@@IEAAJPEAVCD3DResourceManager@@@Z @ 0x1800C01D4 (-SetupBackBuffers@CSwapChainBase@@IEAAJPEAVCD3DResourceManager@@@Z.c)
 *     ?SetupDepthBuffer@CSwapChainBase@@IEAAJXZ @ 0x1800C0448 (-SetupDepthBuffer@CSwapChainBase@@IEAAJXZ.c)
 */

__int64 __fastcall CSwapChainBase::Init(CSwapChainBase *this, struct CD3DResourceManager *a2)
{
  struct CD3DResourceManager *v3; // rdx
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax

  CD3DResource::Init(this, a2, 0);
  *((_QWORD *)this + 47) = v3;
  v4 = CSwapChainBase::SetupBackBuffers(this, v3);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x38u);
  }
  else
  {
    v6 = CSwapChainBase::SetupDepthBuffer(this);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x39u);
  }
  return v5;
}
