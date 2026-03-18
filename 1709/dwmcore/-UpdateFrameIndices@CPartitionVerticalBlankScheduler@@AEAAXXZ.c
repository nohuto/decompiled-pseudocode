/*
 * XREFs of ?UpdateFrameIndices@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800115E8
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x180014A50 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ReleaseResponseRef@CResponseItem@@QEAAXXZ @ 0x18007F004 (-ReleaseResponseRef@CResponseItem@@QEAAXXZ.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     ??_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z @ 0x180126338 (--_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z.c)
 *     McTemplateU0qqqq @ 0x180126AC8 (McTemplateU0qqqq.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::UpdateFrameIndices(CPartitionVerticalBlankScheduler *this)
{
  __int64 v1; // rdx
  __int64 v3; // rax
  char *v4; // rdi
  unsigned int i; // esi
  unsigned int v6; // edx
  unsigned int j; // esi
  unsigned int k; // esi
  int v9; // ecx
  CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *v10; // rcx

  v1 = *((unsigned int *)this + 5246);
  v3 = ((_BYTE)v1 + 1) & 0xF;
  if ( *((_DWORD *)this + 5249) == (_DWORD)v3 )
    *((_DWORD *)this + 5249) = -1;
  if ( *((_DWORD *)this + 5248) == (_DWORD)v3 )
    *((_DWORD *)this + 5248) = -1;
  *((_DWORD *)this + 5246) = v3;
  v4 = (char *)this + 1304 * v3 + 120;
  *((_DWORD *)this + 5247) = v1;
  *((_QWORD *)this + 2625) = v4;
  *((_QWORD *)this + 2626) = (char *)this + 1304 * v1 + 120;
  memset_0(v4, 0, 0x498uLL);
  for ( i = 0; i < *((_DWORD *)v4 + 300); ++i )
    WPF::ProcessHeapImpl::Free(*(void **)(*((_QWORD *)v4 + 147) + 8LL * i));
  *((_DWORD *)v4 + 300) = 0;
  DynArrayImpl<0>::ShrinkToSize(v4 + 1176, 8LL);
  for ( j = 0; j < *((_DWORD *)v4 + 308); ++j )
  {
    v10 = *(CTelemetryTouchLatencyAnalysis::TouchUpdateInfo **)(*((_QWORD *)v4 + 151) + 8LL * j);
    if ( v10 )
      CTelemetryTouchLatencyAnalysis::TouchUpdateInfo::`scalar deleting destructor'(v10, v6);
  }
  *((_DWORD *)v4 + 308) = 0;
  DynArrayImpl<0>::ShrinkToSize(v4 + 1208, 8LL);
  for ( k = 0; k < *((_DWORD *)v4 + 316); ++k )
    CResponseItem::ReleaseResponseRef(*(CResponseItem **)(*((_QWORD *)v4 + 155) + 8LL * k));
  *((_DWORD *)v4 + 316) = 0;
  DynArrayImpl<0>::ShrinkToSize(v4 + 1240, 8LL);
  *(_BYTE *)(*((_QWORD *)this + 2625) + 1272LL) = 0;
  *(_QWORD *)(*((_QWORD *)this + 2625) + 1280LL) = 0LL;
  *(_BYTE *)(*((_QWORD *)this + 2625) + 1288LL) = 0;
  *(_BYTE *)(*((_QWORD *)this + 2625) + 1297LL) = 0;
  *(_DWORD *)(*((_QWORD *)this + 2625) + 1292LL) = 0;
  *(_BYTE *)(*((_QWORD *)this + 2625) + 1296LL) = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0qqqq(
      v9,
      (unsigned int)&EVTDESC_SCHEDULE_UPDATE_FRAME_INDEXES,
      *((_DWORD *)this + 5247),
      *((_DWORD *)this + 5246),
      *((_DWORD *)this + 5249),
      *((_DWORD *)this + 5248));
}
