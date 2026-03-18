/*
 * XREFs of ?GetAdapterLuidAndGpuSync@CompositionSurfaceObject@@QEBAJ_KPEAU_LUID@@PEAPEAX@Z @ 0x1C00384A4
 * Callers:
 *     ?SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z @ 0x1C0037E38 (-SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z.c)
 * Callees:
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C00387DC (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00388B0 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C0038C24 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CompositionSurfaceObject::GetAdapterLuidAndGpuSync(
        CompositionSurfaceObject *this,
        unsigned __int64 a2,
        struct _LUID *a3,
        void **a4)
{
  int Buffer; // ebx
  struct CCompositionBuffer *v10; // [rsp+40h] [rbp+8h] BYREF

  Buffer = CPushLock::AcquireLockShared((CompositionSurfaceObject *)((char *)this + 32));
  if ( Buffer >= 0 )
  {
    Buffer = CCompositionSurface::FindBuffer((CompositionSurfaceObject *)((char *)this + 24), a2, &v10);
    if ( Buffer >= 0 )
      Buffer = (*(__int64 (__fastcall **)(struct CCompositionBuffer *, struct _LUID *, void **))(*(_QWORD *)v10 + 88LL))(
                 v10,
                 a3,
                 a4);
    CPushLock::ReleaseLock((CompositionSurfaceObject *)((char *)this + 32));
  }
  return (unsigned int)Buffer;
}
