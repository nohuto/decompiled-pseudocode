/*
 * XREFs of ?get_ViewInstanceId@WindowWrapperBase@@UEAAJPEAI@Z @ 0x1801F54E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowWrapperBase::get_ViewInstanceId(WindowWrapperBase *this, unsigned int *a2)
{
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 38) + 160LL))(*((_QWORD *)this + 38), &SRWLock);
  *a2 = *((_DWORD *)this + 50);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return 0LL;
}
