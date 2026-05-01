/*
 * XREFs of ?get_ExecutionState@WindowWrapperBase@@UEAAJPEAW4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1801F4C80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall WindowWrapperBase::get_ExecutionState(
        WindowWrapperBase *this,
        enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState *a2)
{
  __int64 v4; // rcx
  int v5; // eax
  const char *v6; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  try
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 37) + 176LL))(*((_QWORD *)this + 37));
    *(_DWORD *)a2 = 0;
    v4 = *((_QWORD *)this + 11);
    if ( !v4 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1047LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)0x80070490LL);
    v5 = (*(__int64 (__fastcall **)(__int64, enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState *))(*(_QWORD *)v4 + 112LL))(
           v4,
           a2);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1048LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v5);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x41B,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v6);
  }
  return result;
}
