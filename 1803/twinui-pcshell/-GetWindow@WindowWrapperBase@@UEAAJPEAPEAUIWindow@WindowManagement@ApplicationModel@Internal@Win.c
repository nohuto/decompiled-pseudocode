/*
 * XREFs of ?GetWindow@WindowWrapperBase@@UEAAJPEAPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1801F2540
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowWrapperBase::GetWindow(
        WindowWrapperBase *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IWindow **a2)
{
  const char *v4; // r9
  struct Windows::Internal::ApplicationModel::WindowManagement::IWindow *v5; // rcx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  try
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 37) + 176LL))(*((_QWORD *)this + 37));
    v5 = (struct Windows::Internal::ApplicationModel::WindowManagement::IWindow *)*((_QWORD *)this + 18);
    if ( v5 )
    {
      *a2 = v5;
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IWindow *))(*(_QWORD *)v5 + 8LL))(v5);
    }
    else
    {
      *a2 = 0LL;
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x4CC,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v4);
  }
  return result;
}
