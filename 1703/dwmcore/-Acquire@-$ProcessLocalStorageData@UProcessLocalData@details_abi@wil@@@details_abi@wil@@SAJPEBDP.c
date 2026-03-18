/*
 * XREFs of ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180136598
 * Callers:
 *     ?GetShared@?$ProcessLocalStorage@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAPEAUProcessLocalData@23@XZ @ 0x180136FE8 (-GetShared@-$ProcessLocalStorage@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAPEAUPr.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800BB63C (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180136768 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x180137608 (-MakeAndInitialize@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil.c)
 *     ?ReleaseMutex@details@wil@@YAXPEAX@Z @ 0x18013786C (-ReleaseMutex@details@wil@@YAXPEAX@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180137B68 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180137BF0 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x180137F88 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ?acquire@?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEBA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?ReleaseMutex@details@wil@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@@2@PEAKKH@Z @ 0x1801383F4 (-acquire@-$mutex_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180138734 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Acquire(
        __int64 a1,
        _QWORD *a2)
{
  DWORD CurrentProcessId; // eax
  HANDLE Mutex; // rax
  const char *v5; // r9
  unsigned int v6; // r8d
  int LastError; // ebx
  void *v8; // rdx
  _DWORD *v9; // rdi
  unsigned __int64 v10; // r14
  bool v11; // dl
  bool *v12; // r9
  int ValueInternal; // eax
  unsigned int v14; // r8d
  unsigned __int64 v15; // r9
  __int64 v16; // rdx
  int v18; // eax
  int v19; // [rsp+20h] [rbp-E0h]
  wil::details *v20; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v21; // [rsp+38h] [rbp-C8h] BYREF
  wil::details *v22; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR Name[264]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+288h] [rbp+188h]

  *a2 = 0LL;
  CurrentProcessId = GetCurrentProcessId();
  v19 = 120;
  StringCchPrintfW(Name, 0x104uLL, (size_t *)L"Local\\SM0:%d:%d:%hs", CurrentProcessId);
  v20 = 0LL;
  Mutex = CreateMutexExW(0LL, Name, 0, 0x1F0001u);
  if ( Mutex )
  {
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
      &v20,
      Mutex);
    LastError = 0;
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x15B0,
                  (unsigned int)"internal\\sdk\\inc\\wil\\resultmacros.h",
                  v5);
  }
  if ( LastError < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x11A,
      v6,
      (const char *)(unsigned int)LastError,
      120);
    goto LABEL_19;
  }
  wil::mutex_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_returncode_policy>::acquire(
    &v20,
    &v22);
  v9 = 0LL;
  v21 = 0LL;
  v10 = 0LL;
  ValueInternal = wil::details_abi::SemaphoreValue::TryGetValueInternal(Name, v11, &v21, v12);
  LastError = ValueInternal;
  if ( ValueInternal >= 0 )
  {
    v10 = v21;
    LastError = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x61,
      v14,
      (const char *)(unsigned int)ValueInternal,
      120);
  }
  if ( LastError >= 0 )
  {
    v9 = (_DWORD *)(4 * v10);
    LastError = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x6A,
      v14,
      (const char *)(unsigned int)LastError,
      v19);
  }
  if ( LastError >= 0 )
  {
    if ( v9 )
    {
      *a2 = v9;
      *(_DWORD *)*a2 = *v9 + 1;
    }
    else
    {
      v18 = wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::MakeAndInitialize(Name);
      LastError = v18;
      if ( v18 < 0 )
      {
        v15 = (unsigned int)v18;
        v16 = 294LL;
        goto LABEL_24;
      }
    }
    LastError = 0;
    goto LABEL_17;
  }
  v15 = (unsigned int)LastError;
  v16 = 286LL;
LABEL_24:
  wil::details::in1diag3::Return_Hr_NoOriginate(retaddr, (void *)v16, v14, (const char *)v15, v19);
LABEL_17:
  if ( v22 )
    wil::details::ReleaseMutex(v22, v8);
LABEL_19:
  if ( v20 )
    wil::details::CloseHandle(v20, v8);
  return (unsigned int)LastError;
}
