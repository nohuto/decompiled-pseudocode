/*
 * XREFs of _std::vector_TraceSessionProviderConfig_std::allocator_TraceSessionProviderConfig___::emplace_back_unsigned_short_const_(&___ptr64)[39]_int_int_int__::_1_::catch$118 @ 0x1800E739E
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@UCandidateIdentity@@@std@@QEAAXQEAUCandidateIdentity@@_K@Z @ 0x180069618 (-deallocate@-$allocator@UCandidateIdentity@@@std@@QEAAXQEAUCandidateIdentity@@_K@Z.c)
 *     _CxxThrowException_0 @ 0x1800E22F0 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_TraceSessionProviderConfig_std::allocator_TraceSessionProviderConfig___::emplace_back_unsigned_short_const______ptr64__39__int_int_int__::_1_::catch_118(
        __int64 a1,
        __int64 a2)
{
  std::allocator<CandidateIdentity>::deallocate(a1, *(_QWORD *)(a2 + 112), *(_QWORD *)(a2 + 48));
  throw;
}
