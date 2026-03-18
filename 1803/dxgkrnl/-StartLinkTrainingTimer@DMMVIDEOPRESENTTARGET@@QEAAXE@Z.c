/*
 * XREFs of ?StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z @ 0x1C02225E4
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00B8F5C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C021E594 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 *     ?LinkTrainingTimeoutWorkItem@DMMVIDEOPRESENTTARGET@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C0221D80 (-LinkTrainingTimeoutWorkItem@DMMVIDEOPRESENTTARGET@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@.c)
 * Callees:
 *     <none>
 */

void __fastcall DMMVIDEOPRESENTTARGET::StartLinkTrainingTimer(DMMVIDEOPRESENTTARGET *this, unsigned __int8 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int32 v6; // ebx
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // rdx
  unsigned int v10; // ecx

  v4 = *((_QWORD *)this + 64);
  if ( ((*(_DWORD *)(v4 + 168) - 1) & 0xFFFFFFFD) == 0 )
  {
    KeCancelTimer((PKTIMER)(v4 + 32));
    KeFlushQueuedDpcs();
  }
  if ( !a2 && *(_DWORD *)(*((_QWORD *)this + 64) + 168LL) != 2 )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4);
    WdLogEvent5_WdAssertion(v5);
  }
  v6 = _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 64) + 168LL), a2 != 0 ? 1 : 3);
  v7 = WdLogNewEntry5_WdDmmEvent(v4);
  *(_QWORD *)(v7 + 24) = a2;
  *(_QWORD *)(v7 + 32) = v6;
  WdLogEvent5_WdDmmEvent(v7);
  v8 = *((_QWORD *)this + 64);
  v9 = *(_QWORD *)(*(_QWORD *)v8 + 2456LL);
  v10 = *(_DWORD *)(v9 + 324);
  if ( !a2 )
    v10 = *(_DWORD *)(v9 + 328) - v10;
  KeSetTimer((PKTIMER)(v8 + 32), (LARGE_INTEGER)(-100000LL * v10), (PKDPC)(v8 + 96));
}
