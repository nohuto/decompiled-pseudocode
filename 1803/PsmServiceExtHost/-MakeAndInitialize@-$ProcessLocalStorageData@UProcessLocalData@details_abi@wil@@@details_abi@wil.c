/*
 * XREFs of ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x180060C98
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18005F714 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x1800342F8 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18003E058 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x18005F90C (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800615D0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x1800621E0 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::MakeAndInitialize(
        char *a1,
        _QWORD *a2,
        unsigned __int64 *a3)
{
  HANDLE ProcessHeap; // rax
  wil::details::in1diag3 *v7; // rcx
  unsigned __int64 v8; // rbx
  __int64 v9; // r8
  unsigned int v10; // edi
  void *v11; // rdx
  int v12; // eax
  unsigned int v13; // r8d
  wil::details *v14; // rbp
  wil::details *v15; // rsi
  unsigned __int64 v16; // rax
  wil::details *v18[2]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a3 = 0LL;
  ProcessHeap = GetProcessHeap();
  v8 = (unsigned __int64)HeapAlloc(ProcessHeap, 8u, 0x78uLL);
  if ( v8 )
  {
    *(_OWORD *)v18 = 0LL;
    if ( (v8 & 3) != 0 )
      wil::details::in1diag3::_FailFastImmediate_Unexpected(v7);
    v12 = wil::details_abi::SemaphoreValue::CreateFromValueInternal(v18, a1, v9, v8 >> 2);
    v10 = v12;
    if ( v12 >= 0 )
    {
      *(_DWORD *)v8 = 1;
      v14 = 0LL;
      *(_QWORD *)(v8 + 8) = *a2;
      *a2 = 0LL;
      v15 = 0LL;
      *(wil::details **)(v8 + 16) = v18[0];
      v18[0] = 0LL;
      *(wil::details **)(v8 + 24) = v18[1];
      v18[1] = 0LL;
      memset_0((void *)(v8 + 32), 0, 0x58uLL);
      *(_WORD *)(v8 + 32) = 88;
      *(_DWORD *)(v8 + 36) = 1;
      memset_0((void *)(v8 + 40), 0, 0x50uLL);
      v16 = v8;
      v8 = 0LL;
      v10 = 0;
      *a3 = v16;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0x140, v13, (const char *)(unsigned int)v12, (int)v18[0]);
      v14 = v18[1];
      v15 = v18[0];
    }
    if ( v14 )
      wil::details::CloseHandle(v14, v11);
    if ( v15 )
      wil::details::CloseHandle(v15, v11);
  }
  else
  {
    v10 = -2147024882;
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x13D, v9, (const char *)0x8007000ELL, (int)v18[0]);
  }
  if ( v8 )
    wil::details::FreeProcessHeap((wil::details *)v8, v11);
  return v10;
}
