/*
 * XREFs of ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C00F9DEC
 * Callers:
 *     ?DXGGLOBAL_GetMaximumAdapterCount@@YAKPEAVDXGGLOBAL@@@Z @ 0x1C0016BE0 (-DXGGLOBAL_GetMaximumAdapterCount@@YAKPEAVDXGGLOBAL@@@Z.c)
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B5514 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DxgkEnumAdapters2@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z @ 0x1C00D3F50 (-DxgkEnumAdapters2@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?Initialize@DXGPROCESS@@QEAAJXZ @ 0x1C00F76A4 (-Initialize@DXGPROCESS@@QEAAJXZ.c)
 *     ?DxgkGetMaximumAdapterCount@@YAKXZ @ 0x1C0165250 (-DxgkGetMaximumAdapterCount@@YAKXZ.c)
 *     ?CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z @ 0x1C0224BF8 (-CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGGLOBAL::GetMaximumAdapterCount(DXGGLOBAL *this)
{
  __int64 result; // rax
  __int64 v3; // rax

  result = *((unsigned int *)this + 224);
  if ( !(_DWORD)result )
  {
    v3 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v3 + 24) = 2135LL;
    WdLogEvent5_WdAssertion(v3);
    return *((unsigned int *)this + 224);
  }
  return result;
}
