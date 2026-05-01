/*
 * XREFs of ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180007B74
 * Callers:
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180003674 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001AB0 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800021E4 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002F8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180002FD4 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180002FEC (-FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z @ 0x180003150 (-CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z.c)
 *     ??$TryGetValue@_K@SemaphoreValue@details_abi@wil@@SAJPEBGPEA_KPEA_N@Z @ 0x180008594 (--$TryGetValue@_K@SemaphoreValue@details_abi@wil@@SAJPEBGPEA_KPEA_N@Z.c)
 *     __security_check_cookie @ 0x180041F40 (__security_check_cookie.c)
 *     memset_0 @ 0x180042FEC (memset_0.c)
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Acquire(
        __int64 a1,
        _QWORD *a2)
{
  DWORD CurrentProcessId; // eax
  HANDLE Mutex; // rax
  wil::details *v6; // rcx
  void *v7; // rdi
  int v8; // esi
  DWORD v10; // eax
  void *v11; // rdx
  __int64 v12; // r8
  const char *v13; // r9
  void *v14; // r14
  _DWORD *v15; // rbx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  const char *v19; // r9
  HANDLE ProcessHeap; // rax
  _WORD *v21; // rax
  _WORD *v22; // rbx
  int v23; // eax
  __int64 v24; // r8
  const char *v25; // r9
  __int64 v26; // r8
  const char *v27; // r9
  HANDLE v28; // rax
  HANDLE v29; // rax
  HANDLE v30; // rax
  __int64 v31; // r8
  const char *v32; // r9
  HANDLE hObject[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v34; // [rsp+40h] [rbp-C0h]
  WCHAR Name[264]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+298h] [rbp+198h]

  *a2 = 0LL;
  CurrentProcessId = GetCurrentProcessId();
  StringCchPrintfW(Name, 260LL, L"Local\\SM0:%d:%d:%hs", CurrentProcessId, 120, a1);
  Mutex = CreateMutexExW(0LL, Name, 0, 0x1F0001u);
  v7 = Mutex;
  if ( !Mutex )
    return (unsigned int)wil::details::GetLastErrorFailHr(v6);
  v10 = WaitForSingleObjectEx(Mutex, 0xFFFFFFFF, 0);
  if ( v10 == 258 )
  {
LABEL_7:
    v14 = 0LL;
    if ( (v10 & 0xFFFFFF7F) != 0 )
      goto LABEL_9;
    goto LABEL_8;
  }
  if ( v10 )
  {
    if ( v10 != 128 )
    {
      wil::details::in1diag3::FailFast_Unexpected(retaddr, v11, v12, v13);
      __debugbreak();
    }
    goto LABEL_7;
  }
LABEL_8:
  v14 = v7;
LABEL_9:
  v34 = 0LL;
  v15 = 0LL;
  v16 = wil::details_abi::SemaphoreValue::TryGetValue<unsigned __int64>(Name);
  v8 = v16;
  if ( v16 >= 0 )
  {
    v8 = 0;
    v15 = (_DWORD *)(4 * v34);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x6A, (__int64)"wil", (const char *)(unsigned int)v16);
  }
  if ( v8 >= 0 )
  {
    if ( v15 )
    {
      *a2 = v15;
      *(_DWORD *)*a2 = *v15 + 1;
LABEL_16:
      v8 = 0;
      goto LABEL_17;
    }
    *a2 = 0LL;
    ProcessHeap = GetProcessHeap();
    v21 = HeapAlloc(ProcessHeap, 8u, 0x78uLL);
    v22 = v21;
    if ( v21 )
    {
      *(_OWORD *)hObject = 0LL;
      v23 = wil::details_abi::SemaphoreValue::CreateFromPointer(
              (wil::details_abi::SemaphoreValue *)hObject,
              (char *)Name,
              (unsigned __int64)v21);
      v8 = v23;
      if ( v23 >= 0 )
      {
        v29 = hObject[0];
        *(_DWORD *)v22 = 1;
        *((_QWORD *)v22 + 1) = v7;
        v7 = 0LL;
        *((_QWORD *)v22 + 2) = v29;
        v30 = hObject[1];
        hObject[1] = 0LL;
        hObject[0] = 0LL;
        *((_QWORD *)v22 + 3) = v30;
        memset_0(v22 + 16, 0, 0x58uLL);
        v22[16] = 88;
        *((_DWORD *)v22 + 9) = 1;
        memset_0(v22 + 20, 0, 0x50uLL);
        *a2 = v22;
        v8 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(retaddr, (void *)0x140, (__int64)"wil", (const char *)(unsigned int)v23);
        if ( hObject[1] && !CloseHandle(hObject[1]) )
        {
          wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x879, v24, v25);
          __debugbreak();
        }
        if ( hObject[0] && !CloseHandle(hObject[0]) )
        {
          wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x879, v26, v27);
          __debugbreak();
        }
        v28 = GetProcessHeap();
        HeapFree(v28, 0, v22);
      }
      if ( v8 >= 0 )
        goto LABEL_16;
    }
    else
    {
      v8 = -2147024882;
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0x13D, (__int64)"wil", (const char *)0x8007000ELL);
    }
    v17 = 297LL;
    goto LABEL_31;
  }
  v17 = 289LL;
LABEL_31:
  wil::details::in1diag3::Return_Hr(retaddr, (void *)v17, (__int64)"wil", (const char *)(unsigned int)v8);
LABEL_17:
  if ( v14 && !ReleaseMutex(v14) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x883, v18, v19);
    __debugbreak();
  }
  if ( v7 && !CloseHandle(v7) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x879, v31, v32);
    JUMPOUT(0x180007EACLL);
  }
  return (unsigned int)v8;
}
