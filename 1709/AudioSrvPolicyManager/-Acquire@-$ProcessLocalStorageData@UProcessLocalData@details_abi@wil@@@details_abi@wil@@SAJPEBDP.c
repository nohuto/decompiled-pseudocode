/*
 * XREFs of ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180003518
 * Callers:
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180003180 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800014D0 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180001C30 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002A80 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180002AC8 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180002AE0 (-FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x180002CA0 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x1800039C0 (-MakeAndInitialize@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil.c)
 *     __security_check_cookie @ 0x180026990 (__security_check_cookie.c)
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Acquire(
        __int64 a1,
        _QWORD *a2)
{
  DWORD CurrentProcessId; // eax
  HANDLE Mutex; // rax
  wil::details *v6; // rcx
  void *v7; // rbx
  int LastErrorFailHr; // edi
  __int64 v9; // r8
  const char *v10; // r9
  DWORD v11; // eax
  void *v12; // rdx
  __int64 v13; // r8
  char *v14; // r9
  void *v15; // r14
  _DWORD *v16; // rsi
  unsigned __int64 v17; // r12
  int ValueInternal; // eax
  __int64 v19; // r8
  const char *v20; // r9
  int v21; // eax
  HANDLE v23; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v24; // [rsp+38h] [rbp-C8h] BYREF
  WCHAR Name[264]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+288h] [rbp+188h]

  *a2 = 0LL;
  CurrentProcessId = GetCurrentProcessId();
  StringCchPrintfW(Name, 260LL, L"Local\\SM0:%d:%d:%hs", CurrentProcessId, 120, a1);
  Mutex = CreateMutexExW(0LL, Name, 0, 0x1F0001u);
  v23 = Mutex;
  v7 = Mutex;
  if ( !Mutex )
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v6);
    goto LABEL_3;
  }
  v11 = WaitForSingleObjectEx(Mutex, 0xFFFFFFFF, 0);
  if ( v11 != 258 )
  {
    if ( !v11 )
      goto LABEL_11;
    if ( v11 != 128 )
    {
      wil::details::in1diag3::FailFast_Unexpected(retaddr, v12, v13, v14);
      __debugbreak();
    }
  }
  if ( (v11 & 0xFFFFFF7F) != 0 )
  {
    v15 = 0LL;
    goto LABEL_12;
  }
LABEL_11:
  v15 = v7;
LABEL_12:
  v16 = 0LL;
  v24 = 0LL;
  v17 = 0LL;
  ValueInternal = wil::details_abi::SemaphoreValue::TryGetValueInternal((char *)Name, (__int64)v12, &v24, (bool *)v14);
  LastErrorFailHr = ValueInternal;
  if ( ValueInternal >= 0 )
  {
    v17 = v24;
    LastErrorFailHr = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x61,
      (__int64)"wil",
      (const char *)(unsigned int)ValueInternal);
  }
  if ( LastErrorFailHr >= 0 )
  {
    v16 = (_DWORD *)(4 * v17);
    LastErrorFailHr = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x6A,
      (__int64)"wil",
      (const char *)(unsigned int)LastErrorFailHr);
  }
  if ( LastErrorFailHr >= 0 )
  {
    if ( v16 )
    {
      *a2 = v16;
      *(_DWORD *)*a2 = *v16 + 1;
    }
    else
    {
      v21 = wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::MakeAndInitialize(
              Name,
              &v23,
              a2);
      LastErrorFailHr = v21;
      if ( v21 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x129,
          (__int64)"wil",
          (const char *)(unsigned int)v21);
        goto LABEL_23;
      }
    }
    LastErrorFailHr = 0;
LABEL_23:
    v7 = v23;
    goto LABEL_24;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x121,
    (__int64)"wil",
    (const char *)(unsigned int)LastErrorFailHr);
LABEL_24:
  if ( v15 && !ReleaseMutex(v15) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x882, v19, v20);
    JUMPOUT(0x180003752LL);
  }
LABEL_3:
  if ( v7 && !CloseHandle(v7) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x878, v9, v10);
    __debugbreak();
  }
  return (unsigned int)LastErrorFailHr;
}
