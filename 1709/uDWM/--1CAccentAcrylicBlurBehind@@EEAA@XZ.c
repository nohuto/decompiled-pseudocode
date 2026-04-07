/*
 * XREFs of ??1CAccentAcrylicBlurBehind@@EEAA@XZ @ 0x1800757F0
 * Callers:
 *     ??_GCAccentAcrylicBlurBehind@@EEAAPEAXI@Z @ 0x1800758A0 (--_GCAccentAcrylicBlurBehind@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180076F3C (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseResources@CAccentAcrylicBlurBehind@@AEAAXXZ @ 0x1800771A0 (-ReleaseResources@CAccentAcrylicBlurBehind@@AEAAXXZ.c)
 */

void __fastcall CAccentAcrylicBlurBehind::~CAccentAcrylicBlurBehind(CAccentAcrylicBlurBehind *this)
{
  *(_QWORD *)this = &CAccentAcrylicBlurBehind::`vftable';
  CAccentAcrylicBlurBehind::ReleaseResources(this);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((char *)this + 328);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((char *)this + 320);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((char *)this + 312);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((char *)this + 304);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((char *)this + 296);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((char *)this + 288);
  CRenderDataVisual::~CRenderDataVisual((volatile signed __int32 **)this);
}
