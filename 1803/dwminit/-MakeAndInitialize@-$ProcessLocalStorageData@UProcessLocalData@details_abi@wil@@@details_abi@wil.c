/*
 * XREFs of ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x180006CB8
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180006828 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180004B08 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x180005168 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005CEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180005D3C (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x180005D94 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?create@?$semaphore_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJJJPEBGKPEAU_SECURITY_ATTRIBUTES@@@Z @ 0x180006780 (-create@-$semaphore_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@.c)
 *     ??$?8V?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@Uprocess_heap_deleter@2@@wistd@@YA_NAEBV?$unique_ptr@V?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@Uprocess_heap_deleter@3@@0@$$T@Z @ 0x180006FC0 (--$-8V-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@Uprocess_he.c)
 *     __security_check_cookie @ 0x180007120 (__security_check_cookie.c)
 *     memset_0 @ 0x180007A10 (memset_0.c)
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::MakeAndInitialize(
        char *a1,
        _QWORD *a2,
        unsigned __int64 *a3)
{
  HANDLE ProcessHeap; // rax
  unsigned __int64 v7; // rbx
  wil::details::in1diag3 *v8; // rcx
  __int64 v9; // r8
  int v10; // edi
  HANDLE v11; // rax
  __int64 v13; // rdx
  LONG v14; // r8d
  unsigned __int64 v15; // rsi
  LONG v16; // edi
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rdx
  LONG v21; // r8d
  HANDLE v22; // r14
  HANDLE v23; // rsi
  unsigned __int64 v24; // rax
  __int64 v25; // r8
  const char *v26; // r9
  __int64 v27; // r8
  const char *v28; // r9
  HANDLE hObject[2]; // [rsp+30h] [rbp-D0h] BYREF
  LPVOID v30[2]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int16 v31[264]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+298h] [rbp+198h]

  *a3 = 0LL;
  ProcessHeap = GetProcessHeap();
  v30[0] = HeapAlloc(ProcessHeap, 8u, 0x78uLL);
  v7 = (unsigned __int64)v30[0];
  if ( (unsigned __int8)wistd::operator==<wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>,wil::process_heap_deleter>(v30) )
  {
    v10 = -2147024882;
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x13D, v9, (const char *)0x8007000ELL);
    goto LABEL_3;
  }
  *(_OWORD *)hObject = 0LL;
  if ( (v7 & 3) != 0 )
    wil::details::in1diag3::_FailFastImmediate_Unexpected(v8);
  StringCchCopyW((char *)v31, 260LL, a1);
  StringCchCatW(v31, v13, (char *)L"_p0");
  v14 = 1;
  v15 = v7 >> 33;
  v16 = (v7 >> 2) & 0x7FFFFFFF;
  if ( v16 )
    v14 = (v7 >> 2) & 0x7FFFFFFF;
  v17 = wil::semaphore_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_returncode_policy>::create(
          hObject,
          v16,
          v14,
          v31);
  v10 = v17;
  if ( v17 >= 0 )
  {
    StringCchCatW(v31, v18, (char *)L"h");
    v21 = 1;
    if ( (_DWORD)v15 )
      v21 = v7 >> 33;
    v17 = wil::semaphore_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_returncode_policy>::create(
            &hObject[1],
            v15,
            v21,
            v31);
    v10 = v17;
    if ( v17 >= 0 )
    {
      v10 = 0;
      goto LABEL_17;
    }
    v20 = 136LL;
  }
  else
  {
    v20 = 132LL;
  }
  wil::details::in1diag3::Return_Hr(retaddr, (void *)v20, v19, (const char *)(unsigned int)v17);
LABEL_17:
  if ( v10 >= 0 )
  {
    *(_DWORD *)v7 = 1;
    v23 = 0LL;
    *(_QWORD *)(v7 + 8) = *a2;
    *a2 = 0LL;
    v22 = 0LL;
    *(HANDLE *)(v7 + 16) = hObject[0];
    *(HANDLE *)(v7 + 24) = hObject[1];
    hObject[0] = 0LL;
    hObject[1] = 0LL;
    memset_0((void *)(v7 + 32), 0, 0x58uLL);
    *(_WORD *)(v7 + 32) = 88;
    *(_DWORD *)(v7 + 36) = 1;
    memset_0((void *)(v7 + 40), 0, 0x50uLL);
    v24 = v7;
    v7 = 0LL;
    v10 = 0;
    *a3 = v24;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x140, v19, (const char *)(unsigned int)v10);
    v22 = hObject[1];
    v23 = hObject[0];
  }
  if ( v22 && !CloseHandle(v22) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x879, v25, v26);
    __debugbreak();
  }
  if ( v23 && !CloseHandle(v23) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x879, v27, v28);
    JUMPOUT(0x180006F24LL);
  }
LABEL_3:
  if ( v7 )
  {
    v11 = GetProcessHeap();
    HeapFree(v11, 0, (LPVOID)v7);
  }
  return (unsigned int)v10;
}
