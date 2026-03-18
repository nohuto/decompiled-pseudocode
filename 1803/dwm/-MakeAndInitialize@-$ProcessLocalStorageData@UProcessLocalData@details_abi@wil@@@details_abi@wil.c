/*
 * XREFs of ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x140005768
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1400047E8 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     memset_0 @ 0x140003D88 (memset_0.c)
 *     ??1SemaphoreValue@details_abi@wil@@QEAA@XZ @ 0x1400047BC (--1SemaphoreValue@details_abi@wil@@QEAA@XZ.c)
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x140004A50 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x140004CAC (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140005C94 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x1400061BC (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::MakeAndInitialize(
        unsigned __int16 *a1,
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
  void *v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  int v19[4]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a3 = 0LL;
  ProcessHeap = GetProcessHeap();
  v8 = (unsigned __int64)HeapAlloc(ProcessHeap, 8u, 0x78uLL);
  if ( v8 )
  {
    *(_OWORD *)v19 = 0LL;
    if ( (v8 & 3) != 0 )
      wil::details::in1diag3::_FailFastImmediate_Unexpected(v7);
    v12 = wil::details_abi::SemaphoreValue::CreateFromValueInternal(
            (wil::details_abi::SemaphoreValue *)v19,
            a1,
            v9,
            v8 >> 2);
    v10 = v12;
    if ( v12 >= 0 )
    {
      *(_DWORD *)v8 = 1;
      *(_QWORD *)(v8 + 8) = *a2;
      v15 = *(_QWORD *)v19;
      *a2 = 0LL;
      *(_QWORD *)v19 = 0LL;
      *(_QWORD *)(v8 + 16) = v15;
      v16 = *(_QWORD *)&v19[2];
      *(_QWORD *)&v19[2] = 0LL;
      *(_QWORD *)(v8 + 24) = v16;
      memset_0((void *)(v8 + 32), 0, 0x58uLL);
      *(_WORD *)(v8 + 32) = 88;
      *(_DWORD *)(v8 + 36) = 1;
      memset_0((void *)(v8 + 40), 0, 0x50uLL);
      v17 = v8;
      v8 = 0LL;
      v10 = 0;
      *a3 = v17;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0x140, v13, (const char *)(unsigned int)v12, v19[0]);
    }
    wil::details_abi::SemaphoreValue::~SemaphoreValue((wil::details_abi::SemaphoreValue *)v19, v14);
  }
  else
  {
    v10 = -2147024882;
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x13D, v9, (const char *)0x8007000ELL, v19[0]);
  }
  if ( v8 )
    wil::details::FreeProcessHeap((wil::details *)v8, v11);
  return v10;
}
