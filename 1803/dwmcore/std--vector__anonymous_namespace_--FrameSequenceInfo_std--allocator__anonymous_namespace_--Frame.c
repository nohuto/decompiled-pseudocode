/*
 * XREFs of std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Change_array @ 0x180022B60
 * Callers:
 *     std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::emplace_back__anonymous_namespace_::FrameSequenceInfo_const_&___ptr64_ @ 0x180022C18 (std--vector__anonymous_namespace_--FrameSequenceInfo_std--allocator__anonymous_name_ea_180022C18.c)
 * Callees:
 *     _anonymous_namespace_::FrameSequenceInfo::_FrameSequenceInfo @ 0x180023938 (_anonymous_namespace_--FrameSequenceInfo--_FrameSequenceInfo.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

char *__fastcall std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Change_array(
        char **a1,
        char *a2,
        __int64 a3,
        __int64 a4)
{
  char *v4; // rbx
  char *v9; // rbp
  char *result; // rax

  v4 = *a1;
  if ( *a1 )
  {
    v9 = a1[1];
    if ( v4 != v9 )
    {
      do
      {
        anonymous_namespace_::FrameSequenceInfo::_FrameSequenceInfo(v4);
        v4 += 480;
      }
      while ( v4 != v9 );
      v4 = *a1;
    }
    std::_Deallocate(v4, (a1[2] - v4) / 480, 0x1E0uLL);
  }
  *a1 = a2;
  a1[1] = &a2[480 * a3];
  result = &a2[480 * a4];
  a1[2] = result;
  return result;
}
