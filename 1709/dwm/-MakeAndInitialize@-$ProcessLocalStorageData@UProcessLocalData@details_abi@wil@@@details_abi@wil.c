/*
 * XREFs of ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x140005CA0
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x140004DB8 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     memset_0 @ 0x1400043A8 (memset_0.c)
 *     ??1SemaphoreValue@details_abi@wil@@QEAA@XZ @ 0x140004CFC (--1SemaphoreValue@details_abi@wil@@QEAA@XZ.c)
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x140004F90 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x1400051F0 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140006208 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140006278 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x140006790 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::MakeAndInitialize(
        unsigned __int16 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  HANDLE ProcessHeap; // rax
  unsigned __int64 v7; // rax
  wil::details::in1diag3 *v8; // rcx
  __int64 v9; // r8
  _QWORD *v10; // rbx
  unsigned int v11; // edi
  void *v12; // rdx
  int v13; // eax
  void *v14; // rdx
  unsigned int v15; // r8d
  __int64 v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // rax
  int v20[4]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a3 = 0LL;
  ProcessHeap = GetProcessHeap();
  v7 = (unsigned __int64)HeapAlloc(ProcessHeap, 8u, 0x78uLL);
  v10 = (_QWORD *)v7;
  if ( v7 )
  {
    *(_OWORD *)v20 = 0LL;
    if ( (v7 & 3) != 0 )
      wil::details::in1diag3::_FailFastImmediate_Unexpected(v8);
    v13 = wil::details_abi::SemaphoreValue::CreateFromValueInternal(
            (wil::details_abi::SemaphoreValue *)v20,
            a1,
            v9,
            v7 >> 2);
    v11 = v13;
    if ( v13 >= 0 )
    {
      if ( v10 )
      {
        *(_DWORD *)v10 = 1;
        v10[1] = *a2;
        v16 = *(_QWORD *)v20;
        *a2 = 0LL;
        *(_QWORD *)v20 = 0LL;
        v10[2] = v16;
        v17 = *(_QWORD *)&v20[2];
        *(_QWORD *)&v20[2] = 0LL;
        v10[3] = v17;
        memset_0(v10 + 4, 0, 0x58uLL);
        *((_WORD *)v10 + 16) = 88;
        *((_DWORD *)v10 + 9) = 1;
        memset_0(v10 + 5, 0, 0x50uLL);
      }
      v18 = v10;
      v10 = 0LL;
      v11 = 0;
      *a3 = v18;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x140,
        v15,
        (const char *)(unsigned int)v13,
        v20[0]);
    }
    wil::details_abi::SemaphoreValue::~SemaphoreValue((wil::details_abi::SemaphoreValue *)v20, v14);
  }
  else
  {
    v11 = -2147024882;
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x13D, v9, (const char *)0x8007000ELL, v20[0]);
  }
  if ( v10 )
    wil::details::FreeProcessHeap((wil::details *)v10, v12);
  return v11;
}
