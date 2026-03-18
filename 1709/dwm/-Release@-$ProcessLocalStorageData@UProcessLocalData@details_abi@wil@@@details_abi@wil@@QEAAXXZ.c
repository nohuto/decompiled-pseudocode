/*
 * XREFs of ?Release@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x140005E30
 * Callers:
 *     ??1?$ProcessLocalStorage@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAA@XZ @ 0x140002D00 (--1-$ProcessLocalStorage@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAA@XZ.c)
 * Callees:
 *     ??1?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAA@XZ @ 0x140004C68 (--1-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAA@XZ.c)
 *     ?ReleaseMutex@details@wil@@YAXPEAX@Z @ 0x140005EF4 (-ReleaseMutex@details@wil@@YAXPEAX@Z.c)
 *     ?acquire@?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEBA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?ReleaseMutex@details@wil@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@@2@PEAKKH@Z @ 0x1400067B0 (-acquire@-$mutex_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x140006868 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     _guard_dispatch_icall_nop @ 0x140006950 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Release(char *lpMem)
{
  void *v2; // rdx
  wil::details *v4; // rbx
  DWORD LastError; // edi
  void *v6; // rdx
  wil::details *v7; // rbx
  int v8; // eax
  HANDLE ProcessHeap; // rax
  wil::details *v10; // [rsp+48h] [rbp+10h] BYREF

  wil::mutex_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_returncode_policy>::acquire(
    lpMem + 8,
    &v10);
  if ( (*(_DWORD *)lpMem)-- != 1 )
  {
    v7 = v10;
LABEL_10:
    if ( v7 )
      wil::details::ReleaseMutex(v7, v2);
    return;
  }
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
    lpMem + 16,
    0LL);
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
    lpMem + 24,
    0LL);
  v4 = v10;
  if ( v10 )
  {
    LastError = GetLastError();
    wil::details::ReleaseMutex(v4, v6);
    SetLastError(LastError);
  }
  v7 = 0LL;
  if ( !wil::details::g_processShutdownInProgress )
  {
    v8 = (int)wil::details::g_pfnRtlDllShutdownInProgress;
    if ( wil::details::g_pfnRtlDllShutdownInProgress )
      v8 = wil::details::g_pfnRtlDllShutdownInProgress();
    if ( !v8 )
    {
      wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::~ProcessLocalStorageData<wil::details_abi::ProcessLocalData>((__int64)lpMem);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, lpMem);
      goto LABEL_10;
    }
  }
}
