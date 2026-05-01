/*
 * XREFs of ?SetWindowBand@WindowWrapperBase@@UEAAJK@Z @ 0x1801F4250
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?PushZbidToWindow@WindowWrapperBase@@AEAAXW4ZBID@@@Z @ 0x1801F2D90 (-PushZbidToWindow@WindowWrapperBase@@AEAAXW4ZBID@@@Z.c)
 */

__int64 __fastcall WindowWrapperBase::SetWindowBand(WindowWrapperBase *this, unsigned int a2)
{
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 39) + 152LL))(*((_QWORD *)this + 39), &SRWLock);
  WindowWrapperBase::PushZbidToWindow((__int64)this, a2);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 0LL;
}
