/*
 * XREFs of ??1COffScreenRenderTarget@@MEAA@XZ @ 0x180027524
 * Callers:
 *     ??_GCVisualCapture@@UEAAPEAXI@Z @ 0x180026D10 (--_GCVisualCapture@@UEAAPEAXI@Z.c)
 *     ??1CMagnifierRenderTarget@@EEAA@XZ @ 0x180147DD4 (--1CMagnifierRenderTarget@@EEAA@XZ.c)
 *     ??_ECOffScreenRenderTarget@@MEAAPEAXI@Z @ 0x180147E40 (--_ECOffScreenRenderTarget@@MEAAPEAXI@Z.c)
 *     ??1CIndirectSwapchainRenderTarget@@EEAA@XZ @ 0x180148F90 (--1CIndirectSwapchainRenderTarget@@EEAA@XZ.c)
 * Callees:
 *     ?ReleaseRenderTargets@COffScreenRenderTarget@@IEAAXXZ @ 0x1800274C8 (-ReleaseRenderTargets@COffScreenRenderTarget@@IEAAXXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034728 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall COffScreenRenderTarget::~COffScreenRenderTarget(COffScreenRenderTarget *this)
{
  *(_QWORD *)this = &COffScreenRenderTarget::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 8) = &CVisualCapture::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 9) = &COffScreenRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 14) = &COffScreenRenderTarget::`vftable';
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 16));
  *((_QWORD *)this + 16) = 0LL;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 15));
  *((_QWORD *)this + 15) = 0LL;
  COffScreenRenderTarget::ReleaseRenderTargets(this);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 208);
  CRenderTarget::~CRenderTarget(this);
}
