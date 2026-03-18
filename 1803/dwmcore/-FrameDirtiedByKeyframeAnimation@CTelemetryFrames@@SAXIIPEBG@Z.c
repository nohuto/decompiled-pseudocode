/*
 * XREFs of ?FrameDirtiedByKeyframeAnimation@CTelemetryFrames@@SAXIIPEBG@Z @ 0x180147484
 * Callers:
 *     ?LogKeyframeAnimationDirtiedTarget@CAnimationLoggingManager@@QEAAXPEAVCKeyframeAnimation@@@Z @ 0x180180EA8 (-LogKeyframeAnimationDirtiedTarget@CAnimationLoggingManager@@QEAAXPEAVCKeyframeAnimation@@@Z.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_nohint_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__&___ptr64_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_____ptr64______ptr64_ @ 0x180146BD4 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0x155_ea_180146BD4.c)
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64____0___::_Insert_nohint_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64__std::_Not_a_node_tag_ @ 0x180146DB4 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_std--basic_string_u_ea_180146DB4.c)
 *     ??$_Insert_nohint@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U_Not_a_node_tag@2@@?$_Tree@V?$_Tset_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@_N@1@_N$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@U_Not_a_node_tag@1@@Z @ 0x180146E94 (--$_Insert_nohint@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U_Not_a_node_tag.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x1801472AC (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     std::_Tree_comp_alloc_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Buynode0 @ 0x1801476A0 (std--_Tree_comp_alloc_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_ea_1801476A0.c)
 */

void __fastcall CTelemetryFrames::FrameDirtiedByKeyframeAnimation(
        unsigned int a1,
        unsigned int a2,
        unsigned __int16 *a3)
{
  __int64 v4; // r8
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r8
  int v12[2]; // [rsp+38h] [rbp-38h] BYREF
  void *lpMem[3]; // [rsp+48h] [rbp-28h] BYREF
  unsigned __int64 v14; // [rsp+60h] [rbp-10h]

  lpMem[0] = (void *)__PAIR64__(a2, a1);
  lpMem[1] = 0LL;
  std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64____0___::_Insert_nohint_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64__std::_Not_a_node_tag_(
    *((_QWORD *)qword_1802D6148 + 5) + 120LL,
    (__int64)v12,
    (__int64)a3,
    lpMem);
  v5 = *(_QWORD *)v12;
  if ( a3 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( a3[v6] );
    if ( v6 && !*(_QWORD *)(*(_QWORD *)v12 + 40LL) )
    {
      std::wstring::wstring((char *)lpMem, a3, v4);
      std::_Tree<std::_Tset_traits<std::wstring,std::less<std::wstring>,std::allocator<std::wstring>,0>>::_Insert_nohint<std::wstring,std::_Not_a_node_tag>(
        (unsigned __int64 **)(*((_QWORD *)qword_1802D6148 + 5) + 144LL),
        (__int64)v12,
        v7,
        (char *)lpMem);
      v8 = *(_QWORD *)v12 + 32LL;
      if ( v14 >= 8 )
        std::_Deallocate((char *)lpMem[0], v14 + 1, 2uLL);
      *(_QWORD *)(v5 + 40) = v8;
    }
  }
  v9 = *(_QWORD *)(v5 + 32);
  v10 = std::_Tree_comp_alloc_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Buynode0(&dword_1802D6398);
  *(_WORD *)(v10 + 24) = 0;
  *(_QWORD *)(v10 + 32) = v9;
  *(_DWORD *)(v10 + 40) = 0;
  std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_nohint_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int______ptr64_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_____ptr64______ptr64_(
    (__int64)&dword_1802D6398,
    (__int64)v12,
    v11,
    (_QWORD *)(v10 + 32),
    (char *)v10);
  ++*(_DWORD *)(*(_QWORD *)v12 + 40LL);
}
