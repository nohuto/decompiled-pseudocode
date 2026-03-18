/*
 * XREFs of ?QueryVirtualFunctionLuid@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_QUERYVIRTUALFUNCTIONLUID@@@Z @ 0x1C0189794
 * Callers:
 *     DxgkDdiQueryVirtualFunctionLuid @ 0x1C018A428 (DxgkDdiQueryVirtualFunctionLuid.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::QueryVirtualFunctionLuid(__int64 a1, int a2, unsigned int *a3)
{
  __int64 v3; // rbx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v8; // rax

  v3 = *a3;
  if ( a2 == 1 )
    v5 = *(_QWORD *)(a1 + 1232);
  else
    v5 = *(_QWORD *)(a1 + 1224);
  if ( v5
    && ((unsigned int)v3 >= *(_DWORD *)(v5 + 12) || !*(_QWORD *)(*(_QWORD *)(v5 + 24) + 8 * v3)
      ? (v6 = WdLogNewEntry5_WdError(v5), *(_QWORD *)(v6 + 24) = v3, WdLogEvent5_WdError(v6), v5 = 0LL)
      : (_mm_lfence(), v5 = *(_QWORD *)(*(_QWORD *)(v5 + 24) + 8 * v3)),
        v5) )
  {
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v5 + 112LL))(v5, a3);
    return 0LL;
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v8 + 24) = *a3;
    WdLogEvent5_WdError(v8);
    return 3221225485LL;
  }
}
