/*
 * XREFs of ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x18006DE84
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18006CEFC (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     ?MemoryFree@@YAXPEAX@Z @ 0x180039708 (-MemoryFree@@YAXPEAX@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180048A90 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049FC4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18004B360 (memset_0.c)
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x18006D104 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x18006ED00 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::MakeAndInitialize(
        size_t *a1,
        _QWORD *a2,
        unsigned __int64 *a3)
{
  HANDLE ProcessHeap; // rax
  wil::details::in1diag3 *v7; // rcx
  unsigned __int64 v8; // rbx
  __int64 v9; // r8
  unsigned int v10; // edi
  int v11; // eax
  void *v12; // rdx
  wil::details *v13; // rbp
  wil::details *v14; // rsi
  unsigned __int64 v15; // rax
  wil::details *v17[2]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a3 = 0LL;
  ProcessHeap = GetProcessHeap();
  v8 = (unsigned __int64)HeapAlloc(ProcessHeap, 8u, 0x78uLL);
  if ( v8 )
  {
    *(_OWORD *)v17 = 0LL;
    if ( (v8 & 3) != 0 )
      wil::details::in1diag3::_FailFastImmediate_Unexpected(v7);
    v11 = wil::details_abi::SemaphoreValue::CreateFromValueInternal(v17, a1, v9, v8 >> 2);
    v10 = v11;
    if ( v11 >= 0 )
    {
      *(_DWORD *)v8 = 1;
      v13 = 0LL;
      *(_QWORD *)(v8 + 8) = *a2;
      *a2 = 0LL;
      v14 = 0LL;
      *(wil::details **)(v8 + 16) = v17[0];
      v17[0] = 0LL;
      *(wil::details **)(v8 + 24) = v17[1];
      v17[1] = 0LL;
      memset_0((void *)(v8 + 32), 0, 0x58uLL);
      *(_WORD *)(v8 + 32) = 88;
      *(_DWORD *)(v8 + 36) = 1;
      memset_0((void *)(v8 + 40), 0, 0x50uLL);
      v15 = v8;
      v8 = 0LL;
      v10 = 0;
      *a3 = v15;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0x140, (__int64)"wil", (const char *)(unsigned int)v11);
      v13 = v17[1];
      v14 = v17[0];
    }
    if ( v13 )
      wil::details::CloseHandle(v13, v12);
    if ( v14 )
      wil::details::CloseHandle(v14, v12);
  }
  else
  {
    v10 = -2147024882;
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x13D, (__int64)"wil", (const char *)0x8007000ELL);
  }
  if ( v8 )
    MemoryFree((void *)v8);
  return v10;
}
