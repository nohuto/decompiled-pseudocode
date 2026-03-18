/*
 * XREFs of ?CreateSecondaryD2DBitmap@CD3DDeviceManager@@QEAAJU_LUID@@PEAVDWM_TEXTURE2D_DESC@@PEAUD2D1_BITMAP_PROPERTIES1@@PEAW4DXGI_COLOR_SPACE_TYPE@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x180089A7C
 * Callers:
 *     ?Create@CSecondaryD2DBitmap@@SAJU_LUID@@IIAEBUPixelFormatInfo@@AEBVCResourceTag@@PEAPEAV1@@Z @ 0x180083270 (-Create@CSecondaryD2DBitmap@@SAJU_LUID@@IIAEBUPixelFormatInfo@@AEBVCResourceTag@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180021CF0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetCompatibleTextureFormat@CD3DDeviceLevel1@@QEBA?AW4DXGI_FORMAT@@W42@@Z @ 0x1800766C4 (-GetCompatibleTextureFormat@CD3DDeviceLevel1@@QEBA-AW4DXGI_FORMAT@@W42@@Z.c)
 *     ?CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z @ 0x1800767F0 (-CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEA.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180088CFC (-GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?ValidateAdapterLuid@CD3DDeviceManager@@QEAAJU_LUID@@@Z @ 0x180089D0C (-ValidateAdapterLuid@CD3DDeviceManager@@QEAAJU_LUID@@@Z.c)
 *     ?CreateSecondaryD2DBitmap@CD2DContext@@MEAAJPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x180096AF0 (-CreateSecondaryD2DBitmap@CD2DContext@@MEAAJPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD.c)
 */

__int64 __fastcall CD3DDeviceManager::CreateSecondaryD2DBitmap(
        CD3DDeviceManager *this,
        struct _LUID a2,
        struct D3D11_TEXTURE2D_DESC *a3,
        struct D2D1_BITMAP_PROPERTIES1 *a4,
        enum DXGI_COLOR_SPACE_TYPE *a5,
        struct CSecondaryD2DBitmap **a6)
{
  DXGI_FORMAT Format; // r13d
  CD3DDeviceLevel1 *v7; // rsi
  struct ID3D11Texture2D *v8; // rbp
  int v13; // eax
  unsigned int v14; // edi
  int D3DDevice; // eax
  UINT v16; // ecx
  UINT v17; // edx
  DXGI_FORMAT CompatibleTextureFormat; // eax
  CD3DDeviceLevel1 *v19; // rcx
  enum DXGI_COLOR_SPACE_TYPE *v20; // rbx
  int v21; // eax
  int SecondaryD2DBitmap; // eax
  CD3DDeviceLevel1 *v24; // [rsp+30h] [rbp-38h] BYREF
  struct ID3D11Texture2D *v25; // [rsp+80h] [rbp+18h] BYREF

  Format = a3->Format;
  v7 = 0LL;
  v24 = 0LL;
  v8 = 0LL;
  v25 = 0LL;
  *a6 = 0LL;
  v13 = CD3DDeviceManager::ValidateAdapterLuid(this, a2);
  v14 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18023A090, 1u, v13, 0x6B1u);
  }
  else
  {
    D3DDevice = CD3DDeviceManager::GetD3DDevice(this, a2, &v24);
    v14 = D3DDevice;
    if ( D3DDevice < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18023A090, 1u, D3DDevice, 0x6B3u);
      v7 = v24;
    }
    else
    {
      v7 = v24;
      v16 = *((_DWORD *)v24 + 192);
      v17 = *((_DWORD *)v24 + 193);
      if ( a3->Width > v16 )
      {
        a4->dpiX = (float)((float)(int)v16 / (float)(int)a3->Width) * a4->dpiX;
        a3->Width = v16;
      }
      if ( a3->Height > v17 )
      {
        a4->dpiY = (float)((float)(int)v17 / (float)(int)a3->Height) * a4->dpiY;
        a3->Height = v17;
      }
      CompatibleTextureFormat = (unsigned int)CD3DDeviceLevel1::GetCompatibleTextureFormat(v7, a3->Format);
      v20 = a5;
      a3->Format = CompatibleTextureFormat;
      if ( Format != CompatibleTextureFormat )
      {
        a4->pixelFormat.format = CompatibleTextureFormat;
        *v20 = a3->Format == DXGI_FORMAT_R16G16B16A16_FLOAT;
      }
      v21 = CD3DDeviceLevel1::CreateTexture(v19, (const struct DWM_TEXTURE2D_DESC *)a3, 0LL, &v25);
      v14 = v21;
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18023A090, 1u, v21, 0x6D5u);
        v8 = v25;
      }
      else
      {
        v8 = v25;
        SecondaryD2DBitmap = CD2DContext::CreateSecondaryD2DBitmap(v7, v25, a3, a4, *v20, a6);
        v14 = SecondaryD2DBitmap;
        if ( SecondaryD2DBitmap < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18023A090, 1u, SecondaryD2DBitmap, 0x6E0u);
      }
    }
  }
  ReleaseInterfaceNoNULL<IWICBitmap>((__int64)v8);
  if ( v7 )
    CMILPoolResource::Release((CD3DDeviceLevel1 *)((char *)v7 + 472));
  return v14;
}
