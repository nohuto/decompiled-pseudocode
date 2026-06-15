/*
 * XREFs of ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x180001980
 * Callers:
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x180001838 (-MakeAndInitialize@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil.c)
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x18007E42C (-MakeAndInitialize@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18002A4B8 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18002A820 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18007EC90 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x18007F310 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::CreateFromValueInternal(
        wil::details_abi::SemaphoreValue *this,
        const unsigned __int16 *a2,
        __int64 a3,
        unsigned __int64 a4)
{
  __int64 v6; // rcx
  WCHAR *v7; // rax
  WCHAR *v8; // rax
  __int64 v9; // rdx
  char *v10; // r9
  WCHAR v11; // r8
  LONG v12; // r14d
  unsigned __int64 v13; // rbp
  LONG v14; // ebx
  LONG v15; // r8d
  HANDLE Semaphore; // rax
  const char *v17; // r9
  __int64 v18; // rcx
  WCHAR *v19; // rax
  WCHAR *v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rcx
  char *v23; // r8
  WCHAR v24; // dx
  HANDLE v25; // rax
  const char *v26; // r9
  int LastError; // eax
  unsigned int v29; // ebx
  int v30; // eax
  unsigned int v31; // ebx
  DWORD dwFlags; // [rsp+20h] [rbp-258h]
  DWORD dwFlagsa; // [rsp+20h] [rbp-258h]
  WCHAR Name[264]; // [rsp+30h] [rbp-248h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+0h]

  if ( (a4 & 0xC000000000000000uLL) != 0 )
    wil::details::in1diag3::_FailFastImmediate_Unexpected(this);
  StringCchCopyW(Name, 0x104uLL, a2);
  v6 = 260LL;
  v7 = Name;
  while ( *v7 )
  {
    ++v7;
    if ( !--v6 )
      goto LABEL_12;
  }
  v8 = &Name[260 - v6];
  v9 = 2147483646LL;
  v10 = (char *)((char *)L"_p0" - (char *)v8);
  while ( v9 )
  {
    v11 = *(WCHAR *)((char *)v8 + (_QWORD)v10);
    if ( !v11 )
      break;
    *v8 = v11;
    --v9;
    ++v8;
    if ( !--v6 )
    {
      --v8;
      break;
    }
  }
  *v8 = 0;
LABEL_12:
  v12 = 1;
  v13 = a4 >> 31;
  v14 = a4 & 0x7FFFFFFF;
  if ( v14 )
    v15 = v14;
  else
    v15 = 1;
  Semaphore = CreateSemaphoreExW(0LL, v14, v15, Name, 0, 0x1F0003u);
  if ( Semaphore )
  {
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
      this,
      Semaphore);
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x15B0,
                  (unsigned int)"internal\\sdk\\inc\\wil/resultmacros.h",
                  v17);
    v29 = LastError;
    if ( LastError < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x84,
        (unsigned int)"wil",
        (const char *)(unsigned int)LastError,
        dwFlags);
      return v29;
    }
  }
  v18 = 260LL;
  v19 = Name;
  while ( *v19 )
  {
    ++v19;
    if ( !--v18 )
      goto LABEL_26;
  }
  v20 = &Name[260 - v18];
  v21 = v18;
  v22 = 2147483646LL;
  v23 = (char *)((char *)L"h" - (char *)v20);
  while ( v22 )
  {
    v24 = *(WCHAR *)((char *)v20 + (_QWORD)v23);
    if ( !v24 )
      break;
    *v20 = v24;
    --v22;
    ++v20;
    if ( !--v21 )
    {
      --v20;
      break;
    }
  }
  *v20 = 0;
LABEL_26:
  if ( (_DWORD)v13 )
    v12 = v13;
  v25 = CreateSemaphoreExW(0LL, v13, v12, Name, 0, 0x1F0003u);
  if ( v25 )
  {
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
      (char *)this + 8,
      v25);
    return 0LL;
  }
  v30 = wil::details::in1diag3::Return_GetLastError(
          retaddr,
          (void *)0x15B0,
          (unsigned int)"internal\\sdk\\inc\\wil/resultmacros.h",
          v26);
  v31 = v30;
  if ( v30 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x88,
    (unsigned int)"wil",
    (const char *)(unsigned int)v30,
    dwFlagsa);
  return v31;
}
