/*
 * XREFs of ?Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C004D22C
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0071420 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001B5C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0001F5C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0002678 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     Template_p @ 0x1C001F4D4 (Template_p.c)
 *     ?ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C004D878 (-ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     ?ResumePagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1C004D8B0 (-ResumePagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0058B5C (-TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAVVIDMM_DEVICE@@E@Z @ 0x1C0063A10 (-RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAVVIDMM_DEVICE@@E@.c)
 *     ?Init@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@@Z @ 0x1C00A59D0 (-Init@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@@Z.c)
 *     ?LogDeviceInPenaltyBoxEvent@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_DEVICE@@_N@Z @ 0x1C00A5C64 (-LogDeviceInPenaltyBoxEvent@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_DEVICE@@_N@Z.c)
 */

__int64 __fastcall VIDMM_DEVICE::Resume(VIDMM_DEVICE *this, bool a2, bool *a3, struct VIDMM_ALLOC **a4)
{
  int v8; // esi
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  VIDMM_GLOBAL *v12; // rcx
  __int64 v13; // rbx
  ULONG TimeIncrement; // eax
  __int64 v15; // r8
  __int64 v16; // rcx
  bool v17; // zf
  __int64 v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rbx
  VIDMM_COMMIT_TELEMETRY *v23; // rcx
  _BYTE v24[32]; // [rsp+30h] [rbp-38h] BYREF

  if ( g_IsInternalReleaseOrDbg )
  {
    v19 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v19 + 24) = this;
    *(_QWORD *)(v19 + 32) = *((_DWORD *)this + 13) & 7;
  }
  *((_BYTE *)this + 50) |= 2u;
  v8 = 0;
  v9 = *((_QWORD *)this + 4);
  if ( v9 && (*(_BYTE *)(v9 + 164) || _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 160), 0, 0))
    || (v8 = VIDMM_GLOBAL::TryPageInDevice(*(VIDMM_GLOBAL **)this, this, a2, a3, a4), v8 >= 0) )
  {
    VIDMM_DEVICE::ResumePagingQueues(this);
    VIDMM_DEVICE::ResumeSchedulerDevice(this, 0);
    VIDMM_GLOBAL::RecordVaPagingHistorySuspendResumeDevice(
      *(VIDMM_GLOBAL **)this,
      **((struct _EPROCESS ***)this + 1),
      this,
      1u);
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
      (DXGAUTOPUSHLOCKEXCLUSIVE *)v24,
      (struct _KTHREAD **)(*(_QWORD *)this + 41536LL));
    VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v12, (struct _LIST_ENTRY *)this + 11);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v24);
    v13 = MEMORY[0xFFFFF78000000320];
    TimeIncrement = KeQueryTimeIncrement();
    *((_BYTE *)this + 50) &= 0xEDu;
    *((_QWORD *)this + 29) = 0LL;
    v16 = *((_QWORD *)this + 28) + v13 * TimeIncrement;
    v17 = (*((_BYTE *)this + 50) & 4) == 0;
    *((_QWORD *)this + 27) = v16;
    *((_QWORD *)this + 28) = 0LL;
    if ( !v17 )
    {
      --*(_DWORD *)(*(_QWORD *)this + 41672LL);
      *((_BYTE *)this + 50) &= ~4u;
    }
    if ( g_IsInternalReleaseOrDbg )
    {
      v21 = (_QWORD *)WdLogNewEntry5_WdTrace(v16);
      v21[3] = this;
      v16 = *((_DWORD *)this + 13) & 7;
      v21[5] = 0LL;
      v21[4] = v16;
    }
    if ( (*((_BYTE *)this + 52) & 7) == 3 )
    {
      v16 = *(_QWORD *)(*((_QWORD *)this + 3) + 40LL);
      if ( *(_BYTE *)(v16 + 274) )
      {
        v22 = **(_QWORD **)this + 184LL;
        VIDMM_COMMIT_TELEMETRY::Init((VIDMM_COMMIT_TELEMETRY *)v22, *(struct VIDMM_GLOBAL **)this, this, 0LL);
        VIDMM_COMMIT_TELEMETRY::LogDeviceInPenaltyBoxEvent(v23, this, 0);
        *(_QWORD *)(v22 + 8) = 0LL;
        *(_QWORD *)(v22 + 16) = 0LL;
        *(_QWORD *)v22 = 0LL;
        *(_BYTE *)(v22 + 24) = 0;
      }
    }
    *((_DWORD *)this + 13) &= 0xFFFFFFF8;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
      Template_p(v16, &EventVidMmResumeDevice, v15, *((_QWORD *)this + 3));
  }
  else
  {
    v20 = WdLogNewEntry5_WdWarning(v11, v10);
    *(_QWORD *)(v20 + 24) = this;
    WdLogEvent5_WdWarning(v20);
    *((_BYTE *)this + 50) &= ~2u;
  }
  return (unsigned int)v8;
}
