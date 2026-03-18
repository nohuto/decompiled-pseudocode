/*
 * XREFs of ?FrameEnded@CTelemetryFrames@@SAX_N0_K@Z @ 0x18005ED9C
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x18005D3B0 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     _anonymous_namespace_::SealCurrentFrameSequenceLocked @ 0x180022D44 (_anonymous_namespace_--SealCurrentFrameSequenceLocked.c)
 *     _anonymous_namespace_::MeasureCyclesDelta @ 0x1800C1D1C (_anonymous_namespace_--MeasureCyclesDelta.c)
 *     McTemplateU0 @ 0x180143900 (McTemplateU0.c)
 *     _anonymous_namespace_::_unnamed_type__etwEndFrameSnapshot_::UpdateSnapshot @ 0x1801475BC (_anonymous_namespace_--_unnamed_type__etwEndFrameSnapshot_--UpdateSnapshot.c)
 *     McTemplateU0qq @ 0x180147E0C (McTemplateU0qq.c)
 *     McTemplateU0qqq @ 0x180147E74 (McTemplateU0qqq.c)
 *     McTemplateU0qqqqqqqq @ 0x180147EDC (McTemplateU0qqqqqqqq.c)
 */

void __fastcall CTelemetryFrames::FrameEnded(char a1, char a2, __int64 a3)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rdi
  HANDLE CurrentThread; // rax
  BOOL v7; // eax
  int v8; // edx
  HANDLE v9; // rax
  unsigned __int64 v10; // [rsp+50h] [rbp-18h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+58h] [rbp-10h] BYREF
  unsigned __int64 CycleTime; // [rsp+88h] [rbp+20h] BYREF

  if ( a2 )
    dword_1802D6260 |= 0x80u;
  byte_1802D63C0 = dword_1802D62E8 != `anonymous namespace'::_frameStartSnaphot;
  if ( a1 )
  {
    ++dword_1802D626C;
    v4 = 0LL;
    v5 = ::CycleTime;
    CycleTime = 0LL;
    if ( qword_1802D6108 )
    {
      CurrentThread = GetCurrentThread();
      v7 = QueryThreadCycleTime(CurrentThread, &CycleTime);
      v4 = CycleTime;
      if ( v7 )
        qword_1802D6288 += CycleTime - qword_1802D6108;
    }
    qword_1802D63B8 = a3;
    qword_1802D62C0 = v4 - v5;
    dword_1802D4850 = 3;
    v8 = dword_1802D6284;
    if ( 1000000 * ((unsigned __int64)(a3 - qword_1802D60F8) / g_qpcFrequency.QuadPart)
       + 1000000 * ((unsigned __int64)(a3 - qword_1802D60F8) % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart > (unsigned int)dword_1802D6284 )
      v8 = 1000000 * ((unsigned __int64)(a3 - qword_1802D60F8) / g_qpcFrequency.QuadPart)
         + 1000000 * ((unsigned __int64)(a3 - qword_1802D60F8) % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart;
    dword_1802D6284 = v8;
  }
  else
  {
    if ( dword_1802D62E8 == `anonymous namespace'::_frameStartSnaphot
      && dword_1802D62F0 == dword_1802D6140
      && dword_1802D62EC == dword_1802D613C
      && dword_1802D62F4 == dword_1802D6144 )
    {
      ++dword_1802D6274;
      anonymous_namespace_::MeasureCyclesDelta(&qword_1802D6108, &unk_1802D6298);
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_UNPRESENTED_FRAME);
      ++dword_1802D6270;
      v10 = 0LL;
      if ( qword_1802D6108 )
      {
        v9 = GetCurrentThread();
        if ( QueryThreadCycleTime(v9, &v10) )
          qword_1802D6290 += v10 - qword_1802D6108;
      }
    }
    if ( byte_1802D6101 )
    {
      ++dword_1802D6304;
      if ( dword_1802D4850 )
        --dword_1802D4850;
      else
        ++dword_1802D625C;
    }
    QueryPerformanceCounter(&PerformanceCount);
    qword_1802D63B8 = PerformanceCount.QuadPart;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    McTemplateU0qqqqqqqq(
      dword_1802D6334 - *(&`anonymous namespace'::_etwEndFrameSnapshot + 3),
      dword_1802D6330 - xmmword_1802D5ED0,
      dword_1802D6364 - `anonymous namespace'::_etwEndFrameSnapshot,
      dword_1802D6368 - *(&`anonymous namespace'::_etwEndFrameSnapshot + 1),
      dword_1802D636C - *(&`anonymous namespace'::_etwEndFrameSnapshot + 8),
      dword_1802D6334 - *(&`anonymous namespace'::_etwEndFrameSnapshot + 12),
      dword_1802D6330 - xmmword_1802D5ED0,
      dword_1802D633C - BYTE4(xmmword_1802D5ED0),
      dword_1802D6338 - BYTE8(xmmword_1802D5ED0),
      dword_1802D6360 - BYTE12(xmmword_1802D5ED0));
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      McTemplateU0qqq(
        (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
        (unsigned int)&ENDFRAME_WARP_CALLBACK_RENDERER_STATS,
        dword_1802D6354 - xmmword_1802D5EE0,
        dword_1802D6348 - DWORD1(xmmword_1802D5EE0),
        dword_1802D6358 - BYTE8(xmmword_1802D5EE0));
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      {
        McTemplateU0qq(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &ENDFRAME_PRIMITIVE_GROUP_STATS,
          (unsigned int)(dword_1802D631C - HIDWORD(xmmword_1802D5EE0)),
          (unsigned int)(dword_1802D6320 - xmmword_1802D5EF0));
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        {
          McTemplateU0qqq(
            (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
            (unsigned int)&ENDFRAME_TESSELLATED_PRIMITIVES_STATS,
            dword_1802D6324 - DWORD1(xmmword_1802D5EF0),
            dword_1802D6328 - DWORD2(xmmword_1802D5EF0),
            dword_1802D632C - BYTE12(xmmword_1802D5EF0));
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          {
            McTemplateU0qq(
              &Microsoft_Windows_Dwm_Core_Provider_Context,
              &ENDFRAME_HW_DRAWLIST_CACHE_STATS,
              (unsigned int)(dword_1802D6340 - xmmword_1802D5F00),
              (unsigned int)(dword_1802D6344 - DWORD1(xmmword_1802D5F00)));
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
              McTemplateU0qq(
                &Microsoft_Windows_Dwm_Core_Provider_Context,
                &ENDFRAME_WARP_DRAWLIST_CACHE_STATS,
                (unsigned int)(dword_1802D634C - DWORD2(xmmword_1802D5F00)),
                (unsigned int)(dword_1802D6350 - HIDWORD(xmmword_1802D5F00)));
          }
        }
      }
    }
    anonymous_namespace_::_unnamed_type__etwEndFrameSnapshot_::UpdateSnapshot(&`anonymous namespace'::_etwEndFrameSnapshot);
  }
  if ( dword_1802D5EAC
    && 1000 * ((unsigned __int64)(qword_1802D60F8 - qword_1802D63B0) / g_qpcFrequency.QuadPart)
     + 1000
     * ((unsigned __int64)(qword_1802D60F8 - qword_1802D63B0) % g_qpcFrequency.QuadPart)
     / g_qpcFrequency.QuadPart >= CCommonRegistryData::m_telemetryFramesSequenceMaximumPeriodMilliseconds )
  {
    anonymous_namespace_::SealCurrentFrameSequenceLocked(0);
  }
  dword_1802D5F48 = 0;
  byte_1802D5EB4 = 0;
  ReleaseSRWLockExclusive(&SRWLock);
}
