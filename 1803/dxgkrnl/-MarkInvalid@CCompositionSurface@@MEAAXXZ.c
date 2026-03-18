/*
 * XREFs of ?MarkInvalid@CCompositionSurface@@MEAAXXZ @ 0x1C0011FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0011C18 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0011C5C (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompositionSurface::MarkInvalid(CCompositionSurface *this)
{
  if ( (**(unsigned __int8 (__fastcall ***)(CCompositionSurface *))this)(this) )
  {
    CPushLock::AcquireLockExclusive((CCompositionSurface *)((char *)this + 16));
    *((_BYTE *)this + 40) = 0;
    CPushLock::ReleaseLock((CCompositionSurface *)((char *)this + 16));
  }
}
