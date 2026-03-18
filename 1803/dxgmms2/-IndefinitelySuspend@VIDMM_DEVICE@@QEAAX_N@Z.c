/*
 * XREFs of ?IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C0076618
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0064BD0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?SuspendAllDevices@VIDMM_PROCESS_ADAPTER_INFO@@QEAA_N_N@Z @ 0x1C00A83C4 (-SuspendAllDevices@VIDMM_PROCESS_ADAPTER_INFO@@QEAA_N_N@Z.c)
 * Callees:
 *     VidSchDeviceQueuesNotEmpty @ 0x1C0003DDC (VidSchDeviceQueuesNotEmpty.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0004CD4 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005510 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0pq @ 0x1C0024428 (McTemplateK0pq.c)
 *     ?RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAVVIDMM_DEVICE@@E@Z @ 0x1C006B970 (-RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAVVIDMM_DEVICE.c)
 *     ?MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C00761CC (-MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 *     ?SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00767CC (-SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00767F4 (-SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_DEVICE::IndefinitelySuspend(__int64 **this, char a2)
{
  unsigned int v4; // esi
  unsigned int v5; // ebp
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r8
  bool v10; // zf
  _QWORD *v11; // rax
  _BYTE v12[40]; // [rsp+30h] [rbp-28h] BYREF

  VIDMM_GLOBAL::RecordVaPagingHistorySuspendResumeDevice(
    (VIDMM_GLOBAL *)*this,
    (struct VIDMM_PROCESS *)this[1],
    (struct VIDMM_DEVICE *)this,
    0);
  v4 = 4;
  v5 = *((_DWORD *)this + 13) & 7;
  if ( !v5 )
    VIDMM_DEVICE::SuspendSchedulerDevice((VIDMM_DEVICE *)this);
  VIDMM_DEVICE::SuspendPagingQueues((VIDMM_DEVICE *)this);
  v6 = **this;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v6 + 128, 0LL);
  *(_QWORD *)(v6 + 136) = KeGetCurrentThread();
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v12, (struct _KTHREAD **)*this + 5227);
  if ( a2 == 1 && (VidSchDeviceQueuesNotEmpty((__int64)this[4]) || *((_DWORD *)this + 16)) )
    v4 = 3;
  VIDMM_DEVICE::MoveToPenaltyBoxBandNoLock((__int64)this, v4);
  v7 = **this + 128;
  *(_QWORD *)(v7 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v7, 0LL);
  KeLeaveCriticalRegion();
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v12);
  v10 = (*((_BYTE *)this + 50) & 4) == 0;
  *((_BYTE *)this + 48) = a2;
  if ( !v10 )
  {
    --*((_DWORD *)*this + 10488);
    *((_BYTE *)this + 50) &= ~4u;
  }
  if ( g_IsInternalReleaseOrDbg )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v8);
    v11[4] = v5;
    v11[5] = v4;
    v11[3] = this;
    v8 = (__int64)this[26];
    v11[6] = v8;
  }
  if ( ((unsigned int)Microsoft_Windows_DxgKrnlEnableBits & 0x100000) != 0 )
    McTemplateK0pq(v8, &EventVidMmSuspendDevice, v9, this[3], v4);
}
