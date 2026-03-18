/*
 * XREFs of ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C00D7990
 * Callers:
 *     ?DXGGLOBAL_GetMaximumAdapterCount@@YAKPEAVDXGGLOBAL@@@Z @ 0x1C0007060 (-DXGGLOBAL_GetMaximumAdapterCount@@YAKPEAVDXGGLOBAL@@@Z.c)
 *     ?DxgkEnumAdapters2@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z @ 0x1C0097CB0 (-DxgkEnumAdapters2@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DxgkGetMaximumAdapterCount@@YAKXZ @ 0x1C00A6EF0 (-DxgkGetMaximumAdapterCount@@YAKXZ.c)
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00EAC10 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGGLOBAL::GetMaximumAdapterCount(DXGGLOBAL *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax

  if ( !*((_DWORD *)this + 204) )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = 1969LL;
    WdLogEvent5_WdAssertion(v6);
  }
  return *((unsigned int *)this + 204);
}
