/*
 * XREFs of ?SetIsDismissed@WindowWrapper@@UEAAJE@Z @ 0x1801EE510
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowWrapper::SetIsDismissed(WindowWrapper *this, char a2)
{
  const char *v4; // r9
  __int64 v5; // rcx
  int v6; // eax
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  try
  {
    (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this - 23) + 152LL))(*((_QWORD *)this - 23), &SRWLock);
    if ( a2 != *((_BYTE *)this + 24) )
    {
      *((_BYTE *)this + 24) = a2;
      v5 = *((_QWORD *)this - 22);
      if ( v5 )
      {
        if ( a2 )
        {
          v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 56LL))(v5);
          if ( v6 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              53LL,
              (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
              (const char *)(unsigned int)v6);
        }
      }
    }
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x3A,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
                           v4);
  }
  return result;
}
