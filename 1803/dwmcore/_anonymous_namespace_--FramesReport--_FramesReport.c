/*
 * XREFs of _anonymous_namespace_::FramesReport::_FramesReport @ 0x18002282C
 * Callers:
 *     _anonymous_namespace_::SealCurrentFrameSequenceLocked @ 0x180022D44 (_anonymous_namespace_--SealCurrentFrameSequenceLocked.c)
 *     _anonymous_namespace_::State::State @ 0x1800C7B2C (_anonymous_namespace_--State--State.c)
 *     _anonymous_namespace_::SendFramesReports @ 0x1800CFD60 (_anonymous_namespace_--SendFramesReports.c)
 *     _anonymous_namespace_::State::_State @ 0x180147334 (_anonymous_namespace_--State--_State.c)
 *     std::deque_std::unique_ptr__anonymous_namespace_::FramesReport_std::default_delete__anonymous_namespace_::FramesReport____std::allocator_std::unique_ptr__anonymous_namespace_::FramesReport_std::default_delete__anonymous_namespace_::FramesReport_______::_Tidy @ 0x180147788 (std--deque_std--unique_ptr__anonymous_namespace_--FramesReport_std--default_delete__ea_180147788.c)
 * Callees:
 *     _anonymous_namespace_::FrameSequenceInfo::_FrameSequenceInfo @ 0x180023938 (_anonymous_namespace_--FrameSequenceInfo--_FrameSequenceInfo.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64____0___::_Erase @ 0x1800C67B8 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_std--basic_string_unsigned_short.c)
 *     ?_Erase@?$_Tree@V?$_Tset_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@2@@Z @ 0x1800C67EC (-_Erase@-$_Tree@V-$_Tset_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-.c)
 */

void __fastcall anonymous_namespace_::FramesReport::_FramesReport(char **a1)
{
  _QWORD *v1; // rbx
  void *v3; // rcx
  char *v4; // rcx
  char *v5; // rcx
  char *v6; // rbx
  char *v7; // rsi

  v1 = a1 + 18;
  std::_Tree<std::_Tset_traits<std::wstring,std::less<std::wstring>,std::allocator<std::wstring>,0>>::_Erase(
    a1 + 18,
    *((_QWORD *)a1[18] + 1));
  *(_QWORD *)(*v1 + 8LL) = *v1;
  *(_QWORD *)*v1 = *v1;
  *(_QWORD *)(*v1 + 16LL) = *v1;
  v3 = (void *)*v1;
  v1[1] = 0LL;
  std::_Deallocate(v3, 1uLL, 0x40uLL);
  std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64____0___::_Erase(
    a1 + 15,
    *((_QWORD *)a1[16] + 1));
  *((_QWORD *)a1[16] + 1) = a1[16];
  *(_QWORD *)a1[16] = a1[16];
  *((_QWORD *)a1[16] + 2) = a1[16];
  v4 = a1[16];
  a1[17] = 0LL;
  std::_Deallocate(v4, 1uLL, 0x30uLL);
  v5 = a1[12];
  if ( v5 )
  {
    std::_Deallocate(v5, (a1[14] - v5) >> 3, 8uLL);
    a1[12] = 0LL;
    a1[13] = 0LL;
    a1[14] = 0LL;
  }
  v6 = *a1;
  if ( *a1 )
  {
    v7 = a1[1];
    if ( v6 != v7 )
    {
      do
      {
        anonymous_namespace_::FrameSequenceInfo::_FrameSequenceInfo(v6);
        v6 += 480;
      }
      while ( v6 != v7 );
      v6 = *a1;
    }
    std::_Deallocate(v6, (a1[2] - v6) / 480, 0x1E0uLL);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
}
