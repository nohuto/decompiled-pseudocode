/*
 * XREFs of ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x18000621C
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180006B98 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x18000541C (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006028 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180006060 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180006078 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x1800060D8 (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     ??$?8V?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@Uprocess_heap_deleter@2@@wistd@@YA_NAEBV?$unique_ptr@V?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@Uprocess_heap_deleter@3@@0@$$T@Z @ 0x180007374 (--$-8V-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@Uprocess_he.c)
 *     __security_check_cookie @ 0x1800082F0 (__security_check_cookie.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::TryGetValueInternal(
        char *a1,
        __int64 a2,
        unsigned __int64 *a3,
        bool *a4)
{
  WCHAR *v4; // rdx
  signed __int64 v5; // rcx
  __int64 v7; // r9
  WCHAR v8; // ax
  WCHAR *v9; // rax
  HANDLE v10; // rax
  void *v11; // rdi
  const char *v12; // r9
  unsigned int LastError; // esi
  int ValueFromSemaphore; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  void *v17; // rbx
  const char *v18; // r9
  int v19; // eax
  __int64 v20; // r8
  __int64 v21; // r8
  const char *v22; // r9
  __int64 v23; // r8
  const char *v24; // r9
  __int64 v25; // r8
  const char *v26; // r9
  int v28[2]; // [rsp+28h] [rbp-E0h] BYREF
  HANDLE v29; // [rsp+30h] [rbp-D8h] BYREF
  WCHAR Name[264]; // [rsp+38h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+270h] [rbp+168h]

  *a3 = 0LL;
  v4 = Name;
  v5 = a1 - (char *)Name;
  v7 = 260LL;
  do
  {
    if ( v7 == -2147483386 )
      break;
    v8 = *(WCHAR *)((char *)v4 + v5);
    if ( !v8 )
      break;
    *v4++ = v8;
    --v7;
  }
  while ( v7 );
  v9 = v4 - 1;
  if ( v7 )
    v9 = v4;
  *v9 = 0;
  StringCchCatW(Name, (__int64)v4, (char *)L"_p0");
  v10 = OpenSemaphoreW(0x1F0003u, 0, Name);
  v11 = v10;
  if ( !v10 )
  {
    if ( GetLastError() != 2 )
    {
      LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xC8, (__int64)"wil", v12);
      goto LABEL_23;
    }
LABEL_22:
    LastError = 0;
    goto LABEL_23;
  }
  v28[1] = 0;
  v28[0] = 0;
  ValueFromSemaphore = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v10, &v28[1]);
  LastError = ValueFromSemaphore;
  if ( ValueFromSemaphore < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xCE,
      v16,
      (const char *)(unsigned int)ValueFromSemaphore);
    goto LABEL_23;
  }
  StringCchCatW(Name, v15, (char *)L"h");
  v29 = OpenSemaphoreW(0x1F0003u, 0, Name);
  v17 = v29;
  if ( (unsigned __int8)wistd::operator==<wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>,wil::process_heap_deleter>(&v29) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xD4, (__int64)"wil", v18);
  }
  else
  {
    v19 = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v17, v28);
    LastError = v19;
    if ( v19 >= 0 )
    {
      if ( v17 && !CloseHandle(v17) )
      {
        wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x878, v23, v24);
        __debugbreak();
      }
      *a3 = ((__int64)v28[0] << 31) | v28[1];
      goto LABEL_22;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(retaddr, (void *)0xD6, v20, (const char *)(unsigned int)v19);
  }
  if ( v17 && !CloseHandle(v17) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x878, v21, v22);
    __debugbreak();
  }
LABEL_23:
  if ( v11 && !CloseHandle(v11) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x878, v25, v26);
    JUMPOUT(0x180006458LL);
  }
  return LastError;
}
