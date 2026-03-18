/*
 * XREFs of ?SetTargetCurrentActive@DMMVIDEOPRESENTTARGET@@QEAAXE@Z @ 0x1C0111174
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00B8F5C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C021E594 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 *     ?Reset@DMMVIDEOPRESENTTARGET@@QEAAXXZ @ 0x1C0221F80 (-Reset@DMMVIDEOPRESENTTARGET@@QEAAXXZ.c)
 * Callees:
 *     ?SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z @ 0x1C001A154 (-SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z.c)
 */

void __fastcall DMMVIDEOPRESENTTARGET::SetTargetCurrentActive(DMMVIDEOPRESENTTARGET *this, unsigned __int8 a2)
{
  __int64 v2; // rax
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rax

  v2 = *((_QWORD *)this + 5);
  if ( !v2 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v7);
    v2 = *((_QWORD *)this + 5);
  }
  v5 = *(_QWORD *)(v2 + 88);
  v6 = *(_QWORD *)(v5 + 8);
  if ( !v6 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v8);
    v6 = *(_QWORD *)(v5 + 8);
  }
  DMMVIDEOPRESENTTARGET::SetPowerState(this, *(struct DXGADAPTER **)(v6 + 16), a2);
  *((_BYTE *)this + 409) = a2;
}
