/*
 * XREFs of ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180006B98
 * Callers:
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x1800067F8 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001270 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800059C0 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006028 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180006078 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180006090 (-FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x18000621C (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x180007028 (-MakeAndInitialize@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil.c)
 *     __security_check_cookie @ 0x1800082F0 (__security_check_cookie.c)
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
  __int64 v20; // r8
  const char *v21; // r9
  int v22; // eax
  __int64 v23; // r8
  HANDLE v25; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v26; // [rsp+38h] [rbp-C8h] BYREF
  WCHAR Name[264]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+288h] [rbp+188h]

  *a2 = 0LL;
  CurrentProcessId = GetCurrentProcessId();
  StringCchPrintfW(Name, 260LL, L"Local\\SM0:%d:%d:%hs", CurrentProcessId, 120, a1);
  Mutex = CreateMutexExW(0LL, Name, 0, 0x1F0001u);
  v25 = Mutex;
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
  v26 = 0LL;
  v17 = 0LL;
  ValueInternal = wil::details_abi::SemaphoreValue::TryGetValueInternal((char *)Name, (__int64)v12, &v26, (bool *)v14);
  LastErrorFailHr = ValueInternal;
  if ( ValueInternal >= 0 )
  {
    v17 = v26;
    LastErrorFailHr = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(retaddr, (void *)0x61, v19, (const char *)(unsigned int)ValueInternal);
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
      v19,
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
      v22 = wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::MakeAndInitialize(
              Name,
              &v25,
              a2);
      LastErrorFailHr = v22;
      if ( v22 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(retaddr, (void *)0x129, v23, (const char *)(unsigned int)v22);
        goto LABEL_23;
      }
    }
    LastErrorFailHr = 0;
LABEL_23:
    v7 = v25;
    goto LABEL_24;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x121,
    v19,
    (const char *)(unsigned int)LastErrorFailHr);
LABEL_24:
  if ( v15 && !ReleaseMutex(v15) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x882, v20, v21);
    __debugbreak();
  }
LABEL_3:
  if ( v7 && !CloseHandle(v7) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x878, v9, v10);
    __debugbreak();
  }
  return (unsigned int)LastErrorFailHr;
}
