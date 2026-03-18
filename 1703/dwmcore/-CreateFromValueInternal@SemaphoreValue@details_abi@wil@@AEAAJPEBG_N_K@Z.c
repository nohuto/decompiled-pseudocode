/*
 * XREFs of ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x18013678C
 * Callers:
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x180137608 (-MakeAndInitialize@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800C6740 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180137B68 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180137BF0 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x180138320 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180138734 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::CreateFromValueInternal(
        wil::details_abi::SemaphoreValue *this,
        size_t *a2,
        __int64 a3,
        unsigned __int64 a4)
{
  __int64 v6; // rax
  WCHAR *v7; // rcx
  int v8; // esi
  int v9; // ecx
  __int64 v10; // rdx
  WCHAR *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  char *v14; // rdx
  WCHAR v15; // r9
  unsigned __int64 v16; // rbp
  LONG v17; // edi
  LONG v18; // r14d
  LONG v19; // r8d
  HANDLE Semaphore; // rax
  const char *v21; // r9
  __int64 v22; // rax
  WCHAR *v23; // rcx
  __int64 v24; // rcx
  int LastError; // eax
  unsigned int v26; // r8d
  unsigned int v27; // edi
  WCHAR *v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rdx
  char *v32; // rcx
  WCHAR v33; // r8
  HANDLE v34; // rax
  const char *v35; // r9
  int v36; // eax
  unsigned int v37; // r8d
  unsigned int v38; // ebx
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
  v8 = -2147024809;
  v9 = -2147024809;
  if ( v6 )
  {
    v9 = 0;
    v10 = 260 - v6;
  }
  else
  {
    v10 = 0LL;
  }
  if ( v9 >= 0 )
  {
    v11 = &Name[v10];
    v12 = 260 - v10;
    if ( v10 == 260 )
      goto LABEL_17;
    v13 = 2147483646LL;
    v14 = (char *)((char *)L"_p0" - (char *)v11);
    while ( v13 )
    {
      v15 = *(WCHAR *)((char *)v11 + (_QWORD)v14);
      if ( !v15 )
        break;
      *v11 = v15;
      --v13;
      ++v11;
      if ( !--v12 )
        goto LABEL_17;
    }
    if ( !v12 )
LABEL_17:
      --v11;
    *v11 = 0;
  }
  v16 = a4 >> 31;
  v17 = a4 & 0x7FFFFFFF;
  v18 = 1;
  v19 = 1;
  if ( v17 )
    v19 = v17;
  Semaphore = CreateSemaphoreExW(0LL, v17, v19, Name, 0, 0x1F0003u);
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
                  (unsigned int)"internal\\sdk\\inc\\wil\\resultmacros.h",
                  v21);
    v27 = LastError;
    if ( LastError < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x84,
        v26,
        (const char *)(unsigned int)LastError,
        dwFlags);
      return v27;
    }
  }
  v22 = 260LL;
  v23 = Name;
  do
  {
    if ( !*v23 )
      break;
    ++v23;
    --v22;
  }
  while ( v22 );
  if ( v22 )
  {
    v8 = 0;
    v24 = 260 - v22;
  }
  else
  {
    v24 = 0LL;
  }
  if ( v8 >= 0 )
  {
    v29 = &Name[v24];
    v30 = 260 - v24;
    if ( 260 == v24 )
      goto LABEL_39;
    v31 = 2147483646LL;
    v32 = (char *)((char *)L"h" - (char *)v29);
    while ( v31 )
    {
      v33 = *(WCHAR *)((char *)v29 + (_QWORD)v32);
      if ( !v33 )
        break;
      *v29 = v33;
      --v31;
      ++v29;
      if ( !--v30 )
        goto LABEL_39;
    }
    if ( !v30 )
LABEL_39:
      --v29;
    *v29 = 0;
  }
  if ( (_DWORD)v16 )
    v18 = v16;
  v34 = CreateSemaphoreExW(0LL, v16, v18, Name, 0, 0x1F0003u);
  if ( v34 )
  {
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
      (char *)this + 8,
      v34);
    return 0LL;
  }
  v36 = wil::details::in1diag3::Return_GetLastError(
          retaddr,
          (void *)0x15B0,
          (unsigned int)"internal\\sdk\\inc\\wil\\resultmacros.h",
          v35);
  v38 = v36;
  if ( v36 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr_NoOriginate(retaddr, (void *)0x88, v37, (const char *)(unsigned int)v36, dwFlagsa);
  return v38;
}
