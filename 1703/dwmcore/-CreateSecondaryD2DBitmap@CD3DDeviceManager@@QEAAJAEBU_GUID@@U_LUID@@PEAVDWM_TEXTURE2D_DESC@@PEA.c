/*
 * XREFs of ?CreateSecondaryD2DBitmap@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAVDWM_TEXTURE2D_DESC@@PEAUD2D1_BITMAP_PROPERTIES1@@PEAW4DXGI_COLOR_SPACE_TYPE@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x18001B0A8
 * Callers:
 *     ?Create@CSecondaryD2DBitmap@@SAJAEBU_GUID@@U_LUID@@IIW4DXGI_FORMAT@@W4D2D1_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAV1@@Z @ 0x18000711C (-Create@CSecondaryD2DBitmap@@SAJAEBU_GUID@@U_LUID@@IIW4DXGI_FORMAT@@W4D2D1_ALPHA_MODE@@W4DXGI_CO.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?CreateSecondaryD2DBitmap@CD2DContext@@MEAAJPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x1800101C0 (-CreateSecondaryD2DBitmap@CD2DContext@@MEAAJPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD.c)
 *     ?GetCompatibleTextureFormat@CD3DDeviceLevel1@@QEBA?AW4DXGI_FORMAT@@W42@@Z @ 0x180017D00 (-GetCompatibleTextureFormat@CD3DDeviceLevel1@@QEBA-AW4DXGI_FORMAT@@W42@@Z.c)
 *     ?ValidateAdapterLuid@CD3DDeviceManager@@QEAAJU_LUID@@@Z @ 0x18004231C (-ValidateAdapterLuid@CD3DDeviceManager@@QEAAJU_LUID@@@Z.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x1800431FC (-GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18004C100 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z @ 0x1800793BC (-CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEA.c)
 */

__int64 __fastcall CD3DDeviceManager::CreateSecondaryD2DBitmap(
        CD3DDeviceManager *this,
        const struct _GUID *a2,
        struct _LUID a3,
        struct D3D11_TEXTURE2D_DESC *a4,
        struct D2D1_BITMAP_PROPERTIES1 *a5,
        enum DXGI_COLOR_SPACE_TYPE *a6,
        struct CSecondaryD2DBitmap **a7)
{
  DXGI_FORMAT Format; // r13d
  CD3DDeviceLevel1 *v8; // rsi
  struct ID3D11Texture2D *v10; // rbp
  int v14; // eax
  unsigned int v15; // edi
  int D3DDevice; // eax
  struct D2D1_BITMAP_PROPERTIES1 *v17; // rbx
  int v18; // ecx
  int v19; // edx
  DXGI_FORMAT CompatibleTextureFormat; // eax
  CD3DDeviceLevel1 *v21; // rcx
  enum DXGI_COLOR_SPACE_TYPE *v22; // r15
  int v23; // eax
  int SecondaryD2DBitmap; // eax
  CD3DDeviceLevel1 *v26; // [rsp+30h] [rbp-38h] BYREF
  struct ID3D11Texture2D *v27; // [rsp+88h] [rbp+20h] BYREF

  Format = a4->Format;
  v8 = 0LL;
  v26 = 0LL;
  v10 = 0LL;
  v27 = 0LL;
  *a7 = 0LL;
  v14 = CD3DDeviceManager::ValidateAdapterLuid(this, a3);
  v15 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801D55C8, 1u, v14, 0x6AEu);
  }
  else
  {
    D3DDevice = CD3DDeviceManager::GetD3DDevice(this, a2, a3, &v26);
    v15 = D3DDevice;
    if ( D3DDevice < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801D55C8, 1u, D3DDevice, 0x6B0u);
      v8 = v26;
    }
    else
    {
      v8 = v26;
      v17 = a5;
      v18 = *((_DWORD *)v26 + 188);
      v19 = *((_DWORD *)v26 + 189);
      if ( a4->Width > v18 )
      {
        a5->dpiX = (float)((float)v18 / (float)(int)a4->Width) * a5->dpiX;
        a4->Width = v18;
      }
      if ( a4->Height > v19 )
      {
        v17->dpiY = (float)((float)v19 / (float)(int)a4->Height) * v17->dpiY;
        a4->Height = v19;
      }
      CompatibleTextureFormat = (unsigned int)CD3DDeviceLevel1::GetCompatibleTextureFormat(v8, a4->Format);
      v22 = a6;
      a4->Format = CompatibleTextureFormat;
      if ( Format != CompatibleTextureFormat )
      {
        v17->pixelFormat.format = CompatibleTextureFormat;
        *v22 = a4->Format == DXGI_FORMAT_R16G16B16A16_FLOAT;
      }
      v23 = CD3DDeviceLevel1::CreateTexture(v21, (const struct DWM_TEXTURE2D_DESC *)a4, 0LL, &v27);
      v15 = v23;
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &dword_1801D55C8, 1u, v23, 0x6D2u);
        v10 = v27;
      }
      else
      {
        v10 = v27;
        SecondaryD2DBitmap = CD2DContext::CreateSecondaryD2DBitmap(
                               (struct CD2DResourceManager **)v8,
                               v27,
                               a4,
                               v17,
                               *v22,
                               a7);
        v15 = SecondaryD2DBitmap;
        if ( SecondaryD2DBitmap < 0 )
          MilInstrumentationCheckHR(0x14u, &dword_1801D55C8, 1u, SecondaryD2DBitmap, 0x6DDu);
      }
    }
  }
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v10);
  if ( v8 )
    CMILPoolResource::Release((CD3DDeviceLevel1 *)((char *)v8 + 488));
  return v15;
}
