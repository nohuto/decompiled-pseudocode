/*
 * XREFs of ?MarkCompleted@FlipManagerTokenObject@@QEAAJXZ @ 0x1C004A988
 * Callers:
 *     ?CompleteFlipManagerToken@CTokenManager@@IEAAJPEAX@Z @ 0x1C004A258 (-CompleteFlipManagerToken@CTokenManager@@IEAAJPEAX@Z.c)
 * Callees:
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0011BB4 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0011C18 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FlipManagerTokenObject::MarkCompleted(FlipManagerTokenObject *this)
{
  int v2; // ebx

  v2 = CPushLock::AcquireLockShared((FlipManagerTokenObject *)((char *)this + 64));
  if ( v2 >= 0 )
  {
    if ( *((_DWORD *)this + 14) == 1 )
      (*(void (__fastcall **)(char *))(*((_QWORD *)this + 4) + 24LL))((char *)this + 32);
    else
      v2 = -1073741823;
    CPushLock::ReleaseLock((FlipManagerTokenObject *)((char *)this + 64));
  }
  return (unsigned int)v2;
}
