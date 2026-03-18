/*
 * XREFs of ?OpenSharedHandleAsD2DBitmap@CD3DDeviceManager@@UEAAJU_LUID@@PEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@MMVDisplayId@@PEAPEAVCD2DBitmap@@@Z @ 0x180088DA0
 * Callers:
 *     ?CreateFromSharedHandle@CD2DBitmap@@SAJU_LUID@@PEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@MMVDisplayId@@PEAPEAV1@@Z @ 0x1800250A0 (-CreateFromSharedHandle@CD2DBitmap@@SAJU_LUID@@PEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180021CF0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?OpenSharedTexture@CD3DDeviceLevel1@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAX_NPEAPEAUID3D11Texture2D@@@Z @ 0x180074C24 (-OpenSharedTexture@CD3DDeviceLevel1@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180088CFC (-GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?ValidateAdapterLuid@CD3DDeviceManager@@QEAAJU_LUID@@@Z @ 0x180089D0C (-ValidateAdapterLuid@CD3DDeviceManager@@QEAAJU_LUID@@@Z.c)
 *     ?CreateD2DBitmapInternal@CD2DContext@@AEAAJPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@_NPEAPEAVCD2DBitmap@@@Z @ 0x180096BAC (-CreateD2DBitmapInternal@CD2DContext@@AEAAJPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

__int64 __fastcall CD3DDeviceManager::OpenSharedHandleAsD2DBitmap(
        __int64 a1,
        struct _LUID a2,
        void *a3,
        bool a4,
        unsigned int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        _QWORD *a10)
{
  CD3DDeviceLevel1 *v10; // rsi
  int v11; // r14d
  int v16; // edi
  unsigned __int64 v17; // rcx
  int v18; // eax
  int D3DDevice; // eax
  struct D3D11_SUBRESOURCE_DATA *v20; // r8
  int v21; // eax
  int v23; // r9d
  unsigned int v24; // [rsp+20h] [rbp-91h]
  CD3DDeviceLevel1 *v25; // [rsp+40h] [rbp-71h] BYREF
  struct ID3D11Texture2D *v26; // [rsp+48h] [rbp-69h] BYREF
  _QWORD *v27; // [rsp+50h] [rbp-61h]
  unsigned __int64 v28; // [rsp+58h] [rbp-59h] BYREF
  int v29; // [rsp+60h] [rbp-51h]
  int v30; // [rsp+64h] [rbp-4Dh]
  BOOL v31; // [rsp+68h] [rbp-49h]
  __int64 v32; // [rsp+70h] [rbp-41h]
  struct D3D11_TEXTURE2D_DESC v33; // [rsp+78h] [rbp-39h] BYREF

  v10 = 0LL;
  v11 = a5;
  v26 = 0LL;
  v27 = a10;
  *a10 = 0LL;
  v25 = 0LL;
  v16 = -2147024809;
  v17 = a5;
  if ( a5 )
  {
    v17 = a5 - 1;
    if ( a5 == 1 || a5 == 3 )
      v16 = 0;
  }
  if ( v16 < 0 )
  {
    v24 = 1796;
    v23 = v16;
    goto LABEL_26;
  }
  v18 = CD3DDeviceManager::ValidateAdapterLuid((CD3DDeviceManager *)v17, a2);
  v16 = v18;
  if ( v18 < 0 )
  {
    v24 = 1797;
    goto LABEL_23;
  }
  D3DDevice = CD3DDeviceManager::GetD3DDevice((CD3DDeviceManager *)(a1 - 16), a2, &v25);
  v16 = D3DDevice;
  if ( D3DDevice < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18023A090, 1u, D3DDevice, 0x707u);
    v10 = v25;
    goto LABEL_15;
  }
  v10 = v25;
  v18 = CD3DDeviceLevel1::OpenSharedTexture(v25, &v33, v20, a3, a4, &v26);
  v16 = v18;
  if ( v18 < 0 )
  {
    v24 = 1805;
LABEL_23:
    v23 = v18;
LABEL_26:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18023A090, 1u, v23, v24);
    goto LABEL_15;
  }
  if ( v33.Format == DXGI_FORMAT_R8_UNORM || v33.Format == DXGI_FORMAT_R8G8_UNORM )
    v11 = 3;
  v31 = 0;
  v25 = (CD3DDeviceLevel1 *)__PAIR64__(v11, v33.Format);
  v28 = __PAIR64__(v11, v33.Format);
  v29 = a7;
  v30 = a8;
  if ( (v33.BindFlags & 0x20) != 0 && v33.Format != DXGI_FORMAT_R10G10B10A2_UNORM )
    v31 = v33.Format != DXGI_FORMAT_B8G8R8X8_UNORM;
  v32 = 0LL;
  v21 = CD2DContext::CreateD2DBitmapInternal(v10, v26, &v33, &v28, a6, a9, 1, v27, v25);
  v16 = v21;
  if ( v21 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18023A090, 1u, v21, 0x738u);
LABEL_15:
  ReleaseInterfaceNoNULL<IWICBitmap>((__int64)v26);
  if ( v10 )
    CMILPoolResource::Release((CD3DDeviceLevel1 *)((char *)v10 + 472));
  return (unsigned int)v16;
}
