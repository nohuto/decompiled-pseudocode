/*
 * XREFs of ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x180005EE0
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180006828 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180004B08 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x180005168 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005CEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180005D24 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180005D3C (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x180005D9C (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     ??$?8V?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@Uprocess_heap_deleter@2@@wistd@@YA_NAEBV?$unique_ptr@V?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@Uprocess_heap_deleter@3@@0@$$T@Z @ 0x180006FC0 (--$-8V-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@Uprocess_he.c)
 *     __security_check_cookie @ 0x180007120 (__security_check_cookie.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::TryGetValueInternal(
        char *a1,
        __int64 a2,
        unsigned __int64 *a3,
        bool *a4)
{
  __int64 v5; // rdx
  HANDLE v6; // rax
  void *v7; // rdi
  const char *v8; // r9
  unsigned int LastError; // esi
  int ValueFromSemaphore; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  void *v13; // rbx
  const char *v14; // r9
  int v15; // eax
  __int64 v16; // r8
  __int64 v17; // r8
  const char *v18; // r9
  __int64 v19; // r8
  const char *v20; // r9
  __int64 v21; // r8
  const char *v22; // r9
  int v24; // [rsp+20h] [rbp-E0h] BYREF
  int v25; // [rsp+24h] [rbp-DCh] BYREF
  HANDLE v26; // [rsp+28h] [rbp-D8h] BYREF
  WCHAR Name[264]; // [rsp+30h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+268h] [rbp+168h]

  *a3 = 0LL;
  StringCchCopyW((char *)Name, 260LL, a1);
  StringCchCatW(Name, v5, (char *)L"_p0");
  v6 = OpenSemaphoreW(0x1F0003u, 0, Name);
  v7 = v6;
  if ( !v6 )
  {
    if ( GetLastError() != 2 )
    {
      LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xC8, (__int64)"wil", v8);
      goto LABEL_17;
    }
LABEL_16:
    LastError = 0;
    goto LABEL_17;
  }
  v25 = 0;
  v24 = 0;
  ValueFromSemaphore = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v6, &v25);
  LastError = ValueFromSemaphore;
  if ( ValueFromSemaphore < 0 )
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0xCE, v12, (const char *)(unsigned int)ValueFromSemaphore);
    goto LABEL_17;
  }
  StringCchCatW(Name, v11, (char *)L"h");
  v26 = OpenSemaphoreW(0x1F0003u, 0, Name);
  v13 = v26;
  if ( (unsigned __int8)wistd::operator==<wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>,wil::process_heap_deleter>(&v26) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xD4, (__int64)"wil", v14);
  }
  else
  {
    v15 = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v13, &v24);
    LastError = v15;
    if ( v15 >= 0 )
    {
      if ( v13 && !CloseHandle(v13) )
      {
        wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x879, v19, v20);
        __debugbreak();
      }
      *a3 = ((__int64)v24 << 31) | v25;
      goto LABEL_16;
    }
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0xD6, v16, (const char *)(unsigned int)v15);
  }
  if ( v13 && !CloseHandle(v13) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x879, v17, v18);
    __debugbreak();
  }
LABEL_17:
  if ( v7 && !CloseHandle(v7) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x879, v21, v22);
    JUMPOUT(0x1800060DDLL);
  }
  return LastError;
}
