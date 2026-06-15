/*
 * XREFs of ?Release@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x180003754
 * Callers:
 *     wil::details::_dynamic_atexit_destructor_for__g_processLocalData__ @ 0x1800293E0 (wil--details--_dynamic_atexit_destructor_for__g_processLocalData__.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180002AC8 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180002AE0 (-FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??_G?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAPEAXI@Z @ 0x1800038D8 (--_G-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Release(_QWORD *lpMem)
{
  void *v2; // rbx
  DWORD v3; // eax
  void *v4; // rdx
  __int64 v5; // r8
  const char *v6; // r9
  void *v8; // rsi
  DWORD LastError; // ebp
  __int64 v10; // r8
  const char *v11; // r9
  void *v12; // rsi
  DWORD v13; // ebp
  __int64 v14; // r8
  const char *v15; // r9
  DWORD v16; // esi
  __int64 v17; // r8
  const char *v18; // r9
  int v19; // eax
  HANDLE ProcessHeap; // rax
  __int64 v21; // r8
  const char *v22; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = (void *)lpMem[1];
  v3 = WaitForSingleObjectEx(v2, 0xFFFFFFFF, 0);
  if ( v3 != 258 )
  {
    if ( !v3 )
      goto LABEL_7;
    if ( v3 != 128 )
    {
      wil::details::in1diag3::FailFast_Unexpected(retaddr, v4, v5, v6);
      __debugbreak();
    }
  }
  if ( (v3 & 0xFFFFFF7F) != 0 )
    v2 = 0LL;
LABEL_7:
  if ( (*(_DWORD *)lpMem)-- == 1 )
  {
    v8 = (void *)lpMem[2];
    if ( v8 )
    {
      LastError = GetLastError();
      if ( !CloseHandle(v8) )
      {
        wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x878, v10, v11);
        __debugbreak();
      }
      SetLastError(LastError);
    }
    lpMem[2] = 0LL;
    v12 = (void *)lpMem[3];
    if ( v12 )
    {
      v13 = GetLastError();
      if ( !CloseHandle(v12) )
      {
        wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x878, v14, v15);
        __debugbreak();
      }
      SetLastError(v13);
    }
    lpMem[3] = 0LL;
    if ( v2 )
    {
      v16 = GetLastError();
      if ( !ReleaseMutex(v2) )
      {
        wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x882, v17, v18);
        __debugbreak();
      }
      SetLastError(v16);
    }
    v2 = 0LL;
    if ( !wil::details::g_processShutdownInProgress )
    {
      v19 = (int)wil::details::g_pfnRtlDllShutdownInProgress;
      if ( wil::details::g_pfnRtlDllShutdownInProgress )
        v19 = wil::details::g_pfnRtlDllShutdownInProgress();
      if ( !v19 )
      {
        wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::`scalar deleting destructor'(lpMem);
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, lpMem);
      }
    }
  }
  if ( v2 )
  {
    if ( !ReleaseMutex(v2) )
    {
      wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x882, v21, v22);
      __debugbreak();
    }
  }
}
