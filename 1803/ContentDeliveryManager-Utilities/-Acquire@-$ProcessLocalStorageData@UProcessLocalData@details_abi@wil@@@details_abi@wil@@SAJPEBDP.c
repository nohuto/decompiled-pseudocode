/*
 * XREFs of ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1800176E4
 * Callers:
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180003CBC (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001980 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180002084 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031B4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800032AC (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800032D4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z @ 0x180003430 (-CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x1800036CC (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C1147 (memset_0.c)
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
  __int64 v11; // rdx
  char *v12; // r9
  void *v13; // r14
  _DWORD *v14; // rbx
  unsigned __int64 v15; // r12
  int ValueInternal; // eax
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
  unsigned __int64 v34; // [rsp+40h] [rbp-C0h] BYREF
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
  if ( v10 != 258 )
  {
    if ( !v10 )
      goto LABEL_9;
    if ( v10 != 128 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xAAD,
        (__int64)"internal\\sdk\\inc\\wil\\resource.h",
        v12);
      __debugbreak();
    }
  }
  if ( (v10 & 0xFFFFFF7F) != 0 )
  {
    v13 = 0LL;
    goto LABEL_10;
  }
LABEL_9:
  v13 = v7;
LABEL_10:
  v14 = 0LL;
  v34 = 0LL;
  v15 = 0LL;
  ValueInternal = wil::details_abi::SemaphoreValue::TryGetValueInternal((char *)Name, v11, &v34, (bool *)v12);
  v8 = ValueInternal;
  if ( ValueInternal >= 0 )
  {
    v15 = v34;
    v8 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x61, (__int64)"wil", (const char *)(unsigned int)ValueInternal);
  }
  if ( v8 >= 0 )
  {
    v14 = (_DWORD *)(4 * v15);
    v8 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x6A, (__int64)"wil", (const char *)(unsigned int)v8);
  }
  if ( v8 >= 0 )
  {
    if ( v14 )
    {
      *a2 = v14;
      *(_DWORD *)*a2 = *v14 + 1;
LABEL_20:
      v8 = 0;
      goto LABEL_21;
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
        hObject[0] = 0LL;
        *((_QWORD *)v22 + 2) = v29;
        v30 = hObject[1];
        hObject[1] = 0LL;
        *((_QWORD *)v22 + 3) = v30;
        memset_0(v22 + 16, 0, 0x58uLL);
        v22[16] = 88;
        *((_DWORD *)v22 + 9) = 1;
        memset_0(v22 + 20, 0, 0x50uLL);
        v8 = 0;
        *a2 = v22;
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
        goto LABEL_20;
    }
    else
    {
      v8 = -2147024882;
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0x13D, (__int64)"wil", (const char *)0x8007000ELL);
    }
    v17 = 297LL;
    goto LABEL_35;
  }
  v17 = 289LL;
LABEL_35:
  wil::details::in1diag3::Return_Hr(retaddr, (void *)v17, (__int64)"wil", (const char *)(unsigned int)v8);
LABEL_21:
  if ( v13 && !ReleaseMutex(v13) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x883, v18, v19);
    __debugbreak();
  }
  if ( v7 && !CloseHandle(v7) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x879, v31, v32);
    JUMPOUT(0x180017A45LL);
  }
  return (unsigned int)v8;
}
