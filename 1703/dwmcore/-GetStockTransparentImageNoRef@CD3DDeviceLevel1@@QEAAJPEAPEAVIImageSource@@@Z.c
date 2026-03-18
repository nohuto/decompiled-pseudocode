/*
 * XREFs of ?GetStockTransparentImageNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAVIImageSource@@@Z @ 0x180196D10
 * Callers:
 *     ?GetStockTransparentImageNoRef@CDrawingContext@@QEAAJPEAPEAVIImageSource@@@Z @ 0x18014C8C8 (-GetStockTransparentImageNoRef@CDrawingContext@@QEAAJPEAPEAVIImageSource@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C4938 (-InternalRelease@-$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x1800D4F00 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 *     ?EnsureBlackBitmapTargets@CD3DDeviceLevel1@@AEAAJXZ @ 0x180196644 (-EnsureBlackBitmapTargets@CD3DDeviceLevel1@@AEAAJXZ.c)
 */

__int64 __fastcall CD3DDeviceLevel1::GetStockTransparentImageNoRef(CD3DDeviceLevel1 *this, struct IImageSource **a2)
{
  unsigned int v2; // ebx
  CRenderTargetImageSource **v3; // rdi
  int v6; // eax
  int v7; // eax

  v2 = 0;
  v3 = (CRenderTargetImageSource **)((char *)this + 848);
  *a2 = 0LL;
  if ( *((_QWORD *)this + 106) )
    goto LABEL_7;
  v6 = CD3DDeviceLevel1::EnsureBlackBitmapTargets(this);
  v2 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x531u);
    return v2;
  }
  Microsoft::WRL::ComPtr<CRenderTargetImageSource>::InternalRelease(v3);
  v7 = CRenderTargetImageSource::Create(*((struct IRenderTarget **)this + 105), 1, v3);
  v2 = v7;
  if ( v7 >= 0 )
LABEL_7:
    *a2 = *v3;
  else
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x535u);
  return v2;
}
