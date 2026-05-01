/*
 * XREFs of ?create@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJW4EventOptions@2@PEBGPEAU_SECURITY_ATTRIBUTES@@PEA_N@Z @ 0x1800CA37C
 * Callers:
 *     ?RuntimeClassInitialize@ViewManagerBridge@@QEAAJPEAVViewEventDispatcher@@@Z @ 0x1801085DC (-RuntimeClassInitialize@ViewManagerBridge@@QEAAJPEAVViewEventDispatcher@@@Z.c)
 *     ?CreateComponentEventHandles@@YAJW4_CUI_VIEW_EVENT_TYPE@@IIW4EventOptions@wil@@PEAPEAX@Z @ 0x1801788B8 (-CreateComponentEventHandles@@YAJW4_CUI_VIEW_EVENT_TYPE@@IIW4EventOptions@wil@@PEAPEAX@Z.c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18000408C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800040A4 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall wil::event_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_returncode_policy>::create(
        void **a1,
        char a2,
        const WCHAR *a3)
{
  unsigned int v4; // ebx
  const char *v5; // r9
  HANDLE Event; // r14
  void *v7; // rdi
  DWORD LastError; // ebp
  __int64 v9; // r8
  const char *v10; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = 0;
  Event = CreateEventExW(0LL, a3, a2 & 3, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    v7 = *a1;
    if ( *a1 )
    {
      LastError = GetLastError();
      if ( !CloseHandle(v7) )
      {
        wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x875, v9, v10);
        JUMPOUT(0x1800CA430LL);
      }
      SetLastError(LastError);
    }
    *a1 = Event;
  }
  else
  {
    return (unsigned int)wil::details::in1diag3::Return_GetLastError(
                           retaddr,
                           (void *)0x15B0,
                           (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
                           v5);
  }
  return v4;
}
