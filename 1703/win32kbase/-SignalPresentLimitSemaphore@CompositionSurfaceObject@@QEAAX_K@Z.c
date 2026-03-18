/*
 * XREFs of ?SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z @ 0x1C000656C
 * Callers:
 *     ?CreateFlipToken@CToken@@CAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C00057AC (-CreateFlipToken@CToken@@CAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORY.c)
 *     ?SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z @ 0x1C0005E48 (-SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z.c)
 * Callees:
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C00111F8 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C001125C (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C0011630 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CompositionSurfaceObject::SignalPresentLimitSemaphore(
        CompositionSurfaceObject *this,
        unsigned __int64 a2)
{
  struct CCompositionBuffer *v4; // [rsp+30h] [rbp+8h] BYREF

  if ( (int)CPushLock::AcquireLockShared((CompositionSurfaceObject *)((char *)this + 32)) >= 0 )
  {
    if ( (int)CCompositionSurface::FindBuffer((CompositionSurfaceObject *)((char *)this + 24), a2, &v4) >= 0 )
      (*(void (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)v4 + 96LL))(v4);
    CPushLock::ReleaseLock((CompositionSurfaceObject *)((char *)this + 32));
  }
}
