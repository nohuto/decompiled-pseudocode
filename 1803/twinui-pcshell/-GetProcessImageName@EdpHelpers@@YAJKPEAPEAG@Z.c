/*
 * XREFs of ?GetProcessImageName@EdpHelpers@@YAJKPEAPEAG@Z @ 0x180140218
 * Callers:
 *     ?GetEnterpriseIdForWindow@EdpHelpers@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x18013FB58 (-GetEnterpriseIdForWindow@EdpHelpers@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800FEE7C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x18011D054 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 */

__int64 __fastcall EdpHelpers::GetProcessImageName(DWORD dwProcessId, LPVOID *a2, unsigned __int16 **a3)
{
  char *v4; // rax
  char *v5; // rdi
  unsigned int LastError; // esi
  const char *v7; // r9
  DWORD dwSize; // [rsp+20h] [rbp-238h] BYREF
  LPVOID pv; // [rsp+28h] [rbp-230h] BYREF
  WCHAR ExeName[264]; // [rsp+30h] [rbp-228h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+258h] [rbp+0h]

  *a2 = 0LL;
  v4 = (char *)OpenProcess(0x1000u, 0, dwProcessId);
  v5 = v4;
  if ( v4 )
  {
    dwSize = 260;
    if ( QueryFullProcessImageNameW(v4, 0, ExeName, &dwSize) )
    {
      wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>>(
        &pv,
        (char *)ExeName,
        dwSize);
      if ( pv )
      {
        *a2 = pv;
        LastError = 0;
      }
      else
      {
        LastError = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x94,
          (__int64)"internal\\onecoreuapshell\\private\\inc\\EdpHelpers.h",
          (const char *)0x8007000ELL);
      }
    }
    else
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x91,
                    (__int64)"internal\\onecoreuapshell\\private\\inc\\EdpHelpers.h",
                    v7);
    }
  }
  else
  {
    LastError = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8D,
      (__int64)"internal\\onecoreuapshell\\private\\inc\\EdpHelpers.h",
      (const char *)0x8007000ELL);
  }
  if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v5);
  return LastError;
}
