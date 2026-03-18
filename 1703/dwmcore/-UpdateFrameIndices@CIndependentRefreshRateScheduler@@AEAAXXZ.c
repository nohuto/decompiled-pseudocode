/*
 * XREFs of ?UpdateFrameIndices@CIndependentRefreshRateScheduler@@AEAAXXZ @ 0x18013E70C
 * Callers:
 *     ?ScheduleAndProcessFrame@CIndependentRefreshRateScheduler@@UEAAJXZ @ 0x18013DFB0 (-ScheduleAndProcessFrame@CIndependentRefreshRateScheduler@@UEAAJXZ.c)
 * Callees:
 *     ?Clear@CFrameInfo@@QEAAXXZ @ 0x1800B3F28 (-Clear@CFrameInfo@@QEAAXXZ.c)
 *     Template_qqqq @ 0x18013BCF4 (Template_qqqq.c)
 */

void __fastcall CIndependentRefreshRateScheduler::UpdateFrameIndices(CIndependentRefreshRateScheduler *this)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  CFrameInfo *v4; // rcx

  v2 = ((unsigned __int8)*((_DWORD *)this + 5366) + 1) & 0xF;
  if ( *((_DWORD *)this + 5369) == (_DWORD)v2 )
    *((_DWORD *)this + 5369) = -1;
  if ( *((_DWORD *)this + 5368) == (_DWORD)v2 )
    *((_DWORD *)this + 5368) = -1;
  v3 = *((unsigned int *)this + 5366);
  *((_DWORD *)this + 5366) = v2;
  *((_DWORD *)this + 5367) = v3;
  v4 = (CIndependentRefreshRateScheduler *)((char *)this + 1328 * v2 + 216);
  *((_QWORD *)this + 2685) = v4;
  *((_QWORD *)this + 2686) = (char *)this + 1328 * v3 + 216;
  CFrameInfo::Clear(v4);
  *(_BYTE *)(*((_QWORD *)this + 2685) + 1288LL) = 0;
  *(_QWORD *)(*((_QWORD *)this + 2685) + 1296LL) = 0LL;
  *(_QWORD *)(*((_QWORD *)this + 2685) + 1304LL) = 0LL;
  *(_BYTE *)(*((_QWORD *)this + 2685) + 1312LL) = 0;
  *(_DWORD *)(*((_QWORD *)this + 2685) + 1316LL) = 0;
  *(_BYTE *)(*((_QWORD *)this + 2685) + 1320LL) = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_qqqq(
      0LL,
      &EVTDESC_SCHEDULE_UPDATE_FRAME_INDEXES,
      *((_DWORD *)this + 5367),
      *((_DWORD *)this + 5366),
      *((_DWORD *)this + 5369),
      *((_DWORD *)this + 5368));
}
