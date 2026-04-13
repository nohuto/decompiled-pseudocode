/*
 * XREFs of ?Release@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x180017A48
 * Callers:
 *     wil::details::_dynamic_atexit_destructor_for__g_processLocalData__ @ 0x1800CB060 (wil--details--_dynamic_atexit_destructor_for__g_processLocalData__.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800032AC (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800032D4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Destroy@SemaphoreValue@details_abi@wil@@QEAAXXZ @ 0x180003398 (-Destroy@SemaphoreValue@details_abi@wil@@QEAAXXZ.c)
 *     ??_G?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAPEAXI@Z @ 0x180017FA8 (--_G-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Release(_QWORD *lpMem)
{
  void *v2; // rbx
  DWORD v3; // eax
  const char *v4; // r9
  DWORD LastError; // esi
  BOOL v7; // eax
  __int64 v8; // r8
  const char *v9; // r9
  wil::details::in1diag3 *v10; // rcx
  int v11; // eax
  HANDLE ProcessHeap; // rax
  __int64 v13; // r8
  const char *v14; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (void *)lpMem[1];
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
      goto LABEL_19;
    }
  }
  if ( (v3 & 0xFFFFFF7F) != 0 )
    v2 = 0LL;
LABEL_6:
  if ( (*(_DWORD *)lpMem)-- != 1 )
    goto LABEL_15;
  wil::details_abi::SemaphoreValue::Destroy((wil::details_abi::SemaphoreValue *)(lpMem + 2));
  if ( v2 )
  {
    LastError = GetLastError();
    v7 = ReleaseMutex(v2);
    v10 = retaddr;
    if ( v7 )
    {
      SetLastError(LastError);
      goto LABEL_10;
    }
LABEL_19:
    wil::details::in1diag3::_FailFast_GetLastError(v10, (void *)0x883, v8, v9);
    goto LABEL_20;
  }
LABEL_10:
  v2 = 0LL;
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
LABEL_15:
  if ( v2 && !ReleaseMutex(v2) )
  {
LABEL_20:
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x883, v13, v14);
    JUMPOUT(0x180017B76LL);
  }
}
