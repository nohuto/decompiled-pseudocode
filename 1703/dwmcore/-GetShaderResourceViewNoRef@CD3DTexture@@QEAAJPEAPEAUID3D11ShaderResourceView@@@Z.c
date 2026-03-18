/*
 * XREFs of ?GetShaderResourceViewNoRef@CD3DTexture@@QEAAJPEAPEAUID3D11ShaderResourceView@@@Z @ 0x1800169E4
 * Callers:
 *     ?GetBitmapShaderResourceViewNoRef@CRenderTargetBitmap@@UEAAJAEBURenderTargetInfo@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180016590 (-GetBitmapShaderResourceViewNoRef@CRenderTargetBitmap@@UEAAJAEBURenderTargetInfo@@PEAPEAUID3D11S.c)
 *     ?GetBitmapShaderResourceViewFromBitmapSourceNoRef@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@AEBU_GUID@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180186D9C (-GetBitmapShaderResourceViewFromBitmapSourceNoRef@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PE.c)
 *     ?GetShaderResourceViewNoRef@CHwTextureRenderTarget@@UEAAJPEAPEAUID3D11ShaderResourceView@@@Z @ 0x18019BD00 (-GetShaderResourceViewNoRef@CHwTextureRenderTarget@@UEAAJPEAPEAUID3D11ShaderResourceView@@@Z.c)
 *     ?HDRConvertFromIntermediateTargetBitmap@CHwFullScreenRenderTarget@@UEAAJPEAUtagRECT@@@Z @ 0x1801A0D70 (-HDRConvertFromIntermediateTargetBitmap@CHwFullScreenRenderTarget@@UEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateShaderResourceView@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@PEBUD3D11_SHADER_RESOURCE_VIEW_DESC@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180079928 (-CreateShaderResourceView@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@PEBUD3D11_SHADER_RESOURCE_V.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DTexture::GetShaderResourceViewNoRef(CD3DTexture *this, struct ID3D11ShaderResourceView **a2)
{
  int v4; // ebx
  struct ID3D11Resource *v5; // rdx
  int ShaderResourceView; // eax

  *a2 = 0LL;
  v4 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(CD3DTexture *))(*(_QWORD *)this + 24LL))(this)
    && (v5 = (struct ID3D11Resource *)*((_QWORD *)this + 16)) != 0LL )
  {
    if ( *((_QWORD *)this + 28) )
      goto LABEL_4;
    ShaderResourceView = CD3DDeviceLevel1::CreateShaderResourceView(
                           *(CD3DDeviceLevel1 **)(*((_QWORD *)this + 2) + 128LL),
                           v5,
                           0LL,
                           (struct ID3D11ShaderResourceView **)this + 28);
    v4 = ShaderResourceView;
    if ( ShaderResourceView >= 0 )
      goto LABEL_4;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ShaderResourceView, 0x2E2u);
  }
  else
  {
    v4 = -2003292412;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x2DBu);
  }
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x1A2u);
    return (unsigned int)v4;
  }
LABEL_4:
  *a2 = (struct ID3D11ShaderResourceView *)*((_QWORD *)this + 28);
  return (unsigned int)v4;
}
