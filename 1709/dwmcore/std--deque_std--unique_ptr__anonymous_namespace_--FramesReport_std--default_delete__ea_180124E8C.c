/*
 * XREFs of std::deque_std::unique_ptr__anonymous_namespace_::FramesReport_std::default_delete__anonymous_namespace_::FramesReport____std::allocator_std::unique_ptr__anonymous_namespace_::FramesReport_std::default_delete__anonymous_namespace_::FramesReport_______::_Tidy @ 0x180124E8C
 * Callers:
 *     _anonymous_namespace_::State::_State @ 0x18012492C (_anonymous_namespace_--State--_State.c)
 * Callees:
 *     std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Tidy @ 0x180008A5C (std--vector__anonymous_namespace_--FrameSequenceInfo_std--allocator__anonymous_name_ea_180008A5C.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

void __fastcall std::deque_std::unique_ptr__anonymous_namespace_::FramesReport_std::default_delete__anonymous_namespace_::FramesReport____std::allocator_std::unique_ptr__anonymous_namespace_::FramesReport_std::default_delete__anonymous_namespace_::FramesReport_______::_Tidy(
        _QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  void *v4; // rcx
  __int64 v6; // rdi
  void *v7; // rcx
  void *v8; // rcx

  while ( 1 )
  {
    v2 = a1[4];
    if ( !v2 )
      break;
    v3 = *(_QWORD *)(*(_QWORD *)(a1[1] + 8 * ((a1[2] - 1LL) & ((unsigned __int64)(v2 - 1 + a1[3]) >> 1)))
                   + 8LL * (((_DWORD)v2 - 1 + *((_DWORD *)a1 + 6)) & 1));
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
    if ( a1[4]-- == 1LL )
      a1[3] = 0LL;
  }
  v6 = a1[2];
  while ( v6 )
  {
    --v6;
    v7 = *(void **)(a1[1] + 8 * v6);
    if ( v7 )
      WPF::ProcessHeapImpl::Free(v7);
  }
  v8 = (void *)a1[1];
  if ( v8 )
    WPF::ProcessHeapImpl::Free(v8);
  a1[2] = 0LL;
  a1[1] = 0LL;
}
