/*
 * XREFs of ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C00E8F04
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAU_D3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E2528 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAU_D3DKMT_VIDPN_SOURCE.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKPEAVDXGDEVICE@@@Z @ 0x1C01D9484 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKPEAVDXGDEVICE@@@Z.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01D9940 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkStatusChangeNotify @ 0x1C0098C20 (DxgkStatusChangeNotify.c)
 */

void __fastcall ADAPTER_DISPLAY::SetVidPnSourceActive(DXGADAPTER **this, unsigned int a2, char a3)
{
  __int64 v4; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  DXGADAPTER *v10; // rax
  char v11; // cl
  _BOOL8 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // [rsp+20h] [rbp-18h] BYREF
  __int64 v21; // [rsp+28h] [rbp-10h]

  v4 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    *(_QWORD *)(v17 + 24) = 232LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( (unsigned int)v4 >= *((_DWORD *)this + 20) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    *(_QWORD *)(v18 + 24) = 233LL;
    WdLogEvent5_WdAssertion(v18);
  }
  v10 = this[14];
  v11 = *((_BYTE *)v10 + 3208 * v4 + 720);
  *((_BYTE *)v10 + 3208 * v4 + 720) = a3;
  v12 = v11 == 0;
  if ( v12 != (a3 == 0) )
  {
    v21 = 0LL;
    v20 = 1;
    if ( (int)DxgkStatusChangeNotify(&v20, v12, v8) < 0 )
    {
      v19 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
      *(_QWORD *)(v19 + 24) = 243LL;
      WdLogEvent5_WdAssertion(v19);
    }
  }
}
