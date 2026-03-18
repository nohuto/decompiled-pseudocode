/*
 * XREFs of ?GetResourceForBar@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETRESOURCEFORBAR@@@Z @ 0x1C0189234
 * Callers:
 *     DxgkDdiGetResourceForBar @ 0x1C0189F5C (DxgkDdiGetResourceForBar.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::GetResourceForBar(__int64 a1, int a2, unsigned int *a3)
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
  if ( v5 )
  {
    if ( (unsigned int)v3 < *(_DWORD *)(v5 + 12) && *(_QWORD *)(*(_QWORD *)(v5 + 24) + 8 * v3) )
    {
      _mm_lfence();
      v5 = *(_QWORD *)(*(_QWORD *)(v5 + 24) + 8 * v3);
    }
    else
    {
      v6 = WdLogNewEntry5_WdError(v5);
      *(_QWORD *)(v6 + 24) = v3;
      WdLogEvent5_WdError(v6);
      v5 = 0LL;
    }
    if ( v5 )
      return (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v5 + 104LL))(v5, a3);
  }
  v8 = WdLogNewEntry5_WdError(v5);
  *(_QWORD *)(v8 + 24) = *a3;
  WdLogEvent5_WdError(v8);
  return 3221225485LL;
}
