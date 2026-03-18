/*
 * XREFs of _anonymous_namespace_::SealCurrentFrameSequenceLocked @ 0x180022D44
 * Callers:
 *     ?FrameRenderingStarted@CTelemetryFrames@@SAX_K@Z @ 0x18005EB8C (-FrameRenderingStarted@CTelemetryFrames@@SAX_K@Z.c)
 *     ?FrameEnded@CTelemetryFrames@@SAX_N0_K@Z @ 0x18005ED9C (-FrameEnded@CTelemetryFrames@@SAX_N0_K@Z.c)
 * Callees:
 *     ?EnumerateChangedProcessAttributions@CProcessAttributionManager@@AEAAXAEAVCProcessAttributionObserver@@PEAXP6AX1K_KW4ProcessAttributionFlags@@AEBUProcessAttributionResourceCounters@@@Z@Z @ 0x180021F30 (-EnumerateChangedProcessAttributions@CProcessAttributionManager@@AEAAXAEAVCProcessAttributionObs.c)
 *     _anonymous_namespace_::FramesReport::OffsetInMillisecondsFromStartOfReport @ 0x1800227E0 (_anonymous_namespace_--FramesReport--OffsetInMillisecondsFromStartOfReport.c)
 *     _anonymous_namespace_::FramesReport::_FramesReport @ 0x18002282C (_anonymous_namespace_--FramesReport--_FramesReport.c)
 *     _anonymous_namespace_::FramesReport::FramesReport @ 0x180022974 (_anonymous_namespace_--FramesReport--FramesReport.c)
 *     std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::emplace_back__anonymous_namespace_::FrameSequenceInfo_const_&___ptr64_ @ 0x180022C18 (std--vector__anonymous_namespace_--FrameSequenceInfo_std--allocator__anonymous_name_ea_180022C18.c)
 *     _anonymous_namespace_::FrameSequenceInfo::operator_ @ 0x180023050 (_anonymous_namespace_--FrameSequenceInfo--operator_.c)
 *     _anonymous_namespace_::FrameSequenceInfo::_FrameSequenceInfo @ 0x180023938 (_anonymous_namespace_--FrameSequenceInfo--_FrameSequenceInfo.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@IPEAX@2@XZ @ 0x180023FDC (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@std@@@std.c)
 *     std::_Tree_comp_alloc_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Buyheadnode @ 0x180024128 (std--_Tree_comp_alloc_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0x155a6.c)
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     std::deque_std::unique_ptr__anonymous_namespace_::FramesReport_std::default_delete__anonymous_namespace_::FramesReport____std::allocator_std::unique_ptr__anonymous_namespace_::FramesReport_std::default_delete__anonymous_namespace_::FramesReport_______::push_back @ 0x1800C651C (std--deque_std--unique_ptr__anonymous_namespace_--FramesReport_std--default_delete__ea_1800C651C.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 */

void __fastcall anonymous_namespace_::SealCurrentFrameSequenceLocked(char a1)
{
  unsigned int v2; // eax
  HANDLE CurrentProcess; // rax
  _QWORD *v4; // rcx
  __int128 v5; // xmm1
  __int64 v6; // rax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  _QWORD *v9; // rax
  _QWORD *v10; // rbx
  _QWORD *v11; // rdx
  char *v12; // rcx
  void *v13; // rax
  void *v14; // rbx
  void *v15; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v16[408]; // [rsp+28h] [rbp-D8h] BYREF
  __int128 v17; // [rsp+1C0h] [rbp+C0h]
  __int128 v18; // [rsp+1D0h] [rbp+D0h]
  __int128 v19; // [rsp+1E8h] [rbp+E8h]
  __int64 v20; // [rsp+1F8h] [rbp+F8h]
  __int64 v21; // [rsp+200h] [rbp+100h]
  _BYTE ppsmemCounters[80]; // [rsp+210h] [rbp+110h] BYREF

  if ( dword_1802D6268 )
  {
    memset_0(ppsmemCounters, 0, sizeof(ppsmemCounters));
    `anonymous namespace'::_etwEndFrameSnapshot = *(_OWORD *)ppsmemCounters;
    xmmword_1802D5EE0 = *(_OWORD *)&ppsmemCounters[32];
    xmmword_1802D5ED0 = *(_OWORD *)&ppsmemCounters[16];
    xmmword_1802D5F00 = *(_OWORD *)&ppsmemCounters[64];
    xmmword_1802D5EF0 = *(_OWORD *)&ppsmemCounters[48];
    CProcessAttributionManager::EnumerateChangedProcessAttributions(
      *(void ****)(*(_QWORD *)qword_1802D6148 + 8LL),
      *(struct CProcessAttributionObserver **)qword_1802D6148,
      0LL,
      (void (__high *)(void *, unsigned int, unsigned __int64, enum ProcessAttributionFlags, const struct ProcessAttributionResourceCounters *))lambda_bc2aba7ba829d575f491599aa9d39211_::_lambda_invoker_cdecl_);
    dword_1802D6280 = 1000 * ((unsigned __int64)(qword_1802D63B8 - qword_1802D63B0) / g_qpcFrequency.QuadPart)
                    + 1000
                    * ((unsigned __int64)(qword_1802D63B8 - qword_1802D63B0) % g_qpcFrequency.QuadPart)
                    / g_qpcFrequency.QuadPart;
    std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::emplace_back__anonymous_namespace_::FrameSequenceInfo_const_____ptr64_(
      *((char ***)qword_1802D6148 + 5),
      (__int64)&unk_1802D61E0);
    v20 = 0LL;
    v21 = 0LL;
    memset_0(v16, 0, sizeof(v16));
    v17 = 0LL;
    *(_QWORD *)&v17 = std::_Tree_comp_alloc<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Buyheadnode();
    v18 = 0LL;
    *(_QWORD *)&v18 = std::_Tree_comp_alloc<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Buyheadnode();
    v19 = 0LL;
    *(_QWORD *)&v19 = std::_Tree_comp_alloc_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Buyheadnode();
    anonymous_namespace_::FrameSequenceInfo::operator_(&unk_1802D61E0, v16);
    anonymous_namespace_::FrameSequenceInfo::_FrameSequenceInfo(v16);
    v2 = anonymous_namespace_::FramesReport::OffsetInMillisecondsFromStartOfReport(
           *((_QWORD **)qword_1802D6148 + 5),
           qword_1802D60F8);
    if ( a1
      || v2 >= CCommonRegistryData::m_telemetryFramesReportPeriodMilliseconds
      || g_fTelemetry_FramesReportFast && v2 >= 0x3E8 )
    {
      *(_DWORD *)ppsmemCounters = 80;
      CurrentProcess = GetCurrentProcess();
      if ( K32GetProcessMemoryInfo(CurrentProcess, (PPROCESS_MEMORY_COUNTERS)ppsmemCounters, 0x50u) )
      {
        HIDWORD(qword_1802D60F0) = *(_QWORD *)&ppsmemCounters[16] >> 10;
        LODWORD(qword_1802D60F0) = *(_QWORD *)&ppsmemCounters[56] >> 10;
      }
      v4 = qword_1802D6148;
      v5 = xmmword_1802D60C0;
      *(_OWORD *)(*((_QWORD *)qword_1802D6148 + 5) + 160LL) = xmmword_1802D6128;
      v6 = v4[5];
      *(_OWORD *)(v6 + 24) = xmmword_1802D60B0;
      v7 = xmmword_1802D60D0;
      *(_OWORD *)(v6 + 40) = v5;
      v8 = xmmword_1802D60E0;
      *(_OWORD *)(v6 + 56) = v7;
      *(_QWORD *)&v7 = qword_1802D60F0;
      *(_OWORD *)(v6 + 72) = v8;
      *(_QWORD *)(v6 + 88) = v7;
      v9 = operator new(0xB0uLL);
      v10 = v9;
      if ( v9 )
      {
        memset_0(v9, 0, 0xB0uLL);
        v11 = anonymous_namespace_::FramesReport::FramesReport(v10);
      }
      else
      {
        v11 = 0LL;
      }
      v12 = (char *)qword_1802D6148;
      v13 = (void *)*((_QWORD *)qword_1802D6148 + 5);
      *((_QWORD *)qword_1802D6148 + 5) = v11;
      v15 = v13;
      std::deque_std::unique_ptr__anonymous_namespace_::FramesReport_std::default_delete__anonymous_namespace_::FramesReport____std::allocator_std::unique_ptr__anonymous_namespace_::FramesReport_std::default_delete__anonymous_namespace_::FramesReport_______::push_back(
        v12 + 48,
        &v15);
      if ( !byte_1802D6100 )
      {
        byte_1802D6100 = 1;
        SubmitThreadpoolWork(*((PTP_WORK *)qword_1802D6148 + 1));
      }
      v14 = v15;
      if ( v15 )
      {
        anonymous_namespace_::FramesReport::_FramesReport((char **)v15);
        operator delete(v14, 0xB0uLL);
      }
    }
  }
}
