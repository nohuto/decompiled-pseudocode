/*
 * XREFs of std::vector__anonymous_namespace_::FramesReport::ResourcesForPid_____ptr64_std::allocator__anonymous_namespace_::FramesReport::ResourcesForPid_____ptr64___::_Change_array @ 0x1800C33F0
 * Callers:
 *     std::vector__anonymous_namespace_::FramesReport::ResourcesForPid_____ptr64_std::allocator__anonymous_namespace_::FramesReport::ResourcesForPid_____ptr64___::emplace__anonymous_namespace_::FramesReport::ResourcesForPid_____ptr64_const_&___ptr64_ @ 0x1800C3458 (std--vector__anonymous_namespace_--FramesReport--ResourcesForPid_____ptr64_std--all_ea_1800C3458.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

__int64 __fastcall std::vector__anonymous_namespace_::FramesReport::ResourcesForPid_____ptr64_std::allocator__anonymous_namespace_::FramesReport::ResourcesForPid_____ptr64___::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char *v6; // rcx
  __int64 result; // rax

  v6 = *(char **)a1;
  if ( v6 )
    std::_Deallocate(v6, (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v6) >> 3, 8uLL);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 8 * a3;
  result = a2 + 8 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
