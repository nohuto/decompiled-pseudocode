/*
 * XREFs of ??1CSurfaceBrush@@UEAA@XZ @ 0x180037F8C
 * Callers:
 *     ??_GCSurfaceBrush@@UEAAPEAXI@Z @ 0x180037EE0 (--_GCSurfaceBrush@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x180005BBC (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034728 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ @ 0x18008D4C4 (-ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B3698 (-InternalRelease@-$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CSurfaceBrush::~CSurfaceBrush(CSurfaceBrush *this)
{
  *(_QWORD *)this = &CSurfaceBrush::`vftable'{for `CContent'};
  *((_QWORD *)this + 7) = &CLinearGradientBrush::`vftable'{for `IVisualListenerInfoProvider'};
  CSpriteVisualContent::ReleasePrimitiveCaches(this);
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 12));
  *((_QWORD *)this + 12) = 0LL;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 14));
  *((_QWORD *)this + 14) = 0LL;
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((char *)this + 104);
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((char *)this + 104);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)this + 8);
  CResource::~CResource(this);
}
