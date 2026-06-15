/*
 * XREFs of ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x180058B10
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180058C34 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000B360 (--3@YAXPEAX@Z.c)
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x180058540 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18005FA30 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x18009B6C8 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
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
  int v10; // eax
  unsigned int v11; // edi
  wil::details *v12; // rbp
  wil::details *v13; // rsi
  void *v14; // rdx
  unsigned __int64 v15; // rax
  int v17[4]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a3 = 0LL;
  ProcessHeap = GetProcessHeap();
  v8 = (unsigned __int64)HeapAlloc(ProcessHeap, 8u, 0x78uLL);
  if ( v8 )
  {
    *(_OWORD *)v17 = 0LL;
    if ( (v8 & 3) != 0 )
      wil::details::in1diag3::_FailFastImmediate_Unexpected(v7);
    v10 = wil::details_abi::SemaphoreValue::CreateFromValueInternal(
            (wil::details_abi::SemaphoreValue *)v17,
            a1,
            v9,
            v8 >> 2);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x140,
        (unsigned int)"wil",
        (const char *)(unsigned int)v10,
        v17[0]);
      v12 = *(wil::details **)&v17[2];
      v13 = *(wil::details **)v17;
    }
    else
    {
      *(_DWORD *)v8 = 1;
      v12 = 0LL;
      *(_QWORD *)(v8 + 8) = *a2;
      *a2 = 0LL;
      v13 = 0LL;
      *(_QWORD *)(v8 + 16) = *(_QWORD *)v17;
      *(_QWORD *)v17 = 0LL;
      *(_QWORD *)(v8 + 24) = *(_QWORD *)&v17[2];
      *(_QWORD *)&v17[2] = 0LL;
      memset_0((void *)(v8 + 32), 0, 0x58uLL);
      *(_WORD *)(v8 + 32) = 88;
      *(_DWORD *)(v8 + 36) = 1;
      memset_0((void *)(v8 + 40), 0, 0x50uLL);
      v15 = v8;
      v8 = 0LL;
      v11 = 0;
      *a3 = v15;
    }
    if ( v12 )
      wil::details::CloseHandle(v12, v14);
    if ( v13 )
      wil::details::CloseHandle(v13, v14);
  }
  else
  {
    v11 = -2147024882;
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x13D, (unsigned int)"wil", (const char *)0x8007000ELL, v17[0]);
  }
  if ( v8 )
    operator delete((void *)v8);
  return v11;
}
