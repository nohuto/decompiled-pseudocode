/*
 * XREFs of ?CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ @ 0x1C00B0874
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00A632C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?Reset@VIDPN_MGR@@QEAAXXZ @ 0x1C01EF670 (-Reset@VIDPN_MGR@@QEAAXXZ.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01F2B14 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 *     ??1DMMVIDEOPRESENTTARGET@@UEAA@XZ @ 0x1C01F460C (--1DMMVIDEOPRESENTTARGET@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer(DMMVIDEOPRESENTTARGET *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  signed __int32 v4; // eax

  v2 = *((_QWORD *)this + 64);
  if ( ((*(_DWORD *)(v2 + 168) - 1) & 0xFFFFFFFD) == 0 )
  {
    KeCancelTimer((PKTIMER)(v2 + 32));
    KeFlushQueuedDpcs();
  }
  if ( ((_InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 64) + 168LL), 5) - 2) & 0xFFFFFFFD) != 0 )
  {
    v3 = *((_QWORD *)this + 64);
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 168), 0, 5);
    if ( v4 != 5 )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v3, 0LL) + 24) = v4;
  }
}
