/*
 * XREFs of ?InvalidateDisplayModeListCacheOnSource@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00E79E4
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAU_D3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E2528 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAU_D3DKMT_VIDPN_SOURCE.c)
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00ED624 (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkLogCodePointPacket @ 0x1C000BD40 (DxgkLogCodePointPacket.c)
 *     Template_pqcctttq @ 0x1C0022FF8 (Template_pqcctttq.c)
 */

void __fastcall ADAPTER_DISPLAY::InvalidateDisplayModeListCacheOnSource(PERESOURCE **this, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // [rsp+20h] [rbp-48h]
  char v15; // [rsp+28h] [rbp-40h]
  char v16; // [rsp+30h] [rbp-38h]
  int v17; // [rsp+38h] [rbp-30h]
  int v18; // [rsp+40h] [rbp-28h]
  int v19; // [rsp+48h] [rbp-20h]
  int v20; // [rsp+50h] [rbp-18h]

  v3 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    *(_QWORD *)(v12 + 24) = 2262LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( (unsigned int)v3 >= *((_DWORD *)this + 20) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    *(_QWORD *)(v13 + 24) = 2263LL;
    WdLogEvent5_WdAssertion(v13);
  }
  DxgkLogCodePointPacket(0x1Cu, v3 + 0x80000000, 0, 0, *(__int64 *)((char *)this[2] + 268));
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    v20 = 0;
    v19 = 0;
    v18 = 0;
    v17 = 0;
    v16 = 0;
    v15 = 0;
    LODWORD(v14) = v3 + 0x80000000;
    Template_pqcctttq(v9, v8, v10, this, v14, v15, v16, v17, v18, v19, v20);
  }
  v11 = 401 * v3;
  BYTE4(this[14][v11 + 131]) = 0;
  LODWORD(this[14][v11 + 133]) = -1;
  HIDWORD(this[14][v11 + 133]) = -1;
}
