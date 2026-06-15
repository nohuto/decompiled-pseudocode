/*
 * XREFs of ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180007080
 * Callers:
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x180005E00 (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001694 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180001EC4 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002C78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180002CC0 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180002CE8 (-FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z @ 0x180002E48 (-CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x1800030DC (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ??0UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x18000569C (--0UsageIndexes@details_abi@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180034E70 (__security_check_cookie.c)
 *     memset_0 @ 0x180035A50 (memset_0.c)
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Acquire(
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
  char *v13; // r9
  void *v14; // r14
  _DWORD *v15; // rbx
  unsigned __int64 v16; // r12
  int ValueInternal; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  const char *v20; // r9
  HANDLE ProcessHeap; // rax
  _QWORD *v22; // rax
  _QWORD *v23; // rbx
  int v24; // eax
  __int64 v25; // r8
  const char *v26; // r9
  __int64 v27; // r8
  const char *v28; // r9
  HANDLE v29; // rax
  HANDLE v30; // rax
  __int64 v31; // r8
  const char *v32; // r9
  unsigned __int64 v33; // [rsp+30h] [rbp-D0h] BYREF
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
  v15 = 0LL;
  v33 = 0LL;
  v16 = 0LL;
  ValueInternal = wil::details_abi::SemaphoreValue::TryGetValueInternal((char *)Name, (__int64)v11, &v33, (bool *)v13);
  v8 = ValueInternal;
  if ( ValueInternal >= 0 )
  {
    v16 = v33;
    v8 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x61, (__int64)"wil", (const char *)(unsigned int)ValueInternal);
  }
  if ( v8 >= 0 )
  {
    v15 = (_DWORD *)(4 * v16);
    v8 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x6A, (__int64)"wil", (const char *)(unsigned int)v8);
  }
  if ( v8 >= 0 )
  {
    if ( v15 )
    {
      *a2 = v15;
      *(_DWORD *)*a2 = *v15 + 1;
LABEL_20:
      v8 = 0;
      goto LABEL_21;
    }
    *a2 = 0LL;
    ProcessHeap = GetProcessHeap();
    v22 = HeapAlloc(ProcessHeap, 8u, 0x130uLL);
    v23 = v22;
    if ( v22 )
    {
      *(_OWORD *)hObject = 0LL;
      v24 = wil::details_abi::SemaphoreValue::CreateFromPointer(
              (wil::details_abi::SemaphoreValue *)hObject,
              (char *)Name,
              (unsigned __int64)v22);
      v8 = v24;
      if ( v24 >= 0 )
      {
        v30 = hObject[0];
        *(_DWORD *)v23 = 1;
        v23[1] = v7;
        v23[2] = v30;
        v7 = 0LL;
        v23[3] = hObject[1];
        memset_0(v23 + 4, 0, 0x110uLL);
        v23[4] = 0LL;
        wil::details_abi::UsageIndexes::UsageIndexes((wil::details_abi::UsageIndexes *)(v23 + 5));
        InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v23 + 29), 0, 0);
        v23[34] = 0LL;
        v23[35] = 0LL;
        v23[36] = 0LL;
        v23[37] = 0LL;
        v8 = 0;
        *a2 = v23;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(retaddr, (void *)0x140, (__int64)"wil", (const char *)(unsigned int)v24);
        if ( hObject[1] && !CloseHandle(hObject[1]) )
        {
          wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x879, v25, v26);
          __debugbreak();
        }
        if ( hObject[0] && !CloseHandle(hObject[0]) )
        {
          wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x879, v27, v28);
          __debugbreak();
        }
        v29 = GetProcessHeap();
        HeapFree(v29, 0, v23);
      }
      if ( v8 >= 0 )
        goto LABEL_20;
    }
    else
    {
      v8 = -2147024882;
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0x13D, (__int64)"wil", (const char *)0x8007000ELL);
    }
    v18 = 297LL;
    goto LABEL_35;
  }
  v18 = 289LL;
LABEL_35:
  wil::details::in1diag3::Return_Hr(retaddr, (void *)v18, (__int64)"wil", (const char *)(unsigned int)v8);
LABEL_21:
  if ( v14 && !ReleaseMutex(v14) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x883, v19, v20);
    __debugbreak();
  }
  if ( v7 && !CloseHandle(v7) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x879, v31, v32);
    JUMPOUT(0x1800073E5LL);
  }
  return (unsigned int)v8;
}
