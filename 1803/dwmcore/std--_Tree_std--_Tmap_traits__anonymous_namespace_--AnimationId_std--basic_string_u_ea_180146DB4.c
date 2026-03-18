/*
 * XREFs of std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64____0___::_Insert_nohint_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64__std::_Not_a_node_tag_ @ 0x180146DB4
 * Callers:
 *     ?FrameDirtiedByKeyframeAnimation@CTelemetryFrames@@SAXIIPEBG@Z @ 0x180147484 (-FrameDirtiedByKeyframeAnimation@CTelemetryFrames@@SAXIIPEBG@Z.c)
 * Callees:
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64____0___::_Insert_at_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64__std::_Not_a_node_tag_ @ 0x180146388 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_std--basic_string_u_ea_180146388.c)
 */

__int64 __fastcall std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64____0___::_Insert_nohint_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64__std::_Not_a_node_tag_(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _OWORD *a4)
{
  unsigned __int64 *v6; // rdx
  __int64 v7; // rdi
  unsigned __int64 *v8; // r9
  char v9; // r10
  unsigned __int64 v10; // rax
  unsigned __int64 *v11; // rax
  char v12; // r8
  unsigned __int64 *v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 i; // rcx
  unsigned __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  v6 = *(unsigned __int64 **)(a1 + 8);
  v7 = a1;
  v8 = v6;
  v9 = 1;
  v10 = v6[1];
  while ( !*(_BYTE *)(v10 + 25) )
  {
    v8 = (unsigned __int64 *)v10;
    if ( *(_QWORD *)a4 >= *(_QWORD *)(v10 + 32) )
    {
      v10 = *(_QWORD *)(v10 + 16);
      v9 = 0;
    }
    else
    {
      v10 = *(_QWORD *)v10;
      v9 = 1;
    }
  }
  v11 = v8;
  if ( v9 )
  {
    if ( v8 == (unsigned __int64 *)*v6 )
    {
      v12 = 1;
      goto LABEL_9;
    }
    if ( *((_BYTE *)v8 + 25) )
    {
      v11 = (unsigned __int64 *)v8[2];
    }
    else
    {
      v14 = *v8;
      if ( *(_BYTE *)(*v8 + 25) )
      {
        for ( i = v8[1]; !*(_BYTE *)(i + 25) && v11 == *(unsigned __int64 **)i; i = *(_QWORD *)(i + 8) )
          v11 = (unsigned __int64 *)i;
        if ( !*((_BYTE *)v11 + 25) )
          v11 = (unsigned __int64 *)i;
      }
      else
      {
        do
        {
          v11 = (unsigned __int64 *)v14;
          v14 = *(_QWORD *)(v14 + 16);
        }
        while ( !*(_BYTE *)(v14 + 25) );
      }
    }
  }
  if ( v11[4] >= *(_QWORD *)a4 )
  {
    *(_QWORD *)a2 = v11;
    *(_BYTE *)(a2 + 8) = 0;
    return a2;
  }
  v12 = v9;
  a1 = v7;
LABEL_9:
  v13 = std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64____0___::_Insert_at_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64__std::_Not_a_node_tag_(
          a1,
          &v17,
          v12,
          v8,
          a4);
  *(_BYTE *)(a2 + 8) = 1;
  *(_QWORD *)a2 = *v13;
  return a2;
}
