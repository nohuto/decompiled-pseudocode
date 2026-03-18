/*
 * XREFs of ??1CRenderTarget@@MEAA@XZ @ 0x180079294
 * Callers:
 *     ??1COffScreenRenderTarget@@MEAA@XZ @ 0x180078600 (--1COffScreenRenderTarget@@MEAA@XZ.c)
 *     ??1CDesktopRenderTarget@@EEAA@XZ @ 0x180132860 (--1CDesktopRenderTarget@@EEAA@XZ.c)
 *     ??1CHwndRenderTarget@@MEAA@XZ @ 0x180135A60 (--1CHwndRenderTarget@@MEAA@XZ.c)
 *     ??_GCRenderTarget@@MEAAPEAXI@Z @ 0x18013A190 (--_GCRenderTarget@@MEAAPEAXI@Z.c)
 *     ??1CHolographicInteropTarget@@MEAA@XZ @ 0x1801C15A4 (--1CHolographicInteropTarget@@MEAA@XZ.c)
 * Callees:
 *     ?SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x180079390 (-SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800A9E50 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??$ReleaseInterface@VCDrawingContext@@@@YAXAEAPEAVCDrawingContext@@@Z @ 0x1800C0CA8 (--$ReleaseInterface@VCDrawingContext@@@@YAXAEAPEAVCDrawingContext@@@Z.c)
 */

void __fastcall CRenderTarget::~CRenderTarget(CRenderTarget *this)
{
  *(_QWORD *)this = &CRenderTarget::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 8) = &CRenderTarget::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 9) = &CHolographicInteropTarget::`vftable'{for `IVisualTreeClient'};
  CRenderTarget::SetVisualTree(this, 0LL);
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 12));
  *((_QWORD *)this + 12) = 0LL;
  ReleaseInterface<CDrawingContext>((char *)this + 104);
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
