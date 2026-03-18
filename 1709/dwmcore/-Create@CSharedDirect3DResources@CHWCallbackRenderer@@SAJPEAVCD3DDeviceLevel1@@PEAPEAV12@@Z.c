/*
 * XREFs of ?Create@CSharedDirect3DResources@CHWCallbackRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV12@@Z @ 0x1800B7F40
 * Callers:
 *     ?Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z @ 0x180020D0C (-Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Init@CSharedDirect3DResources@CHWCallbackRenderer@@AEAAJPEAVCD3DDeviceLevel1@@@Z @ 0x1800B8060 (-Init@CSharedDirect3DResources@CHWCallbackRenderer@@AEAAJPEAVCD3DDeviceLevel1@@@Z.c)
 *     ??0CSharedDirect3DResources@CHWCallbackRenderer@@AEAA@XZ @ 0x1800B81DC (--0CSharedDirect3DResources@CHWCallbackRenderer@@AEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B8668 (-InternalRelease@-$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CHWCallbackRenderer::CSharedDirect3DResources::Create(
        struct CD3DDeviceLevel1 *a1,
        struct CHWCallbackRenderer::CSharedDirect3DResources **a2)
{
  CHWCallbackRenderer::CSharedDirect3DResources *v4; // rax
  volatile signed __int32 *v5; // rbx
  signed int v6; // eax
  unsigned int v7; // edi
  volatile signed __int32 *v9; // [rsp+50h] [rbp+18h] BYREF
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  v9 = 0LL;
  v4 = (CHWCallbackRenderer::CSharedDirect3DResources *)HeapAlloc(WPF::g_processHeap, 0, 0x440uLL);
  if ( v4 )
    v5 = (volatile signed __int32 *)CHWCallbackRenderer::CSharedDirect3DResources::CSharedDirect3DResources(v4);
  else
    v5 = 0LL;
  if ( v5 )
  {
    _InterlockedIncrement(v5 + 2);
    v10 = 0LL;
    v9 = v5;
    Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v10);
    v6 = CHWCallbackRenderer::CSharedDirect3DResources::Init((CHWCallbackRenderer::CSharedDirect3DResources *)v5, a1);
    v7 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x25u);
    }
    else
    {
      v9 = 0LL;
      *a2 = (struct CHWCallbackRenderer::CSharedDirect3DResources *)v5;
    }
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x24u);
  }
  Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v9);
  return v7;
}
