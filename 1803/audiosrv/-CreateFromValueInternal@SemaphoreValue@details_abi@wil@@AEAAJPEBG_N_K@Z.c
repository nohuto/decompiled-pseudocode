/*
 * XREFs of ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x180058540
 * Callers:
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x180058B10 (-MakeAndInitialize@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil.c)
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x1800B29B0 (-MakeAndInitialize@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180015190 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18005FA30 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18009B080 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x18009B6C8 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::CreateFromValueInternal(
        wil::details_abi::SemaphoreValue *this,
        char *a2,
        __int64 a3,
        unsigned __int64 a4)
{
  __int64 v6; // rcx
  WCHAR *v7; // rax
  WCHAR *v8; // rdx
  __int64 v9; // rax
  char *v10; // r9
  WCHAR v11; // r8
  LONG v12; // r12d
  unsigned __int64 v13; // r15
  LONG v14; // ebx
  LONG v15; // r8d
  HANDLE Semaphore; // rdi
  const char *v17; // r9
  wil::details *v18; // rsi
  wil::details_abi::SemaphoreValue *v19; // rbx
  __int64 v20; // rcx
  WCHAR *v21; // rax
  WCHAR *v22; // rax
  char *v23; // r8
  WCHAR v24; // dx
  HANDLE v25; // rsi
  const char *v26; // r9
  wil::details *v27; // rdi
  __int64 v29; // rbp
  DWORD LastError; // ebx
  void *v31; // rdx
  int v32; // eax
  unsigned int v33; // ebx
  DWORD v34; // ebx
  void *v35; // rdx
  int v36; // eax
  unsigned int v37; // ebx
  DWORD dwFlags; // [rsp+20h] [rbp-278h]
  DWORD dwFlagsa; // [rsp+20h] [rbp-278h]
  WCHAR Name[264]; // [rsp+40h] [rbp-258h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+298h] [rbp+0h]

  if ( (a4 & 0xC000000000000000uLL) != 0 )
    wil::details::in1diag3::_FailFastImmediate_Unexpected(this);
  StringCchCopyW((char *)Name, 260LL, a2);
  v6 = 260LL;
  v7 = Name;
  while ( *v7 )
  {
    ++v7;
    if ( !--v6 )
    {
      v29 = 2147483646LL;
      goto LABEL_12;
    }
  }
  v29 = 2147483646LL;
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
    v18 = *(wil::details **)this;
    if ( v18 )
    {
      LastError = GetLastError();
      wil::details::CloseHandle(v18, v31);
      SetLastError(LastError);
    }
    v19 = this;
    *(_QWORD *)this = Semaphore;
  }
  else
  {
    v32 = wil::details::in1diag3::Return_GetLastError(
            retaddr,
            (void *)0x1621,
            (unsigned int)"internal\\sdk\\inc\\wil\\ResultMacros.h",
            v17);
    v33 = v32;
    if ( v32 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x84,
        (unsigned int)"wil",
        (const char *)(unsigned int)v32,
        dwFlags);
      return v33;
    }
    v19 = this;
  }
  v20 = 260LL;
  v21 = Name;
  while ( *v21 )
  {
    ++v21;
    if ( !--v20 )
      goto LABEL_28;
  }
  v22 = &Name[260 - v20];
  v23 = (char *)((char *)L"h" - (char *)v22);
  while ( v29 )
  {
    v24 = *(WCHAR *)((char *)v22 + (_QWORD)v23);
    if ( !v24 )
      break;
    *v22 = v24;
    --v29;
    ++v22;
    if ( !--v20 )
    {
      --v22;
      break;
    }
  }
  *v22 = 0;
LABEL_28:
  if ( (_DWORD)v13 )
    v12 = v13;
  v25 = CreateSemaphoreExW(0LL, v13, v12, Name, 0, 0x1F0003u);
  if ( v25 )
  {
    v27 = (wil::details *)*((_QWORD *)v19 + 1);
    if ( v27 )
    {
      v34 = GetLastError();
      wil::details::CloseHandle(v27, v35);
      SetLastError(v34);
      v19 = this;
    }
    *((_QWORD *)v19 + 1) = v25;
    return 0LL;
  }
  v36 = wil::details::in1diag3::Return_GetLastError(
          retaddr,
          (void *)0x1621,
          (unsigned int)"internal\\sdk\\inc\\wil\\ResultMacros.h",
          v26);
  v37 = v36;
  if ( v36 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x88,
    (unsigned int)"wil",
    (const char *)(unsigned int)v36,
    dwFlagsa);
  return v37;
}
