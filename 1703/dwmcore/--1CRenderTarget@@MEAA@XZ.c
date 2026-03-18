/*
 * XREFs of ??1CRenderTarget@@MEAA@XZ @ 0x1800B4C74
 * Callers:
 *     ??1COffScreenRenderTarget@@MEAA@XZ @ 0x180027524 (--1COffScreenRenderTarget@@MEAA@XZ.c)
 *     ??1CHwndRenderTarget@@MEAA@XZ @ 0x1800CD9A0 (--1CHwndRenderTarget@@MEAA@XZ.c)
 *     ??1CDesktopRenderTarget@@EEAA@XZ @ 0x18014673C (--1CDesktopRenderTarget@@EEAA@XZ.c)
 *     ??_GCRenderTarget@@MEAAPEAXI@Z @ 0x180148F60 (--_GCRenderTarget@@MEAAPEAXI@Z.c)
 *     ??1CHolographicInteropTarget@@MEAA@XZ @ 0x1801A6624 (--1CHolographicInteropTarget@@MEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034728 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x1800B4D20 (-SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z.c)
 *     ??$ReleaseInterface@VCDrawingContext@@@@YAXAEAPEAVCDrawingContext@@@Z @ 0x1800CA50C (--$ReleaseInterface@VCDrawingContext@@@@YAXAEAPEAVCDrawingContext@@@Z.c)
 */

void __fastcall CRenderTarget::~CRenderTarget(CRenderTarget *this)
{
  *(_QWORD *)this = &CRenderTarget::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 8) = &CRenderTarget::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 9) = &COffScreenRenderTarget::`vftable'{for `IVisualTreeClient'};
  CRenderTarget::SetVisualTree(this, 0LL);
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 12));
  *((_QWORD *)this + 12) = 0LL;
  ReleaseInterface<CDrawingContext>((char *)this + 104);
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
