/*
 * XREFs of std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_nohint_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__&___ptr64_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_____ptr64______ptr64_ @ 0x180146BD4
 * Callers:
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_hint_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__&___ptr64_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_____ptr64______ptr64_ @ 0x180146740 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0x155_ea_180146740.c)
 *     ?FrameDirtiedByKeyframeAnimation@CTelemetryFrames@@SAXIIPEBG@Z @ 0x180147484 (-FrameDirtiedByKeyframeAnimation@CTelemetryFrames@@SAXIIPEBG@Z.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_at_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__&___ptr64_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_____ptr64______ptr64_ @ 0x180146040 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0x155_ea_180146040.c)
 */

__int64 __fastcall std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_nohint_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int______ptr64_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_____ptr64______ptr64_(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        char *lpMem)
{
  char **v7; // rdx
  char v8; // r10
  char **v9; // r9
  char *v10; // rax
  char **v11; // rbx
  char v12; // r8
  char **v13; // rax
  char *v14; // rax
  char *i; // rax
  int v17; // [rsp+20h] [rbp-18h]
  char *v18; // [rsp+40h] [rbp+8h] BYREF

  v7 = *(char ***)(a1 + 8);
  v8 = 1;
  v9 = v7;
  v10 = v7[1];
  while ( !v10[25] )
  {
    v9 = (char **)v10;
    if ( *a4 >= *((_QWORD *)v10 + 4) )
    {
      v10 = (char *)*((_QWORD *)v10 + 2);
      v8 = 0;
    }
    else
    {
      v10 = *(char **)v10;
      v8 = 1;
    }
  }
  v11 = v9;
  if ( v8 )
  {
    if ( v9 == (char **)*v7 )
    {
      v12 = 1;
      goto LABEL_9;
    }
    if ( *((_BYTE *)v9 + 25) )
    {
      v11 = (char **)v9[2];
    }
    else
    {
      v14 = *v9;
      if ( (*v9)[25] )
      {
        for ( i = v9[1]; !i[25] && v11 == *(char ***)i; i = (char *)*((_QWORD *)i + 1) )
          v11 = (char **)i;
        if ( !*((_BYTE *)v11 + 25) )
          v11 = (char **)i;
      }
      else
      {
        do
        {
          v11 = (char **)v14;
          v14 = (char *)*((_QWORD *)v14 + 2);
        }
        while ( !v14[25] );
      }
    }
  }
  if ( (unsigned __int64)v11[4] >= *a4 )
  {
    std::_Deallocate(lpMem, 1uLL, 0x30uLL);
    *(_QWORD *)a2 = v11;
    *(_BYTE *)(a2 + 8) = 0;
    return a2;
  }
  v12 = v8;
LABEL_9:
  v13 = std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_at_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int______ptr64_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_____ptr64______ptr64_(
          a1,
          &v18,
          v12,
          v9,
          v17,
          lpMem);
  *(_BYTE *)(a2 + 8) = 1;
  *(_QWORD *)a2 = *v13;
  return a2;
}
