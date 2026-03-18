/*
 * XREFs of ??1CNineGridBrush@@MEAA@XZ @ 0x180029B8C
 * Callers:
 *     ??_GCNineGridBrush@@MEAAPEAXI@Z @ 0x180029A10 (--_GCNineGridBrush@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800357C4 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800515A0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CNineGridBrush::~CNineGridBrush(CNineGridBrush *this)
{
  *(_QWORD *)this = &CNineGridBrush::`vftable'{for `CContent'};
  *((_QWORD *)this + 7) = &CLinearGradientBrush::`vftable'{for `IVisualListenerInfoProvider'};
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 9));
  *((_QWORD *)this + 9) = 0LL;
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((char *)this + 64);
  CResource::~CResource(this);
}
