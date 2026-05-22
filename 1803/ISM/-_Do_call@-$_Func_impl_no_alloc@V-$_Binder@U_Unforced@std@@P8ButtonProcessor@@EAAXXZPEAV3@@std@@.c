/*
 * XREFs of ?_Do_call@?$_Func_impl_no_alloc@V?$_Binder@U_Unforced@std@@P8ButtonProcessor@@EAAXXZPEAV3@@std@@X$$V@std@@EEAAXXZ @ 0x180092520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,void (ButtonProcessor::*)(void),ButtonProcessor *>,void,>::_Do_call(
        __int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(a1 + 8))(*(_QWORD *)(a1 + 24) + _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(a1 + 8), 8)));
}
