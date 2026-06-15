/*
 * XREFs of ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x1400327C4
 * Callers:
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x140033808 (-MakeAndInitialize@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil.c)
 * Callees:
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x140033E30 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140033EC4 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x140034400 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x140034884 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1400349D4 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::CreateFromValueInternal(
        wil::details_abi::SemaphoreValue *this,
        const unsigned __int16 *a2,
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
  unsigned int v26; // edi
  WCHAR *v28; // rax
  __int64 v29; // rbx
  __int64 v30; // rdx
  char *v31; // rcx
  WCHAR v32; // r8
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
    v26 = LastError;
    if ( LastError < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x84,
        (unsigned int)"wil",
        (const char *)(unsigned int)LastError,
        dwFlags);
      return v26;
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
    v28 = &Name[v24];
    v29 = 260 - v24;
    if ( 260 == v24 )
      goto LABEL_39;
    v30 = 2147483646LL;
    v31 = (char *)((char *)L"h" - (char *)v28);
    while ( v30 )
    {
      v32 = *(WCHAR *)((char *)v28 + (_QWORD)v31);
      if ( !v32 )
        break;
      *v28 = v32;
      --v30;
      ++v28;
      if ( !--v29 )
        goto LABEL_39;
    }
    if ( !v29 )
LABEL_39:
      --v28;
    *v28 = 0;
  }
  if ( (_DWORD)v16 )
    v18 = v16;
  v33 = CreateSemaphoreExW(0LL, v16, v18, Name, 0, 0x1F0003u);
  if ( v33 )
  {
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
      (char *)this + 8,
      v33);
    return 0LL;
  }
  v35 = wil::details::in1diag3::Return_GetLastError(
          retaddr,
          (void *)0x15B0,
          (unsigned int)"internal\\sdk\\inc\\wil\\resultmacros.h",
          v34);
  v36 = v35;
  if ( v35 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x88,
    (unsigned int)"wil",
    (const char *)(unsigned int)v35,
    dwFlagsa);
  return v36;
}
