/*
 * XREFs of ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@SAXXZ @ 0x180029198
 * Callers:
 *     std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_for__lambda_66f57f934f28d61049862f64df852ff0__char_const_____ptr64_ @ 0x180028F54 (std--basic_string_char_std--char_traits_char__std--allocator_char___--_Reallocate_for__lambda_66.c)
 *     std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_65e615be2a453ca0576c979606f46740__char_const_____ptr64_unsigned___int64_ @ 0x180029050 (std--basic_string_char_std--char_traits_char__std--allocator_char___--_Reallocate_grow_by__lambd.c)
 *     std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_9013ee9e23efe4882b67eff5b0ecf103___ @ 0x18002924C (std--basic_string_char_std--char_traits_char__std--allocator_char___--_Reallocate_g_ea_18002924C.c)
 *     ??$_Construct@PEAD@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXPEADQEADUinput_iterator_tag@1@@Z @ 0x1800293BC (--$_Construct@PEAD@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXPEADQEADUin.c)
 *     std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_7f96eb1dcf99da5daec8c2467d2d5499___ @ 0x18002955C (std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_unsigned_short_.c)
 *     std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::_Reallocate_for__lambda_3fa8b2c8193a0f3144fc4b1b8f243931__wchar_t_const_____ptr64_ @ 0x180034298 (std--basic_string_wchar_t_std--char_traits_wchar_t__std--allocator_wchar_t___--_Reallocate_for__.c)
 *     std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_7030d12a21dba11210293044e97fe9c7__unsigned_short_const_____ptr64_unsigned___int64_ @ 0x1800343A4 (std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_un_ea_1800343A4.c)
 *     std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_for__lambda_138c3d7c38c85abb84c7fc7bfe5747b7__char_ @ 0x180060638 (std--basic_string_char_std--char_traits_char__std--allocator_char___--_Reallocate_for__lambda_13.c)
 *     std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_e1befb086ad3257e3f042a63030725f7__unsigned___int64_char_ @ 0x180060730 (std--basic_string_char_std--char_traits_char__std--allocator_char___--_Reallocate_g_ea_180060730.c)
 *     std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_f3a66ab6a0570788f31503db83886f49__unsigned___int64_char_const_____ptr64_unsigned___int64_ @ 0x180060870 (std--basic_string_char_std--char_traits_char__std--allocator_char___--_Reallocate_g_ea_180060870.c)
 * Callees:
 *     <none>
 */

void __noreturn std::wstring::_Xlen()
{
  std::_Xlength_error("string too long");
}
