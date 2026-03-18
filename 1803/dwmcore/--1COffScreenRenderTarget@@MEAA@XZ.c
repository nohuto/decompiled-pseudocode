/*
 * XREFs of ??1COffScreenRenderTarget@@MEAA@XZ @ 0x18000D6E8
 * Callers:
 *     ??_GCVisualCapture@@UEAAPEAXI@Z @ 0x18000C920 (--_GCVisualCapture@@UEAAPEAXI@Z.c)
 *     ??1CCaptureRenderTarget@@EEAA@XZ @ 0x180155820 (--1CCaptureRenderTarget@@EEAA@XZ.c)
 *     ??1CIndirectSwapchainRenderTarget@@EEAA@XZ @ 0x18015922C (--1CIndirectSwapchainRenderTarget@@EEAA@XZ.c)
 *     ??1CMagnifierRenderTarget@@EEAA@XZ @ 0x18015A2B8 (--1CMagnifierRenderTarget@@EEAA@XZ.c)
 *     ??_ECPlaneCaptureRenderTargetEngine@@UEAAPEAXI@Z @ 0x18015B5B0 (--_ECPlaneCaptureRenderTargetEngine@@UEAAPEAXI@Z.c)
 *     ??_ECOffScreenRenderTarget@@MEAAPEAXI@Z @ 0x18016F980 (--_ECOffScreenRenderTarget@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseRenderTargets@COffScreenRenderTarget@@IEAAXXZ @ 0x18000D778 (-ReleaseRenderTargets@COffScreenRenderTarget@@IEAAXXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800515A0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall COffScreenRenderTarget::~COffScreenRenderTarget(COffScreenRenderTarget *this)
{
  *(_QWORD *)this = &COffScreenRenderTarget::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 8) = &COffScreenRenderTarget::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 9) = &COffScreenRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 10) = &COffScreenRenderTarget::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 21) = &COffScreenRenderTarget::`vftable';
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 23));
  *((_QWORD *)this + 23) = 0LL;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 22));
  *((_QWORD *)this + 22) = 0LL;
  COffScreenRenderTarget::ReleaseRenderTargets(this);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 272);
  CRenderTarget::~CRenderTarget(this);
}
