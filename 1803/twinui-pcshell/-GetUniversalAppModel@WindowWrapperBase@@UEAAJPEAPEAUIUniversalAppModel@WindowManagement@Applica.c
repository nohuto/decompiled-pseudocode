/*
 * XREFs of ?GetUniversalAppModel@WindowWrapperBase@@UEAAJPEAPEAUIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1801F24C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowWrapperBase::GetUniversalAppModel(
        WindowWrapperBase *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModel **a2,
        __int64 a3,
        const char *a4)
{
  struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModel *v4; // rcx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  try
  {
    v4 = (struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModel *)*((_QWORD *)this + 40);
    if ( v4 )
    {
      *a2 = v4;
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModel *))(*(_QWORD *)v4 + 8LL))(v4);
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
                           (void *)0x4BA,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           a4);
  }
  return result;
}
