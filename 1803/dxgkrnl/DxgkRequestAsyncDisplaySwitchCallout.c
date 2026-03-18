/*
 * XREFs of DxgkRequestAsyncDisplaySwitchCallout @ 0x1C01A1F70
 * Callers:
 *     ?DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@PEAPEAV2@@Z @ 0x1C01597E4 (-DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@PEAPEAV2@@Z.c)
 *     ?SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C01A12A4 (-SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     DpiFdoExcludeAdapterAccess @ 0x1C01F4850 (DpiFdoExcludeAdapterAccess.c)
 *     DpiIndirectCbForceDisplaySwitch @ 0x1C02068A0 (DpiIndirectCbForceDisplaySwitch.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DISPLAY_CALLOUT_ENTRY@@QEAA@PEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C019BF6C (--0DISPLAY_CALLOUT_ENTRY@@QEAA@PEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@.c)
 *     ?SubmitSingleEntry@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@@Z @ 0x1C01A1558 (-SubmitSingleEntry@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@@Z.c)
 */

__int64 __fastcall DxgkRequestAsyncDisplaySwitchCallout(
        struct _DXGK_WIN32K_PARAM_DATA *a1,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  DISPLAY_CALLOUT_ENTRY *v4; // rax
  __int64 v5; // rcx
  struct DISPLAY_CALLOUT_ENTRY *v6; // rbx
  __int64 v7; // rax
  struct DXGGLOBAL *Global; // rax

  v4 = (DISPLAY_CALLOUT_ENTRY *)operator new[](0x88uLL, 0x4B677844u, PagedPool);
  if ( v4 )
    v6 = DISPLAY_CALLOUT_ENTRY::DISPLAY_CALLOUT_ENTRY(v4, a1, a2);
  else
    v6 = 0LL;
  if ( v6 )
  {
    Global = DXGGLOBAL::GetGlobal(v5);
    return DXGDISPLAYCALLOUTQUEUE::SubmitSingleEntry((DXGDISPLAYCALLOUTQUEUE ***)Global + 165, v6);
  }
  else
  {
    v7 = WdLogNewEntry5_WdLowResource(v5);
    *(_QWORD *)(v7 + 24) = 725LL;
    WdLogEvent5_WdLowResource(v7);
    return 3221225495LL;
  }
}
