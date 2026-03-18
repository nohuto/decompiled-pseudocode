/*
 * XREFs of ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x18011E45C
 * Callers:
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x18011F2D0 (-MakeAndInitialize@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil.c)
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x180133D54 (-MakeAndInitialize@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180076E2C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18011F7F0 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18011F878 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x18011FF5C (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1801202D0 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::CreateFromValueInternal(
        wil::details_abi::SemaphoreValue *this,
        size_t *a2,
        __int64 a3,
        unsigned __int64 a4)
{
  __int64 v6; // rcx
  WCHAR *v7; // rax
  __int64 v8; // rax
  WCHAR *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  char *v12; // rax
  WCHAR v13; // r9
  WCHAR *v14; // rax
  unsigned __int64 v15; // rsi
  LONG v16; // edi
  LONG v17; // ebp
  LONG v18; // r8d
  HANDLE Semaphore; // rax
  const char *v20; // r9
  __int64 v21; // rcx
  WCHAR *v22; // rax
  __int64 v23; // rax
  int LastError; // eax
  unsigned int v25; // edi
  WCHAR *v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // rdx
  char *v30; // rax
  WCHAR v31; // r8
  WCHAR *v32; // rax
  HANDLE v33; // rax
  const char *v34; // r9
  int v35; // eax
  unsigned int v36; // ebx
  DWORD dwFlags; // [rsp+20h] [rbp-258h]
  DWORD dwFlagsa; // [rsp+20h] [rbp-258h]
  WCHAR Name[264]; // [rsp+30h] [rbp-248h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+0h]

  if ( (a4 & 0xC000000000000000uLL) != 0 )
    wil::details::in1diag3::_FailFastImmediate_Unexpected(this);
  StringCchCopyW(Name, 0x104uLL, a2);
  v6 = 260LL;
  v7 = Name;
  do
  {
    if ( !*v7 )
      break;
    ++v7;
    --v6;
  }
  while ( v6 );
  if ( v6 )
    v8 = 260 - v6;
  else
    v8 = 0LL;
  if ( v6 )
  {
    v9 = &Name[v8];
    v10 = 260 - v8;
    if ( v8 != 260 )
    {
      v11 = 2147483646LL;
      v12 = (char *)((char *)L"_p0" - (char *)v9);
      do
      {
        if ( !v11 )
          break;
        v13 = *(WCHAR *)((char *)v9 + (_QWORD)v12);
        if ( !v13 )
          break;
        *v9 = v13;
        --v11;
        ++v9;
        --v10;
      }
      while ( v10 );
    }
    v14 = v9 - 1;
    if ( v10 )
      v14 = v9;
    *v14 = 0;
  }
  v15 = a4 >> 31;
  v16 = a4 & 0x7FFFFFFF;
  v17 = 1;
  v18 = 1;
  if ( v16 )
    v18 = v16;
  Semaphore = CreateSemaphoreExW(0LL, v16, v18, Name, 0, 0x1F0003u);
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
                  (void *)0x15E3,
                  (unsigned int)"internal\\sdk\\inc\\wil\\resultmacros.h",
                  v20);
    v25 = LastError;
    if ( LastError < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x84,
        (unsigned int)"wil",
        (const char *)(unsigned int)LastError,
        dwFlags);
      return v25;
    }
  }
  v21 = 260LL;
  v22 = Name;
  do
  {
    if ( !*v22 )
      break;
    ++v22;
    --v21;
  }
  while ( v21 );
  if ( v21 )
    v23 = 260 - v21;
  else
    v23 = 0LL;
  if ( v21 )
  {
    v27 = &Name[v23];
    v28 = 260 - v23;
    if ( 260 != v23 )
    {
      v29 = 2147483646LL;
      v30 = (char *)((char *)L"h" - (char *)v27);
      do
      {
        if ( !v29 )
          break;
        v31 = *(WCHAR *)((char *)v27 + (_QWORD)v30);
        if ( !v31 )
          break;
        *v27 = v31;
        --v29;
        ++v27;
        --v28;
      }
      while ( v28 );
    }
    v32 = v27 - 1;
    if ( v28 )
      v32 = v27;
    *v32 = 0;
  }
  if ( (_DWORD)v15 )
    v17 = v15;
  v33 = CreateSemaphoreExW(0LL, v15, v17, Name, 0, 0x1F0003u);
  if ( v33 )
  {
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
      (char *)this + 8,
      v33);
  }
  else
  {
    v35 = wil::details::in1diag3::Return_GetLastError(
            retaddr,
            (void *)0x15E3,
            (unsigned int)"internal\\sdk\\inc\\wil\\resultmacros.h",
            v34);
    v36 = v35;
    if ( v35 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x88,
        (unsigned int)"wil",
        (const char *)(unsigned int)v35,
        dwFlagsa);
      return v36;
    }
  }
  return 0LL;
}
