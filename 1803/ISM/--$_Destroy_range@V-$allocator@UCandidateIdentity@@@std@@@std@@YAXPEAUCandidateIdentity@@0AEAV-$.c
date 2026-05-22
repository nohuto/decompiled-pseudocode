/*
 * XREFs of ??$_Destroy_range@V?$allocator@UCandidateIdentity@@@std@@@std@@YAXPEAUCandidateIdentity@@0AEAV?$allocator@UCandidateIdentity@@@0@@Z @ 0x1800698F4
 * Callers:
 *     _std::_Uninitialized_move_al_unchecked_CandidateIdentity_____ptr64_CandidateIdentity_____ptr64_std::allocator_CandidateIdentity____::_1_::catch$19 @ 0x1800E720F (_std--_Uninitialized_move_al_unchecked_CandidateIdentity_____ptr64_CandidateIdentity_____ptr64_s.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800668E8 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<CandidateIdentity>>(unsigned __int64 *a1, unsigned __int64 *a2)
{
  unsigned __int64 *v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = std::wstring::_Tidy_deallocate(v3);
      v3 += 5;
    }
    while ( v3 != a2 );
  }
  return result;
}
