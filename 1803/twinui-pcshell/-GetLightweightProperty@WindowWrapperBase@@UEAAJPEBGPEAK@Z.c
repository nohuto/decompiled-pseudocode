/*
 * XREFs of ?GetLightweightProperty@WindowWrapperBase@@UEAAJPEBGPEAK@Z @ 0x1801F2290
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetProperty@LightweightPropertySet@@QEAAJPEBGPEAK@Z @ 0x1801E2150 (-GetProperty@LightweightPropertySet@@QEAAJPEBGPEAK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowWrapperBase::GetLightweightProperty(
        WindowWrapperBase *this,
        const unsigned __int16 *a2,
        unsigned int *a3)
{
  int Property; // eax
  const char *v7; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  try
  {
    (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 39) + 160LL))(*((_QWORD *)this + 39), &SRWLock);
    Property = LightweightPropertySet::GetProperty((WindowWrapperBase *)((char *)this + 248), a2, a3);
    if ( Property < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        293LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)Property);
    if ( SRWLock )
      ReleaseSRWLockShared(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x128,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v7);
  }
  return result;
}
