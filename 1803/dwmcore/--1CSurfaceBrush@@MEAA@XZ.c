/*
 * XREFs of ??1CSurfaceBrush@@MEAA@XZ @ 0x18009A2A0
 * Callers:
 *     ??_GCSurfaceBrush@@MEAAPEAXI@Z @ 0x1800993D0 (--_GCSurfaceBrush@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800357C4 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800515A0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x180089E20 (-InternalRelease@-$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CSurfaceBrush::~CSurfaceBrush(CSurfaceBrush *this)
{
  struct CResource *v1; // rdx

  v1 = (struct CResource *)*((_QWORD *)this + 11);
  *(_QWORD *)this = &CSurfaceBrush::`vftable'{for `CContent'};
  *((_QWORD *)this + 7) = &CLinearGradientBrush::`vftable'{for `IVisualListenerInfoProvider'};
  CResource::UnRegisterNotifierInternal(this, v1);
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 13));
  Microsoft::WRL::ComPtr<IImageSource>::InternalRelease((CRenderTargetImageSource **)this + 12);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)this + 8);
  CResource::~CResource(this);
}
