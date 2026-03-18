/*
 * XREFs of ?UpdateFrameIndices@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18005A828
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x18005D3B0 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     ??_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z @ 0x180013C20 (--_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z.c)
 *     ?ReleaseResponseRef@CResponseItem@@QEAAXXZ @ 0x18001F764 (-ReleaseResponseRef@CResponseItem@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180079700 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     McTemplateU0qqqq @ 0x180148DD8 (McTemplateU0qqqq.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::UpdateFrameIndices(CPartitionVerticalBlankScheduler *this)
{
  __int64 v1; // rdx
  __int64 v3; // rax
  char *v4; // rdi
  unsigned int i; // esi
  unsigned int j; // esi
  unsigned int k; // esi
  int v8; // ecx
  CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *v9; // rcx

  v1 = *((unsigned int *)this + 6456);
  v3 = ((_BYTE)v1 + 1) & 0xF;
  if ( *((_DWORD *)this + 6459) == (_DWORD)v3 )
    *((_DWORD *)this + 6459) = -1;
  if ( *((_DWORD *)this + 6458) == (_DWORD)v3 )
    *((_DWORD *)this + 6458) = -1;
  *((_DWORD *)this + 6456) = v3;
  v4 = (char *)this + 1608 * v3 + 96;
  *((_DWORD *)this + 6457) = v1;
  *((_QWORD *)this + 3230) = v4;
  *((_QWORD *)this + 3231) = (char *)this + 1608 * v1 + 96;
  memset_0(v4, 0, 0x438uLL);
  for ( i = 0; i < *((_DWORD *)v4 + 276); ++i )
    operator delete(*(void **)(*((_QWORD *)v4 + 135) + 8LL * i));
  *((_DWORD *)v4 + 276) = 0;
  DynArrayImpl<0>::ShrinkToSize(v4 + 1080, 8LL);
  for ( j = 0; j < *((_DWORD *)v4 + 284); ++j )
  {
    v9 = *(CTelemetryTouchLatencyAnalysis::TouchUpdateInfo **)(*((_QWORD *)v4 + 139) + 8LL * j);
    if ( v9 )
      CTelemetryTouchLatencyAnalysis::TouchUpdateInfo::`scalar deleting destructor'(v9);
  }
  *((_DWORD *)v4 + 284) = 0;
  DynArrayImpl<0>::ShrinkToSize(v4 + 1112, 8LL);
  for ( k = 0; k < *((_DWORD *)v4 + 292); ++k )
    CResponseItem::ReleaseResponseRef(*(CResponseItem **)(*((_QWORD *)v4 + 143) + 8LL * k));
  *((_DWORD *)v4 + 292) = 0;
  DynArrayImpl<0>::ShrinkToSize(v4 + 1144, 8LL);
  *(_BYTE *)(*((_QWORD *)this + 3230) + 1176LL) = 0;
  *(_QWORD *)(*((_QWORD *)this + 3230) + 1184LL) = 0LL;
  *(_BYTE *)(*((_QWORD *)this + 3230) + 1192LL) = 0;
  *(_BYTE *)(*((_QWORD *)this + 3230) + 1201LL) = 0;
  *(_DWORD *)(*((_QWORD *)this + 3230) + 1196LL) = 0;
  *(_BYTE *)(*((_QWORD *)this + 3230) + 1200LL) = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0qqqq(
      v8,
      (unsigned int)&EVTDESC_SCHEDULE_UPDATE_FRAME_INDEXES,
      *((_DWORD *)this + 6457),
      *((_DWORD *)this + 6456),
      *((_DWORD *)this + 6459),
      *((_DWORD *)this + 6458));
}
