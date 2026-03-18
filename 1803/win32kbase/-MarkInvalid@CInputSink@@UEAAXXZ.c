/*
 * XREFs of ?MarkInvalid@CInputSink@@UEAAXXZ @ 0x1C00032B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0002F7C (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0003050 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?InvalidateAndReleaseQueues@CInputSink@@IEAAXXZ @ 0x1C0003094 (-InvalidateAndReleaseQueues@CInputSink@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CInputSink::MarkInvalid(CInputSink *this)
{
  if ( (**(unsigned __int8 (__fastcall ***)(CInputSink *))this)(this) )
  {
    CInputSink::InvalidateAndReleaseQueues(this);
    CPushLock::AcquireLockExclusive((CInputSink *)((char *)this + 8));
    *((_BYTE *)this + 32) = 0;
    CPushLock::ReleaseLock((CInputSink *)((char *)this + 8));
  }
}
