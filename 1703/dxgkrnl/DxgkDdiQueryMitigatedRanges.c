/*
 * XREFs of DxgkDdiQueryMitigatedRanges @ 0x1C0033CBC
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C01C31F0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     ?DdiQueryMitigatedRanges@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYMITIGATEDRANGES@@@Z @ 0x1C00283A0 (-DdiQueryMitigatedRanges@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYMITIGATEDRANGES@@@Z.c)
 *     ?EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ @ 0x1C002A17C (-EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ.c)
 */

__int64 __fastcall DxgkDdiQueryMitigatedRanges(__int64 a1, struct _DXGKARG_QUERYMITIGATEDRANGES *a2)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  ULONG VirtualFunctionIndex; // eax
  __int64 v8; // rcx
  __int64 v9; // rax

  v2 = *(_QWORD *)(a1 + 2288);
  result = ADAPTER_RENDER::EnsureVirtualGpuProcess((ADAPTER_RENDER *)v2);
  if ( (int)result >= 0 )
  {
    VirtualFunctionIndex = a2->VirtualFunctionIndex;
    if ( a2->VirtualFunctionIndex < *(_DWORD *)(v2 + 1128)
      && (v6 = VirtualFunctionIndex, (v5 = *(_QWORD *)(*(_QWORD *)(v2 + 1136) + 8LL * VirtualFunctionIndex)) != 0) )
    {
      if ( !*(_BYTE *)(v5 + 121) )
        return ADAPTER_RENDER::DdiQueryMitigatedRanges((ADAPTER_RENDER *)v2, a2);
      if ( !a2->NumRanges )
        return 0LL;
      v8 = WdLogNewEntry5_WdError(VirtualFunctionIndex, v5);
      *(_QWORD *)(v8 + 24) = a2->NumRanges;
    }
    else
    {
      v9 = WdLogNewEntry5_WdError(v6, v5);
      *(_QWORD *)(v9 + 24) = a2->VirtualFunctionIndex;
      v8 = v9;
    }
    WdLogEvent5_WdError(v8);
    return 3221225485LL;
  }
  return result;
}
