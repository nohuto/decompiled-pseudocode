/*
 * XREFs of ?FrameEndedCommon@CTelemetryFrames@@CAX_N@Z @ 0x180010770
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x180012360 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     _anonymous_namespace_::SealCurrentFrameSequenceLocked @ 0x180008454 (_anonymous_namespace_--SealCurrentFrameSequenceLocked.c)
 *     _anonymous_namespace_::MeasureCyclesDelta @ 0x180010714 (_anonymous_namespace_--MeasureCyclesDelta.c)
 *     _anonymous_namespace_::_unnamed_type__etwEndFrameSnapshot_::UpdateSnapshot @ 0x180124B98 (_anonymous_namespace_--_unnamed_type__etwEndFrameSnapshot_--UpdateSnapshot.c)
 *     McTemplateU0qq @ 0x180125258 (McTemplateU0qq.c)
 *     McTemplateU0qqq @ 0x1801252C0 (McTemplateU0qqq.c)
 *     McTemplateU0qqqqqqqq @ 0x180125328 (McTemplateU0qqqqqqqq.c)
 */

void __fastcall CTelemetryFrames::FrameEndedCommon(char a1)
{
  HANDLE CurrentThread; // rax
  unsigned __int64 CycleTime; // [rsp+68h] [rbp+10h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+70h] [rbp+18h] BYREF

  if ( a1 )
  {
    ++dword_18026ED2C;
  }
  else
  {
    if ( dword_18026EDA8 == `anonymous namespace'::_frameStartSnaphot
      && dword_18026EDB0 == dword_18026EBB8
      && dword_18026EDAC == dword_18026EBB4
      && dword_18026EDB4 == dword_18026EBBC )
    {
      ++dword_18026ED34;
      anonymous_namespace_::MeasureCyclesDelta(&qword_18026EB98, &qword_18026ED58);
    }
    else
    {
      ++dword_18026ED30;
      CycleTime = 0LL;
      if ( qword_18026EB98 )
      {
        CurrentThread = GetCurrentThread();
        if ( QueryThreadCycleTime(CurrentThread, &CycleTime) )
          qword_18026ED50 += CycleTime - qword_18026EB98;
      }
    }
    if ( byte_18026EB89 )
      ++dword_18026EDC4;
    QueryPerformanceCounter(&PerformanceCount);
    qword_18026EE60 = PerformanceCount.QuadPart;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    McTemplateU0qqqqqqqq(
      dword_18026EDF4 - *(&`anonymous namespace'::_etwEndFrameSnapshot + 3),
      dword_18026EDF0 - xmmword_18026EBD0,
      dword_18026EE24 - `anonymous namespace'::_etwEndFrameSnapshot,
      dword_18026EE28 - *(&`anonymous namespace'::_etwEndFrameSnapshot + 1),
      dword_18026EE2C - *(&`anonymous namespace'::_etwEndFrameSnapshot + 8),
      dword_18026EDF4 - *(&`anonymous namespace'::_etwEndFrameSnapshot + 12),
      dword_18026EDF0 - xmmword_18026EBD0,
      dword_18026EDFC - BYTE4(xmmword_18026EBD0),
      dword_18026EDF8 - BYTE8(xmmword_18026EBD0),
      dword_18026EE20 - BYTE12(xmmword_18026EBD0));
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      McTemplateU0qqq(
        (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
        (unsigned int)&ENDFRAME_WARP_CALLBACK_RENDERER_STATS,
        dword_18026EE14 - xmmword_18026EBE0,
        dword_18026EE08 - DWORD1(xmmword_18026EBE0),
        dword_18026EE18 - BYTE8(xmmword_18026EBE0));
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      {
        McTemplateU0qq(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &ENDFRAME_PRIMITIVE_GROUP_STATS,
          (unsigned int)(dword_18026EDDC - HIDWORD(xmmword_18026EBE0)),
          (unsigned int)(dword_18026EDE0 - xmmword_18026EBF0));
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        {
          McTemplateU0qqq(
            (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
            (unsigned int)&ENDFRAME_TESSELLATED_PRIMITIVES_STATS,
            dword_18026EDE4 - DWORD1(xmmword_18026EBF0),
            dword_18026EDE8 - DWORD2(xmmword_18026EBF0),
            dword_18026EDEC - BYTE12(xmmword_18026EBF0));
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          {
            McTemplateU0qq(
              &Microsoft_Windows_Dwm_Core_Provider_Context,
              &ENDFRAME_HW_DRAWLIST_CACHE_STATS,
              (unsigned int)(dword_18026EE00 - xmmword_18026EC00),
              (unsigned int)(dword_18026EE04 - DWORD1(xmmword_18026EC00)));
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
              McTemplateU0qq(
                &Microsoft_Windows_Dwm_Core_Provider_Context,
                &ENDFRAME_WARP_DRAWLIST_CACHE_STATS,
                (unsigned int)(dword_18026EE0C - DWORD2(xmmword_18026EC00)),
                (unsigned int)(dword_18026EE10 - HIDWORD(xmmword_18026EC00)));
          }
        }
      }
    }
    anonymous_namespace_::_unnamed_type__etwEndFrameSnapshot_::UpdateSnapshot(&`anonymous namespace'::_etwEndFrameSnapshot);
  }
  if ( 1000 * ((unsigned __int64)(qword_18026EB80 - qword_18026EE58) / g_qpcFrequency.QuadPart)
     + 1000
     * ((unsigned __int64)(qword_18026EB80 - qword_18026EE58) % g_qpcFrequency.QuadPart)
     / g_qpcFrequency.QuadPart >= CCommonRegistryData::m_telemetryFramesSequenceMaximumPeriodMilliseconds )
    anonymous_namespace_::SealCurrentFrameSequenceLocked(0);
  dword_18026EE70 = 0;
  byte_18026EBA8 = 0;
  ReleaseSRWLockExclusive(&SRWLock);
}
