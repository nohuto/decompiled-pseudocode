/*
 * XREFs of ?GetStockTransparentImageNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAVIImageSource@@@Z @ 0x1801A78CC
 * Callers:
 *     ?GetStockTransparentImageNoRef@CDrawingContext@@QEAAJPEAPEAVIImageSource@@@Z @ 0x18013DB10 (-GetStockTransparentImageNoRef@CDrawingContext@@QEAAJPEAPEAVIImageSource@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x1800887C8 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 *     ?EnsureBlackBitmapTargets@CD3DDeviceLevel1@@AEAAJXZ @ 0x1801A709C (-EnsureBlackBitmapTargets@CD3DDeviceLevel1@@AEAAJXZ.c)
 */

__int64 __fastcall CD3DDeviceLevel1::GetStockTransparentImageNoRef(CD3DDeviceLevel1 *this, struct IImageSource **a2)
{
  unsigned int v2; // ebx
  __int64 *v3; // rdi
  signed int v6; // eax
  signed int v7; // eax

  v2 = 0;
  v3 = (__int64 *)((char *)this + 864);
  *a2 = 0LL;
  if ( *((_QWORD *)this + 108) )
    goto LABEL_7;
  v6 = CD3DDeviceLevel1::EnsureBlackBitmapTargets(this);
  v2 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x4D9u);
    return v2;
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v3);
  v7 = CRenderTargetImageSource::Create(
         *((struct IRenderTarget **)this + 107),
         1,
         (struct CRenderTargetImageSource **)v3);
  v2 = v7;
  if ( v7 >= 0 )
LABEL_7:
    *a2 = (struct IImageSource *)*v3;
  else
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x4DDu);
  return v2;
}
