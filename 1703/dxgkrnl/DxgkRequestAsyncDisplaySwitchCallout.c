/*
 * XREFs of DxgkRequestAsyncDisplaySwitchCallout @ 0x1C01976A0
 * Callers:
 *     ?DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@PEAPEAV2@@Z @ 0x1C01737BC (-DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@PEAPEAV2@@Z.c)
 *     ?SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0196F18 (-SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     DpiFdoExcludeAdapterAccess @ 0x1C01C3C10 (DpiFdoExcludeAdapterAccess.c)
 *     DpiIndirectCbForceDisplaySwitch @ 0x1C01CB910 (DpiIndirectCbForceDisplaySwitch.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DISPLAY_CALLOUT_ENTRY@@QEAA@PEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01947CC (--0DISPLAY_CALLOUT_ENTRY@@QEAA@PEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@.c)
 *     ?SubmitSingleEntry@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@@Z @ 0x1C01971C8 (-SubmitSingleEntry@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@@Z.c)
 */

__int64 __fastcall DxgkRequestAsyncDisplaySwitchCallout(
        struct _DXGK_WIN32K_PARAM_DATA *a1,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  DISPLAY_CALLOUT_ENTRY *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct DISPLAY_CALLOUT_ENTRY *v9; // rbx
  __int64 v10; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v13; // r8
  __int64 v14; // r9

  v4 = (DISPLAY_CALLOUT_ENTRY *)operator new(0x80uLL, 0x4B677844u, PagedPool);
  if ( v4 )
    v9 = DISPLAY_CALLOUT_ENTRY::DISPLAY_CALLOUT_ENTRY(v4, a1, a2);
  else
    v9 = 0LL;
  if ( v9 )
  {
    Global = DXGGLOBAL::GetGlobal(v6, v5, v7, v8);
    return DXGDISPLAYCALLOUTQUEUE::SubmitSingleEntry((DXGDISPLAYCALLOUTQUEUE ***)Global + 151, v9, v13, v14);
  }
  else
  {
    v10 = WdLogNewEntry5_WdLowResource(v6);
    *(_QWORD *)(v10 + 24) = 724LL;
    WdLogEvent5_WdLowResource(v10);
    return 3221225495LL;
  }
}
