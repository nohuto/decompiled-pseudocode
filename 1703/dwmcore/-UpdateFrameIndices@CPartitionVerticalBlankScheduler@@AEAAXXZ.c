/*
 * XREFs of ?UpdateFrameIndices@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180065C28
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x180067C20 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     ??_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z @ 0x1800289FC (--_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ReleaseResponseRef@CResponseItem@@QEAAXXZ @ 0x1800B01C4 (-ReleaseResponseRef@CResponseItem@@QEAAXXZ.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     Template_qqqq @ 0x18013BCF4 (Template_qqqq.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::UpdateFrameIndices(CPartitionVerticalBlankScheduler *this)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  char *v4; // rdi
  unsigned int i; // esi
  unsigned int j; // esi
  unsigned int k; // esi
  int v8; // ecx
  CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *v9; // rcx

  v2 = ((unsigned __int8)*((_DWORD *)this + 5366) + 1) & 0xF;
  if ( *((_DWORD *)this + 5369) == (_DWORD)v2 )
    *((_DWORD *)this + 5369) = -1;
  if ( *((_DWORD *)this + 5368) == (_DWORD)v2 )
    *((_DWORD *)this + 5368) = -1;
  v3 = *((unsigned int *)this + 5366);
  *((_DWORD *)this + 5366) = v2;
  v4 = (char *)this + 1328 * v2 + 216;
  *((_DWORD *)this + 5367) = v3;
  *((_QWORD *)this + 2685) = v4;
  *((_QWORD *)this + 2686) = (char *)this + 1328 * v3 + 216;
  memset_0(v4, 0, 0x4A8uLL);
  for ( i = 0; i < *((_DWORD *)v4 + 304); ++i )
    WPF::ProcessHeapImpl::Free(*(void **)(*((_QWORD *)v4 + 149) + 8LL * i));
  *((_DWORD *)v4 + 304) = 0;
  DynArrayImpl<0>::ShrinkToSize(v4 + 1192, 8LL);
  for ( j = 0; j < *((_DWORD *)v4 + 312); ++j )
  {
    v9 = *(CTelemetryTouchLatencyAnalysis::TouchUpdateInfo **)(*((_QWORD *)v4 + 153) + 8LL * j);
    if ( v9 )
      CTelemetryTouchLatencyAnalysis::TouchUpdateInfo::`scalar deleting destructor'(v9);
  }
  *((_DWORD *)v4 + 312) = 0;
  DynArrayImpl<0>::ShrinkToSize(v4 + 1224, 8LL);
  for ( k = 0; k < *((_DWORD *)v4 + 320); ++k )
    CResponseItem::ReleaseResponseRef(*(CResponseItem **)(*((_QWORD *)v4 + 157) + 8LL * k));
  *((_DWORD *)v4 + 320) = 0;
  DynArrayImpl<0>::ShrinkToSize(v4 + 1256, 8LL);
  *(_BYTE *)(*((_QWORD *)this + 2685) + 1288LL) = 0;
  *(_QWORD *)(*((_QWORD *)this + 2685) + 1296LL) = 0LL;
  *(_QWORD *)(*((_QWORD *)this + 2685) + 1304LL) = 0LL;
  *(_BYTE *)(*((_QWORD *)this + 2685) + 1312LL) = 0;
  *(_DWORD *)(*((_QWORD *)this + 2685) + 1316LL) = 0;
  *(_BYTE *)(*((_QWORD *)this + 2685) + 1320LL) = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_qqqq(
      v8,
      (unsigned int)&EVTDESC_SCHEDULE_UPDATE_FRAME_INDEXES,
      *((_DWORD *)this + 5367),
      *((_DWORD *)this + 5366),
      *((_DWORD *)this + 5369),
      *((_DWORD *)this + 5368));
}
