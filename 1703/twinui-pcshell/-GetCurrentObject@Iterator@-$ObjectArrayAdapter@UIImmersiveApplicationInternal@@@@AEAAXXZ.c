/*
 * XREFs of ?GetCurrentObject@Iterator@?$ObjectArrayAdapter@UIImmersiveApplicationInternal@@@@AEAAXXZ @ 0x180043BA4
 * Callers:
 *     ?_GetMostRecentlyUsedViewForApp@CAppViewManager@@AEAAJPEBGPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x1800413FC (-_GetMostRecentlyUsedViewForApp@CAppViewManager@@AEAAJPEBGPEAUIImmersiveMonitor@@PEAPEAUIImmersi.c)
 *     ?end@?$ObjectArrayAdapter@UIImmersiveApplicationInternal@@@@QEAA?AVIterator@1@XZ @ 0x180043668 (-end@-$ObjectArrayAdapter@UIImmersiveApplicationInternal@@@@QEAA-AVIterator@1@XZ.c)
 *     ?begin@?$ObjectArrayAdapter@UIImmersiveApplicationInternal@@@@QEAA?AVIterator@1@XZ @ 0x1800436A4 (-begin@-$ObjectArrayAdapter@UIImmersiveApplicationInternal@@@@QEAA-AVIterator@1@XZ.c)
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ObjectArrayAdapter<IImmersiveApplicationInternal>::Iterator::GetCurrentObject(unsigned int *a1)
{
  __int64 *v1; // r14
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 **v5; // rax
  __int64 *v6; // rdi
  __int64 v7; // rbx
  __int64 *v8; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (__int64 *)(a1 + 2);
  v3 = *((_QWORD *)a1 + 1);
  if ( v3 )
  {
    *v1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  for ( result = *((_QWORD *)a1 + 2); *a1 < *(_DWORD *)(result + 8); result = *((_QWORD *)a1 + 2) )
  {
    v5 = (__int64 **)*((_QWORD *)a1 + 2);
    v6 = *v5;
    v7 = **v5;
    v8 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(v1);
    result = (*(__int64 (__fastcall **)(__int64 *, _QWORD, GUID *, __int64 *))(v7 + 32))(
               v6,
               *a1,
               &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
               v8);
    if ( (int)result >= 0 )
      break;
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x32,
      (__int64)"internal\\shell\\private\\inc\\ObjectArrayAdapter.h",
      (const char *)(unsigned int)result);
    ++*a1;
  }
  return result;
}
