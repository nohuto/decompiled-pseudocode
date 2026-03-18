/*
 * XREFs of ??1CProjectedShadow@@MEAA@XZ @ 0x1801B3C98
 * Callers:
 *     ??_ECProjectedShadow@@MEAAPEAXI@Z @ 0x1801B3CF0 (--_ECProjectedShadow@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800357C4 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x180089E20 (-InternalRelease@-$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RemoveShadow@CProjectedShadowReceiver@@QEAAXPEAVCProjectedShadow@@@Z @ 0x1801A0C3C (-RemoveShadow@CProjectedShadowReceiver@@QEAAXPEAVCProjectedShadow@@@Z.c)
 */

void __fastcall CProjectedShadow::~CProjectedShadow(CProjectedShadow *this)
{
  *(_QWORD *)this = &CProjectedShadow::`vftable'{for `CContent'};
  *((_QWORD *)this + 7) = &CProjectedShadow::`vftable'{for `IVisualListenerInfoProvider'};
  CProjectedShadowReceiver::RemoveShadow(*((CProjectedShadowReceiver **)this + 9), this);
  CProjectedShadowReceiver::RemoveShadow(*((CProjectedShadowReceiver **)this + 10), this);
  Microsoft::WRL::ComPtr<IImageSource>::InternalRelease((CRenderTargetImageSource **)this + 12);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)this + 8);
  CResource::~CResource(this);
}
