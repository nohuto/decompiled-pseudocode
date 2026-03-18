/*
 * XREFs of ??1CColorBrush@@UEAA@XZ @ 0x180070D10
 * Callers:
 *     ??_ECColorBrush@@UEAAPEAXI@Z @ 0x180070A90 (--_ECColorBrush@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ @ 0x180022644 (-ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x180070244 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CColorBrush::~CColorBrush(CColorBrush *this)
{
  *(_QWORD *)this = &CColorBrush::`vftable'{for `CContent'};
  *((_QWORD *)this + 7) = &CLinearGradientBrush::`vftable'{for `IVisualListenerInfoProvider'};
  CSpriteVisualContent::ReleasePrimitiveCaches(this);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((CMILRefCountBase **)this + 8);
  CResource::~CResource(this);
}
