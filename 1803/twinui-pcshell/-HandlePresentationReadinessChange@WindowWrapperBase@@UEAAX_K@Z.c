/*
 * XREFs of ?HandlePresentationReadinessChange@WindowWrapperBase@@UEAAX_K@Z @ 0x1801F2620
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?HandleShellHook@WindowReadyState@@QEAAX_K@Z @ 0x1800FABE4 (-HandleShellHook@WindowReadyState@@QEAAX_K@Z.c)
 */

void __fastcall WindowWrapperBase::HandlePresentationReadinessChange(WindowWrapperBase *this)
{
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 37) + 152LL))(*((_QWORD *)this + 37), &SRWLock);
  WindowReadyState::HandleShellHook((WindowWrapperBase *)((char *)this + 344));
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}
