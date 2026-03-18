/*
 * XREFs of ?MakeAndInitialize@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x180133D54
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180132CAC (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x1800C0D9C (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18011E430 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x18011E45C (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18011F808 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18011F878 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x18011FF5C (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ??0?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAA@$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@2@$$QEAVSemaphoreValue@12@@Z @ 0x1801325FC (--0-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAA@$$QEAV-$u.c)
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::MakeAndInitialize(
        size_t *a1,
        _QWORD *a2,
        wil::details **a3)
{
  HANDLE ProcessHeap; // rax
  wil::details *v7; // rax
  wil::details::in1diag3 *v8; // rcx
  __int64 v9; // r8
  wil::details *v10; // rbx
  unsigned int v11; // edi
  void *v12; // rdx
  int v13; // eax
  wil::details *v14; // rax
  wil::details *v16[2]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a3 = 0LL;
  ProcessHeap = GetProcessHeap();
  v7 = (wil::details *)HeapAlloc(ProcessHeap, 8u, 0x130uLL);
  v10 = v7;
  if ( v7 )
  {
    *(_OWORD *)v16 = 0LL;
    if ( ((unsigned __int8)v7 & 3) != 0 )
      wil::details::in1diag3::_FailFastImmediate_Unexpected(v8);
    v13 = wil::details_abi::SemaphoreValue::CreateFromValueInternal(
            (wil::details_abi::SemaphoreValue *)v16,
            a1,
            v9,
            (unsigned __int64)v7 >> 2);
    v11 = v13;
    if ( v13 >= 0 )
    {
      if ( v10 )
        wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::ProcessLocalStorageData<wil::details_abi::FeatureStateData>(
          (__int64)v10,
          a2,
          v16);
      v14 = v10;
      v10 = 0LL;
      v11 = 0;
      *a3 = v14;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x140,
        (__int64)"wil",
        (const char *)(unsigned int)v13);
    }
    if ( v16[1] )
      wil::details::CloseHandle(v16[1], v12);
    if ( v16[0] )
      wil::details::CloseHandle(v16[0], v12);
  }
  else
  {
    v11 = -2147024882;
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x13D, v9, (const char *)0x8007000ELL);
  }
  if ( v10 )
    wil::details::FreeProcessHeap(v10, v12);
  return v11;
}
