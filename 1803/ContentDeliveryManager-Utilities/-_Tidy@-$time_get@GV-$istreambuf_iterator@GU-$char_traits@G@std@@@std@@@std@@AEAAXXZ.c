/*
 * XREFs of ?_Tidy@?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEAAXXZ @ 0x1800B6AFC
 * Callers:
 *     _std::time_get_unsigned_short_std::istreambuf_iterator_unsigned_short_std::char_traits_unsigned_short_____::_Init_::_1_::catch$0 @ 0x1800CA6F9 (_std--time_get_unsigned_short_std--istreambuf_iterator_unsigned_short_std--char_traits_unsigned_.c)
 *     _std::time_get_char_std::istreambuf_iterator_char_std::char_traits_char_____::_Init_::_1_::catch$0 @ 0x1800CAB5B (_std--time_get_char_std--istreambuf_iterator_char_std--char_traits_char_____--_Init_--_1_--catch.c)
 * Callees:
 *     ??_V@YAXPEAX@Z_0 @ 0x1800C0A3E (--_V@YAXPEAX@Z_0.c)
 */

void __fastcall std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Tidy(void **a1)
{
  operator delete[](a1[2]);
  operator delete[](a1[3]);
  operator delete[](a1[4]);
}
