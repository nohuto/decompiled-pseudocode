/*
 * XREFs of ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x180137608
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180136598 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180136768 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x18013678C (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x180136A84 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180137B80 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180137BF0 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x180138320 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::MakeAndInitialize(
        size_t *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  HANDLE ProcessHeap; // rax
  unsigned __int64 v7; // rax
  wil::details::in1diag3 *v8; // rcx
  __int64 v9; // r8
  _QWORD *v10; // rbx
  unsigned int v11; // edi
  int v12; // eax
  unsigned int v13; // r8d
  void *v14; // rdx
  wil::details *v15; // rbp
  wil::details *v16; // rsi
  _QWORD *v17; // rax
  wil::details *v19[2]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a3 = 0LL;
  ProcessHeap = GetProcessHeap();
  v7 = (unsigned __int64)HeapAlloc(ProcessHeap, 8u, 0x78uLL);
  v10 = (_QWORD *)v7;
  if ( v7 )
  {
    *(_OWORD *)v19 = 0LL;
    if ( (v7 & 3) != 0 )
      wil::details::in1diag3::_FailFastImmediate_Unexpected(v8);
    v12 = wil::details_abi::SemaphoreValue::CreateFromValueInternal(
            (wil::details_abi::SemaphoreValue *)v19,
            a1,
            v9,
            v7 >> 2);
    v11 = v12;
    if ( v12 >= 0 )
    {
      *(_DWORD *)v10 = 1;
      v15 = 0LL;
      v10[1] = *a2;
      *a2 = 0LL;
      v16 = 0LL;
      v10[2] = v19[0];
      v19[0] = 0LL;
      v10[3] = v19[1];
      v19[1] = 0LL;
      memset_0(v10 + 4, 0, 0x58uLL);
      *((_WORD *)v10 + 16) = 88;
      *((_DWORD *)v10 + 9) = 1;
      memset_0(v10 + 5, 0, 0x50uLL);
      v17 = v10;
      v10 = 0LL;
      v11 = 0;
      *a3 = v17;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x13D,
        v13,
        (const char *)(unsigned int)v12,
        (int)v19[0]);
      v15 = v19[1];
      v16 = v19[0];
    }
    if ( v15 )
      wil::details::CloseHandle(v15, v14);
    if ( v16 )
      wil::details::CloseHandle(v16, v14);
    if ( v10 )
      wil::details::FreeProcessHeap((wil::details *)v10, v14);
  }
  else
  {
    v11 = -2147024882;
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x13A, v9, (const char *)0x8007000ELL, (int)v19[0]);
  }
  return v11;
}
