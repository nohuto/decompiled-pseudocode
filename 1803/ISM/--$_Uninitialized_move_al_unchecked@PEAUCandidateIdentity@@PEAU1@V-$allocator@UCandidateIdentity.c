/*
 * XREFs of ??$_Uninitialized_move_al_unchecked@PEAUCandidateIdentity@@PEAU1@V?$allocator@UCandidateIdentity@@@std@@@std@@YAPEAUCandidateIdentity@@PEAU1@00AEAV?$allocator@UCandidateIdentity@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x180069928
 * Callers:
 *     ??$emplace_back@AEAUCandidateIdentity@@@?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@QEAAAEAUCandidateIdentity@@AEAU2@@Z @ 0x180068D50 (--$emplace_back@AEAUCandidateIdentity@@@-$vector@UCandidateIdentity@@V-$allocator@UCandidateIden.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Uninitialized_move_al_unchecked<CandidateIdentity *,CandidateIdentity *,std::allocator<CandidateIdentity>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int64 *v4; // [rsp+50h] [rbp+18h]
  unsigned __int64 *v5; // [rsp+58h] [rbp+20h]

  v4 = (unsigned __int64 *)a3;
  v5 = (unsigned __int64 *)a3;
  try
  {
    for ( ; a1 != a2; a1 += 40LL )
    {
      *(_QWORD *)(a3 + 16) = 0LL;
      *(_QWORD *)(a3 + 24) = 0LL;
      *(_OWORD *)a3 = *(_OWORD *)a1;
      *(_OWORD *)(a3 + 16) = *(_OWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 16) = 0LL;
      *(_QWORD *)(a1 + 24) = 7LL;
      *(_WORD *)a1 = 0;
      *(_DWORD *)(a3 + 32) = *(_DWORD *)(a1 + 32);
      a3 += 40LL;
      v4 = (unsigned __int64 *)a3;
    }
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<CandidateIdentity>>(v5, v4);
    throw;
  }
  return a3;
}
