/*
 * XREFs of ??$_Destroy_range@V?$allocator@VEdge@@@std@@@std@@YAXPEAVEdge@@0AEAV?$allocator@VEdge@@@0@@Z @ 0x180067E60
 * Callers:
 *     _std::_Uninitialized_move_al_unchecked_Edge_____ptr64_Edge_____ptr64_std::allocator_Edge____::_1_::catch$19 @ 0x1800E7233 (_std--_Uninitialized_move_al_unchecked_Edge_____ptr64_Edge_____ptr64_std--allocator_Edge____--_1.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800668E8 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall std::_Destroy_range<std::allocator<Edge>>(__int64 *a1, __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rcx
  __int64 *result; // rax

  if ( a1 != a2 )
  {
    v3 = a1 + 5;
    do
    {
      v4 = *v3;
      if ( *v3 )
      {
        *v3 = 0LL;
        (**(void (__fastcall ***)(__int64))(v4 + 16))(v4 + 16);
      }
      std::wstring::_Tidy_deallocate((unsigned __int64 *)v3 - 4);
      v3 += 12;
      result = v3 - 5;
    }
    while ( v3 - 5 != a2 );
  }
  return result;
}
