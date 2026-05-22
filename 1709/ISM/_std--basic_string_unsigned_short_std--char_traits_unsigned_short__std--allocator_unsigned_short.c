/*
 * XREFs of _std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Construct_char_____ptr64__::_1_::catch$39 @ 0x1800CDCC6
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x180028C80 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     _CxxThrowException_0 @ 0x1800CB710 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Construct_char_____ptr64__::_1_::catch_39(
        __int64 a1,
        __int64 a2)
{
  std::wstring::_Tidy_deallocate(*(unsigned __int64 **)(a2 + 112));
  throw;
}
