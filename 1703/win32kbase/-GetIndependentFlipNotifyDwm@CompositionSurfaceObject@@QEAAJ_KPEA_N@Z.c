/*
 * XREFs of ?GetIndependentFlipNotifyDwm@CompositionSurfaceObject@@QEAAJ_KPEA_N@Z @ 0x1C0152C24
 * Callers:
 *     ?CreateCompleted@CFlipToken@@SAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C0005808 (-CreateCompleted@CFlipToken@@SAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHIS.c)
 * Callees:
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C00111F8 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C001125C (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C0011630 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CompositionSurfaceObject::GetIndependentFlipNotifyDwm(
        CompositionSurfaceObject *this,
        __int64 a2,
        bool *a3)
{
  int v6; // ebx
  char v7; // r11
  struct CCompositionBuffer *v9; // [rsp+40h] [rbp+8h] BYREF

  v6 = CPushLock::AcquireLockShared((CompositionSurfaceObject *)((char *)this + 32));
  if ( v6 >= 0 )
  {
    if ( (int)CCompositionSurface::FindBuffer((CompositionSurfaceObject *)((char *)this + 24), a2, &v9) >= 0 )
      v7 = (*(__int64 (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)v9 + 168LL))(v9);
    *a3 = v7;
    CPushLock::ReleaseLock((CompositionSurfaceObject *)((char *)this + 32));
  }
  return (unsigned int)v6;
}
