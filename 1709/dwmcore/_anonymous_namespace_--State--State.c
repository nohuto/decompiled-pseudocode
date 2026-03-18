/*
 * XREFs of _anonymous_namespace_::State::State @ 0x180124788
 * Callers:
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x180119664 (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 * Callees:
 *     std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Tidy @ 0x180008A5C (std--vector__anonymous_namespace_--FrameSequenceInfo_std--allocator__anonymous_name_ea_180008A5C.c)
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     ?CreateObserver@CProcessAttributionManager@@QEAAPEAVCProcessAttributionObserver@@XZ @ 0x180124100 (-CreateObserver@CProcessAttributionManager@@QEAAPEAVCProcessAttributionObserver@@XZ.c)
 *     _anonymous_namespace_::ScreenOnStudySessionStateTracker::Start @ 0x180124AF0 (_anonymous_namespace_--ScreenOnStudySessionStateTracker--Start.c)
 */

_QWORD *__fastcall anonymous_namespace_::State::State(_QWORD *a1)
{
  _QWORD *v1; // rbx
  char *v2; // r15
  _OWORD *v4; // rax
  void **v5; // rax
  void **v6; // rdi
  void **v7; // rbx
  __int64 v8; // rsi
  void *v9; // rcx
  void *v10; // rcx
  PTP_WORK ThreadpoolWork; // rax
  const void *retaddr; // [rsp+48h] [rbp+0h]
  char v14; // [rsp+50h] [rbp+8h] BYREF

  v1 = a1 + 6;
  *a1 = 0LL;
  v2 = (char *)(a1 + 5);
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  a1[4] = 0LL;
  a1[5] = 0LL;
  a1[6] = 0LL;
  a1[7] = 0LL;
  a1[8] = 0LL;
  a1[9] = 0LL;
  a1[10] = 0LL;
  v4 = operator new(0x10uLL);
  if ( !v4 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  *v1 = v4;
  *v4 = 0LL;
  *(_QWORD *)*v1 = v1;
  v5 = (void **)HeapAlloc(WPF::g_processHeap, 0, 0x88uLL);
  v6 = v5;
  if ( v5 )
  {
    memset_0(v5, 0, 0x88uLL);
    *v6 = 0LL;
    v6[1] = 0LL;
    v6[2] = 0LL;
    v6[12] = 0LL;
    v6[13] = 0LL;
    v6[14] = 0LL;
    v6[15] = 0LL;
    v6[16] = 0LL;
  }
  else
  {
    v6 = 0LL;
  }
  v7 = v6;
  if ( v2 != &v14 )
  {
    v8 = *(_QWORD *)v2;
    v7 = 0LL;
    if ( v6 == *(void ***)v2 )
      goto LABEL_17;
    if ( v8 )
    {
      v9 = *(void **)(v8 + 96);
      if ( v9 )
      {
        WPF::ProcessHeapImpl::Free(v9);
        *(_QWORD *)(v8 + 96) = 0LL;
        *(_QWORD *)(v8 + 104) = 0LL;
        *(_QWORD *)(v8 + 112) = 0LL;
      }
      std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Tidy((void **)v8);
      WPF::ProcessHeapImpl::Free((void *)v8);
    }
    *(_QWORD *)v2 = v6;
  }
  if ( v7 )
  {
    v10 = v7[12];
    if ( v10 )
    {
      WPF::ProcessHeapImpl::Free(v10);
      v7[12] = 0LL;
      v7[13] = 0LL;
      v7[14] = 0LL;
    }
    std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Tidy(v7);
    WPF::ProcessHeapImpl::Free(v7);
  }
LABEL_17:
  ThreadpoolWork = CreateThreadpoolWork((PTP_WORK_CALLBACK)anonymous_namespace_::SendFramesReports, 0LL, 0LL);
  a1[1] = ThreadpoolWork;
  if ( !ThreadpoolWork )
    RaiseFailFastException(0LL, 0LL, 0);
  *a1 = CProcessAttributionManager::CreateObserver(qword_180272960);
  anonymous_namespace_::ScreenOnStudySessionStateTracker::Start(a1 + 2);
  return a1;
}
