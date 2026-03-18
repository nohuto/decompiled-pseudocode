/*
 * XREFs of std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_at_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__&___ptr64_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_____ptr64______ptr64_ @ 0x180146040
 * Callers:
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_hint_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__&___ptr64_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_____ptr64______ptr64_ @ 0x180146740 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0x155_ea_180146740.c)
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_nohint_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__&___ptr64_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_____ptr64______ptr64_ @ 0x180146BD4 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0x155_ea_180146BD4.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64____0___::_Lrotate @ 0x1801476D4 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_std--basic_string_u_ea_1801476D4.c)
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64____0___::_Rrotate @ 0x18014773C (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_std--basic_string_u_ea_18014773C.c)
 */

char **__fastcall std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_at_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int______ptr64_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_____ptr64______ptr64_(
        __int64 a1,
        char **a2,
        char a3,
        char **a4,
        int a5,
        char *lpMem)
{
  unsigned __int64 v6; // rax
  __int64 v7; // r11
  char *v9; // r10
  char **v10; // rax
  __int64 v11; // rax
  char **v12; // rax
  __int64 v13; // rax
  char *v14; // r9
  __int64 v15; // rdx
  char *v16; // rsi
  char *v17; // rbp
  __int64 *v18; // rcx
  __int64 v19; // rax
  char *v20; // rbx
  char *v21; // r9
  char *v22; // rbx
  char *v23; // r9
  __int64 v24; // rcx
  char **result; // rax
  const void *retaddr; // [rsp+28h] [rbp+0h]

  v6 = *(_QWORD *)(a1 + 16);
  v7 = a1;
  if ( v6 >= 0x555555555555554LL )
  {
    std::_Deallocate(lpMem, 1uLL, 0x30uLL);
    ModuleFailFastForHRESULT(-2147483637, retaddr);
  }
  v9 = lpMem;
  *(_QWORD *)(a1 + 16) = v6 + 1;
  *((_QWORD *)lpMem + 1) = a4;
  v10 = *(char ***)(a1 + 8);
  if ( a4 == v10 )
  {
    v10[1] = lpMem;
    **(_QWORD **)(a1 + 8) = lpMem;
    v11 = *(_QWORD *)(a1 + 8);
LABEL_9:
    *(_QWORD *)(v11 + 16) = lpMem;
    goto LABEL_10;
  }
  if ( a3 )
  {
    *a4 = lpMem;
    v12 = *(char ***)(a1 + 8);
    if ( a4 == (char **)*v12 )
      *v12 = lpMem;
    goto LABEL_10;
  }
  a4[2] = lpMem;
  v11 = *(_QWORD *)(a1 + 8);
  if ( a4 == *(char ***)(v11 + 16) )
    goto LABEL_9;
LABEL_10:
  v13 = *((_QWORD *)lpMem + 1);
  v14 = lpMem;
  while ( !*(_BYTE *)(v13 + 24) )
  {
    v15 = *((_QWORD *)v14 + 1);
    v16 = v14;
    v17 = v14;
    v18 = *(__int64 **)(v15 + 8);
    v19 = *v18;
    if ( v15 == *v18 )
    {
      v19 = v18[2];
      if ( !*(_BYTE *)(v19 + 24) )
        goto LABEL_19;
      v20 = *(char **)(v15 + 16);
      if ( v14 == v20 )
        std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64____0___::_Lrotate(
          v7,
          v15);
      v21 = (char *)v15;
      if ( v17 != v20 )
        v21 = v16;
      *(_BYTE *)(*((_QWORD *)v21 + 1) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v21 + 1) + 8LL) + 24LL) = 0;
      std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64____0___::_Rrotate(v7);
    }
    else
    {
      if ( !*(_BYTE *)(v19 + 24) )
      {
LABEL_19:
        *(_BYTE *)(v15 + 24) = 1;
        *(_BYTE *)(v19 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v14 + 1) + 8LL) + 24LL) = 0;
        v14 = *(char **)(*((_QWORD *)v14 + 1) + 8LL);
        goto LABEL_25;
      }
      v22 = *(char **)v15;
      if ( v14 == *(char **)v15 )
        std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64____0___::_Rrotate(v7);
      v23 = (char *)v15;
      if ( v16 != v22 )
        v23 = v16;
      *(_BYTE *)(*((_QWORD *)v23 + 1) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v23 + 1) + 8LL) + 24LL) = 0;
      std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64____0___::_Lrotate(
        v7,
        *(_QWORD *)(*((_QWORD *)v23 + 1) + 8LL));
    }
LABEL_25:
    v13 = *((_QWORD *)v14 + 1);
  }
  v24 = *(_QWORD *)(*(_QWORD *)(v7 + 8) + 8LL);
  result = a2;
  *a2 = v9;
  *(_BYTE *)(v24 + 24) = 1;
  return result;
}
