/*
 * XREFs of ?Create@CAtlasImageSource@@SAJPEAVIAtlasEntryOwner@@PEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x180011640
 * Callers:
 *     ?Generate@CGradientSource@@IEAAJPEAVCD3DDeviceLevel1@@AEBVRetrievalParams@1@V?$span@$$CBUD2D1_GRADIENT_STOP@@$0?0@gsl@@_N3W4D2D1_EXTEND_MODE@@@Z @ 0x18001269C (-Generate@CGradientSource@@IEAAJPEAVCD3DDeviceLevel1@@AEBVRetrievalParams@1@V-$span@$$CBUD2D1_GR.c)
 * Callees:
 *     ?AllocateGradientStrip@CAtlasManager@@QEAAJPEAVCAtlasEntry@@@Z @ 0x18001171C (-AllocateGradientStrip@CAtlasManager@@QEAAJPEAVCAtlasEntry@@@Z.c)
 *     ?InternalAddRef@?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@IEBAXXZ @ 0x180013048 (-InternalAddRef@-$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CAtlasImageSource::Create(
        struct IAtlasEntryOwner *a1,
        struct CD3DDeviceLevel1 *a2,
        struct CAtlasImageSource **a3)
{
  _DWORD *v6; // rax
  _DWORD *v7; // rbx
  int GradientStrip; // eax
  unsigned int v9; // edi
  _DWORD *v11; // [rsp+58h] [rbp+20h] BYREF

  v6 = HeapAlloc(WPF::g_processHeap, 0, 0x40uLL);
  v7 = v6;
  if ( v6 )
  {
    v6[2] = 0;
    *(_QWORD *)v6 = &CAtlasImageSource::`vftable'{for `CMILCOMBase'};
    *((_QWORD *)v6 + 2) = &CAtlasImageSource::`vftable'{for `IImageSource'};
    *((_QWORD *)v6 + 3) = &CAtlasImageSource::`vftable'{for `IBitmapRealization'};
    *((_QWORD *)v6 + 4) = 0LL;
    v6[12] = -1;
    *((_QWORD *)v6 + 5) = a1;
    *((_WORD *)v6 + 28) = 0;
  }
  else
  {
    v7 = 0LL;
  }
  v11 = v7;
  Microsoft::WRL::ComPtr<CAtlasImageSource>::InternalAddRef(&v11);
  if ( v7 )
  {
    GradientStrip = CAtlasManager::AllocateGradientStrip(
                      (CAtlasManager *)(((unsigned __int64)a2 + 584) & -(__int64)(a2 != 0LL)),
                      (struct CAtlasEntry *)(v7 + 8));
    v9 = GradientStrip;
    if ( GradientStrip < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, GradientStrip, 0x29u);
    }
    else
    {
      v11 = 0LL;
      *a3 = (struct CAtlasImageSource *)v7;
    }
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x27u);
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v11);
  return v9;
}
