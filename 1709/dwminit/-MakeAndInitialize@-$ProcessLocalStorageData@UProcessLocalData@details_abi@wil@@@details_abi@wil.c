/*
 * XREFs of ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x180007028
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180006B98 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x18000541C (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005FB8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006028 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180006078 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x1800060D0 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?create@?$semaphore_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJJJPEBGKPEAU_SECURITY_ATTRIBUTES@@@Z @ 0x180006AF0 (-create@-$semaphore_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@.c)
 *     ??$?8V?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@Uprocess_heap_deleter@2@@wistd@@YA_NAEBV?$unique_ptr@V?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@Uprocess_heap_deleter@3@@0@$$T@Z @ 0x180007374 (--$-8V-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@Uprocess_he.c)
 *     __security_check_cookie @ 0x1800082F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800096E4 (memset_0.c)
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::MakeAndInitialize(
        __int64 a1,
        _QWORD *a2,
        unsigned __int64 *a3)
{
  HANDLE ProcessHeap; // rax
  unsigned __int64 v7; // rbx
  wil::details::in1diag3 *v8; // rcx
  __int64 v9; // r8
  int v10; // edi
  HANDLE v11; // rax
  unsigned __int16 *v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rdx
  unsigned __int16 v16; // ax
  unsigned __int16 *v17; // rax
  LONG v18; // r8d
  unsigned __int64 v19; // rsi
  LONG v20; // edi
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rdx
  LONG v25; // r8d
  HANDLE v26; // r14
  HANDLE v27; // rsi
  HANDLE v28; // rax
  __int64 v29; // r8
  const char *v30; // r9
  __int64 v31; // r8
  const char *v32; // r9
  HANDLE hObject[2]; // [rsp+30h] [rbp-D0h] BYREF
  LPVOID v34[2]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int16 v35[264]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2A8h] [rbp+1A8h]

  *a3 = 0LL;
  ProcessHeap = GetProcessHeap();
  v34[0] = HeapAlloc(ProcessHeap, 8u, 0x78uLL);
  v7 = (unsigned __int64)v34[0];
  if ( (unsigned __int8)wistd::operator==<wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>,wil::process_heap_deleter>(v34) )
  {
    v10 = -2147024882;
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x13D, v9, (const char *)0x8007000ELL);
    goto LABEL_3;
  }
  *(_OWORD *)hObject = 0LL;
  if ( (v7 & 3) != 0 )
    wil::details::in1diag3::_FailFastImmediate_Unexpected(v8);
  v13 = v35;
  v14 = a1 - (_QWORD)v35;
  v15 = 260LL;
  do
  {
    if ( v15 == -2147483386 )
      break;
    v16 = *(unsigned __int16 *)((char *)v13 + v14);
    if ( !v16 )
      break;
    *v13++ = v16;
    --v15;
  }
  while ( v15 );
  v17 = v13 - 1;
  if ( v15 )
    v17 = v13;
  *v17 = 0;
  StringCchCatW(v35, v15, (char *)L"_p0");
  v18 = 1;
  v19 = v7 >> 33;
  v20 = (v7 >> 2) & 0x7FFFFFFF;
  if ( v20 )
    v18 = (v7 >> 2) & 0x7FFFFFFF;
  v21 = wil::semaphore_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_returncode_policy>::create(
          hObject,
          v20,
          v18,
          v35);
  v10 = v21;
  if ( v21 >= 0 )
  {
    StringCchCatW(v35, v22, (char *)L"h");
    v25 = 1;
    if ( (_DWORD)v19 )
      v25 = v7 >> 33;
    v21 = wil::semaphore_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_returncode_policy>::create(
            &hObject[1],
            v19,
            v25,
            v35);
    v10 = v21;
    if ( v21 >= 0 )
    {
      v10 = 0;
      goto LABEL_23;
    }
    v24 = 136LL;
  }
  else
  {
    v24 = 132LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(retaddr, (void *)v24, v23, (const char *)(unsigned int)v21);
LABEL_23:
  if ( v10 >= 0 )
  {
    if ( v7 )
    {
      *(_DWORD *)v7 = 1;
      *(_QWORD *)(v7 + 8) = *a2;
      v28 = hObject[0];
      *a2 = 0LL;
      v27 = 0LL;
      *(_QWORD *)(v7 + 16) = v28;
      v26 = 0LL;
      *(HANDLE *)(v7 + 24) = hObject[1];
      hObject[0] = 0LL;
      hObject[1] = 0LL;
      memset_0((void *)(v7 + 32), 0, 0x58uLL);
      *(_WORD *)(v7 + 32) = 88;
      *(_DWORD *)(v7 + 36) = 1;
      memset_0((void *)(v7 + 40), 0, 0x50uLL);
    }
    else
    {
      v26 = hObject[1];
      v27 = hObject[0];
    }
    v10 = 0;
    *a3 = v7;
    v7 = 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(retaddr, (void *)0x140, v23, (const char *)(unsigned int)v10);
    v26 = hObject[1];
    v27 = hObject[0];
  }
  if ( v26 && !CloseHandle(v26) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x878, v29, v30);
    __debugbreak();
  }
  if ( v27 && !CloseHandle(v27) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x878, v31, v32);
    __debugbreak();
  }
LABEL_3:
  if ( v7 )
  {
    v11 = GetProcessHeap();
    HeapFree(v11, 0, (LPVOID)v7);
  }
  return (unsigned int)v10;
}
