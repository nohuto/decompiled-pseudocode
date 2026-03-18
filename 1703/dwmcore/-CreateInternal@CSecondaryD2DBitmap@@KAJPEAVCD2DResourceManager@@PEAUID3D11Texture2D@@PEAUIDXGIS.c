/*
 * XREFs of ?CreateInternal@CSecondaryD2DBitmap@@KAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAV1@@Z @ 0x180026BD4
 * Callers:
 *     ?CreateSecondaryD2DBitmap@CD2DContext@@MEAAJPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x1800101C0 (-CreateSecondaryD2DBitmap@CD2DContext@@MEAAJPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD.c)
 * Callees:
 *     ??0CSecondaryD2DBitmap@@IEAA@PEAVCD2DResourceManager@@@Z @ 0x180006DB0 (--0CSecondaryD2DBitmap@@IEAA@PEAVCD2DResourceManager@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Initialize@CD2DBitmap@@IEAAJPEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@I@Z @ 0x18007ACFC (-Initialize@CD2DBitmap@@IEAAJPEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AE.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSecondaryD2DBitmap::CreateInternal(
        struct CD2DResourceManager *a1,
        struct ID3D11Texture2D *a2,
        struct IDXGISurface *a3,
        const struct D3D11_TEXTURE2D_DESC *a4,
        const struct D2D1_BITMAP_PROPERTIES1 *a5,
        enum DXGI_COLOR_SPACE_TYPE a6,
        struct CSecondaryD2DBitmap **a7)
{
  CSecondaryD2DBitmap *v11; // rax
  CSecondaryD2DBitmap *v12; // rax
  struct CSecondaryD2DBitmap *v13; // rdi
  int v14; // eax
  int v15; // ebx
  void *retaddr; // [rsp+58h] [rbp+0h]

  *a7 = 0LL;
  v11 = (CSecondaryD2DBitmap *)HeapAlloc(WPF::g_processHeap, 0, 0x158uLL);
  if ( !v11 )
  {
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
    __debugbreak();
  }
  v12 = CSecondaryD2DBitmap::CSecondaryD2DBitmap(v11, a1);
  v13 = v12;
  if ( v12 )
  {
    (*(void (__fastcall **)(CSecondaryD2DBitmap *))(*(_QWORD *)v12 + 8LL))(v12);
    v14 = CD2DBitmap::Initialize(v13, a2, a3, a4, a5, a6, DisplayId::None, 0);
    v15 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x71u);
    (*(void (__fastcall **)(__int64))(*((_QWORD *)v13 + 33) + 40LL))((__int64)v13 + 264);
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x55u);
      (*(void (__fastcall **)(struct CSecondaryD2DBitmap *))(*(_QWORD *)v13 + 16LL))(v13);
    }
    else
    {
      *a7 = v13;
    }
  }
  else
  {
    v15 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x4Du);
  }
  return (unsigned int)v15;
}
