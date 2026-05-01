/*
 * XREFs of ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180007708
 * Callers:
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x180006324 (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001AB0 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800021E4 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002F8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180002FD4 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180002FEC (-FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z @ 0x180003150 (-CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z.c)
 *     ??0UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x180005A58 (--0UsageIndexes@details_abi@wil@@QEAA@XZ.c)
 *     ??$TryGetValue@_K@SemaphoreValue@details_abi@wil@@SAJPEBGPEA_KPEA_N@Z @ 0x180008594 (--$TryGetValue@_K@SemaphoreValue@details_abi@wil@@SAJPEBGPEA_KPEA_N@Z.c)
 *     __security_check_cookie @ 0x180041F40 (__security_check_cookie.c)
 *     memset_0 @ 0x180042FEC (memset_0.c)
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Acquire(
        __int64 a1,
        _QWORD *a2)
{
  DWORD CurrentProcessId; // eax
  HANDLE Mutex; // rax
  wil::details *v6; // rcx
  void *v7; // rbx
  int v8; // esi
  DWORD v10; // eax
  void *v11; // rdx
  __int64 v12; // r8
  const char *v13; // r9
  void *v14; // r14
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  const char *v18; // r9
  HANDLE ProcessHeap; // rax
  _QWORD *v20; // rax
  _QWORD *v21; // rdi
  int v22; // eax
  __int64 v23; // r8
  const char *v24; // r9
  __int64 v25; // r8
  const char *v26; // r9
  HANDLE v27; // rax
  HANDLE v28; // rax
  __int64 v29; // r8
  const char *v30; // r9
  HANDLE hObject[3]; // [rsp+38h] [rbp-C8h] BYREF
  WCHAR Name[264]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+298h] [rbp+198h]

  *a2 = 0LL;
  CurrentProcessId = GetCurrentProcessId();
  StringCchPrintfW(Name, 260LL, L"Local\\SM0:%d:%d:%hs", CurrentProcessId, 304, a1);
  Mutex = CreateMutexExW(0LL, Name, 0, 0x1F0001u);
  v7 = Mutex;
  if ( !Mutex )
    return (unsigned int)wil::details::GetLastErrorFailHr(v6);
  v10 = WaitForSingleObjectEx(Mutex, 0xFFFFFFFF, 0);
  if ( v10 != 258 )
  {
    if ( !v10 )
      goto LABEL_9;
    if ( v10 != 128 )
    {
      wil::details::in1diag3::FailFast_Unexpected(retaddr, v11, v12, v13);
      __debugbreak();
    }
  }
  if ( (v10 & 0xFFFFFF7F) != 0 )
  {
    v14 = 0LL;
    goto LABEL_10;
  }
LABEL_9:
  v14 = v7;
LABEL_10:
  v15 = wil::details_abi::SemaphoreValue::TryGetValue<unsigned __int64>(Name);
  v8 = v15;
  if ( v15 >= 0 )
    v8 = 0;
  else
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x6A, (__int64)"wil", (const char *)(unsigned int)v15);
  if ( v8 >= 0 )
  {
    *a2 = 0LL;
    ProcessHeap = GetProcessHeap();
    v20 = HeapAlloc(ProcessHeap, 8u, 0x130uLL);
    v21 = v20;
    if ( v20 )
    {
      *(_OWORD *)hObject = 0LL;
      v22 = wil::details_abi::SemaphoreValue::CreateFromPointer(
              (wil::details_abi::SemaphoreValue *)hObject,
              (char *)Name,
              (unsigned __int64)v20);
      v8 = v22;
      if ( v22 >= 0 )
      {
        v28 = hObject[0];
        *(_DWORD *)v21 = 1;
        v21[1] = v7;
        v21[2] = v28;
        v7 = 0LL;
        v21[3] = hObject[1];
        memset_0(v21 + 4, 0, 0x110uLL);
        v21[4] = 0LL;
        wil::details_abi::UsageIndexes::UsageIndexes((wil::details_abi::UsageIndexes *)(v21 + 5));
        InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v21 + 29), 0, 0);
        v21[34] = 0LL;
        v21[35] = 0LL;
        v21[36] = 0LL;
        v21[37] = 0LL;
        v8 = 0;
        *a2 = v21;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(retaddr, (void *)0x140, (__int64)"wil", (const char *)(unsigned int)v22);
        if ( hObject[1] && !CloseHandle(hObject[1]) )
        {
          wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x879, v23, v24);
          __debugbreak();
        }
        if ( hObject[0] && !CloseHandle(hObject[0]) )
        {
          wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x879, v25, v26);
          __debugbreak();
        }
        v27 = GetProcessHeap();
        HeapFree(v27, 0, v21);
      }
      if ( v8 >= 0 )
      {
        v8 = 0;
        goto LABEL_17;
      }
    }
    else
    {
      v8 = -2147024882;
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0x13D, (__int64)"wil", (const char *)0x8007000ELL);
    }
    v16 = 297LL;
  }
  else
  {
    v16 = 289LL;
  }
  wil::details::in1diag3::Return_Hr(retaddr, (void *)v16, (__int64)"wil", (const char *)(unsigned int)v8);
LABEL_17:
  if ( v14 && !ReleaseMutex(v14) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x883, v17, v18);
    __debugbreak();
  }
  if ( v7 && !CloseHandle(v7) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x879, v29, v30);
    JUMPOUT(0x180007A3DLL);
  }
  return (unsigned int)v8;
}
