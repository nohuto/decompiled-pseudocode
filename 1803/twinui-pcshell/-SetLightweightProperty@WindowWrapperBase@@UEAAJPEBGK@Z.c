/*
 * XREFs of ?SetLightweightProperty@WindowWrapperBase@@UEAAJPEBGK@Z @ 0x1801F3A60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?SetProperty@LightweightPropertySet@@QEAAJPEBGKPEAUHWND__@@@Z @ 0x1800FA8D8 (-SetProperty@LightweightPropertySet@@QEAAJPEBGKPEAUHWND__@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowWrapperBase::SetLightweightProperty(
        WindowWrapperBase *this,
        const unsigned __int16 *a2,
        unsigned int a3)
{
  int v6; // eax
  const char *v7; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  try
  {
    (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 39) + 152LL))(*((_QWORD *)this + 39), &SRWLock);
    v6 = LightweightPropertySet::SetProperty(
           (WindowWrapperBase *)((char *)this + 248),
           a2,
           a3,
           (HWND)*((int *)this + 82));
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        302LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v6);
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x131,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v7);
  }
  return result;
}
