/*
 * XREFs of std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_hint_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__&___ptr64_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_____ptr64______ptr64_ @ 0x180146740
 * Callers:
 *     std::map__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int_____::_Try_emplace__anonymous_namespace_::AnimationId_const_&___ptr64_ @ 0x1801471F4 (std--map__anonymous_namespace_--AnimationId_unsigned_int_A0x155a666c--AnimationId--_ea_1801471F4.c)
 * Callees:
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_at_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__&___ptr64_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_____ptr64______ptr64_ @ 0x180146040 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0x155_ea_180146040.c)
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_nohint_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__&___ptr64_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_____ptr64______ptr64_ @ 0x180146BD4 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0x155_ea_180146BD4.c)
 *     std::_Tree_unchecked_const_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64______std::_Iterator_base0_::operator__ @ 0x1801473EC (std--_Tree_unchecked_const_iterator_std--_Tree_val_std--_Tree_simple_types_std--pair__anonymous_.c)
 */

char **__fastcall std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_hint_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int______ptr64_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_____ptr64______ptr64_(
        __int64 a1,
        char **a2,
        _QWORD *a3,
        unsigned __int64 *a4,
        char *a5)
{
  _QWORD *v6; // r10
  _QWORD *v7; // rdi
  char **v8; // rbx
  __int64 v9; // r11
  _QWORD *v10; // r9
  char v11; // r8
  unsigned __int64 v12; // rsi
  _QWORD *v13; // rax
  __int64 i; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rdx
  _QWORD *v17; // r10
  int v19; // [rsp+20h] [rbp-28h]
  char *lpMem; // [rsp+28h] [rbp-20h]
  int v21; // [rsp+30h] [rbp-18h] BYREF
  _QWORD *v22; // [rsp+50h] [rbp+8h] BYREF

  v22 = 0LL;
  v6 = a3;
  v7 = *(_QWORD **)(a1 + 8);
  v8 = a2;
  v9 = a1;
  if ( *(_QWORD *)(a1 + 16) )
  {
    if ( a3 == (_QWORD *)*v7 )
    {
      if ( *a4 < a3[4] )
      {
        lpMem = a5;
LABEL_8:
        v10 = v6;
        goto LABEL_3;
      }
LABEL_35:
      *v8 = *(char **)std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_nohint_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int______ptr64_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_____ptr64______ptr64_(
                        v9,
                        (int)&v21,
                        (int)a3,
                        (int)a4,
                        a5);
      return v8;
    }
    if ( a3 == v7 )
    {
      v10 = (_QWORD *)v7[2];
      if ( v10[4] >= *a4 )
        goto LABEL_35;
      lpMem = a5;
    }
    else
    {
      v12 = *a4;
      if ( *a4 >= a3[4] )
        goto LABEL_32;
      v13 = a3;
      v22 = a3;
      if ( *((_BYTE *)a3 + 25) )
      {
        v10 = (_QWORD *)a3[2];
      }
      else
      {
        v10 = (_QWORD *)*a3;
        if ( *(_BYTE *)(*a3 + 25LL) )
        {
          v15 = a3[1];
          if ( !*(_BYTE *)(v15 + 25) )
          {
            v16 = a3;
            do
            {
              LODWORD(a3) = v15;
              if ( v16 != *(_QWORD **)v15 )
                break;
              v13 = (_QWORD *)v15;
              v22 = (_QWORD *)v15;
              v15 = *(_QWORD *)(v15 + 8);
              v16 = v13;
            }
            while ( !*(_BYTE *)(v15 + 25) );
          }
          v10 = v13;
          if ( !*((_BYTE *)v13 + 25) )
            v10 = (_QWORD *)v15;
        }
        else
        {
          for ( i = v10[2]; !*(_BYTE *)(i + 25); i = *(_QWORD *)(i + 16) )
            v10 = (_QWORD *)i;
        }
      }
      v22 = v10;
      if ( v10[4] >= v12 )
      {
LABEL_32:
        if ( v6[4] >= v12 )
          goto LABEL_35;
        v22 = v6;
        std::_Tree_unchecked_const_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64______std::_Iterator_base0_::operator__(&v22);
        v10 = v22;
        if ( v22 != v7 && v12 >= v22[4] )
          goto LABEL_35;
        a2 = v8;
        a1 = v9;
        lpMem = a5;
        if ( !*(_BYTE *)(v17[2] + 25LL) )
          goto LABEL_3;
        v10 = v17;
      }
      else
      {
        a2 = v8;
        a1 = v9;
        lpMem = a5;
        if ( !*(_BYTE *)(v10[2] + 25LL) )
          goto LABEL_8;
      }
    }
    v11 = 0;
    goto LABEL_4;
  }
  v10 = *(_QWORD **)(a1 + 8);
  lpMem = a5;
LABEL_3:
  v11 = 1;
LABEL_4:
  std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_at_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int______ptr64_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_____ptr64______ptr64_(
    a1,
    a2,
    v11,
    (char **)v10,
    v19,
    lpMem);
  return v8;
}
