/*
 * XREFs of ?CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ @ 0x1C00A44B0
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAU_D3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E2528 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAU_D3DKMT_VIDPN_SOURCE.c)
 *     ?Reset@VIDPN_MGR@@QEAAXXZ @ 0x1C01D3F98 (-Reset@VIDPN_MGR@@QEAAXXZ.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01D9940 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 *     ??1DMMVIDEOPRESENTTARGET@@UEAA@XZ @ 0x1C01DBD0C (--1DMMVIDEOPRESENTTARGET@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer(
        DMMVIDEOPRESENTTARGET *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // rcx
  signed __int32 v7; // eax

  v5 = *((_QWORD *)this + 64);
  if ( ((*(_DWORD *)(v5 + 168) - 1) & 0xFFFFFFFD) == 0 )
  {
    KeCancelTimer((PKTIMER)(v5 + 32));
    KeFlushQueuedDpcs();
  }
  if ( ((_InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 64) + 168LL), 5) - 2) & 0xFFFFFFFD) != 0 )
  {
    v6 = *((_QWORD *)this + 64);
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 168), 0, 5);
    if ( v7 != 5 )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v6, 0LL, 168LL, a4) + 24) = v7;
  }
}
