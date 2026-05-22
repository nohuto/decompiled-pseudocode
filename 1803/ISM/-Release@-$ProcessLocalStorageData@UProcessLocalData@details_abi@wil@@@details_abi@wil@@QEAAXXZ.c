/*
 * XREFs of ?Release@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x180004D6C
 * Callers:
 *     wil::details::_dynamic_atexit_destructor_for__g_processLocalData__ @ 0x1800EA980 (wil--details--_dynamic_atexit_destructor_for__g_processLocalData__.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003128 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180004840 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ??_G?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAPEAXI@Z @ 0x180004EBC (--_G-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Release(LPVOID lpMem)
{
  void *v2; // rdi
  DWORD v3; // eax
  const char *v4; // r9
  DWORD LastError; // ebx
  BOOL v7; // eax
  const char *v8; // r9
  wil::details::in1diag3 *v9; // rcx
  void *v10; // rbx
  int v11; // eax
  HANDLE ProcessHeap; // rax
  const char *v13; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (void *)*((_QWORD *)lpMem + 1);
  v3 = WaitForSingleObjectEx(v2, 0xFFFFFFFF, 0);
  if ( v3 != 258 )
  {
    if ( !v3 )
      goto LABEL_6;
    if ( v3 != 128 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xAAD,
        (__int64)"internal\\sdk\\inc\\wil\\resource.h",
        v4);
      goto LABEL_20;
    }
  }
  if ( (v3 & 0xFFFFFF7F) != 0 )
    v2 = 0LL;
LABEL_6:
  if ( (*(_DWORD *)lpMem)-- != 1 )
  {
    v10 = v2;
    goto LABEL_16;
  }
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
    (void **)lpMem + 2,
    0LL);
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
    (void **)lpMem + 3,
    0LL);
  if ( v2 )
  {
    LastError = GetLastError();
    v7 = ReleaseMutex(v2);
    v9 = retaddr;
    if ( v7 )
    {
      SetLastError(LastError);
      goto LABEL_10;
    }
LABEL_20:
    wil::details::in1diag3::_FailFast_GetLastError(
      v9,
      (void *)0x883,
      (__int64)"internal\\sdk\\inc\\wil\\resource.h",
      v8);
    goto LABEL_21;
  }
LABEL_10:
  v10 = 0LL;
  if ( !wil::details::g_processShutdownInProgress )
  {
    v11 = (int)wil::details::g_pfnRtlDllShutdownInProgress;
    if ( wil::details::g_pfnRtlDllShutdownInProgress )
      v11 = wil::details::g_pfnRtlDllShutdownInProgress();
    if ( !v11 )
    {
      wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::`scalar deleting destructor'(lpMem);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, lpMem);
    }
  }
LABEL_16:
  if ( v10 && !ReleaseMutex(v10) )
  {
LABEL_21:
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x883,
      (__int64)"internal\\sdk\\inc\\wil\\resource.h",
      v13);
    JUMPOUT(0x180004EB9LL);
  }
}
