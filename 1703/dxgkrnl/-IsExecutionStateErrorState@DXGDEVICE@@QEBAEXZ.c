/*
 * XREFs of ?IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ @ 0x1C00BFBD0
 * Callers:
 *     ?FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z @ 0x1C00ED468 (-FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z.c)
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00ED624 (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 * Callees:
 *     ?GetDeviceExecutionState@DXGDEVICE@@QEBAJPEAW4_D3DKMT_DEVICEEXECUTION_STATE@@@Z @ 0x1C00BF56C (-GetDeviceExecutionState@DXGDEVICE@@QEBAJPEAW4_D3DKMT_DEVICEEXECUTION_STATE@@@Z.c)
 */

bool __fastcall DXGDEVICE::IsExecutionStateErrorState(DXGDEVICE *this, __int64 a2, __int64 a3, __int64 a4)
{
  int DeviceExecutionState; // eax
  __int64 v6; // rcx
  char v7; // dl
  __int64 v9; // rax
  _D3DKMT_DEVICEEXECUTION_STATE v10; // [rsp+38h] [rbp+10h] BYREF

  DeviceExecutionState = DXGDEVICE::GetDeviceExecutionState(this, &v10, a3, a4);
  v7 = 0;
  if ( DeviceExecutionState < 0 )
  {
    v9 = WdLogNewEntry5_WdError(v6, 0LL);
    *(_QWORD *)(v9 + 24) = this;
    WdLogEvent5_WdError(v9);
    return 0;
  }
  else
  {
    if ( v10 != D3DKMT_DEVICEEXECUTION_ACTIVE )
      return v10 != D3DKMT_DEVICEEXECUTION_STOPPED;
    return v7;
  }
}
