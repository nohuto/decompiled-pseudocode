/*
 * XREFs of ??1CEffectBrush@@MEAA@XZ @ 0x180010F08
 * Callers:
 *     ??_GCEffectBrush@@MEAAPEAXI@Z @ 0x180010630 (--_GCEffectBrush@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x180005BBC (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseResources@CEffectBrush@@AEAAXXZ @ 0x180010D14 (-ReleaseResources@CEffectBrush@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A2C (-InternalRelease@-$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B3698 (-InternalRelease@-$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CEffectBrush::~CEffectBrush(CEffectBrush *this)
{
  *(_QWORD *)this = &CEffectBrush::`vftable'{for `CContent'};
  *((_QWORD *)this + 7) = &CLinearGradientBrush::`vftable'{for `IVisualListenerInfoProvider'};
  *((_QWORD *)this + 10) = &CEffectBrush::`vftable';
  CEffectBrush::ReleaseResources(this);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 112);
  Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease((char *)this + 104);
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((char *)this + 96);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)this + 8);
  CResource::~CResource(this);
}
