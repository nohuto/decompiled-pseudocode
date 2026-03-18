/*
 * XREFs of ?GetAdapterLuidAndGpuSync@CompositionSurfaceObject@@QEBAJ_KPEAU_LUID@@PEAPEAX@Z @ 0x1C00064AC
 * Callers:
 *     ?SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z @ 0x1C0005E48 (-SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z.c)
 * Callees:
 *     ?GetAdapterLuidAndGpuSync@CCompositionSurface@@IEBAJ_KPEAU_LUID@@PEAPEAX@Z @ 0x1C00068AC (-GetAdapterLuidAndGpuSync@CCompositionSurface@@IEBAJ_KPEAU_LUID@@PEAPEAX@Z.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C00111F8 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C001125C (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

__int64 __fastcall CompositionSurfaceObject::GetAdapterLuidAndGpuSync(
        CompositionSurfaceObject *this,
        unsigned __int64 a2,
        struct _LUID *a3,
        void **a4)
{
  int AdapterLuidAndGpuSync; // ebx

  AdapterLuidAndGpuSync = CPushLock::AcquireLockShared((CompositionSurfaceObject *)((char *)this + 32));
  if ( AdapterLuidAndGpuSync >= 0 )
  {
    AdapterLuidAndGpuSync = CCompositionSurface::GetAdapterLuidAndGpuSync(
                              (CompositionSurfaceObject *)((char *)this + 24),
                              a2,
                              a3,
                              a4);
    CPushLock::ReleaseLock((CompositionSurfaceObject *)((char *)this + 32));
  }
  return (unsigned int)AdapterLuidAndGpuSync;
}
