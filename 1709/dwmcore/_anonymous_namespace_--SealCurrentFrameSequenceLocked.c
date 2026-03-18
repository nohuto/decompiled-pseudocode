/*
 * XREFs of _anonymous_namespace_::SealCurrentFrameSequenceLocked @ 0x180008454
 * Callers:
 *     ?FrameEndedCommon@CTelemetryFrames@@CAX_N@Z @ 0x180010770 (-FrameEndedCommon@CTelemetryFrames@@CAX_N@Z.c)
 *     ?FrameStarted@CTelemetryFrames@@SAX_K@Z @ 0x180010FB4 (-FrameStarted@CTelemetryFrames@@SAX_K@Z.c)
 * Callees:
 *     std::deque_std::unique_ptr__anonymous_namespace_::FramesReport_std::default_delete__anonymous_namespace_::FramesReport____std::allocator_std::unique_ptr__anonymous_namespace_::FramesReport_std::default_delete__anonymous_namespace_::FramesReport_______::push_back @ 0x180007B28 (std--deque_std--unique_ptr__anonymous_namespace_--FramesReport_std--default_delete__anonymous_na.c)
 *     ?EnumerateChangedProcessAttributions@CProcessAttributionManager@@AEAAXAEAVCProcessAttributionObserver@@PEAXP6AX1K_KW4ProcessAttributionFlags@@AEBUProcessAttributionResourceCounters@@@Z@Z @ 0x180007BD0 (-EnumerateChangedProcessAttributions@CProcessAttributionManager@@AEAAXAEAVCProcessAttributionObs.c)
 *     _anonymous_namespace_::FramesReport::OffsetInMillisecondsFromStartOfReport @ 0x1800082C4 (_anonymous_namespace_--FramesReport--OffsetInMillisecondsFromStartOfReport.c)
 *     std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Reserve @ 0x1800089A8 (std--vector__anonymous_namespace_--FrameSequenceInfo_std--allocator__anonymous_name_ea_1800089A8.c)
 *     std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Tidy @ 0x180008A5C (std--vector__anonymous_namespace_--FrameSequenceInfo_std--allocator__anonymous_name_ea_180008A5C.c)
 *     _anonymous_namespace_::FrameSequenceInfo::operator_ @ 0x180008AEC (_anonymous_namespace_--FrameSequenceInfo--operator_.c)
 *     _anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo_0 @ 0x18000940C (_anonymous_namespace_--FrameSequenceInfo--FrameSequenceInfo_0.c)
 *     ?erase@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@I@std@@@std@@@2@V32@0@Z @ 0x180009CC8 (-erase@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@std@@@std@@QEAA-AV-$_Tree_c.c)
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

void __fastcall anonymous_namespace_::SealCurrentFrameSequenceLocked(char a1)
{
  _QWORD *v2; // rbx
  unsigned __int64 v3; // r8
  __int64 v4; // rcx
  void *v5; // rdx
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  unsigned int v8; // eax
  HANDLE CurrentProcess; // rax
  _QWORD *v10; // rcx
  __int128 v11; // xmm1
  __int64 v12; // rax
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  _QWORD *v15; // rax
  _QWORD *v16; // rbx
  void *v17; // rcx
  void *v18; // rax
  _QWORD *v19; // rbx
  __int64 v20; // rdi
  void *v21; // rcx
  void *v22; // [rsp+28h] [rbp-E0h] BYREF
  _BYTE v23[408]; // [rsp+30h] [rbp-D8h] BYREF
  void *v24[2]; // [rsp+1C8h] [rbp+C0h] BYREF
  void *lpMem[4]; // [rsp+1D8h] [rbp+D0h] BYREF
  _BYTE ppsmemCounters[80]; // [rsp+1F8h] [rbp+F0h] BYREF
  void *retaddr; // [rsp+270h] [rbp+168h]

  if ( !dword_18026ED28 )
    return;
  memset_0(ppsmemCounters, 0, sizeof(ppsmemCounters));
  `anonymous namespace'::_etwEndFrameSnapshot = *(_OWORD *)ppsmemCounters;
  xmmword_18026EBE0 = *(_OWORD *)&ppsmemCounters[32];
  xmmword_18026EBD0 = *(_OWORD *)&ppsmemCounters[16];
  xmmword_18026EC00 = *(_OWORD *)&ppsmemCounters[64];
  xmmword_18026EBF0 = *(_OWORD *)&ppsmemCounters[48];
  CProcessAttributionManager::EnumerateChangedProcessAttributions(
    *(void ****)(*(_QWORD *)qword_180272758 + 8LL),
    *(struct CProcessAttributionObserver **)qword_180272758,
    0LL,
    (void (__high *)(void *, unsigned int, unsigned __int64, enum ProcessAttributionFlags, const struct ProcessAttributionResourceCounters *))lambda_bc2aba7ba829d575f491599aa9d39211_::_lambda_invoker_cdecl_);
  dword_18026ED40 = 1000 * ((unsigned __int64)(qword_18026EE60 - qword_18026EE58) / g_qpcFrequency.QuadPart)
                  + 1000
                  * ((unsigned __int64)(qword_18026EE60 - qword_18026EE58) % g_qpcFrequency.QuadPart)
                  / g_qpcFrequency.QuadPart;
  v2 = (_QWORD *)*((_QWORD *)qword_180272758 + 5);
  v3 = v2[1];
  if ( (unsigned __int64)&unk_18026ECA0 >= v3 || *v2 > (unsigned __int64)&unk_18026ECA0 )
  {
    if ( v3 == v2[2] )
      std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Reserve(*((_QWORD *)qword_180272758 + 5));
    v4 = v2[1];
    if ( !v4 )
      goto LABEL_8;
    v5 = &unk_18026ECA0;
  }
  else
  {
    v20 = ((__int64)&unk_18026ECA0 - *v2) / 456;
    if ( v3 == v2[2] )
      std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Reserve(*((_QWORD *)qword_180272758 + 5));
    v4 = v2[1];
    if ( !v4 )
      goto LABEL_8;
    v5 = (void *)(*v2 + 456 * v20);
  }
  anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo_0(v4, v5);
LABEL_8:
  v2[1] += 456LL;
  lpMem[2] = 0LL;
  lpMem[3] = 0LL;
  memset_0(v23, 0, sizeof(v23));
  v24[0] = 0LL;
  v24[1] = 0LL;
  v6 = HeapAlloc(WPF::g_processHeap, 0, 0x20uLL);
  if ( !v6 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  *v6 = v6;
  if ( v6 != (_QWORD *)-8LL )
    v6[1] = v6;
  if ( v6 != (_QWORD *)-16LL )
    v6[2] = v6;
  *((_WORD *)v6 + 12) = 257;
  v24[0] = v6;
  lpMem[0] = 0LL;
  lpMem[1] = 0LL;
  v7 = HeapAlloc(WPF::g_processHeap, 0, 0x20uLL);
  if ( !v7 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  *v7 = v7;
  if ( v7 != (_QWORD *)-8LL )
    v7[1] = v7;
  if ( v7 != (_QWORD *)-16LL )
    v7[2] = v7;
  *((_WORD *)v7 + 12) = 257;
  lpMem[0] = v7;
  anonymous_namespace_::FrameSequenceInfo::operator_(&unk_18026ECA0, v23);
  std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::erase(
    lpMem,
    &v22,
    *(_QWORD *)lpMem[0],
    lpMem[0]);
  WPF::ProcessHeapImpl::Free(lpMem[0]);
  std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::erase(
    v24,
    &v22,
    *(_QWORD *)v24[0],
    v24[0]);
  WPF::ProcessHeapImpl::Free(v24[0]);
  v8 = anonymous_namespace_::FramesReport::OffsetInMillisecondsFromStartOfReport(
         *((_QWORD **)qword_180272758 + 5),
         qword_18026EB80);
  if ( a1
    || v8 >= CCommonRegistryData::m_telemetryFramesReportPeriodMilliseconds
    || g_fTelemetry_FramesReportFast && v8 >= 0x3E8 )
  {
    *(_DWORD *)ppsmemCounters = 80;
    CurrentProcess = GetCurrentProcess();
    if ( K32GetProcessMemoryInfo(CurrentProcess, (PPROCESS_MEMORY_COUNTERS)ppsmemCounters, 0x50u) )
    {
      HIDWORD(qword_18026EB70) = *(_QWORD *)&ppsmemCounters[16] >> 10;
      LODWORD(qword_18026EB70) = *(_QWORD *)&ppsmemCounters[56] >> 10;
    }
    v10 = qword_180272758;
    v11 = xmmword_18026EB40;
    *(_OWORD *)(*((_QWORD *)qword_180272758 + 5) + 120LL) = xmmword_180272748;
    v12 = v10[5];
    *(_OWORD *)(v12 + 24) = xmmword_18026EB30;
    v13 = xmmword_18026EB50;
    *(_OWORD *)(v12 + 40) = v11;
    v14 = xmmword_18026EB60;
    *(_OWORD *)(v12 + 56) = v13;
    *(_QWORD *)&v13 = qword_18026EB70;
    *(_OWORD *)(v12 + 72) = v14;
    *(_QWORD *)(v12 + 88) = v13;
    v15 = operator new(0x88uLL);
    v16 = v15;
    if ( v15 )
    {
      memset_0(v15, 0, 0x88uLL);
      *v16 = 0LL;
      v16[1] = 0LL;
      v16[2] = 0LL;
      v16[12] = 0LL;
      v16[13] = 0LL;
      v16[14] = 0LL;
      v16[15] = 0LL;
      v16[16] = 0LL;
    }
    else
    {
      v16 = 0LL;
    }
    v17 = qword_180272758;
    v18 = (void *)*((_QWORD *)qword_180272758 + 5);
    *((_QWORD *)qword_180272758 + 5) = v16;
    v22 = v18;
    std::deque_std::unique_ptr__anonymous_namespace_::FramesReport_std::default_delete__anonymous_namespace_::FramesReport____std::allocator_std::unique_ptr__anonymous_namespace_::FramesReport_std::default_delete__anonymous_namespace_::FramesReport_______::push_back(
      (__int64)v17 + 48,
      (__int64 *)&v22);
    if ( !byte_18026EB88 )
    {
      byte_18026EB88 = 1;
      SubmitThreadpoolWork(*((PTP_WORK *)qword_180272758 + 1));
    }
    v19 = v22;
    if ( v22 )
    {
      v21 = (void *)*((_QWORD *)v22 + 12);
      if ( v21 )
      {
        WPF::ProcessHeapImpl::Free(v21);
        v19[12] = 0LL;
        v19[13] = 0LL;
        v19[14] = 0LL;
      }
      std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Tidy(v19);
      WPF::ProcessHeapImpl::Free(v19);
    }
  }
}
