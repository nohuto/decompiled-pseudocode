/*
 * XREFs of ?ImmediateSignalGpuFence@CompositionSurfaceObject@@QEAAJ_K0@Z @ 0x1C0038534
 * Callers:
 *     ?SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z @ 0x1C0037E38 (-SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z.c)
 *     ?CreateFlipToken@CToken@@CAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C007BD30 (-CreateFlipToken@CToken@@CAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORY.c)
 * Callees:
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C00387DC (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00388B0 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C0038C24 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CompositionSurfaceObject::ImmediateSignalGpuFence(
        CompositionSurfaceObject *this,
        unsigned __int64 a2,
        __int64 a3)
{
  int Buffer; // ebx
  struct CCompositionBuffer *v8; // [rsp+40h] [rbp+8h] BYREF

  Buffer = CPushLock::AcquireLockShared((CompositionSurfaceObject *)((char *)this + 32));
  if ( Buffer >= 0 )
  {
    Buffer = CCompositionSurface::FindBuffer((CompositionSurfaceObject *)((char *)this + 24), a2, &v8);
    if ( Buffer >= 0 )
      (*(void (__fastcall **)(struct CCompositionBuffer *, __int64))(*(_QWORD *)v8 + 96LL))(v8, a3);
    CPushLock::ReleaseLock((CompositionSurfaceObject *)((char *)this + 32));
  }
  return (unsigned int)Buffer;
}
