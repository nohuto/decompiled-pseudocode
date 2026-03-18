/*
 * XREFs of ?OpenSharedHandleAsD2DBitmap@CD3DDeviceManager@@UEAAJAEBU_GUID@@U_LUID@@PEAXW4D2D1_ALPHA_MODE@@MMVDisplayId@@PEAPEAVCD2DBitmap@@@Z @ 0x180042720
 * Callers:
 *     ?CreateFromSharedHandle@CD2DBitmap@@SAJAEBU_GUID@@U_LUID@@PEAXW4D2D1_ALPHA_MODE@@MMVDisplayId@@PEAPEAV1@@Z @ 0x18007CACC (-CreateFromSharedHandle@CD2DBitmap@@SAJAEBU_GUID@@U_LUID@@PEAXW4D2D1_ALPHA_MODE@@MMVDisplayId@@P.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?ValidateAdapterLuid@CD3DDeviceManager@@QEAAJU_LUID@@@Z @ 0x18004231C (-ValidateAdapterLuid@CD3DDeviceManager@@QEAAJU_LUID@@@Z.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x1800431FC (-GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18004C100 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OpenSharedTexture@CD3DDeviceLevel1@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAX_NPEAPEAUID3D11Texture2D@@@Z @ 0x180079490 (-OpenSharedTexture@CD3DDeviceLevel1@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@.c)
 *     ?CreateD2DBitmapInternal@CD2DContext@@AEAAJPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@_NPEAPEAVCD2DBitmap@@@Z @ 0x1800AEA28 (-CreateD2DBitmapInternal@CD2DContext@@AEAAJPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

__int64 __fastcall CD3DDeviceManager::OpenSharedHandleAsD2DBitmap(
        __int64 a1,
        const struct _GUID *a2,
        struct _LUID a3,
        void *a4,
        unsigned int a5,
        int a6,
        int a7,
        int a8,
        _QWORD *a9)
{
  CD3DDeviceLevel1 *v9; // rsi
  int v10; // r14d
  int v15; // edi
  unsigned __int64 v16; // rcx
  int v17; // eax
  int D3DDevice; // eax
  struct D3D11_SUBRESOURCE_DATA *v19; // r8
  int v20; // eax
  int v22; // r9d
  unsigned int v23; // [rsp+20h] [rbp-91h]
  CD3DDeviceLevel1 *v24; // [rsp+40h] [rbp-71h] BYREF
  struct ID3D11Texture2D *v25; // [rsp+48h] [rbp-69h] BYREF
  _QWORD *v26; // [rsp+50h] [rbp-61h]
  unsigned __int64 v27; // [rsp+58h] [rbp-59h] BYREF
  int v28; // [rsp+60h] [rbp-51h]
  int v29; // [rsp+64h] [rbp-4Dh]
  BOOL v30; // [rsp+68h] [rbp-49h]
  __int64 v31; // [rsp+70h] [rbp-41h]
  struct D3D11_TEXTURE2D_DESC v32; // [rsp+78h] [rbp-39h] BYREF

  v9 = 0LL;
  v10 = a5;
  v25 = 0LL;
  v26 = a9;
  *a9 = 0LL;
  v24 = 0LL;
  v15 = -2147024809;
  v16 = a5;
  if ( a5 )
  {
    v16 = a5 - 1;
    if ( a5 == 1 || a5 == 3 )
      v15 = 0;
  }
  if ( v15 < 0 )
  {
    v23 = 1793;
    v22 = v15;
    goto LABEL_26;
  }
  v17 = CD3DDeviceManager::ValidateAdapterLuid((CD3DDeviceManager *)v16, a3);
  v15 = v17;
  if ( v17 < 0 )
  {
    v23 = 1794;
    v22 = v17;
    goto LABEL_26;
  }
  D3DDevice = CD3DDeviceManager::GetD3DDevice((CD3DDeviceManager *)(a1 - 16), a2, a3, &v24);
  v15 = D3DDevice;
  if ( D3DDevice < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801D55C8, 1u, D3DDevice, 0x704u);
    v9 = v24;
    goto LABEL_14;
  }
  v9 = v24;
  v20 = CD3DDeviceLevel1::OpenSharedTexture(v24, &v32, v19, a4, 1, &v25);
  v15 = v20;
  if ( v20 < 0 )
  {
    v23 = 1802;
    goto LABEL_22;
  }
  if ( v32.Format == DXGI_FORMAT_R8_UNORM || v32.Format == DXGI_FORMAT_R8G8_UNORM )
    v10 = 3;
  v30 = 0;
  v24 = (CD3DDeviceLevel1 *)__PAIR64__(v10, v32.Format);
  v27 = __PAIR64__(v10, v32.Format);
  v28 = a6;
  v29 = a7;
  if ( (v32.BindFlags & 0x20) != 0 && v32.Format != DXGI_FORMAT_R10G10B10A2_UNORM )
    v30 = v32.Format != DXGI_FORMAT_B8G8R8X8_UNORM;
  v31 = 0LL;
  v20 = CD2DContext::CreateD2DBitmapInternal(
          v9,
          v25,
          &v32,
          &v27,
          v32.Format == DXGI_FORMAT_R16G16B16A16_FLOAT,
          a8,
          1,
          v26,
          v24);
  v15 = v20;
  if ( v20 < 0 )
  {
    v23 = 1847;
LABEL_22:
    v22 = v20;
LABEL_26:
    MilInstrumentationCheckHR(0x14u, &dword_1801D55C8, 1u, v22, v23);
  }
LABEL_14:
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v25);
  if ( v9 )
    CMILPoolResource::Release((CD3DDeviceLevel1 *)((char *)v9 + 488));
  return (unsigned int)v15;
}
