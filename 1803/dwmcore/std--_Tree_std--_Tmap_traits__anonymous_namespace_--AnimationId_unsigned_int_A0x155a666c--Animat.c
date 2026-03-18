/*
 * XREFs of std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::clear @ 0x180024034
 * Callers:
 *     _anonymous_namespace_::FrameSequenceInfo::operator_ @ 0x180023050 (_anonymous_namespace_--FrameSequenceInfo--operator_.c)
 *     _anonymous_namespace_::FrameSequenceInfo::_FrameSequenceInfo @ 0x180023938 (_anonymous_namespace_--FrameSequenceInfo--_FrameSequenceInfo.c)
 *     _anonymous_namespace_::SendFramesReport @ 0x1800D1C28 (_anonymous_namespace_--SendFramesReport.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Erase @ 0x180140AB0 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0x155_ea_180140AB0.c)
 */

__int64 __fastcall std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::clear(
        __int64 a1)
{
  __int64 v1; // rax
  _BYTE *v3; // rdi
  _BYTE *v4; // rsi
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 8);
  v3 = *(_BYTE **)(v1 + 8);
  v4 = v3;
  if ( !v3[25] )
  {
    do
    {
      std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Erase(
        a1,
        *((_QWORD *)v4 + 2));
      v4 = *(_BYTE **)v4;
      std::_Deallocate(v3, 1uLL, 0x30uLL);
      v3 = v4;
    }
    while ( !v4[25] );
    v1 = *(_QWORD *)(a1 + 8);
  }
  *(_QWORD *)(v1 + 8) = v1;
  **(_QWORD **)(a1 + 8) = *(_QWORD *)(a1 + 8);
  result = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(result + 16) = result;
  *(_QWORD *)(a1 + 16) = 0LL;
  return result;
}
