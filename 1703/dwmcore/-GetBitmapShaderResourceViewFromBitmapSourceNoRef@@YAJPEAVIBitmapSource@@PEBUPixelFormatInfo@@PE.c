/*
 * XREFs of ?GetBitmapShaderResourceViewFromBitmapSourceNoRef@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@AEBU_GUID@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180186D9C
 * Callers:
 *     ?GetBitmapShaderResourceViewNoRef@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x1801B5380 (-GetBitmapShaderResourceViewNoRef@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBURenderT.c)
 * Callees:
 *     ?GetShaderResourceViewNoRef@CD3DTexture@@QEAAJPEAPEAUID3D11ShaderResourceView@@@Z @ 0x1800169E4 (-GetShaderResourceViewNoRef@CD3DTexture@@QEAAJPEAPEAUID3D11ShaderResourceView@@@Z.c)
 *     ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x180041704 (-RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEB.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x1800431FC (-GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18004C100 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18008F260 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z @ 0x1800B5384 (--$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?ReadTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@@Z @ 0x180197528 (-ReadTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@@Z.c)
 */

__int64 __fastcall GetBitmapShaderResourceViewFromBitmapSourceNoRef(
        struct IBitmapSource *a1,
        const struct PixelFormatInfo *a2,
        const struct BitmapSourceInfo *a3,
        struct _GUID *a4,
        struct ID3D11ShaderResourceView **a5)
{
  struct ID3D11ShaderResourceView **v5; // r15
  struct CHwTexturedColorSource *v6; // rsi
  int D3DDevice; // eax
  CD3DDeviceLevel1 *v11; // rdi
  int v12; // ebx
  int v13; // eax
  struct ID3D11Texture2D **v14; // r14
  int ShaderResourceViewNoRef; // eax
  CD3DDeviceLevel1 *v17; // [rsp+40h] [rbp-10h] BYREF
  struct CHwTexturedColorSource *v18; // [rsp+90h] [rbp+40h] BYREF

  v5 = a5;
  v17 = 0LL;
  v6 = 0LL;
  v18 = 0LL;
  *a5 = 0LL;
  D3DDevice = CD3DDeviceManager::GetD3DDevice((CD3DDeviceManager *)&g_D3DDeviceManager, a4, *(struct _LUID *)a3, &v17);
  v11 = v17;
  v12 = D3DDevice;
  LODWORD(a5) = D3DDevice;
  if ( D3DDevice < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D3DDevice, 0x2B9u);
  }
  else
  {
    v13 = CHwTexturedColorSource::RealizeFromBitmapSource(
            v17,
            a1,
            a2,
            *((_DWORD *)a3 + 2),
            *((_DWORD *)a3 + 4),
            *((_QWORD *)a3 + 3),
            &v18);
    LODWORD(a5) = v13;
    v12 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x2C1u);
      v6 = v18;
    }
    else
    {
      v6 = v18;
      v14 = (struct ID3D11Texture2D **)(*(__int64 (__fastcall **)(struct CHwTexturedColorSource *))(*(_QWORD *)v18 + 56LL))(v18);
      ShaderResourceViewNoRef = CD3DTexture::GetShaderResourceViewNoRef((CD3DTexture *)v14, v5);
      LODWORD(a5) = ShaderResourceViewNoRef;
      v12 = ShaderResourceViewNoRef;
      if ( ShaderResourceViewNoRef < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, ShaderResourceViewNoRef, 0x2C8u);
      }
      else if ( g_LockAndReadTexture )
      {
        CD3DDeviceLevel1::ReadTexture(v11, v14[16]);
      }
    }
  }
  ReleaseInterfaceNoNULL<CPolygon>((__int64)v6);
  if ( v11 )
    CMILPoolResource::Release((CD3DDeviceLevel1 *)((char *)v11 + 488));
  TranslateDXGIorD3DErrorInContext(v12, 0, &a5);
  return (unsigned int)a5;
}
