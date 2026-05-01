/*
 * XREFs of ?SetForegroundWindow@WindowWrapperBase@@UEAAJXZ @ 0x1801F3830
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowWrapperBase::SetForegroundWindow(WindowWrapperBase *this)
{
  HWND v2; // rbx
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 39) + 160LL))(*((_QWORD *)this + 39), &SRWLock);
  v2 = (HWND)*((int *)this + 82);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return !SetForegroundWindow(v2) ? 0x80004005 : 0;
}
