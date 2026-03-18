/*
 * XREFs of ?Create@CAtlasTexture@@SAJPEAVCD3DDeviceLevel1@@IPEAPEAV1@@Z @ 0x1800C0B88
 * Callers:
 *     ?AllocateGradientStrip@CAtlasManager@@QEAAJPEAVCAtlasEntry@@@Z @ 0x18001714C (-AllocateGradientStrip@CAtlasManager@@QEAAJPEAVCAtlasEntry@@@Z.c)
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z @ 0x18001A6C0 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Initialize@CAtlasTexture@@AEAAJPEAVCD3DDeviceLevel1@@I@Z @ 0x18008BBC0 (-Initialize@CAtlasTexture@@AEAAJPEAVCD3DDeviceLevel1@@I@Z.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     ?DestroyResources@CAtlasTexture@@AEAAXXZ @ 0x1801B3A14 (-DestroyResources@CAtlasTexture@@AEAAXXZ.c)
 */

__int64 __fastcall CAtlasTexture::Create(struct CD3DDeviceLevel1 *a1, unsigned int a2, struct CAtlasTexture **a3)
{
  void *v6; // rax
  void *v7; // rbx
  signed int v8; // eax
  unsigned int v9; // edi

  v6 = HeapAlloc(WPF::g_processHeap, 0, 0x28uLL);
  v7 = v6;
  if ( v6 )
  {
    memset_0(v6, 0, 0x28uLL);
    *(_QWORD *)v7 = &CAtlasTexture::`vftable';
    *((_QWORD *)v7 + 1) = 0LL;
    *((_QWORD *)v7 + 2) = 0LL;
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
    if ( v8 >= 0 )
    {
      *a3 = (struct CAtlasTexture *)v7;
      return v9;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x1Bu);
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x19u);
  }
  if ( v7 )
  {
    *(_QWORD *)v7 = &CAtlasTexture::`vftable';
    CAtlasTexture::DestroyResources((CAtlasTexture *)v7);
    WPF::ProcessHeapImpl::Free(*((void **)v7 + 2));
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)v7 + 1);
    WPF::ProcessHeapImpl::Free(v7);
  }
  return v9;
}
