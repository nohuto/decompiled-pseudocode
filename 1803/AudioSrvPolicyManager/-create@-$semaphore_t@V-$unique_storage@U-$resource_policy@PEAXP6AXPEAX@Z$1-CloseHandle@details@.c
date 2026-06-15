/*
 * XREFs of ?create@?$semaphore_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJJJPEBGKPEAU_SECURITY_ATTRIBUTES@@@Z @ 0x180006F64
 * Callers:
 *     ?CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z @ 0x180002E48 (-CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z.c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180002CA8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180002CC0 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall wil::semaphore_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_returncode_policy>::create(
        void **a1,
        LONG a2,
        LONG a3,
        const WCHAR *a4)
{
  unsigned int v5; // ebx
  const char *v6; // r9
  HANDLE Semaphore; // r14
  void *v8; // rdi
  DWORD LastError; // ebp
  __int64 v10; // r8
  const char *v11; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v5 = 0;
  Semaphore = CreateSemaphoreExW(0LL, a2, a3, a4, 0, 0x1F0003u);
  if ( Semaphore )
  {
    v8 = *a1;
    if ( *a1 )
    {
      LastError = GetLastError();
      if ( !CloseHandle(v8) )
      {
        wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x879, v10, v11);
        JUMPOUT(0x18000700ALL);
      }
      SetLastError(LastError);
    }
    *a1 = Semaphore;
  }
  else
  {
    return (unsigned int)wil::details::in1diag3::Return_GetLastError(
                           retaddr,
                           (void *)0x1621,
                           (__int64)"internal\\sdk\\inc\\wil\\ResultMacros.h",
                           v6);
  }
  return v5;
}
