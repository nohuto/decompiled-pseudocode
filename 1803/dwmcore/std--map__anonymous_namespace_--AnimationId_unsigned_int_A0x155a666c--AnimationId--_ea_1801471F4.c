/*
 * XREFs of std::map__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int_____::_Try_emplace__anonymous_namespace_::AnimationId_const_&___ptr64_ @ 0x1801471F4
 * Callers:
 *     _anonymous_namespace_::SendFramesReport @ 0x1800D1C28 (_anonymous_namespace_--SendFramesReport.c)
 *     _anonymous_namespace_::SequenceEncoder::Serialize @ 0x1800D28B0 (_anonymous_namespace_--SequenceEncoder--Serialize.c)
 * Callees:
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_hint_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__&___ptr64_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_____ptr64______ptr64_ @ 0x180146740 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0x155_ea_180146740.c)
 *     std::_Tree_comp_alloc_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Buynode0 @ 0x1801476A0 (std--_Tree_comp_alloc_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_ea_1801476A0.c)
 */

__int64 __fastcall std::map__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int_____::_Try_emplace__anonymous_namespace_::AnimationId_const_____ptr64_(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3)
{
  _QWORD *v5; // rdx
  _QWORD *v7; // rbx
  __int64 *v8; // rax
  unsigned __int64 v9; // rcx
  _QWORD *v10; // r8
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  char *v14; // [rsp+40h] [rbp+8h] BYREF

  v5 = *(_QWORD **)(a1 + 8);
  v7 = v5;
  v8 = (__int64 *)v5[1];
  while ( !*((_BYTE *)v8 + 25) )
  {
    v9 = v8[4];
    v10 = v8;
    if ( v9 >= *a3 )
      v8 = (__int64 *)*v8;
    else
      v8 = (__int64 *)v8[2];
    if ( v9 >= *a3 )
      v7 = v10;
  }
  if ( v7 == v5 || *a3 < v7[4] )
  {
    v11 = std::_Tree_comp_alloc_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Buynode0(a1);
    *(_WORD *)(v11 + 24) = 0;
    v12 = *a3;
    *(_DWORD *)(v11 + 40) = 0;
    *(_QWORD *)(v11 + 32) = v12;
    std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_hint_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int______ptr64_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_____ptr64______ptr64_(
      a1,
      &v14,
      v7,
      (unsigned __int64 *)(v11 + 32),
      (char *)v11);
    *(_QWORD *)a2 = v14;
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v7;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
