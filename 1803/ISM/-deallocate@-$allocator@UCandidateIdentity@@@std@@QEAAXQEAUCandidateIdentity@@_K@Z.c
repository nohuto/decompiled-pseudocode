/*
 * XREFs of ?deallocate@?$allocator@UCandidateIdentity@@@std@@QEAAXQEAUCandidateIdentity@@_K@Z @ 0x180069618
 * Callers:
 *     _std::vector_CandidateIdentity_std::allocator_CandidateIdentity___::emplace_back_CandidateIdentity_&___ptr64__::_1_::catch$72 @ 0x1800E710E (_std--vector_CandidateIdentity_std--allocator_CandidateIdentity___--emplace_back_Ca_ea_1800E710E.c)
 *     _std::vector_TraceSessionProviderConfig_std::allocator_TraceSessionProviderConfig___::emplace_back_unsigned_short_const_(&___ptr64)[39]_int_int_int__::_1_::catch$118 @ 0x1800E739E (_std--vector_TraceSessionProviderConfig_std--allocator_TraceSessionProviderConfig___--emplace_ba.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<CandidateIdentity>::deallocate(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rax

  if ( a3 > 0x666666666666666LL )
    goto LABEL_8;
  if ( 40 * a3 >= 0x1000 )
  {
    if ( (a2 & 0x1F) == 0 )
    {
      v3 = *(_QWORD *)(a2 - 8);
      if ( v3 < a2 )
      {
        a2 = a2 - v3 - 8;
        if ( a2 <= 0x1F )
        {
          a2 = v3;
          goto LABEL_7;
        }
      }
    }
LABEL_8:
    _o__invalid_parameter_noinfo_noreturn(a1, a2);
    JUMPOUT(0x18006966BLL);
  }
LABEL_7:
  operator delete((void *)a2);
}
