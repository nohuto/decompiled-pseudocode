/*
 * XREFs of ?Create@CSharedDirect3DResources@CHWCallbackRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV12@@Z @ 0x1800BF768
 * Callers:
 *     ?Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z @ 0x180075F10 (-Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0CSharedDirect3DResources@CHWCallbackRenderer@@AEAA@XZ @ 0x1800BF7FC (--0CSharedDirect3DResources@CHWCallbackRenderer@@AEAA@XZ.c)
 *     ?Init@CSharedDirect3DResources@CHWCallbackRenderer@@AEAAJPEAVCD3DDeviceLevel1@@@Z @ 0x1800BF934 (-Init@CSharedDirect3DResources@CHWCallbackRenderer@@AEAAJPEAVCD3DDeviceLevel1@@@Z.c)
 */

__int64 __fastcall CHWCallbackRenderer::CSharedDirect3DResources::Create(
        struct CD3DDeviceLevel1 *a1,
        struct CHWCallbackRenderer::CSharedDirect3DResources **a2)
{
  CHWCallbackRenderer::CSharedDirect3DResources *v4; // rax
  volatile signed __int32 *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi

  v4 = (CHWCallbackRenderer::CSharedDirect3DResources *)HeapAlloc(WPF::g_processHeap, 0, 0x4A0uLL);
  if ( v4 )
    v5 = (volatile signed __int32 *)CHWCallbackRenderer::CSharedDirect3DResources::CSharedDirect3DResources(v4);
  else
    v5 = 0LL;
  if ( v5 )
  {
    _InterlockedIncrement(v5 + 2);
    v6 = CHWCallbackRenderer::CSharedDirect3DResources::Init((CHWCallbackRenderer::CSharedDirect3DResources *)v5, a1);
    v7 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x25u);
      CMILRefCountBase::Release((CMILRefCountBase *)v5);
    }
    else
    {
      *a2 = (struct CHWCallbackRenderer::CSharedDirect3DResources *)v5;
    }
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x24u);
  }
  return v7;
}
