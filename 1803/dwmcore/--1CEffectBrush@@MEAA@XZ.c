/*
 * XREFs of ??1CEffectBrush@@MEAA@XZ @ 0x1800958B8
 * Callers:
 *     ??_GCEffectBrush@@MEAAPEAXI@Z @ 0x180095330 (--_GCEffectBrush@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F244 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800357C4 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ReleaseResources@CEffectBrush@@AEAAXXZ @ 0x1800956D0 (-ReleaseResources@CEffectBrush@@AEAAXXZ.c)
 */

void __fastcall CEffectBrush::~CEffectBrush(CEffectBrush *this)
{
  *(_QWORD *)this = &CEffectBrush::`vftable'{for `CContent'};
  *((_QWORD *)this + 7) = &CLinearGradientBrush::`vftable'{for `IVisualListenerInfoProvider'};
  *((_QWORD *)this + 9) = &CEffectBrush::`vftable';
  CEffectBrush::ReleaseResources(this);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 104);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)this + 12);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 11);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)this + 8);
  CResource::~CResource(this);
}
