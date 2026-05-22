/*
 * XREFs of ??$destroy@UCandidateIdentity@@@?$_Default_allocator_traits@V?$allocator@UCandidateIdentity@@@std@@@std@@SAXAEAV?$allocator@UCandidateIdentity@@@1@QEAUCandidateIdentity@@@Z @ 0x1800698EC
 * Callers:
 *     _std::vector_CandidateIdentity_std::allocator_CandidateIdentity___::emplace_back_CandidateIdentity_&___ptr64__::_1_::catch$72 @ 0x1800E710E (_std--vector_CandidateIdentity_std--allocator_CandidateIdentity___--emplace_back_Ca_ea_1800E710E.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Default_allocator_traits<std::allocator<CandidateIdentity>>::destroy<CandidateIdentity>(
        __int64 a1,
        unsigned __int64 *a2)
{
  return std::wstring::_Tidy_deallocate(a2);
}
