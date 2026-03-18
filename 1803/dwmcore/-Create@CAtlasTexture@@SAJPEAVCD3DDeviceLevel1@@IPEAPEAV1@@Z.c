/*
 * XREFs of ?Create@CAtlasTexture@@SAJPEAVCD3DDeviceLevel1@@IPEAPEAV1@@Z @ 0x180013648
 * Callers:
 *     ?AllocateGradientStrip@CAtlasManager@@QEAAJPEAVCAtlasEntry@@@Z @ 0x18001171C (-AllocateGradientStrip@CAtlasManager@@QEAAJPEAVCAtlasEntry@@@Z.c)
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z @ 0x180089290 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z.c)
 * Callees:
 *     ?Initialize@CAtlasTexture@@AEAAJPEAVCD3DDeviceLevel1@@I@Z @ 0x180013458 (-Initialize@CAtlasTexture@@AEAAJPEAVCD3DDeviceLevel1@@I@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     ?DestroyResources@CAtlasTexture@@AEAAXXZ @ 0x1801EC04C (-DestroyResources@CAtlasTexture@@AEAAXXZ.c)
 */

__int64 __fastcall CAtlasTexture::Create(struct CD3DDeviceLevel1 *a1, unsigned int a2, struct CAtlasTexture **a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  int v8; // eax
  unsigned int v9; // edi
  void *v11; // rcx

  v6 = HeapAlloc(WPF::g_processHeap, 0, 0x28uLL);
  v7 = v6;
  if ( v6 )
  {
    memset_0(v6, 0, 0x28uLL);
    *v7 = &CAtlasTexture::`vftable';
    v7[1] = 0LL;
    v7[2] = 0LL;
    *((_DWORD *)v7 + 6) = 0;
    *((_DWORD *)v7 + 7) = 0;
    *((_DWORD *)v7 + 8) = 0;
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    v8 = CAtlasTexture::Initialize((CAtlasTexture *)v7, a1, a2);
    v9 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x1Bu);
      *v7 = &CAtlasTexture::`vftable';
      CAtlasTexture::DestroyResources((CAtlasTexture *)v7);
      v11 = (void *)v7[2];
      if ( v11 )
        operator delete(v11);
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v7 + 1);
      operator delete(v7);
    }
    else
    {
      *a3 = (struct CAtlasTexture *)v7;
    }
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x19u);
  }
  return v9;
}
