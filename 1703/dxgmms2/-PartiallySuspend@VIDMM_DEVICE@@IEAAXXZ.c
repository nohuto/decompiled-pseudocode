/*
 * XREFs of ?PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C006E198
 * Callers:
 *     ?SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006DC14 (-SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EvictForDefragPass@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0092E38 (-EvictForDefragPass@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?FaultAllDemotableAllocations@VIDMM_DEVICE@@QEAAXPEAV1@IW4_VIDMM_PLACEMENT_RESTRICTION@@IPEAIPEA_KPEA_N@Z @ 0x1C009833C (-FaultAllDemotableAllocations@VIDMM_DEVICE@@QEAAXPEAV1@IW4_VIDMM_PLACEMENT_RESTRICTION@@IPEAIPEA.c)
 *     ?SuspendDevices@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@W4_VIDMM_PLACEMENT_RESTRICTION@@PEA_NPEAPEAV3@@Z @ 0x1C0099618 (-SuspendDevices@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_P.c)
 *     ?SuspendPurgeForVPRGrow@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A0EB8 (-SuspendPurgeForVPRGrow@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     Template_pq @ 0x1C001FA14 (Template_pq.c)
 *     ?SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAX_NI@Z @ 0x1C004D764 (-SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAX_NI@Z.c)
 *     ?RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAVVIDMM_DEVICE@@E@Z @ 0x1C0063A10 (-RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAVVIDMM_DEVICE@@E@.c)
 *     ?MoveToPenaltyBoxBand@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C006E134 (-MoveToPenaltyBoxBand@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 */

void __fastcall VIDMM_DEVICE::PartiallySuspend(__int64 **this)
{
  unsigned int v2; // esi
  __int64 v3; // rbx
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rax
  _QWORD *v7; // rax
  int v8; // [rsp+20h] [rbp-18h]

  VIDMM_GLOBAL::RecordVaPagingHistorySuspendResumeDevice(
    (VIDMM_GLOBAL *)*this,
    (struct _EPROCESS *)*this[1],
    (struct VIDMM_DEVICE *)this,
    0);
  v2 = *((_DWORD *)this + 13) & 7;
  VIDMM_DEVICE::SuspendSchedulerDevice((VIDMM_DEVICE *)this, 0, -1);
  v3 = MEMORY[0xFFFFF78000000320];
  this[28] = (__int64 *)((char *)this[27] - v3 * KeQueryTimeIncrement());
  VIDMM_DEVICE::MoveToPenaltyBoxBand((__int64)this, 1u);
  v5 = **this;
  v6 = *(_QWORD *)(v5 + 16);
  if ( v6 && (*(_DWORD *)(v6 + 52) & 7) != 0 )
    *((_BYTE *)this + 50) |= 0x10u;
  if ( g_IsInternalReleaseOrDbg )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdTrace(v5);
    v5 = v2;
    v7[3] = this;
    v7[4] = v2;
    v7[5] = 1LL;
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
  {
    v8 = 1;
    Template_pq(v5, &EventVidMmSuspendDevice, v4, this[3], v8);
  }
}
