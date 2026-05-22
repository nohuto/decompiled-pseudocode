/*
 * XREFs of _std::vector_CandidateIdentity_std::allocator_CandidateIdentity___::emplace_back_CandidateIdentity_&___ptr64__::_1_::catch$72 @ 0x1800E710E
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Unfancy@V?$ComPtr@VWGIController@@@WRL@Microsoft@@@std@@YAPEAV?$ComPtr@VWGIController@@@WRL@Microsoft@@PEAV123@@Z @ 0x1800051B0 (--$_Unfancy@V-$ComPtr@VWGIController@@@WRL@Microsoft@@@std@@YAPEAV-$ComPtr@VWGIController@@@WRL@.c)
 *     ?deallocate@?$allocator@UCandidateIdentity@@@std@@QEAAXQEAUCandidateIdentity@@_K@Z @ 0x180069618 (-deallocate@-$allocator@UCandidateIdentity@@@std@@QEAAXQEAUCandidateIdentity@@_K@Z.c)
 *     ??$destroy@UCandidateIdentity@@@?$_Default_allocator_traits@V?$allocator@UCandidateIdentity@@@std@@@std@@SAXAEAV?$allocator@UCandidateIdentity@@@1@QEAUCandidateIdentity@@@Z @ 0x1800698EC (--$destroy@UCandidateIdentity@@@-$_Default_allocator_traits@V-$allocator@UCandidateIdentity@@@st.c)
 *     _CxxThrowException_0 @ 0x1800E22F0 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_CandidateIdentity_std::allocator_CandidateIdentity___::emplace_back_CandidateIdentity_____ptr64__::_1_::catch_72(
        __int64 a1,
        __int64 a2)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 *v4; // rax
  __int64 v5; // rcx

  v3 = *(_QWORD *)(a2 + 144);
  if ( *(_BYTE *)(a2 + 128) )
  {
    v4 = (unsigned __int64 *)std::_Unfancy<Microsoft::WRL::ComPtr<WGIController>>(v3 + 40LL * *(_QWORD *)(a2 + 48));
    std::_Default_allocator_traits<std::allocator<CandidateIdentity>>::destroy<CandidateIdentity>(v5, v4);
  }
  std::allocator<CandidateIdentity>::deallocate(a1, v3, *(_QWORD *)(a2 + 152));
  throw;
}
