/*
 * XREFs of ?CreateInternal@CD2DBitmap@@KAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@I_NPEAPEAV1@@Z @ 0x1800BAAB4
 * Callers:
 *     ?CreateD2DBitmapInternal@CD2DContext@@AEAAJPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@_NPEAPEAVCD2DBitmap@@@Z @ 0x180043BBC (-CreateD2DBitmapInternal@CD2DContext@@AEAAJPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2.c)
 *     ?CreateSubResourceD2DBitmap@CD2DBitmap@@QEAAJIPEAPEAV1@@Z @ 0x1801ABADC (-CreateSubResourceD2DBitmap@CD2DBitmap@@QEAAJIPEAPEAV1@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x180027AA0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ??0CD2DBitmap@@IEAA@PEAVCD2DResourceManager@@_N@Z @ 0x18004C6C0 (--0CD2DBitmap@@IEAA@PEAVCD2DResourceManager@@_N@Z.c)
 *     ?Initialize@CD2DBitmap@@IEAAJPEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@I@Z @ 0x18004C74C (-Initialize@CD2DBitmap@@IEAAJPEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AE.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmap::CreateInternal(
        struct CD2DResourceManager *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _OWORD *a5,
        int a6,
        int a7,
        unsigned int a8,
        char a9,
        CD2DBitmap **a10)
{
  CD2DBitmap *v14; // rax
  CD2DBitmap *v15; // rbx
  __int64 (__fastcall *v16)(CMILCOMBase *); // rax
  signed int v17; // eax
  unsigned int v18; // edi

  *a10 = 0LL;
  v14 = (CD2DBitmap *)operator new(0x108uLL);
  if ( v14 )
    v15 = CD2DBitmap::CD2DBitmap(v14, a1, a9);
  else
    v15 = 0LL;
  if ( v15 )
  {
    v16 = *(__int64 (__fastcall **)(CMILCOMBase *))(*(_QWORD *)v15 + 8LL);
    if ( v16 == CMILCOMBase::InternalAddRef )
      CMILCOMBase::InternalAddRef(v15);
    else
      v16(v15);
    v17 = CD2DBitmap::Initialize((__int64)v15, a2, a3, a4, a5, a6, a7, a8);
    v18 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v17, 0x49u);
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
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x40u);
  }
  return v18;
}
