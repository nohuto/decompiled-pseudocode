/*
 * XREFs of ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180004DAC
 * Callers:
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180003C78 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001DC0 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800024A0 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032A4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003368 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z @ 0x180003468 (-CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x18000377C (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180004BF0 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Acquire(
        __int64 a1,
        _QWORD *a2)
{
  DWORD CurrentProcessId; // eax
  HANDLE Mutex; // rax
  wil::details *v6; // rcx
  HANDLE v7; // rbx
  int v8; // esi
  DWORD v10; // eax
  __int64 v11; // rdx
  char *v12; // r9
  void *v13; // r14
  _DWORD *v14; // rdi
  unsigned __int64 v15; // r12
  int ValueInternal; // eax
  __int64 v17; // rdx
  const char *v18; // r9
  HANDLE ProcessHeap; // rax
  _WORD *v20; // rax
  _WORD *v21; // rdi
  int v22; // eax
  const char *v23; // r9
  const char *v24; // r9
  HANDLE v25; // rax
  HANDLE v26; // rax
  HANDLE v27; // rax
  const char *v28; // r9
  HANDLE hHandle; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE hObject[2]; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v31; // [rsp+48h] [rbp-B8h] BYREF
  WCHAR Name[264]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+298h] [rbp+198h]

  *a2 = 0LL;
  CurrentProcessId = GetCurrentProcessId();
  StringCchPrintfW(Name, 260LL, L"Local\\SM0:%d:%d:%hs", CurrentProcessId, 120, a1);
  hHandle = 0LL;
  Mutex = CreateMutexExW(0LL, Name, 0, 0x1F0001u);
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
    &hHandle,
    Mutex);
  v7 = hHandle;
  if ( !hHandle )
    return (unsigned int)wil::details::GetLastErrorFailHr(v6);
  v10 = WaitForSingleObjectEx(hHandle, 0xFFFFFFFF, 0);
  if ( v10 != 258 )
  {
    if ( !v10 )
      goto LABEL_9;
    if ( v10 != 128 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xA82,
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
  v31 = 0LL;
  v15 = 0LL;
  ValueInternal = wil::details_abi::SemaphoreValue::TryGetValueInternal((char *)Name, v11, &v31, (bool *)v12);
  v8 = ValueInternal;
  if ( ValueInternal >= 0 )
  {
    v15 = v31;
    v8 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x61,
      (__int64)"wil",
      (const char *)(unsigned int)ValueInternal);
  }
  if ( v8 >= 0 )
  {
    v14 = (_DWORD *)(4 * v15);
    v8 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(retaddr, (void *)0x6A, (__int64)"wil", (const char *)(unsigned int)v8);
  }
  if ( v8 >= 0 )
  {
    if ( v14 )
    {
      *a2 = v14;
      v7 = hHandle;
      *(_DWORD *)*a2 = *v14 + 1;
LABEL_20:
      v8 = 0;
      goto LABEL_21;
    }
    *a2 = 0LL;
    ProcessHeap = GetProcessHeap();
    v20 = HeapAlloc(ProcessHeap, 8u, 0x78uLL);
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
        v26 = hObject[0];
        *(_DWORD *)v21 = 1;
        *((_QWORD *)v21 + 1) = v7;
        v7 = 0LL;
        hObject[0] = 0LL;
        *((_QWORD *)v21 + 2) = v26;
        v27 = hObject[1];
        hObject[1] = 0LL;
        hHandle = 0LL;
        *((_QWORD *)v21 + 3) = v27;
        memset(v21 + 16, 0, 0x58uLL);
        v21[16] = 88;
        *((_DWORD *)v21 + 9) = 1;
        memset(v21 + 20, 0, 0x50uLL);
        v8 = 0;
        *a2 = v21;
      }
      else
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x140,
          (__int64)"wil",
          (const char *)(unsigned int)v22);
        if ( hObject[1] && !CloseHandle(hObject[1]) )
        {
          wil::details::in1diag3::_FailFast_GetLastError(
            retaddr,
            (void *)0x878,
            (__int64)"internal\\sdk\\inc\\wil\\resource.h",
            v23);
          __debugbreak();
        }
        if ( hObject[0] && !CloseHandle(hObject[0]) )
        {
          wil::details::in1diag3::_FailFast_GetLastError(
            retaddr,
            (void *)0x878,
            (__int64)"internal\\sdk\\inc\\wil\\resource.h",
            v24);
          __debugbreak();
        }
        v25 = GetProcessHeap();
        HeapFree(v25, 0, v21);
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
  wil::details::in1diag3::Return_Hr_NoOriginate(retaddr, (void *)v17, (__int64)"wil", (const char *)(unsigned int)v8);
LABEL_21:
  if ( v13 && !ReleaseMutex(v13) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x882,
      (__int64)"internal\\sdk\\inc\\wil\\resource.h",
      v18);
    __debugbreak();
  }
  if ( v7 && !CloseHandle(v7) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x878,
      (__int64)"internal\\sdk\\inc\\wil\\resource.h",
      v28);
    JUMPOUT(0x180005149LL);
  }
  return (unsigned int)v8;
}
