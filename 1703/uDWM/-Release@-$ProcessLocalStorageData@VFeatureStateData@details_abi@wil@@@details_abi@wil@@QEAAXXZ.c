/*
 * XREFs of ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x180081094
 * Callers:
 *     ??1?$shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAA@XZ @ 0x18004CB68 (--1-$shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAA@XZ.c)
 *     ??1FeatureStateManager@details@wil@@QEAA@XZ @ 0x1800800C8 (--1FeatureStateManager@details@wil@@QEAA@XZ.c)
 * Callees:
 *     ?ReleaseMutex@details@wil@@YAXPEAX@Z @ 0x180017324 (-ReleaseMutex@details@wil@@YAXPEAX@Z.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x1800179B0 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ?acquire@?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEBA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?ReleaseMutex@details@wil@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@@2@PEAKKH@Z @ 0x180018CF8 (-acquire@-$mutex_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil.c)
 *     ?Destroy@SemaphoreValue@details_abi@wil@@QEAAXXZ @ 0x180071124 (-Destroy@SemaphoreValue@details_abi@wil@@QEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?ReleaseMutex@details@wil@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18007246C (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-ReleaseMutex@details@wil@@YAX0@ZU-$i.c)
 *     ??_G?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAPEAXI@Z @ 0x1800801B0 (--_G-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAPEAXI@Z.c)
 *     ?ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x180081024 (-ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 */

void __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Release(char *lpMem)
{
  void *v2; // rdx
  wil *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  HANDLE ProcessHeap; // rax
  wil::details *v9; // [rsp+48h] [rbp+10h] BYREF

  wil::mutex_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_returncode_policy>::acquire(
    (HANDLE *)lpMem + 1,
    &v9);
  if ( (*(_DWORD *)lpMem)-- == 1 )
  {
    wil::details_abi::SemaphoreValue::Destroy((wil::details **)lpMem + 2);
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::ReleaseMutex(void *),wistd::integral_constant<unsigned __int64,2>,void *,0,std::nullptr_t>>::reset(
      &v9,
      0LL);
    if ( wil::ProcessShutdownInProgress(v4) )
    {
      wil::details_abi::FeatureStateData::ProcessShutdown(
        (wil::details_abi::FeatureStateData *)(lpMem + 32),
        v5,
        v6,
        v7);
    }
    else
    {
      wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::`scalar deleting destructor'(lpMem);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, lpMem);
    }
  }
  if ( v9 )
    wil::details::ReleaseMutex(v9, v2);
}
