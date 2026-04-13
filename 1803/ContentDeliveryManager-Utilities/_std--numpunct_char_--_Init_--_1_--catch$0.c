/*
 * XREFs of _std::numpunct_char_::_Init_::_1_::catch$0 @ 0x1800CA2E1
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy@?$numpunct@D@std@@AEAAXXZ @ 0x1800A9CAC (-_Tidy@-$numpunct@D@std@@AEAAXXZ.c)
 *     _CxxThrowException_0 @ 0x1800C10B3 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::numpunct_char_::_Init_::_1_::catch_0(__int64 a1, __int64 a2)
{
  std::numpunct<char>::_Tidy(*(void ***)(a2 + 128));
  throw;
}
