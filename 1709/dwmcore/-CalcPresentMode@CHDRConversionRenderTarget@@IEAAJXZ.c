/*
 * XREFs of ?CalcPresentMode@CHDRConversionRenderTarget@@IEAAJXZ @ 0x1801B8E58
 * Callers:
 *     ?SetMultiplaneOverlayPresentInfo@CHDRConversionRenderTarget@@UEAAJ_NW4DXGI_HDR_METADATA_TYPE@@PEBXIPEAU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@PEAPEAVCBitmapRealization@@@Z @ 0x1801BA4C0 (-SetMultiplaneOverlayPresentInfo@CHDRConversionRenderTarget@@UEAAJ_NW4DXGI_HDR_METADATA_TYPE@@PE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??8@YA_NAEBUtagRECT@@0@Z @ 0x180097070 (--8@YA_NAEBUtagRECT@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?IsDesktopDXGIResource@CHDRConversionRenderTarget@@IEBA_NPEAUIDXGIResource@@@Z @ 0x1801B9878 (-IsDesktopDXGIResource@CHDRConversionRenderTarget@@IEBA_NPEAUIDXGIResource@@@Z.c)
 */

__int64 __fastcall CHDRConversionRenderTarget::CalcPresentMode(CHDRConversionRenderTarget *this)
{
  unsigned int v2; // edi
  int v3; // ecx
  _DWORD *v4; // r8
  int *v5; // r9
  __int64 v6; // r10
  int v7; // edx
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // eax
  __int64 v11; // rax
  __int64 v12; // r8
  signed int v13; // eax
  char v15; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  v3 = 0;
  v4 = (_DWORD *)((char *)this + 676);
  v5 = (int *)((char *)this + 676);
  v6 = 2LL;
  do
  {
    v7 = *v5;
    v8 = v3 + 1;
    v5 += 34;
    if ( !v7 )
      v8 = v3;
    v3 = v8;
    --v6;
  }
  while ( v6 );
  switch ( v8 )
  {
    case 0:
      *((_DWORD *)this + 167) = 0;
      goto LABEL_24;
    case 1:
      v9 = -1;
      v10 = 0;
      while ( !*v4 )
      {
        ++v10;
        v4 += 34;
        if ( v10 >= 2 )
          goto LABEL_18;
      }
      v9 = v10;
LABEL_18:
      *((_DWORD *)this + 167) = v9;
      if ( !CHDRConversionRenderTarget::IsDesktopDXGIResource(this, *((struct IDXGIResource **)this + 17 * v9 + 85)) )
      {
        v11 = *((unsigned int *)this + 167);
        v12 = *((_QWORD *)this + 24);
        v15 = 0;
        v13 = (*(__int64 (__fastcall **)(char *, _QWORD, _QWORD, char *, char *))(v12 + 336))(
                (char *)this + 192,
                *((_QWORD *)this + 17 * v11 + 85),
                *((unsigned int *)this + 34 * v11 + 193),
                (char *)this + 136 * v11 + 700,
                &v15);
        v2 = v13;
        if ( v13 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0x262u);
        else
          *((_DWORD *)this + 166) = (v15 != 0) + 1;
        return v2;
      }
LABEL_24:
      *((_DWORD *)this + 166) = 0;
      return v2;
    case 2:
      if ( *((_DWORD *)this + 166) == 2 || !operator==((_DWORD *)this + 183, (_DWORD *)this + 162) )
        *((_BYTE *)this + 960) = 1;
      *((_DWORD *)this + 167) = 0;
      *((_DWORD *)this + 166) = 3;
      *(_OWORD *)((char *)this + 648) = *(_OWORD *)((char *)this + 732);
      break;
    default:
      v2 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88982F04, 0x286u);
      break;
  }
  return v2;
}
