/*
 * XREFs of ?Initialize@CD2DBitmap@@IEAAJPEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@I@Z @ 0x1800777A0
 * Callers:
 *     ?CreateInternal@CD2DBitmap@@KAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@I_NPEAPEAV1@@Z @ 0x180025124 (-CreateInternal@CD2DBitmap@@KAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@PEAUIDXGISurface@@A.c)
 *     ?CreateInternal@CSecondaryD2DBitmap@@KAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAV1@@Z @ 0x1800C45A8 (-CreateInternal@CSecondaryD2DBitmap@@KAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@PEAUIDXGIS.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CreateShaderResourceView@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@PEBUD3D11_SHADER_RESOURCE_VIEW_DESC@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x1800767AC (-CreateShaderResourceView@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@PEBUD3D11_SHADER_RESOURCE_V.c)
 *     ?InitializeBitmaps@CD2DBitmap@@IEAAJXZ @ 0x180077470 (-InitializeBitmaps@CD2DBitmap@@IEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmap::Initialize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _OWORD *a5,
        int a6,
        int a7,
        unsigned int a8)
{
  struct ID3D11Resource *v11; // r10
  __int128 v12; // xmm1
  unsigned int v13; // ecx
  const struct D3D11_SHADER_RESOURCE_VIEW_DESC *v14; // r8
  int ShaderResourceView; // eax
  int v16; // ebx
  int v17; // eax
  __int128 v19; // [rsp+30h] [rbp-28h] BYREF
  __int64 v20; // [rsp+40h] [rbp-18h]

  *(_QWORD *)(a1 + 128) = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  *(_QWORD *)(a1 + 136) = a3;
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  v11 = *(struct ID3D11Resource **)(a1 + 128);
  *(_OWORD *)(a1 + 168) = *(_OWORD *)a4;
  *(_OWORD *)(a1 + 184) = *(_OWORD *)(a4 + 16);
  *(_QWORD *)(a1 + 200) = *(_QWORD *)(a4 + 32);
  *(_DWORD *)(a1 + 208) = *(_DWORD *)(a4 + 40);
  *(_OWORD *)(a1 + 216) = *a5;
  v12 = a5[1];
  *(_DWORD *)(a1 + 248) = a6;
  *(_DWORD *)(a1 + 252) = a7;
  *(_DWORD *)(a1 + 256) = a8;
  v19 = 0uLL;
  v20 = 0LL;
  *(_OWORD *)(a1 + 232) = v12;
  if ( !v11 )
  {
    v16 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292412, 0x24Au);
LABEL_17:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x6Cu);
    return (unsigned int)v16;
  }
  v13 = *(_DWORD *)(a1 + 180);
  if ( v13 > 1 )
  {
    LODWORD(v19) = *(_DWORD *)(a1 + 184);
    HIDWORD(v19) = *(_DWORD *)(a1 + 176);
    *(_QWORD *)((char *)&v19 + 4) = 5LL;
    v20 = a8 | 0x100000000LL;
  }
  v14 = (const struct D3D11_SHADER_RESOURCE_VIEW_DESC *)&v19;
  if ( v13 <= 1 )
    v14 = 0LL;
  ShaderResourceView = CD3DDeviceLevel1::CreateShaderResourceView(
                         *(CD3DDeviceLevel1 **)(*(_QWORD *)(a1 + 24) + 24LL),
                         v11,
                         v14,
                         (struct ID3D11ShaderResourceView **)(a1 + 144));
  v16 = ShaderResourceView;
  if ( ShaderResourceView < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ShaderResourceView, 0x25Au);
  if ( v16 < 0 )
    goto LABEL_17;
  v17 = CD2DBitmap::InitializeBitmaps((CD2DBitmap *)a1);
  v16 = v17;
  if ( v17 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x6Du);
  return (unsigned int)v16;
}
