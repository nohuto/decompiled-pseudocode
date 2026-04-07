/*
 * XREFs of ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18003EA78
 * Callers:
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x18003179C (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 * Callees:
 *     ?TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z @ 0x18003EB9C (-TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z.c)
 *     ?acquire@?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEBA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?ReleaseMutex@details@wil@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@@2@PEAKKH@Z @ 0x18003EF30 (-acquire@-$mutex_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18003F160 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18003F21C (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180044E10 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?ReleaseMutex@details@wil@@YAXPEAX@Z @ 0x180044FC0 (-ReleaseMutex@details@wil@@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180066B9C (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180067728 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x1800680D0 (-MakeAndInitialize@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil.c)
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Acquire(
        __int64 a1,
        void **a2)
{
  DWORD CurrentProcessId; // eax
  HANDLE Mutex; // rax
  wil::details *v5; // rcx
  wil::details *v6; // rbx
  int Pointer; // eax
  void *v8; // rdx
  unsigned int v9; // edi
  _DWORD *v10; // rax
  int v12; // eax
  wil::details *v13; // [rsp+30h] [rbp-D0h] BYREF
  void *v14; // [rsp+38h] [rbp-C8h] BYREF
  wil::details *v15; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR Name[264]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+288h] [rbp+188h]

  *a2 = 0LL;
  CurrentProcessId = GetCurrentProcessId();
  StringCchPrintfW(Name, 0x104uLL, L"Local\\SM0:%d:%d:%hs", CurrentProcessId);
  v13 = 0LL;
  Mutex = CreateMutexExW(0LL, Name, 0, 0x1F0001u);
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
    &v13,
    Mutex);
  v6 = v13;
  if ( !v13 )
    return (unsigned int)wil::details::GetLastErrorFailHr(v5);
  wil::mutex_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_returncode_policy>::acquire(
    &v13,
    &v15);
  v14 = 0LL;
  Pointer = wil::details_abi::SemaphoreValue::TryGetPointer(Name, &v14);
  v9 = Pointer;
  if ( Pointer < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x121,
      (unsigned int)"wil",
      (const char *)(unsigned int)Pointer,
      304);
    goto LABEL_7;
  }
  v10 = v14;
  if ( v14 )
  {
    *a2 = v14;
    *(_DWORD *)*a2 = *v10 + 1;
  }
  else
  {
    v12 = wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::MakeAndInitialize(Name);
    v9 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x129,
        (unsigned int)"wil",
        (const char *)(unsigned int)v12,
        304);
      goto LABEL_6;
    }
  }
  v9 = 0;
LABEL_6:
  v6 = v13;
LABEL_7:
  if ( v15 )
    wil::details::ReleaseMutex(v15, v8);
  if ( v6 )
    wil::details::CloseHandle(v6, v8);
  return v9;
}
