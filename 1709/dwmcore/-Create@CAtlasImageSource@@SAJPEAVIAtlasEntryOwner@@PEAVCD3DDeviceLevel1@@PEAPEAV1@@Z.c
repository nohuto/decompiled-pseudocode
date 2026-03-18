/*
 * XREFs of ?Create@CAtlasImageSource@@SAJPEAVIAtlasEntryOwner@@PEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x1800727E4
 * Callers:
 *     ?GetImageSource@CGradientSource@@QEAAJPEAVCDrawingContext@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIImageSource@@@Z @ 0x180071BC0 (-GetImageSource@CGradientSource@@QEAAJPEAVCDrawingContext@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UMil.c)
 * Callees:
 *     ?AllocateGradientStrip@CAtlasManager@@QEAAJPEAVCAtlasEntry@@@Z @ 0x18001714C (-AllocateGradientStrip@CAtlasManager@@QEAAJPEAVCAtlasEntry@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalAddRef@?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@IEBAXXZ @ 0x1800BC15C (-InternalAddRef@-$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x1800BC190 (-InternalRelease@-$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
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
    *((_BYTE *)v6 + 56) = 0;
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
                      (struct CAtlasTexture ***)(((unsigned __int64)a2 + 584) & -(__int64)(a2 != 0LL)),
                      (struct CAtlasEntry *)(v7 + 8));
    v9 = GradientStrip;
    if ( GradientStrip < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, GradientStrip, 0x1Fu);
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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1Du);
  }
  Microsoft::WRL::ComPtr<CAtlasImageSource>::InternalRelease(&v11);
  return v9;
}
