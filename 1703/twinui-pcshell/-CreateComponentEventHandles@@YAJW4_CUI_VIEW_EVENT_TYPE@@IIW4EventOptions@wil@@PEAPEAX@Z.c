/*
 * XREFs of ?CreateComponentEventHandles@@YAJW4_CUI_VIEW_EVENT_TYPE@@IIW4EventOptions@wil@@PEAPEAX@Z @ 0x1801788B8
 * Callers:
 *     ?RegisterComponentForHost@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIII@Z @ 0x1801790D0 (-RegisterComponentForHost@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180002A54 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800040A4 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?create@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJW4EventOptions@2@PEBGPEAU_SECURITY_ATTRIBUTES@@PEA_N@Z @ 0x1800CA37C (-create@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

__int64 __fastcall CreateComponentEventHandles(int a1, unsigned int a2, int a3, char a4, _QWORD *a5)
{
  void *v5; // rbx
  int v7; // ecx
  unsigned int v8; // edi
  int v9; // eax
  int v10; // eax
  __int64 v11; // r8
  const char *v12; // r9
  void *v17; // [rsp+30h] [rbp-108h] BYREF
  wchar_t Buffer[104]; // [rsp+40h] [rbp-F8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+0h]

  v5 = 0LL;
  v17 = 0LL;
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
          (void *)0x19,
          (__int64)"internal\\onecoreuapshell\\inc\\cuihelper.h",
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
          &v17,
          a4,
          Buffer);
  v8 = v10;
  if ( v10 >= 0 )
  {
    v8 = 0;
    *a5 = v17;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1A,
      (__int64)"internal\\onecoreuapshell\\inc\\cuihelper.h",
      (const char *)(unsigned int)v10);
    v5 = v17;
  }
LABEL_13:
  if ( v5 && !CloseHandle(v5) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x875, v11, v12);
    JUMPOUT(0x1801789EBLL);
  }
  return v8;
}
