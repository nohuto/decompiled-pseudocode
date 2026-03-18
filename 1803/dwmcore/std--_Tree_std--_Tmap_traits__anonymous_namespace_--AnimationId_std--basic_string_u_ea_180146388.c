/*
 * XREFs of std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64____0___::_Insert_at_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64__std::_Not_a_node_tag_ @ 0x180146388
 * Callers:
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64____0___::_Insert_nohint_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64__std::_Not_a_node_tag_ @ 0x180146DB4 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_std--basic_string_u_ea_180146DB4.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64____0___::_Lrotate @ 0x1801476D4 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_std--basic_string_u_ea_1801476D4.c)
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64____0___::_Rrotate @ 0x18014773C (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_std--basic_string_u_ea_18014773C.c)
 */

unsigned __int64 *__fastcall std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64____0___::_Insert_at_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64__std::_Not_a_node_tag_(
        __int64 a1,
        unsigned __int64 *a2,
        char a3,
        unsigned __int64 *a4,
        _OWORD *a5)
{
  unsigned __int64 v9; // r10
  unsigned __int64 *v10; // rax
  __int64 v11; // rax
  unsigned __int64 *v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // r9
  __int64 *v15; // rdx
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rsi
  __int64 *v18; // rcx
  __int64 *v19; // rax
  __int64 v20; // r11
  __int64 *v21; // r9
  __int64 v22; // r11
  __int64 *v23; // r9
  __int64 v24; // rcx
  unsigned __int64 *result; // rax
  const void *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_QWORD *)(a1 + 16) >= 0x555555555555554uLL )
    ModuleFailFastForHRESULT(-2147483637, retaddr);
  v9 = std::_Allocate<std::_Default_allocate_traits<1>>(1uLL, 0x30uLL);
  *(_QWORD *)v9 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(v9 + 8) = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(v9 + 16) = *(_QWORD *)(a1 + 8);
  *(_WORD *)(v9 + 24) = 0;
  *(_OWORD *)(v9 + 32) = *a5;
  ++*(_QWORD *)(a1 + 16);
  *(_QWORD *)(v9 + 8) = a4;
  v10 = *(unsigned __int64 **)(a1 + 8);
  if ( a4 == v10 )
  {
    v10[1] = v9;
    **(_QWORD **)(a1 + 8) = v9;
    v11 = *(_QWORD *)(a1 + 8);
LABEL_9:
    *(_QWORD *)(v11 + 16) = v9;
    goto LABEL_10;
  }
  if ( a3 )
  {
    *a4 = v9;
    v12 = *(unsigned __int64 **)(a1 + 8);
    if ( a4 == (unsigned __int64 *)*v12 )
      *v12 = v9;
    goto LABEL_10;
  }
  a4[2] = v9;
  v11 = *(_QWORD *)(a1 + 8);
  if ( a4 == *(unsigned __int64 **)(v11 + 16) )
    goto LABEL_9;
LABEL_10:
  v13 = *(_QWORD *)(v9 + 8);
  v14 = v9;
  while ( !*(_BYTE *)(v13 + 24) )
  {
    v15 = *(__int64 **)(v14 + 8);
    v16 = v14;
    v17 = v14;
    v18 = (__int64 *)v15[1];
    v19 = (__int64 *)*v18;
    if ( v15 == (__int64 *)*v18 )
    {
      v19 = (__int64 *)v18[2];
      if ( !*((_BYTE *)v19 + 24) )
        goto LABEL_19;
      v20 = v15[2];
      if ( v14 == v20 )
        std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64____0___::_Lrotate(
          a1,
          v15);
      v21 = v15;
      if ( v17 != v20 )
        v21 = (__int64 *)v16;
      *(_BYTE *)(v21[1] + 24) = 1;
      *(_BYTE *)(*(_QWORD *)(v21[1] + 8) + 24LL) = 0;
      std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64____0___::_Rrotate(a1);
    }
    else
    {
      if ( !*((_BYTE *)v19 + 24) )
      {
LABEL_19:
        *((_BYTE *)v15 + 24) = 1;
        *((_BYTE *)v19 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v14 + 8) + 8LL) + 24LL) = 0;
        v14 = *(_QWORD *)(*(_QWORD *)(v14 + 8) + 8LL);
        goto LABEL_25;
      }
      v22 = *v15;
      if ( v14 == *v15 )
        std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64____0___::_Rrotate(a1);
      v23 = v15;
      if ( v16 != v22 )
        v23 = (__int64 *)v16;
      *(_BYTE *)(v23[1] + 24) = 1;
      *(_BYTE *)(*(_QWORD *)(v23[1] + 8) + 24LL) = 0;
      std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64____0___::_Lrotate(
        a1,
        *(_QWORD *)(v23[1] + 8));
    }
LABEL_25:
    v13 = *(_QWORD *)(v14 + 8);
  }
  v24 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
  result = a2;
  *a2 = v9;
  *(_BYTE *)(v24 + 24) = 1;
  return result;
}
