/*
 * XREFs of _std::numpunct_char_::_Init_::_1_::catch$0 @ 0x1800BCEAE
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy@?$numpunct@D@std@@AEAAXXZ @ 0x18009CAC8 (-_Tidy@-$numpunct@D@std@@AEAAXXZ.c)
 *     _CxxThrowException_0 @ 0x1800B4273 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::numpunct_char_::_Init_::_1_::catch_0(__int64 a1, __int64 a2)
{
  std::numpunct<char>::_Tidy(*(void ***)(a2 + 128));
  throw;
}
