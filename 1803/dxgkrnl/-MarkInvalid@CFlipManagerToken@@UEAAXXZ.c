/*
 * XREFs of ?MarkInvalid@CFlipManagerToken@@UEAAXXZ @ 0x1C004B120
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0011C18 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0011C5C (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CFlipManagerToken::MarkInvalid(CFlipManagerToken *this)
{
  if ( (**(unsigned __int8 (__fastcall ***)(CFlipManagerToken *))this)(this) )
  {
    CPushLock::AcquireLockExclusive((CFlipManagerToken *)((char *)this + 40));
    *((_BYTE *)this + 72) = 0;
    (*(void (__fastcall **)(char *))(*((_QWORD *)this + 1) + 56LL))((char *)this + 8);
    CPushLock::ReleaseLock((CFlipManagerToken *)((char *)this + 40));
  }
}
