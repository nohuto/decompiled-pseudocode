/*
 * XREFs of ??$TryGetValue@_K@SemaphoreValue@details_abi@wil@@SAJPEBGPEA_KPEA_N@Z @ 0x180008594
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180007708 (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180007B74 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180001994 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x180001A18 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002F8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180002FBC (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180002FD4 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x180003258 (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     __security_check_cookie @ 0x180041F40 (__security_check_cookie.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::TryGetValue<unsigned __int64>(char *a1, __int64 *a2)
{
  __int64 v3; // r14
  __int64 v4; // rdx
  HANDLE v5; // rax
  void *v6; // rbx
  const char *v7; // r9
  int LastError; // esi
  int ValueFromSemaphore; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  const char *v12; // r9
  HANDLE v13; // rax
  const char *v14; // r9
  void *v15; // rdi
  __int64 v16; // r8
  const char *v17; // r9
  int v18; // eax
  __int64 v19; // r8
  const char *v20; // r9
  __int64 v21; // r8
  const char *v22; // r9
  __int64 v23; // r8
  const char *v24; // r9
  __int64 v25; // r8
  const char *v26; // r9
  int v28; // [rsp+20h] [rbp-E0h] BYREF
  int v29[3]; // [rsp+24h] [rbp-DCh] BYREF
  WCHAR Name[264]; // [rsp+30h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+178h]

  *a2 = 0LL;
  v3 = 0LL;
  StringCchCopyW((char *)Name, 260LL, a1);
  StringCchCatW(Name, v4, (char *)L"_p0");
  v5 = OpenSemaphoreW(0x1F0003u, 0, Name);
  v6 = v5;
  if ( v5 )
  {
    v29[0] = 0;
    v28 = 0;
    ValueFromSemaphore = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v5, v29);
    LastError = ValueFromSemaphore;
    if ( ValueFromSemaphore >= 0 )
    {
      StringCchCatW(Name, v10, (char *)L"h");
      v13 = OpenSemaphoreW(0x1F0003u, 0, Name);
      v15 = v13;
      if ( v13 )
      {
        v18 = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v13, &v28);
        LastError = v18;
        if ( v18 >= 0 )
        {
          if ( !CloseHandle(v15) )
          {
            wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x879, v23, v24);
            __debugbreak();
          }
          v3 = ((__int64)v28 << 31) | v29[0];
          if ( !CloseHandle(v6) )
          {
            wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x879, v25, v26);
            JUMPOUT(0x18000881BLL);
          }
          LastError = 0;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(retaddr, (void *)0xD6, (__int64)"wil", (const char *)(unsigned int)v18);
          if ( !CloseHandle(v15) )
          {
            wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x879, v19, v20);
            __debugbreak();
          }
          if ( !CloseHandle(v6) )
          {
            wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x879, v21, v22);
            __debugbreak();
          }
        }
      }
      else
      {
        LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xD4, (__int64)"wil", v14);
        if ( !CloseHandle(v6) )
        {
          wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x879, v16, v17);
          __debugbreak();
        }
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCE,
        (__int64)"wil",
        (const char *)(unsigned int)ValueFromSemaphore);
      if ( !CloseHandle(v6) )
      {
        wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x879, v11, v12);
        __debugbreak();
      }
    }
  }
  else
  {
    if ( GetLastError() == 2 )
      goto LABEL_19;
    LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xC8, (__int64)"wil", v7);
  }
  if ( LastError < 0 )
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x61, (__int64)"wil", (const char *)(unsigned int)LastError);
    return (unsigned int)LastError;
  }
LABEL_19:
  *a2 = v3;
  return 0LL;
}
