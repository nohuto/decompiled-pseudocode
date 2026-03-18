/*
 * XREFs of DxgkDdiQueryMitigatedRangeCount @ 0x1C0033C34
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C01C31F0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     ?DdiQueryMitigatedRangeCount@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYMITIGATEDRANGECOUNT@@@Z @ 0x1C00281D4 (-DdiQueryMitigatedRangeCount@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYMITIGATEDRANGECOUNT@@@Z.c)
 *     ?EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ @ 0x1C002A17C (-EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ.c)
 */

__int64 __fastcall DxgkDdiQueryMitigatedRangeCount(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // eax
  __int64 v7; // rax

  v2 = *(_QWORD *)(a1 + 2288);
  if ( (int)ADAPTER_RENDER::EnsureVirtualGpuProcess((ADAPTER_RENDER *)v2) >= 0 )
  {
    v6 = *a2;
    if ( *a2 < *(_DWORD *)(v2 + 1128) && (v5 = v6, (v4 = *(_QWORD *)(*(_QWORD *)(v2 + 1136) + 8LL * v6)) != 0) )
    {
      if ( *(_BYTE *)(v4 + 121) )
      {
        *(_QWORD *)(a2 + 1) = 0LL;
        *(_QWORD *)(a2 + 3) = 0LL;
        *(_QWORD *)(a2 + 5) = 0LL;
      }
      else
      {
        ADAPTER_RENDER::DdiQueryMitigatedRangeCount(
          (ADAPTER_RENDER *)v2,
          (struct _DXGKARG_QUERYMITIGATEDRANGECOUNT *)a2);
      }
    }
    else
    {
      v7 = WdLogNewEntry5_WdError(v5, v4);
      *(_QWORD *)(v7 + 24) = *a2;
      WdLogEvent5_WdError(v7);
    }
  }
  return 0LL;
}
