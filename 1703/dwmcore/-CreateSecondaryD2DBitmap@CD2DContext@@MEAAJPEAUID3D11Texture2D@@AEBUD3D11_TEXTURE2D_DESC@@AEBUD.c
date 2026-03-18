/*
 * XREFs of ?CreateSecondaryD2DBitmap@CD2DContext@@MEAAJPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x1800101C0
 * Callers:
 *     ?CreateSecondaryD2DBitmap@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAVDWM_TEXTURE2D_DESC@@PEAUD2D1_BITMAP_PROPERTIES1@@PEAW4DXGI_COLOR_SPACE_TYPE@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x18001B0A8 (-CreateSecondaryD2DBitmap@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAVDWM_TEXTURE2D_DESC@@PEA.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?CreateInternal@CSecondaryD2DBitmap@@KAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAV1@@Z @ 0x180026BD4 (-CreateInternal@CSecondaryD2DBitmap@@KAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@PEAUIDXGIS.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::CreateSecondaryD2DBitmap(
        struct CD2DResourceManager **this,
        struct ID3D11Texture2D *a2,
        const struct D3D11_TEXTURE2D_DESC *a3,
        const struct D2D1_BITMAP_PROPERTIES1 *a4,
        enum DXGI_COLOR_SPACE_TYPE a5,
        struct CSecondaryD2DBitmap **a6)
{
  struct CSecondaryD2DBitmap **v6; // rsi
  int v11; // eax
  unsigned int v12; // ebx
  int Internal; // eax
  struct IDXGISurface *v15; // [rsp+68h] [rbp+10h] BYREF

  v6 = a6;
  v15 = 0LL;
  *a6 = 0LL;
  v11 = ((__int64 (__fastcall *)(struct ID3D11Texture2D *, GUID *, struct IDXGISurface **))a2->lpVtbl->QueryInterface)(
          a2,
          &GUID_cafcb56c_6ac3_4889_bf47_9e23bbd260ec,
          &v15);
  v12 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x8B6u);
  }
  else
  {
    Internal = CSecondaryD2DBitmap::CreateInternal(this[18], a2, v15, a3, a4, a5, v6);
    v12 = Internal;
    if ( Internal < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Internal, 0x8C3u);
  }
  ReleaseInterfaceNoNULL<CD2DPencil>(0LL);
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v15);
  return v12;
}
