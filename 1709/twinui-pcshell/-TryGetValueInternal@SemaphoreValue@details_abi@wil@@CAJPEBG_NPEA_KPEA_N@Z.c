/*
 * XREFs of ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x180004614
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180005A1C (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18002B530 (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180002A20 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x180002A98 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180004240 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180004258 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x1800044C8 (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::TryGetValueInternal(
        char *a1,
        __int64 a2,
        unsigned __int64 *a3,
        bool *a4)
{
  __int64 v5; // rdx
  HANDLE v6; // rax
  void *v7; // rdi
  const char *v8; // r9
  __int64 v9; // rdx
  unsigned int LastError; // esi
  int ValueFromSemaphore; // eax
  __int64 v12; // rdx
  HANDLE v13; // rax
  void *v14; // rbx
  int v15; // eax
  const char *v16; // r9
  const char *v17; // r9
  const char *v18; // r9
  int v20; // [rsp+20h] [rbp-E0h] BYREF
  int v21[3]; // [rsp+24h] [rbp-DCh] BYREF
  WCHAR Name[264]; // [rsp+30h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+268h] [rbp+168h]

  *a3 = 0LL;
  StringCchCopyW((char *)Name, 260LL, a1);
  StringCchCatW(Name, v5, (char *)L"_p0");
  v6 = OpenSemaphoreW(0x1F0003u, 0, Name);
  v7 = v6;
  if ( !v6 )
  {
    if ( GetLastError() != 2 )
    {
      v9 = 200LL;
LABEL_4:
      LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)v9, (__int64)"wil", v8);
      goto LABEL_15;
    }
LABEL_14:
    LastError = 0;
    goto LABEL_15;
  }
  v21[0] = 0;
  v20 = 0;
  ValueFromSemaphore = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v6, v21);
  LastError = ValueFromSemaphore;
  if ( ValueFromSemaphore < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xCE,
      (__int64)"wil",
      (const char *)(unsigned int)ValueFromSemaphore);
    goto LABEL_15;
  }
  StringCchCatW(Name, v12, (char *)L"h");
  v13 = OpenSemaphoreW(0x1F0003u, 0, Name);
  v14 = v13;
  if ( !v13 )
  {
    v9 = 212LL;
    goto LABEL_4;
  }
  v15 = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v13, &v20);
  LastError = v15;
  if ( v15 >= 0 )
  {
    if ( !CloseHandle(v14) )
    {
      wil::details::in1diag3::_FailFast_GetLastError(
        retaddr,
        (void *)0x878,
        (__int64)"internal\\sdk\\inc\\wil\\resource.h",
        v17);
      __debugbreak();
    }
    *a3 = ((__int64)v20 << 31) | v21[0];
    goto LABEL_14;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(retaddr, (void *)0xD6, (__int64)"wil", (const char *)(unsigned int)v15);
  if ( !CloseHandle(v14) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x878,
      (__int64)"internal\\sdk\\inc\\wil\\resource.h",
      v16);
    __debugbreak();
  }
LABEL_15:
  if ( v7 && !CloseHandle(v7) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x878,
      (__int64)"internal\\sdk\\inc\\wil\\resource.h",
      v18);
    JUMPOUT(0x18000480ALL);
  }
  return LastError;
}
