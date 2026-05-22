/*
 * XREFs of _std::_Uninitialized_move_al_unchecked_CandidateIdentity_____ptr64_CandidateIdentity_____ptr64_std::allocator_CandidateIdentity____::_1_::catch$19 @ 0x1800E720F
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UCandidateIdentity@@@std@@@std@@YAXPEAUCandidateIdentity@@0AEAV?$allocator@UCandidateIdentity@@@0@@Z @ 0x1800698F4 (--$_Destroy_range@V-$allocator@UCandidateIdentity@@@std@@@std@@YAXPEAUCandidateIdentity@@0AEAV-$.c)
 *     _CxxThrowException_0 @ 0x1800E22F0 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_Uninitialized_move_al_unchecked_CandidateIdentity_____ptr64_CandidateIdentity_____ptr64_std::allocator_CandidateIdentity____::_1_::catch_19(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<CandidateIdentity>>(
    *(unsigned __int64 **)(a2 + 88),
    *(unsigned __int64 **)(a2 + 80));
  throw;
}
