/*
 * XREFs of ?CheckMultiplaneOverlaySupport@CHDRConversionRenderTarget@@UEAAJIPEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@PEA_N1@Z @ 0x1801B8FF0
 * Callers:
 *     <none>
 * Callees:
 *     ??8@YA_NAEBUtagRECT@@0@Z @ 0x180097070 (--8@YA_NAEBUtagRECT@@0@Z.c)
 *     ?IsDesktopDXGIResource@CHDRConversionRenderTarget@@IEBA_NPEAUIDXGIResource@@@Z @ 0x1801B9878 (-IsDesktopDXGIResource@CHDRConversionRenderTarget@@IEBA_NPEAUIDXGIResource@@@Z.c)
 *     ?IsDesktopRect@CHDRConversionRenderTarget@@IEBA_NAEBUtagRECT@@@Z @ 0x1801B9900 (-IsDesktopRect@CHDRConversionRenderTarget@@IEBA_NAEBUtagRECT@@@Z.c)
 */

__int64 __fastcall CHDRConversionRenderTarget::CheckMultiplaneOverlaySupport(
        CHDRConversionRenderTarget *this,
        unsigned int a2,
        struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *a3,
        bool *a4,
        bool *a5)
{
  CHDRConversionRenderTarget *v8; // rbp
  bool v9; // zf
  _DWORD *v10; // rcx
  int v11; // eax
  unsigned int *i; // rdi
  int v13; // edx

  *a5 = 1;
  if ( a2 == 1 )
  {
    if ( !CHDRConversionRenderTarget::IsDesktopRect(
            (CHDRConversionRenderTarget *)((char *)this - 192),
            (const struct tagRECT *)((char *)a3 + 52))
      || !operator==((_DWORD *)a3 + 9, (_DWORD *)a3 + 13)
      || !operator==(v10, (_DWORD *)a3 + 17) )
    {
      goto LABEL_16;
    }
    v9 = *((_DWORD *)a3 + 21) == 1;
    goto LABEL_14;
  }
  if ( a2 != 2 )
  {
    *a4 = 0;
    return 0LL;
  }
  if ( !*(_DWORD *)a3 )
  {
    v8 = (CHDRConversionRenderTarget *)((char *)this - 192);
    if ( CHDRConversionRenderTarget::IsDesktopDXGIResource(
           (CHDRConversionRenderTarget *)((char *)this - 192),
           *((struct IDXGIResource **)a3 + 1))
      && CHDRConversionRenderTarget::IsDesktopRect(v8, (const struct tagRECT *)((char *)a3 + 52))
      && operator==((_DWORD *)a3 + 9, (_DWORD *)a3 + 13)
      && *((_DWORD *)a3 + 21) == 1 )
    {
      v9 = *((_DWORD *)a3 + 22) == 1;
LABEL_14:
      if ( v9 )
        *a4 = 1;
    }
  }
LABEL_16:
  if ( *a4 )
  {
    v11 = 0;
    if ( a2 )
    {
      for ( i = (unsigned int *)((char *)a3 + 108); !*(i - 19); i += 36 )
      {
        if ( *i > 0xE )
          break;
        v13 = 20483;
        if ( !_bittest(&v13, *i) || i[1] )
          break;
        if ( ++v11 >= a2 )
          return 0LL;
      }
      *a4 = 0;
      *a5 = 0;
    }
  }
  return 0LL;
}
