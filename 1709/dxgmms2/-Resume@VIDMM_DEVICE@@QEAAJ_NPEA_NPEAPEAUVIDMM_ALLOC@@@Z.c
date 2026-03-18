/*
 * XREFs of ?Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005174C
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0077550 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001820 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0001D88 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0013400 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     McTemplateK0p @ 0x1C00215B4 (McTemplateK0p.c)
 *     ?ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C0051D88 (-ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?ResumePagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1C0051DB0 (-ResumePagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005BDB4 (-TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAVVIDMM_DEVICE@@E@Z @ 0x1C006706C (-RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAVVIDMM_DEVICE.c)
 *     ?Init@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@@Z @ 0x1C00AE120 (-Init@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@@Z.c)
 *     ?LogDeviceInPenaltyBoxEvent@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_DEVICE@@_N@Z @ 0x1C00AE32C (-LogDeviceInPenaltyBoxEvent@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_DEVICE@@_N@Z.c)
 */

__int64 __fastcall VIDMM_DEVICE::Resume(VIDMM_DEVICE *this, bool a2, bool *a3, struct VIDMM_ALLOC **a4)
{
  int v8; // esi
  __int64 v9; // rcx
  __int64 v10; // rcx
  VIDMM_GLOBAL *v11; // rcx
  __int64 v12; // rbx
  ULONG TimeIncrement; // eax
  __int64 v14; // r8
  __int64 v15; // rcx
  bool v16; // zf
  __int64 v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // rbx
  VIDMM_COMMIT_TELEMETRY *v22; // rcx
  _BYTE v23[32]; // [rsp+30h] [rbp-38h] BYREF

  if ( g_IsInternalReleaseOrDbg )
  {
    v18 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v18 + 24) = this;
    *(_QWORD *)(v18 + 32) = *((_DWORD *)this + 13) & 7;
  }
  *((_BYTE *)this + 50) |= 2u;
  v8 = 0;
  v9 = *((_QWORD *)this + 4);
  if ( v9 && (*(_BYTE *)(v9 + 164) || _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 160), 0, 0))
    || (v8 = VIDMM_GLOBAL::TryPageInDevice(*(VIDMM_GLOBAL **)this, this, a2, a3, a4), v8 >= 0) )
  {
    VIDMM_DEVICE::ResumePagingQueues(this);
    VIDMM_DEVICE::ResumeSchedulerDevice(this);
    VIDMM_GLOBAL::RecordVaPagingHistorySuspendResumeDevice(
      *(VIDMM_GLOBAL **)this,
      *((struct VIDMM_PROCESS **)this + 1),
      this,
      1u);
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
      (DXGAUTOPUSHLOCKEXCLUSIVE *)v23,
      (struct _KTHREAD **)(*(_QWORD *)this + 41240LL));
    VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v11, (struct _LIST_ENTRY *)this + 11);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v23);
    v12 = MEMORY[0xFFFFF78000000320];
    TimeIncrement = KeQueryTimeIncrement();
    *((_BYTE *)this + 50) &= 0xEDu;
    *((_QWORD *)this + 29) = 0LL;
    v15 = *((_QWORD *)this + 28) + v12 * TimeIncrement;
    v16 = (*((_BYTE *)this + 50) & 4) == 0;
    *((_QWORD *)this + 27) = v15;
    *((_QWORD *)this + 28) = 0LL;
    if ( !v16 )
    {
      --*(_DWORD *)(*(_QWORD *)this + 41376LL);
      *((_BYTE *)this + 50) &= ~4u;
    }
    if ( g_IsInternalReleaseOrDbg )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdTrace(v15);
      v20[3] = this;
      v15 = *((_DWORD *)this + 13) & 7;
      v20[5] = 0LL;
      v20[4] = v15;
    }
    if ( (*((_BYTE *)this + 52) & 7) == 3 )
    {
      v15 = *(_QWORD *)(*((_QWORD *)this + 3) + 40LL);
      if ( *(_BYTE *)(v15 + 306) )
      {
        v21 = **(_QWORD **)this + 184LL;
        VIDMM_COMMIT_TELEMETRY::Init((VIDMM_COMMIT_TELEMETRY *)v21, *(struct VIDMM_GLOBAL **)this, this, 0LL);
        VIDMM_COMMIT_TELEMETRY::LogDeviceInPenaltyBoxEvent(v22, this, 0);
        *(_QWORD *)(v21 + 8) = 0LL;
        *(_QWORD *)(v21 + 16) = 0LL;
        *(_QWORD *)v21 = 0LL;
        *(_BYTE *)(v21 + 24) = 0;
      }
    }
    *((_DWORD *)this + 13) &= 0xFFFFFFF8;
    if ( ((unsigned int)Microsoft_Windows_DxgKrnlEnableBits & 0x100000) != 0 )
      McTemplateK0p(v15, &EventVidMmResumeDevice, v14, *((_QWORD *)this + 3));
  }
  else
  {
    v19 = WdLogNewEntry5_WdWarning(v10);
    *(_QWORD *)(v19 + 24) = this;
    WdLogEvent5_WdWarning(v19);
    *((_BYTE *)this + 50) &= ~2u;
  }
  return (unsigned int)v8;
}
