/*
 * XREFs of _anonymous_namespace_::State::_State @ 0x18012492C
 * Callers:
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x180119664 (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 * Callees:
 *     std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Tidy @ 0x180008A5C (std--vector__anonymous_namespace_--FrameSequenceInfo_std--allocator__anonymous_name_ea_180008A5C.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     std::deque_std::unique_ptr__anonymous_namespace_::FramesReport_std::default_delete__anonymous_namespace_::FramesReport____std::allocator_std::unique_ptr__anonymous_namespace_::FramesReport_std::default_delete__anonymous_namespace_::FramesReport_______::_Tidy @ 0x180124E8C (std--deque_std--unique_ptr__anonymous_namespace_--FramesReport_std--default_delete__ea_180124E8C.c)
 */

void __fastcall anonymous_namespace_::State::_State(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rbx
  void *v4; // rcx
  const void *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    if ( *(_QWORD *)(a1 + 32) )
    {
      v2 = RtlUnsubscribeWnfStateChangeNotification() | 0x10000000;
      if ( v2 < 0 )
        ModuleFailFastForHRESULT(v2, retaddr);
      *(_QWORD *)(a1 + 32) = 0LL;
    }
  }
  WaitForThreadpoolWorkCallbacks(*(PTP_WORK *)(a1 + 8), 0);
  CloseThreadpoolWork(*(PTP_WORK *)(a1 + 8));
  if ( *(_QWORD *)a1 )
    (***(void (__fastcall ****)(_QWORD, __int64))a1)(*(_QWORD *)a1, 1LL);
  std::deque_std::unique_ptr__anonymous_namespace_::FramesReport_std::default_delete__anonymous_namespace_::FramesReport____std::allocator_std::unique_ptr__anonymous_namespace_::FramesReport_std::default_delete__anonymous_namespace_::FramesReport_______::_Tidy(a1 + 48);
  WPF::ProcessHeapImpl::Free(*(void **)(a1 + 48));
  *(_QWORD *)(a1 + 48) = 0LL;
  v3 = *(_QWORD *)(a1 + 40);
  if ( v3 )
  {
    v4 = *(void **)(v3 + 96);
    if ( v4 )
    {
      WPF::ProcessHeapImpl::Free(v4);
      *(_QWORD *)(v3 + 96) = 0LL;
      *(_QWORD *)(v3 + 104) = 0LL;
      *(_QWORD *)(v3 + 112) = 0LL;
    }
    std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Tidy((void **)v3);
    WPF::ProcessHeapImpl::Free((void *)v3);
  }
}
