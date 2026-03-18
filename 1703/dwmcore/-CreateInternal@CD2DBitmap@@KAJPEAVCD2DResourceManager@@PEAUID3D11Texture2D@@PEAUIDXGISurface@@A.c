/*
 * XREFs of ?CreateInternal@CD2DBitmap@@KAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@I_NPEAPEAV1@@Z @ 0x18007CB44
 * Callers:
 *     ?CreateD2DBitmapInternal@CD2DContext@@AEAAJPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@_NPEAPEAVCD2DBitmap@@@Z @ 0x1800AEA28 (-CreateD2DBitmapInternal@CD2DContext@@AEAAJPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2.c)
 *     ?CreateSubResourceD2DBitmap@CD2DBitmap@@QEAAJIPEAPEAV1@@Z @ 0x18019A8E0 (-CreateSubResourceD2DBitmap@CD2DBitmap@@QEAAJIPEAPEAV1@@Z.c)
 * Callees:
 *     ?AddRef@CHolographicClient@@UEAAKXZ @ 0x1800471A0 (-AddRef@CHolographicClient@@UEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CD2DBitmap@@IEAA@PEAVCD2DResourceManager@@_N@Z @ 0x18007AC70 (--0CD2DBitmap@@IEAA@PEAVCD2DResourceManager@@_N@Z.c)
 *     ?Initialize@CD2DBitmap@@IEAAJPEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@I@Z @ 0x18007ACFC (-Initialize@CD2DBitmap@@IEAAJPEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AE.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmap::CreateInternal(
        struct CD2DResourceManager *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _OWORD *a5,
        int a6,
        int a7,
        int a8,
        char a9,
        CD2DBitmap **a10)
{
  CD2DBitmap *v14; // rax
  CD2DBitmap *v15; // rbx
  __int64 (__fastcall *v16)(CBitmapOfDeviceBitmaps *); // rax
  int v17; // eax
  unsigned int v18; // edi

  *a10 = 0LL;
  v14 = (CD2DBitmap *)operator new(0x108uLL);
  if ( v14 )
    v15 = CD2DBitmap::CD2DBitmap(v14, a1, a9);
  else
    v15 = 0LL;
  if ( v15 )
  {
    v16 = *(__int64 (__fastcall **)(CBitmapOfDeviceBitmaps *))(*(_QWORD *)v15 + 8LL);
    if ( v16 == CHolographicClient::AddRef )
      CHolographicClient::AddRef(v15);
    else
      v16(v15);
    v17 = CD2DBitmap::Initialize((__int64)v15, a2, a3, a4, a5, a6, a7, a8);
    v18 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x47u);
      (*(void (__fastcall **)(CD2DBitmap *))(*(_QWORD *)v15 + 16LL))(v15);
    }
    else
    {
      *a10 = v15;
    }
  }
  else
  {
    v18 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x3Eu);
  }
  return v18;
}
