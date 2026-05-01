/*
 * XREFs of ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18000575C
 * Callers:
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180004774 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180002A54 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800040A4 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z @ 0x180004240 (-CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z.c)
 *     ?create@?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJPEBGKKPEAU_SECURITY_ATTRIBUTES@@@Z @ 0x180005CD8 (-create@-$mutex_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@.c)
 *     ?acquire@?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEBA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?ReleaseMutex@details@wil@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@@2@PEAKKH@Z @ 0x180005D80 (-acquire@-$mutex_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil.c)
 *     ??$TryGetValue@_K@SemaphoreValue@details_abi@wil@@SAJPEBGPEA_KPEA_N@Z @ 0x180005F3C (--$TryGetValue@_K@SemaphoreValue@details_abi@wil@@SAJPEBGPEA_KPEA_N@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     memset @ 0x180194E50 (memset.c)
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Acquire(
        __int64 a1,
        _QWORD *a2)
{
  DWORD CurrentProcessId; // eax
  int v5; // eax
  int v6; // edi
  __int64 v7; // r8
  const char *v8; // r9
  _DWORD *v9; // rbx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  const char *v13; // r9
  HANDLE ProcessHeap; // rax
  _WORD *v15; // rax
  _WORD *v16; // rbx
  int v17; // eax
  __int64 v18; // r8
  const char *v19; // r9
  __int64 v20; // r8
  const char *v21; // r9
  HANDLE v22; // rax
  HANDLE v23; // rax
  HANDLE v24; // rax
  HANDLE v25; // rax
  HANDLE hObject; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE v28[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v29; // [rsp+48h] [rbp-B8h]
  HANDLE hMutex[2]; // [rsp+50h] [rbp-B0h] BYREF
  wchar_t Buffer[264]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+298h] [rbp+198h]

  *a2 = 0LL;
  CurrentProcessId = GetCurrentProcessId();
  StringCchPrintfW(Buffer, 260LL, L"Local\\SM0:%d:%d:%hs", CurrentProcessId, 120, a1);
  hObject = 0LL;
  v5 = wil::mutex_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_returncode_policy>::create(
         &hObject,
         Buffer);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x11A,
      (__int64)"wil",
      (const char *)(unsigned int)v5);
    goto LABEL_3;
  }
  wil::mutex_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_returncode_policy>::acquire(
    &hObject,
    hMutex);
  v9 = 0LL;
  v29 = 0LL;
  v10 = wil::details_abi::SemaphoreValue::TryGetValue<unsigned __int64>(Buffer);
  v6 = v10;
  if ( v10 >= 0 )
  {
    v9 = (_DWORD *)(4 * v29);
    v6 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x6A,
      (__int64)"wil",
      (const char *)(unsigned int)v10);
  }
  if ( v6 < 0 )
  {
    v11 = 286LL;
LABEL_28:
    wil::details::in1diag3::Return_Hr_NoOriginate(retaddr, (void *)v11, (__int64)"wil", (const char *)(unsigned int)v6);
    goto LABEL_14;
  }
  if ( !v9 )
  {
    *a2 = 0LL;
    ProcessHeap = GetProcessHeap();
    v15 = HeapAlloc(ProcessHeap, 8u, 0x78uLL);
    v16 = v15;
    if ( v15 )
    {
      *(_OWORD *)v28 = 0LL;
      v17 = wil::details_abi::SemaphoreValue::CreateFromPointer(
              (wil::details_abi::SemaphoreValue *)v28,
              (char *)Buffer,
              (unsigned __int64)v15);
      v6 = v17;
      if ( v17 >= 0 )
      {
        v23 = hObject;
        hObject = 0LL;
        *(_DWORD *)v16 = 1;
        *((_QWORD *)v16 + 1) = v23;
        v24 = v28[0];
        v28[0] = 0LL;
        *((_QWORD *)v16 + 2) = v24;
        v25 = v28[1];
        v28[1] = 0LL;
        *((_QWORD *)v16 + 3) = v25;
        memset(v16 + 16, 0, 0x58uLL);
        v16[16] = 88;
        *((_DWORD *)v16 + 9) = 1;
        memset(v16 + 20, 0, 0x50uLL);
        v6 = 0;
        *a2 = v16;
      }
      else
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x13D,
          (__int64)"wil",
          (const char *)(unsigned int)v17);
        if ( v28[1] && !CloseHandle(v28[1]) )
        {
          wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x875, v18, v19);
          __debugbreak();
        }
        if ( v28[0] && !CloseHandle(v28[0]) )
        {
          wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x875, v20, v21);
          JUMPOUT(0x180005A78LL);
        }
        v22 = GetProcessHeap();
        HeapFree(v22, 0, v16);
      }
      if ( v6 >= 0 )
        goto LABEL_13;
    }
    else
    {
      v6 = -2147024882;
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0x13A, (__int64)"wil", (const char *)0x8007000ELL);
    }
    v11 = 294LL;
    goto LABEL_28;
  }
  *a2 = v9;
  *(_DWORD *)*a2 = *v9 + 1;
LABEL_13:
  v6 = 0;
LABEL_14:
  if ( hMutex[0] && !ReleaseMutex(hMutex[0]) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x87B, v12, v13);
    __debugbreak();
  }
LABEL_3:
  if ( hObject && !CloseHandle(hObject) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x875, v7, v8);
    __debugbreak();
  }
  return (unsigned int)v6;
}
