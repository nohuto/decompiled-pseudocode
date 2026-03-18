/*
 * XREFs of std::deque_std::unique_ptr__anonymous_namespace_::FramesReport_std::default_delete__anonymous_namespace_::FramesReport____std::allocator_std::unique_ptr__anonymous_namespace_::FramesReport_std::default_delete__anonymous_namespace_::FramesReport_______::push_back @ 0x180007B28
 * Callers:
 *     _anonymous_namespace_::SealCurrentFrameSequenceLocked @ 0x180008454 (_anonymous_namespace_--SealCurrentFrameSequenceLocked.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     std::deque_std::unique_ptr__anonymous_namespace_::FramesReport_std::default_delete__anonymous_namespace_::FramesReport____std::allocator_std::unique_ptr__anonymous_namespace_::FramesReport_std::default_delete__anonymous_namespace_::FramesReport_______::_Growmap @ 0x180124CDC (std--deque_std--unique_ptr__anonymous_namespace_--FramesReport_std--default_delete__ea_180124CDC.c)
 */

__int64 __fastcall std::deque_std::unique_ptr__anonymous_namespace_::FramesReport_std::default_delete__anonymous_namespace_::FramesReport____std::allocator_std::unique_ptr__anonymous_namespace_::FramesReport_std::default_delete__anonymous_namespace_::FramesReport_______::push_back(
        __int64 a1,
        __int64 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  unsigned __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 result; // rax
  _QWORD *v9; // rcx
  void *v10; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *(_QWORD *)(a1 + 32);
  if ( ((*(_BYTE *)(a1 + 24) + (_BYTE)v4) & 1) == 0 && *(_QWORD *)(a1 + 16) <= (unsigned __int64)(v4 + 2) >> 1 )
    std::deque_std::unique_ptr__anonymous_namespace_::FramesReport_std::default_delete__anonymous_namespace_::FramesReport____std::allocator_std::unique_ptr__anonymous_namespace_::FramesReport_std::default_delete__anonymous_namespace_::FramesReport_______::_Growmap(a1);
  v5 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 24) &= 2 * v5 - 1;
  v6 = *(_QWORD *)(a1 + 32) + *(_QWORD *)(a1 + 24);
  v7 = (v6 >> 1) & (v5 - 1);
  if ( !*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v7) )
  {
    v10 = operator new(0x10uLL);
    if ( !v10 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v7) = v10;
  }
  result = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v7);
  v9 = (_QWORD *)(result + 8 * (v6 & 1));
  if ( v9 )
  {
    result = *a2;
    *a2 = 0LL;
    *v9 = result;
  }
  ++*(_QWORD *)(a1 + 32);
  return result;
}
