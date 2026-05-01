/*
 * XREFs of ?get_ClientWindow@WindowWrapperBase@@UEAAJPEAI@Z @ 0x1801F4AF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowWrapperBase::get_ClientWindow(WindowWrapperBase *this, unsigned int *a2)
{
  unsigned int v4; // eax
  const char *v5; // r9
  unsigned int v6; // ebx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  try
  {
    (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 34) + 160LL))(*((_QWORD *)this + 34), &SRWLock);
    v4 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 3) + 216LL))((char *)this - 24);
    *a2 = v4;
    v6 = v4 == 0 ? 0x80070490 : 0;
    if ( SRWLock )
      ReleaseSRWLockShared(SRWLock);
    result = v6;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x737,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v5);
  }
  return result;
}
