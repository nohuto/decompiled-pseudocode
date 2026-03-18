/*
 * XREFs of ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0011BB4
 * Callers:
 *     ?GetAnalogExclusive@CompositionSurfaceObject@@QEAA_NXZ @ 0x1C000D338 (-GetAnalogExclusive@CompositionSurfaceObject@@QEAA_NXZ.c)
 *     ?LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z @ 0x1C000D3F4 (-LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z.c)
 *     ?SignalGpuFence@CompositionSurfaceObject@@QEAAJ_K0_N@Z @ 0x1C000D45C (-SignalGpuFence@CompositionSurfaceObject@@QEAAJ_K0_N@Z.c)
 *     ?SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z @ 0x1C000D4EC (-SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z.c)
 *     ?MarkCompleted@CompositionTokenObject@@QEAAJXZ @ 0x1C000DCA0 (-MarkCompleted@CompositionTokenObject@@QEAAJXZ.c)
 *     ?MarkPending@CompositionTokenObject@@QEAAJXZ @ 0x1C000DD00 (-MarkPending@CompositionTokenObject@@QEAAJXZ.c)
 *     ?InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z @ 0x1C000EF30 (-InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z.c)
 *     ?GetEarlyTokenSync@CFlipToken@@UEBA_NXZ @ 0x1C000F3A0 (-GetEarlyTokenSync@CFlipToken@@UEBA_NXZ.c)
 *     ?GetSurfaceUpdates@CCompositionFrame@@UEAA_NPEAUCSM_SURFACE_UPDATE@@IPEAI@Z @ 0x1C00116E0 (-GetSurfaceUpdates@CCompositionFrame@@UEAA_NPEAUCSM_SURFACE_UPDATE@@IPEAI@Z.c)
 *     ?GetIndependentFlipNotifyDwm@CompositionSurfaceObject@@QEAAJ_KPEA_N@Z @ 0x1C0017B10 (-GetIndependentFlipNotifyDwm@CompositionSurfaceObject@@QEAAJ_KPEA_N@Z.c)
 *     ?SyncIntervalSatisfied@CompositionSurfaceObject@@QEAAJIPEA_N@Z @ 0x1C0024440 (-SyncIntervalSatisfied@CompositionSurfaceObject@@QEAAJIPEA_N@Z.c)
 *     ?GetSurfaceUpdate@CompositionSurfaceObject@@QEAAJ_KPEAUCSM_SURFACE_UPDATE@@@Z @ 0x1C00244C0 (-GetSurfaceUpdate@CompositionSurfaceObject@@QEAAJ_KPEAUCSM_SURFACE_UPDATE@@@Z.c)
 *     ?MarkCompleted@FlipManagerTokenObject@@QEAAJXZ @ 0x1C004A988 (-MarkCompleted@FlipManagerTokenObject@@QEAAJXZ.c)
 *     ?MarkPending@FlipManagerTokenObject@@QEAAJXZ @ 0x1C004BC58 (-MarkPending@FlipManagerTokenObject@@QEAAJXZ.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0011C18 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPushLock::AcquireLockShared(CPushLock *this)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( !(**(unsigned __int8 (__fastcall ***)(CPushLock *))this)(this) )
    return (unsigned int)-1073741816;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)this + 8, 0LL);
  if ( !(**(unsigned __int8 (__fastcall ***)(CPushLock *))this)(this) )
  {
    CPushLock::ReleaseLock(this);
    return (unsigned int)-1073741816;
  }
  return v2;
}
