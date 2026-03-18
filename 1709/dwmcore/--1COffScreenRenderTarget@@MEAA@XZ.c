/*
 * XREFs of ??1COffScreenRenderTarget@@MEAA@XZ @ 0x180078600
 * Callers:
 *     ??_GCVisualCapture@@UEAAPEAXI@Z @ 0x180078A20 (--_GCVisualCapture@@UEAAPEAXI@Z.c)
 *     ??1CIndirectSwapchainRenderTarget@@EEAA@XZ @ 0x180136DA8 (--1CIndirectSwapchainRenderTarget@@EEAA@XZ.c)
 *     ??1CMagnifierRenderTarget@@EEAA@XZ @ 0x180137DD8 (--1CMagnifierRenderTarget@@EEAA@XZ.c)
 *     ??1CPlaneCaptureRenderTargetEngine@@EEAA@XZ @ 0x1801461A0 (--1CPlaneCaptureRenderTargetEngine@@EEAA@XZ.c)
 *     ??_ECOffScreenRenderTarget@@MEAAPEAXI@Z @ 0x180149BE0 (--_ECOffScreenRenderTarget@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ReleaseRenderTargets@COffScreenRenderTarget@@IEAAXXZ @ 0x180078594 (-ReleaseRenderTargets@COffScreenRenderTarget@@IEAAXXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800A9E50 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall COffScreenRenderTarget::~COffScreenRenderTarget(COffScreenRenderTarget *this)
{
  *(_QWORD *)this = &COffScreenRenderTarget::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 8) = &COffScreenRenderTarget::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 9) = &CHolographicInteropTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 14) = &COffScreenRenderTarget::`vftable';
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 16));
  *((_QWORD *)this + 16) = 0LL;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 15));
  *((_QWORD *)this + 15) = 0LL;
  COffScreenRenderTarget::ReleaseRenderTargets(this);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 27);
  CRenderTarget::~CRenderTarget(this);
}
