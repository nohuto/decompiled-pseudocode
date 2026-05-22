/*
 * XREFs of ??$destroy@VEdge@@@?$_Default_allocator_traits@V?$allocator@VEdge@@@std@@@std@@SAXAEAV?$allocator@VEdge@@@1@QEAVEdge@@@Z @ 0x180067EB4
 * Callers:
 *     _std::vector_Edge_std::allocator_Edge___::emplace_back_Edge_const_&___ptr64__::_1_::catch$74 @ 0x1800E71BC (_std--vector_Edge_std--allocator_Edge___--emplace_back_Edge_const_-___ptr64__--_1_--catch$74.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Default_allocator_traits<std::allocator<Edge>>::destroy<Edge>(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a2 + 40);
  if ( v2 )
  {
    *(_QWORD *)(a2 + 40) = 0LL;
    (**(void (__fastcall ***)(__int64))(v2 + 16))(v2 + 16);
  }
  return std::wstring::_Tidy_deallocate((unsigned __int64 *)(a2 + 8));
}
