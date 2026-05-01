/*
 * XREFs of ?get_ClientWindowReadyForPresentation@WindowWrapperBase@@UEAAJPEAE@Z @ 0x1801F4BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsReadyForPresentation@WindowReadyState@@QEAA_NXZ @ 0x18005B684 (-IsReadyForPresentation@WindowReadyState@@QEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowWrapperBase::get_ClientWindowReadyForPresentation(WindowWrapperBase *this, char *a2)
{
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 34) + 160LL))(*((_QWORD *)this + 34), &SRWLock);
  *a2 = WindowReadyState::IsReadyForPresentation((WindowWrapperBase *)((char *)this + 320));
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return 0LL;
}
