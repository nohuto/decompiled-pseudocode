/*
 * XREFs of ?MarkInvalid@CCompositionToken@@UEAAXXZ @ 0x1C0025670
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0038840 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00388B0 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompositionToken::MarkInvalid(CCompositionToken *this)
{
  if ( (**(unsigned __int8 (__fastcall ***)(CCompositionToken *))this)(this) )
  {
    CPushLock::AcquireLockExclusive((CCompositionToken *)((char *)this + 40));
    *((_BYTE *)this + 64) = 0;
    (*(void (__fastcall **)(char *))(*((_QWORD *)this + 1) + 56LL))((char *)this + 8);
    CPushLock::ReleaseLock((CCompositionToken *)((char *)this + 40));
  }
}
