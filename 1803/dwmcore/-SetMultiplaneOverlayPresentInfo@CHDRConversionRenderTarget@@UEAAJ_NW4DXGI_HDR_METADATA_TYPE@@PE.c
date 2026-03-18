/*
 * XREFs of ?SetMultiplaneOverlayPresentInfo@CHDRConversionRenderTarget@@UEAAJ_NW4DXGI_HDR_METADATA_TYPE@@PEBXIPEAU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@PEAPEAVCBitmapRealization@@@Z @ 0x1801F3D60
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?CalcPresentMode@CHDRConversionRenderTarget@@IEAAJXZ @ 0x1801F2648 (-CalcPresentMode@CHDRConversionRenderTarget@@IEAAJXZ.c)
 *     ?IsDesktopDXGIResource@CHDRConversionRenderTarget@@IEBA_NPEAUIDXGIResource@@@Z @ 0x1801F30E8 (-IsDesktopDXGIResource@CHDRConversionRenderTarget@@IEBA_NPEAUIDXGIResource@@@Z.c)
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
  int v7; // esi
  __int64 v12; // rbp
  struct CBitmapRealization **v14; // rdi
  __int64 v15; // r8
  __int64 v16; // rdx
  char *v17; // rcx
  struct CBitmapRealization *v18; // rax
  int v19; // eax
  int v20; // edi
  int v21; // eax
  int v22; // esi
  __int64 v23; // rcx
  const void *v24; // r8
  __int64 v25; // rdx
  int v27; // [rsp+78h] [rbp+10h]

  v7 = *((_DWORD *)this + 122);
  v27 = v7;
  if ( a2 )
  {
    if ( a5 )
    {
      v12 = a5;
      v14 = a7;
      do
      {
        v15 = *(unsigned int *)a6;
        v16 = 136 * v15;
        v17 = (char *)this + 136 * v15 + 496;
        *(_OWORD *)v17 = *(_OWORD *)a6;
        *((_OWORD *)v17 + 1) = *((_OWORD *)a6 + 1);
        *((_OWORD *)v17 + 2) = *((_OWORD *)a6 + 2);
        *((_OWORD *)v17 + 3) = *((_OWORD *)a6 + 3);
        *((_OWORD *)v17 + 4) = *((_OWORD *)a6 + 4);
        *((_OWORD *)v17 + 5) = *((_OWORD *)a6 + 5);
        *((_OWORD *)v17 + 6) = *((_OWORD *)a6 + 6);
        *((_OWORD *)v17 + 7) = *((_OWORD *)a6 + 7);
        *((_QWORD *)v17 + 16) = *((_QWORD *)a6 + 16);
        if ( a7 )
          v18 = *v14;
        else
          v18 = 0LL;
        *((_QWORD *)this + v15 + 96) = v18;
        if ( *(_DWORD *)((char *)this + v16 + 500)
          && !CHDRConversionRenderTarget::IsDesktopDXGIResource(
                (CSwapChainBase **)this - 27,
                *(struct IDXGIResource **)((char *)this + v16 + 504)) )
        {
          *((_BYTE *)this + 784) = 1;
        }
        a6 = (struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *)((char *)a6 + 136);
        ++v14;
        --v12;
      }
      while ( v12 );
      v7 = v27;
    }
  }
  else
  {
    memset_0((char *)this + 496, 0, 0x120uLL);
  }
  v19 = CHDRConversionRenderTarget::CalcPresentMode((CHDRConversionRenderTarget *)((char *)this - 216));
  v20 = v19;
  if ( v19 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x2CEu);
  if ( v7 == 2 && *((_DWORD *)this + 122) != 2 )
  {
    v21 = (*(__int64 (__fastcall **)(CHDRConversionRenderTarget *, _QWORD, _QWORD, _QWORD, const void *, void *))(*(_QWORD *)this + 392LL))(
            this,
            0LL,
            0LL,
            a3,
            a4,
            &unk_1802AD280);
    v22 = v21;
    if ( v21 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x2D9u);
    if ( !v20 || v20 >= 0 && v22 < 0 )
      v20 = v22;
  }
  v23 = *((_QWORD *)this + 4);
  if ( v23 )
  {
    if ( a2 )
    {
      v24 = a4;
      v25 = a3;
    }
    else
    {
      v24 = 0LL;
      v25 = 0LL;
    }
    (*(void (__fastcall **)(__int64, __int64, const void *))(*(_QWORD *)v23 + 112LL))(v23, v25, v24);
  }
  return (unsigned int)v20;
}
