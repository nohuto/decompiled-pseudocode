/*
 * XREFs of ?GetSurfaceUpdate@CompositionSurfaceObject@@QEAAJ_KPEAUCSM_SURFACE_UPDATE@@@Z @ 0x1C0011188
 * Callers:
 *     ?GetSurfaceUpdates@CCompositionFrame@DirectComposition@@QEAAHPEAUCSM_SURFACE_UPDATE@@IPEAI@Z @ 0x1C0013808 (-GetSurfaceUpdates@CCompositionFrame@DirectComposition@@QEAAHPEAUCSM_SURFACE_UPDATE@@IPEAI@Z.c)
 *     ?ReleaseAnalogTokensAndGetUpdates@CTokenQueue@@QEAA_NIPEAUCSM_SURFACE_UPDATE@@IPEA_NPEAIPEAPEAVCToken@@@Z @ 0x1C0152808 (-ReleaseAnalogTokensAndGetUpdates@CTokenQueue@@QEAA_NIPEAUCSM_SURFACE_UPDATE@@IPEA_NPEAIPEAPEAVC.c)
 * Callees:
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C00111F8 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C001125C (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?GetSurfaceUpdate@CCompositionSurface@@QEBAJ_KPEAUCSM_SURFACE_UPDATE@@@Z @ 0x1C001137C (-GetSurfaceUpdate@CCompositionSurface@@QEBAJ_KPEAUCSM_SURFACE_UPDATE@@@Z.c)
 */

__int64 __fastcall CompositionSurfaceObject::GetSurfaceUpdate(
        CompositionSurfaceObject *this,
        unsigned __int64 a2,
        struct CSM_SURFACE_UPDATE *a3)
{
  int SurfaceUpdate; // ebx

  SurfaceUpdate = CPushLock::AcquireLockShared((CompositionSurfaceObject *)((char *)this + 32));
  if ( SurfaceUpdate >= 0 )
  {
    SurfaceUpdate = CCompositionSurface::GetSurfaceUpdate((CompositionSurfaceObject *)((char *)this + 24), a2, a3);
    CPushLock::ReleaseLock((CompositionSurfaceObject *)((char *)this + 32));
  }
  return (unsigned int)SurfaceUpdate;
}
