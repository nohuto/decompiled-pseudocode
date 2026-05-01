/*
 * XREFs of ?CreateComponentEventHandles@ViewEventHandlers@OneCore@Internal@Windows@@YAJW4_CUI_VIEW_EVENT_TYPE@@IIW4EventOptions@wil@@PEAPEAX@Z @ 0x1801C49D4
 * Callers:
 *     ?RegisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@AEAAJAEAUComponentInfo@12345@I@Z @ 0x1801C4B10 (-RegisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180002BAC (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180004258 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?create@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJW4EventOptions@2@PEBGPEAU_SECURITY_ATTRIBUTES@@PEA_N@Z @ 0x1800DDB4C (-create@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

__int64 __fastcall Windows::Internal::OneCore::ViewEventHandlers::CreateComponentEventHandles(
        int a1,
        unsigned int a2,
        int a3,
        char a4,
        _QWORD *a5)
{
  void *v5; // rbx
  int v7; // ecx
  unsigned int v8; // edi
  int v9; // eax
  int v10; // eax
  const char *v11; // r9
  void *v16; // [rsp+30h] [rbp-108h] BYREF
  wchar_t Buffer[104]; // [rsp+40h] [rbp-F8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+0h]

  v5 = 0LL;
  v16 = 0LL;
  if ( a1 )
  {
    v7 = a1 - 1;
    if ( v7 )
    {
      if ( v7 != 1 )
      {
        v8 = -2147023728;
LABEL_9:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x2A,
          (__int64)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
          (const char *)v8);
        goto LABEL_13;
      }
      v9 = StringCchPrintfW(Buffer, 100LL, L"CUIModalDialogEvent!%I32X!%I32X", a2, a3);
    }
    else
    {
      v9 = StringCchPrintfW(Buffer, 100LL, L"CUIWindowCloseEvent!%I32X!%I32X", a2, a3);
    }
  }
  else
  {
    v9 = StringCchPrintfW(Buffer, 100LL, L"CUIWindowReadyEvent!%I32X!%I32X", a2, a3);
  }
  v8 = v9;
  if ( v9 < 0 )
    goto LABEL_9;
  v10 = wil::event_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_returncode_policy>::create(
          &v16,
          a4,
          Buffer);
  v8 = v10;
  if ( v10 >= 0 )
  {
    v8 = 0;
    *a5 = v16;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x2B,
      (__int64)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
      (const char *)(unsigned int)v10);
    v5 = v16;
  }
LABEL_13:
  if ( v5 && !CloseHandle(v5) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x878,
      (__int64)"internal\\sdk\\inc\\wil\\resource.h",
      v11);
    JUMPOUT(0x1801C4B0ELL);
  }
  return v8;
}
