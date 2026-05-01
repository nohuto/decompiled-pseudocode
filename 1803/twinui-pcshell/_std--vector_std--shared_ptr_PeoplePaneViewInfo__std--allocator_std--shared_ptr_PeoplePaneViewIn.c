/*
 * XREFs of _std::vector_std::shared_ptr_PeoplePaneViewInfo__std::allocator_std::shared_ptr_PeoplePaneViewInfo_____::emplace_back_std::shared_ptr_PeoplePaneViewInfo__const_&___ptr64__::_1_::catch$58 @ 0x1801BFDCF
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180003904 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180092334 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _CxxThrowException_0 @ 0x1800991D2 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_std::shared_ptr_PeoplePaneViewInfo__std::allocator_std::shared_ptr_PeoplePaneViewInfo_____::emplace_back_std::shared_ptr_PeoplePaneViewInfo__const_____ptr64__::_1_::catch_58(
        __int64 a1,
        _QWORD *a2)
{
  char *v3; // rbx
  std::_Ref_count_base *v4; // rcx

  v3 = (char *)a2[16];
  v4 = *(std::_Ref_count_base **)&v3[16 * a2[14] + 8];
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  std::_Deallocate(v3, a2[17], 0x10uLL);
  throw;
}
