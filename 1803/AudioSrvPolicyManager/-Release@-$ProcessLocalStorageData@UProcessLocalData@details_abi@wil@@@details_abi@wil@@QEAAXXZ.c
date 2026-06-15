/*
 * XREFs of ?Release@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x180007874
 * Callers:
 *     wil::details::_dynamic_atexit_destructor_for__g_processLocalData__ @ 0x1800383C0 (wil--details--_dynamic_atexit_destructor_for__g_processLocalData__.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180002CC0 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180002CE8 (-FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Destroy@SemaphoreValue@details_abi@wil@@QEAAXXZ @ 0x180002DB0 (-Destroy@SemaphoreValue@details_abi@wil@@QEAAXXZ.c)
 *     ??_G?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAPEAXI@Z @ 0x180007D1C (--_G-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Release(_QWORD *lpMem)
{
  void *v2; // rbx
  DWORD v3; // eax
  void *v4; // rdx
  __int64 v5; // r8
  const char *v6; // r9
  DWORD LastError; // esi
  BOOL v9; // eax
  __int64 v10; // r8
  const char *v11; // r9
  wil::details::in1diag3 *v12; // rcx
  int v13; // eax
  HANDLE ProcessHeap; // rax
  __int64 v15; // r8
  const char *v16; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (void *)lpMem[1];
  v3 = WaitForSingleObjectEx(v2, 0xFFFFFFFF, 0);
  if ( v3 != 258 )
  {
    if ( !v3 )
      goto LABEL_6;
    if ( v3 != 128 )
    {
      wil::details::in1diag3::FailFast_Unexpected(retaddr, v4, v5, v6);
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
    v9 = ReleaseMutex(v2);
    v12 = retaddr;
    if ( v9 )
    {
      SetLastError(LastError);
      goto LABEL_10;
    }
LABEL_19:
    wil::details::in1diag3::_FailFast_GetLastError(v12, (void *)0x883, v10, v11);
    goto LABEL_20;
  }
LABEL_10:
  v2 = 0LL;
  if ( !wil::details::g_processShutdownInProgress )
  {
    v13 = (int)wil::details::g_pfnRtlDllShutdownInProgress;
    if ( wil::details::g_pfnRtlDllShutdownInProgress )
      v13 = wil::details::g_pfnRtlDllShutdownInProgress();
    if ( !v13 )
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
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x883, v15, v16);
    JUMPOUT(0x180007996LL);
  }
}
