/*
 * XREFs of ?CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z @ 0x180004348
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180005A1C (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18002B530 (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180002A20 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x180002A98 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180004240 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x1800042AC (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180005940 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::CreateFromPointer(
        wil::details_abi::SemaphoreValue *this,
        char *a2,
        unsigned __int64 a3)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rdx
  unsigned __int64 v6; // rsi
  LONG v7; // ebx
  LONG v8; // ebp
  LONG v9; // r8d
  HANDLE Semaphore; // rax
  const char *v11; // r9
  __int64 v12; // rdx
  int LastError; // ebx
  __int64 v14; // rdx
  HANDLE v15; // rax
  const char *v16; // r9
  WCHAR Name[264]; // [rsp+30h] [rbp-238h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+268h] [rbp+0h]

  if ( (a3 & 3) != 0 )
    wil::details::in1diag3::FailFastImmediate_Unexpected(this);
  v4 = a3 >> 2;
  StringCchCopyW((char *)Name, 260LL, a2);
  StringCchCatW(Name, v5, (char *)L"_p0");
  v6 = v4 >> 31;
  v7 = v4 & 0x7FFFFFFF;
  v8 = 1;
  v9 = 1;
  if ( v7 )
    v9 = v7;
  Semaphore = CreateSemaphoreExW(0LL, v7, v9, Name, 0, 0x1F0003u);
  if ( Semaphore )
  {
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
      this,
      Semaphore);
    LastError = 0;
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x15E3,
                  (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
                  v11);
  }
  if ( LastError >= 0 )
  {
    StringCchCatW(Name, v12, (char *)L"h");
    if ( (_DWORD)v6 )
      v8 = v6;
    v15 = CreateSemaphoreExW(0LL, v6, v8, Name, 0, 0x1F0003u);
    if ( v15 )
    {
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
        (char *)this + 8,
        v15);
      LastError = 0;
    }
    else
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x15E3,
                    (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
                    v16);
    }
    if ( LastError >= 0 )
      return 0;
    v14 = 136LL;
  }
  else
  {
    v14 = 132LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v14,
    (__int64)"wil",
    (const char *)(unsigned int)LastError);
  return (unsigned int)LastError;
}
