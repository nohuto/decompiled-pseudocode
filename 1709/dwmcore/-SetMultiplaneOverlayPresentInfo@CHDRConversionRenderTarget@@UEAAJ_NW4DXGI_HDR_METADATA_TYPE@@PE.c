/*
 * XREFs of ?SetMultiplaneOverlayPresentInfo@CHDRConversionRenderTarget@@UEAAJ_NW4DXGI_HDR_METADATA_TYPE@@PEBXIPEAU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@PEAPEAVCBitmapRealization@@@Z @ 0x1801BA4C0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?CalcPresentMode@CHDRConversionRenderTarget@@IEAAJXZ @ 0x1801B8E58 (-CalcPresentMode@CHDRConversionRenderTarget@@IEAAJXZ.c)
 *     ?IsDesktopDXGIResource@CHDRConversionRenderTarget@@IEBA_NPEAUIDXGIResource@@@Z @ 0x1801B9878 (-IsDesktopDXGIResource@CHDRConversionRenderTarget@@IEBA_NPEAUIDXGIResource@@@Z.c)
 */

__int64 __fastcall CHDRConversionRenderTarget::SetMultiplaneOverlayPresentInfo(
        CHDRConversionRenderTarget *this,
        char a2,
        unsigned int a3,
        const void *a4,
        unsigned int a5,
        struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *a6,
        struct CBitmapRealization **a7)
{
  int v7; // r13d
  __int64 v13; // rbp
  __int64 v15; // r8
  char *v16; // rcx
  signed int v17; // eax
  int v18; // edi
  signed int v19; // eax
  int v20; // esi
  __int64 v21; // rcx
  const void *v22; // r8
  __int64 v23; // rdx

  v7 = *((_DWORD *)this + 118);
  if ( a2 )
  {
    if ( a5 )
    {
      v13 = a5;
      do
      {
        v15 = *(unsigned int *)a6;
        v16 = (char *)this + 136 * v15 + 480;
        *(_OWORD *)v16 = *(_OWORD *)a6;
        *((_OWORD *)v16 + 1) = *((_OWORD *)a6 + 1);
        *((_OWORD *)v16 + 2) = *((_OWORD *)a6 + 2);
        *((_OWORD *)v16 + 3) = *((_OWORD *)a6 + 3);
        *((_OWORD *)v16 + 4) = *((_OWORD *)a6 + 4);
        *((_OWORD *)v16 + 5) = *((_OWORD *)a6 + 5);
        *((_OWORD *)v16 + 6) = *((_OWORD *)a6 + 6);
        *((_OWORD *)v16 + 7) = *((_OWORD *)a6 + 7);
        *((_QWORD *)v16 + 16) = *((_QWORD *)a6 + 16);
        *((_QWORD *)this + v15 + 94) = *a7;
        if ( *((_DWORD *)this + 34 * v15 + 121)
          && !CHDRConversionRenderTarget::IsDesktopDXGIResource(
                (CSwapChainBase **)this - 24,
                *((struct IDXGIResource **)this + 17 * v15 + 61)) )
        {
          *((_BYTE *)this + 768) = 1;
        }
        a6 = (struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *)((char *)a6 + 136);
        ++a7;
        --v13;
      }
      while ( v13 );
    }
  }
  else
  {
    memset_0((char *)this + 480, 0, 0x120uLL);
  }
  v17 = CHDRConversionRenderTarget::CalcPresentMode((CHDRConversionRenderTarget *)((char *)this - 192));
  v18 = v17;
  if ( v17 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v17, 0x2B6u);
  if ( v7 == 2 && *((_DWORD *)this + 118) != 2 )
  {
    v19 = (*(__int64 (__fastcall **)(CHDRConversionRenderTarget *, _QWORD, _QWORD, _QWORD, const void *, __int64 *))(*(_QWORD *)this + 344LL))(
            this,
            0LL,
            0LL,
            a3,
            a4,
            &`CVisual::SetHeatMapColor'::`2'::sc_defaultValue);
    v20 = v19;
    if ( v19 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v19, 0x2C1u);
    if ( !v18 || v18 >= 0 && v20 < 0 )
      v18 = v20;
  }
  v21 = *((_QWORD *)this + 5);
  if ( v21 )
  {
    if ( a2 )
    {
      v22 = a4;
      v23 = a3;
    }
    else
    {
      v22 = 0LL;
      v23 = 0LL;
    }
    (*(void (__fastcall **)(__int64, __int64, const void *))(*(_QWORD *)v21 + 104LL))(v21, v23, v22);
  }
  return (unsigned int)v18;
}
