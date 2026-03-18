/*
 * XREFs of ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C00111F8
 * Callers:
 *     ?GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUHWND__@@@Z @ 0x1C00016C0 (-GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUHWND__@@@Z.c)
 *     ?GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUtagWND@@@Z @ 0x1C0001740 (-GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUtagWND@@@Z.c)
 *     ?GetEarlyTokenSync@CFlipToken@@UEBA_NXZ @ 0x1C0006100 (-GetEarlyTokenSync@CFlipToken@@UEBA_NXZ.c)
 *     ?SyncIntervalSatisfied@CompositionSurfaceObject@@QEAAJIPEA_N@Z @ 0x1C000642C (-SyncIntervalSatisfied@CompositionSurfaceObject@@QEAAJIPEA_N@Z.c)
 *     ?GetAdapterLuidAndGpuSync@CompositionSurfaceObject@@QEBAJ_KPEAU_LUID@@PEAPEAX@Z @ 0x1C00064AC (-GetAdapterLuidAndGpuSync@CompositionSurfaceObject@@QEBAJ_KPEAU_LUID@@PEAPEAX@Z.c)
 *     ?ImmediateSignalGpuFence@CompositionSurfaceObject@@QEAAX_K0@Z @ 0x1C0006520 (-ImmediateSignalGpuFence@CompositionSurfaceObject@@QEAAX_K0@Z.c)
 *     ?SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z @ 0x1C000656C (-SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z.c)
 *     ?StartCompositionEarly@CompositionSurfaceObject@@QEAA_N_K@Z @ 0x1C00065D4 (-StartCompositionEarly@CompositionSurfaceObject@@QEAA_N_K@Z.c)
 *     ?GetAnalogExclusive@CompositionSurfaceObject@@QEAA_NXZ @ 0x1C000664C (-GetAnalogExclusive@CompositionSurfaceObject@@QEAA_NXZ.c)
 *     ?QueryInputQueueTypes@CompositionInputObject@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z @ 0x1C0010568 (-QueryInputQueueTypes@CompositionInputObject@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z.c)
 *     ?LockForRead@CompositionInputObject@@QEBAJPEAPEBVCInputSink@@@Z @ 0x1C0010660 (-LockForRead@CompositionInputObject@@QEBAJPEAPEBVCInputSink@@@Z.c)
 *     ?MarkCompleted@CompositionTokenObject@@QEAAJXZ @ 0x1C0010AAC (-MarkCompleted@CompositionTokenObject@@QEAAJXZ.c)
 *     ?MarkPending@CompositionTokenObject@@QEAAJXZ @ 0x1C0010B0C (-MarkPending@CompositionTokenObject@@QEAAJXZ.c)
 *     ?GetSurfaceUpdate@CompositionSurfaceObject@@QEAAJ_KPEAUCSM_SURFACE_UPDATE@@@Z @ 0x1C0011188 (-GetSurfaceUpdate@CompositionSurfaceObject@@QEAAJ_KPEAUCSM_SURFACE_UPDATE@@@Z.c)
 *     ?GetBaseWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUtagWND@@@Z @ 0x1C0150790 (-GetBaseWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUtagWND@@@.c)
 *     ?GetIndependentFlipNotifyDwm@CompositionSurfaceObject@@QEAAJ_KPEA_N@Z @ 0x1C0152C24 (-GetIndependentFlipNotifyDwm@CompositionSurfaceObject@@QEAAJ_KPEA_N@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C001125C (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
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
