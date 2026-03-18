/*
 * XREFs of ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C004DD7C
 * Callers:
 *     VidMmOpenAdapter @ 0x1C0012A40 (VidMmOpenAdapter.c)
 *     ?Init@VIDMM_DEVICE@@QEAAJPEAVVIDMM_PROCESS@@@Z @ 0x1C004CA30 (-Init@VIDMM_DEVICE@@QEAAJPEAVVIDMM_PROCESS@@@Z.c)
 *     ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAXPEA_KI@Z @ 0x1C004F33C (-MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@.c)
 *     ?VidMmReserveGpuVirtualAddressRangeCb@VIDMM_GLOBAL@@QEAAJPEAU_DXGKARGCB_RESERVEGPUVIRTUALADDRESSRANGE@@@Z @ 0x1C0061700 (-VidMmReserveGpuVirtualAddressRangeCb@VIDMM_GLOBAL@@QEAAJPEAU_DXGKARGCB_RESERVEGPUVIRTUALADDRESS.c)
 *     ?InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C00750DC (-InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 * Callees:
 *     ?ComputeNewWorkingSet@VIDMM_SEGMENT@@QEAAXK@Z @ 0x1C004B1F0 (-ComputeNewWorkingSet@VIDMM_SEGMENT@@QEAAXK@Z.c)
 *     ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C004E07C (-InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBA.c)
 *     ?GetProcessBudgetBandAndVisibility@VIDMM_GLOBAL@@QEAAXPEAVDXGPROCESS@@PEAW4VIDMM_BUDGET_PRIORITY_BAND@@PEAW4VIDMM_BUDGET_VISIBILITY_STATE@@@Z @ 0x1C00A53B4 (-GetProcessBudgetBandAndVisibility@VIDMM_GLOBAL@@QEAAXPEAVDXGPROCESS@@PEAW4VIDMM_BUDGET_PRIORITY.c)
 *     ?ReportProcessAdapterBudget@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@@Z @ 0x1C00A53F4 (-ReportProcessAdapterBudget@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@@Z.c)
 */

__int64 __fastcall VIDMM_PROCESS::OpenAdapter(struct DXGPROCESS **this, struct VIDMM_GLOBAL *a2)
{
  __int64 v4; // rsi
  __int64 v5; // rbp
  __int64 v6; // rcx
  struct VIDMM_PROCESS_ADAPTER_INFO *v8; // rax
  VIDMM_GLOBAL *v9; // rcx
  struct VIDMM_PROCESS_ADAPTER_INFO *v10; // rsi
  __int64 v11; // r14
  _DWORD *v12; // r15
  __int64 v13; // rax

  v4 = *(unsigned int *)(*((_QWORD *)a2 + 3) + 200LL);
  if ( g_IsInternalReleaseOrDbg )
  {
    v13 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v13 + 24) = a2;
    *(_QWORD *)(v13 + 32) = this;
  }
  v5 = v4;
  v6 = *((_QWORD *)this[2] + v4);
  if ( v6 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    return 0LL;
  }
  v8 = VIDMM_PROCESS::InitializeProcessAdapterInfo((VIDMM_PROCESS *)this, a2);
  v10 = v8;
  if ( v8 )
  {
    *((_QWORD *)this[2] + v5) = v8;
    _InterlockedIncrement((volatile signed __int32 *)VIDMM_PROCESS::_pDxProcessPerAdapterCount + v5);
    v11 = 0LL;
    if ( *((_DWORD *)a2 + 926) )
    {
      v12 = VIDMM_PROCESS::_pDxProcessPerAdapterCount;
      do
      {
        VIDMM_SEGMENT::ComputeNewWorkingSet(*(VIDMM_SEGMENT **)(*((_QWORD *)a2 + 464) + 8 * v11), v12[v5]);
        v11 = (unsigned int)(v11 + 1);
      }
      while ( (unsigned int)v11 < *((_DWORD *)a2 + 926) );
    }
    if ( bTracingEnabled )
    {
      VIDMM_GLOBAL::GetProcessBudgetBandAndVisibility(
        v9,
        this[4],
        (struct VIDMM_PROCESS_ADAPTER_INFO *)((char *)v10 + 360),
        (struct VIDMM_PROCESS_ADAPTER_INFO *)((char *)v10 + 352));
      VIDMM_GLOBAL::ReportProcessAdapterBudget(a2, v10);
    }
    return 0LL;
  }
  return 3221225495LL;
}
