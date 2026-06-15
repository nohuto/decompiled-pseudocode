/*
 * XREFs of ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x1800039C0
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180003518 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x18000143C (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002A04 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002A80 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180002AC8 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x180002B20 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?create@?$semaphore_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJJJPEBGKPEAU_SECURITY_ATTRIBUTES@@@Z @ 0x180003470 (-create@-$semaphore_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@.c)
 *     __security_check_cookie @ 0x180026990 (__security_check_cookie.c)
 *     memset @ 0x1800275FE (memset.c)
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::MakeAndInitialize(
        __int64 a1,
        _QWORD *a2,
        unsigned __int64 *a3)
{
  HANDLE ProcessHeap; // rax
  unsigned __int64 v7; // rax
  wil::details::in1diag3 *v8; // rcx
  unsigned __int64 v9; // rbx
  unsigned int v10; // edi
  unsigned __int64 v11; // rdi
  unsigned __int16 *v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rdx
  unsigned __int16 v15; // ax
  unsigned __int16 *v16; // rax
  LONG v17; // r8d
  unsigned __int64 v18; // rsi
  LONG v19; // edi
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rdx
  LONG v23; // r8d
  HANDLE v24; // r14
  HANDLE v25; // rsi
  HANDLE v26; // rax
  __int64 v27; // r8
  const char *v28; // r9
  __int64 v29; // r8
  const char *v30; // r9
  HANDLE v31; // rax
  HANDLE hObject[2]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 v34[264]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+298h] [rbp+198h]

  *a3 = 0LL;
  ProcessHeap = GetProcessHeap();
  v7 = (unsigned __int64)HeapAlloc(ProcessHeap, 8u, 0x78uLL);
  v9 = v7;
  if ( !v7 )
  {
    v10 = -2147024882;
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x13D, (__int64)"wil", (const char *)0x8007000ELL);
    return v10;
  }
  *(_OWORD *)hObject = 0LL;
  if ( (v7 & 3) != 0 )
    wil::details::in1diag3::_FailFastImmediate_Unexpected(v8);
  v11 = v7 >> 2;
  v12 = v34;
  v13 = a1 - (_QWORD)v34;
  v14 = 260LL;
  do
  {
    if ( v14 == -2147483386 )
      break;
    v15 = *(unsigned __int16 *)((char *)v12 + v13);
    if ( !v15 )
      break;
    *v12++ = v15;
    --v14;
  }
  while ( v14 );
  v16 = v12 - 1;
  if ( v14 )
    v16 = v12;
  *v16 = 0;
  StringCchCatW(v34, v14, (char *)L"_p0");
  v17 = 1;
  v18 = v9 >> 33;
  v19 = v11 & 0x7FFFFFFF;
  if ( v19 )
    v17 = v19;
  v20 = wil::semaphore_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_returncode_policy>::create(
          hObject,
          v19,
          v17,
          v34);
  v10 = v20;
  if ( v20 >= 0 )
  {
    StringCchCatW(v34, v21, (char *)L"h");
    v23 = 1;
    if ( (_DWORD)v18 )
      v23 = v9 >> 33;
    v20 = wil::semaphore_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_returncode_policy>::create(
            &hObject[1],
            v18,
            v23,
            v34);
    v10 = v20;
    if ( v20 >= 0 )
    {
      v10 = 0;
      goto LABEL_20;
    }
    v22 = 136LL;
  }
  else
  {
    v22 = 132LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(retaddr, (void *)v22, (__int64)"wil", (const char *)(unsigned int)v20);
LABEL_20:
  if ( (v10 & 0x80000000) == 0 )
  {
    *(_DWORD *)v9 = 1;
    *(_QWORD *)(v9 + 8) = *a2;
    v26 = hObject[0];
    *a2 = 0LL;
    v25 = 0LL;
    *(_QWORD *)(v9 + 16) = v26;
    v24 = 0LL;
    *(HANDLE *)(v9 + 24) = hObject[1];
    hObject[0] = 0LL;
    hObject[1] = 0LL;
    memset((void *)(v9 + 32), 0, 0x58uLL);
    *(_WORD *)(v9 + 32) = 88;
    *(_DWORD *)(v9 + 36) = 1;
    memset((void *)(v9 + 40), 0, 0x50uLL);
    v10 = 0;
    *a3 = v9;
    v9 = 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(retaddr, (void *)0x140, (__int64)"wil", (const char *)v10);
    v24 = hObject[1];
    v25 = hObject[0];
  }
  if ( v24 && !CloseHandle(v24) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x878, v27, v28);
    __debugbreak();
  }
  if ( v25 && !CloseHandle(v25) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x878, v29, v30);
    JUMPOUT(0x180003C60LL);
  }
  if ( v9 )
  {
    v31 = GetProcessHeap();
    HeapFree(v31, 0, (LPVOID)v9);
  }
  return v10;
}
