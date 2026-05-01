/*
 * XREFs of ?_Xran@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@SAXXZ @ 0x1800CA368
 * Callers:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K_K@Z @ 0x1800CA0BC (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K_K@Z.c)
 * Callees:
 *     <none>
 */

void __noreturn std::wstring::_Xran()
{
  std::_Xout_of_range("invalid string position");
  JUMPOUT(0x1800CA379LL);
}
