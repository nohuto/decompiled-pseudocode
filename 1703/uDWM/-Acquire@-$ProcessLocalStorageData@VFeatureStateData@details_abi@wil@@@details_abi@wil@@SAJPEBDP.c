/*
 * XREFs of ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180018D48
 * Callers:
 *     ?GetShared@?$ProcessLocalStorage@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAPEAVFeatureStateData@23@XZ @ 0x180018BF4 (-GetShared@-$ProcessLocalStorage@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAPEAVFe.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800170D8 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?ReleaseMutex@details@wil@@YAXPEAX@Z @ 0x180017324 (-ReleaseMutex@details@wil@@YAXPEAX@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180018C4C (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?acquire@?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEBA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?ReleaseMutex@details@wil@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@@2@PEAKKH@Z @ 0x180018CF8 (-acquire@-$mutex_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180018E74 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z @ 0x180018EB4 (-TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18007203C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800720D0 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x180080978 (-MakeAndInitialize@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil.c)
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Acquire(
        __int64 a1,
        void **a2)
{
  DWORD CurrentProcessId; // eax
  HANDLE Mutex; // rax
  const char *v5; // r9
  int LastError; // ebx
  int Pointer; // eax
  void *v8; // rdx
  _DWORD *v9; // rax
  __int64 v11; // rdx
  wil::details *v12; // [rsp+30h] [rbp-D0h] BYREF
  void *v13; // [rsp+38h] [rbp-C8h] BYREF
  wil::details *v14; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR Name[264]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+178h]

  *a2 = 0LL;
  CurrentProcessId = GetCurrentProcessId();
  StringCchPrintfW(Name, 0x104uLL, (size_t *)L"Local\\SM0:%d:%d:%hs", CurrentProcessId);
  v12 = 0LL;
  Mutex = CreateMutexExW(0LL, Name, 0, 0x1F0001u);
  if ( Mutex )
  {
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
      &v12,
      Mutex);
    LastError = 0;
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x15B0,
                  (unsigned int)"internal\\sdk\\inc\\wil\\ResultMacros.h",
                  v5);
  }
  if ( LastError < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x11A,
      (unsigned int)"wil",
      (const char *)(unsigned int)LastError,
      232);
    goto LABEL_10;
  }
  wil::mutex_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_returncode_policy>::acquire(
    (HANDLE *)&v12,
    &v14);
  v13 = 0LL;
  Pointer = wil::details_abi::SemaphoreValue::TryGetPointer(Name, &v13);
  LastError = Pointer;
  if ( Pointer < 0 )
  {
    v11 = 286LL;
  }
  else
  {
    v9 = v13;
    if ( v13 )
    {
      *a2 = v13;
      *(_DWORD *)*a2 = *v9 + 1;
LABEL_7:
      LastError = 0;
      goto LABEL_8;
    }
    Pointer = wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::MakeAndInitialize(Name);
    LastError = Pointer;
    if ( Pointer >= 0 )
      goto LABEL_7;
    v11 = 294LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v11,
    (unsigned int)"wil",
    (const char *)(unsigned int)Pointer,
    232);
LABEL_8:
  if ( v14 )
    wil::details::ReleaseMutex(v14, v8);
LABEL_10:
  if ( v12 )
    wil::details::CloseHandle(v12, v8);
  return (unsigned int)LastError;
}
