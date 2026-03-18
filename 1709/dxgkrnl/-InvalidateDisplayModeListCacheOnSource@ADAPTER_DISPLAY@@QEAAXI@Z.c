/*
 * XREFs of ?InvalidateDisplayModeListCacheOnSource@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00AD12C
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00A632C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00DE190 (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkLogCodePointPacket @ 0x1C0009664 (DxgkLogCodePointPacket.c)
 *     McTemplateK0pqcctttq @ 0x1C0020F44 (McTemplateK0pqcctttq.c)
 */

void __fastcall ADAPTER_DISPLAY::InvalidateDisplayModeListCacheOnSource(PERESOURCE **this, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // [rsp+20h] [rbp-48h]
  char v12; // [rsp+28h] [rbp-40h]
  char v13; // [rsp+30h] [rbp-38h]
  int v14; // [rsp+38h] [rbp-30h]
  int v15; // [rsp+40h] [rbp-28h]
  int v16; // [rsp+48h] [rbp-20h]
  int v17; // [rsp+50h] [rbp-18h]

  v3 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v9 + 24) = 2724LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( (unsigned int)v3 >= *((_DWORD *)this + 20) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v10 + 24) = 2725LL;
    WdLogEvent5_WdAssertion(v10);
  }
  DxgkLogCodePointPacket(0x1Cu, v3 + 0x80000000, 0, 0, *(__int64 *)((char *)this[2] + 268));
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    v17 = 0;
    v16 = 0;
    v15 = 0;
    v14 = 0;
    v13 = 0;
    v12 = 0;
    LODWORD(v11) = v3 + 0x80000000;
    McTemplateK0pqcctttq(v6, v5, v7, this, v11, v12, v13, v14, v15, v16, v17);
  }
  v8 = 470 * v3;
  BYTE4(this[14][v8 + 136]) = 0;
  LODWORD(this[14][v8 + 138]) = -1;
  HIDWORD(this[14][v8 + 138]) = -1;
}
