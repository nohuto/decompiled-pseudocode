/*
 * XREFs of ?GetVirtualGpuInfo@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETVIRTUALGPUINFO@@PEAU_LUID@@PEAU_GUID@@@Z @ 0x1C0189374
 * Callers:
 *     DxgkDdiGetVirtualGpuInfo @ 0x1C018A094 (DxgkDdiGetVirtualGpuInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::GetVirtualGpuInfo(__int64 a1, __int64 a2, unsigned int *a3, _QWORD *a4, _OWORD *a5)
{
  __int64 v5; // rbx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v11; // rax

  v5 = *a3;
  if ( (_DWORD)a2 == 1 )
    v8 = *(_QWORD *)(a1 + 1232);
  else
    v8 = *(_QWORD *)(a1 + 1224);
  if ( v8
    && ((unsigned int)v5 >= *(_DWORD *)(v8 + 12) || !*(_QWORD *)(*(_QWORD *)(v8 + 24) + 8 * v5)
      ? (v9 = WdLogNewEntry5_WdError(v8), *(_QWORD *)(v9 + 24) = v5, WdLogEvent5_WdError(v9), v8 = 0LL)
      : (_mm_lfence(), v8 = *(_QWORD *)(*(_QWORD *)(v8 + 24) + 8 * v5)),
        v8) )
  {
    *a4 = *(_QWORD *)(v8 + 28);
    *a5 = *(_OWORD *)(v8 + 36);
    return (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v8 + 120LL))(v8, a3);
  }
  else
  {
    v11 = WdLogNewEntry5_WdWarning(v8, a2, a3);
    *(_QWORD *)(v11 + 24) = *a3;
    WdLogEvent5_WdWarning(v11);
    return 3221225485LL;
  }
}
