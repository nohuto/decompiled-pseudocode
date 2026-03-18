/*
 * XREFs of ?Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z @ 0x1C0098680
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0071420 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     Template_ppq @ 0x1C001F838 (Template_ppq.c)
 *     Template_pq @ 0x1C001FA14 (Template_pq.c)
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1C004D6DC (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAX_NI@Z @ 0x1C004D764 (-SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAX_NI@Z.c)
 *     ?SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1C004D794 (-SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?MoveToPenaltyBoxBand@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C006E134 (-MoveToPenaltyBoxBand@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 */

void __fastcall VIDMM_DEVICE::Yield(VIDMM_DEVICE *this, struct VIDMM_DEVICE *a2)
{
  unsigned int v3; // esi
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  _QWORD *v11; // rax

  v3 = *((_DWORD *)this + 13) & 7;
  *((_QWORD *)this + 29) = a2;
  if ( v3 != 2 )
  {
    if ( v3 )
    {
      if ( v3 == 1 )
        VIDMM_DEVICE::SuspendPagingQueues(this);
    }
    else
    {
      VIDMM_DEVICE::SuspendSchedulerDevice(this, 0, -1);
      VIDMM_DEVICE::SuspendPagingQueues(this);
      v5 = MEMORY[0xFFFFF78000000320];
      *((_QWORD *)this + 28) = *((_QWORD *)this + 27) - v5 * KeQueryTimeIncrement();
    }
    VIDMM_DEVICE::MoveToPenaltyBoxBand((__int64)this, 2u);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
      Template_pq(v6, &EventVidMmSuspendDevice, v7, *((_QWORD *)this + 3), 2);
  }
  VIDMM_DEVICE::FaultAllAllocations(this);
  v10 = *((_QWORD *)a2 + 27);
  *((_QWORD *)this + 26) = v10;
  if ( g_IsInternalReleaseOrDbg )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v8);
    v11[3] = this;
    v11[4] = *((_QWORD *)this + 29);
    v8 = v3;
    v11[5] = v3;
    v11[6] = 3LL;
    v11[7] = v10;
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
    Template_ppq(
      v8,
      &EventVidMmYieldDevice,
      v9,
      *((_QWORD *)this + 3),
      *((_QWORD *)a2 + 3),
      v10 - *(_DWORD *)(*(_QWORD *)this + 4608LL));
}
