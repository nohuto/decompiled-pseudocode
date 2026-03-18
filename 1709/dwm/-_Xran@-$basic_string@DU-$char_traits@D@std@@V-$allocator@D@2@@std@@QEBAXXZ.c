/*
 * XREFs of ?_Xran@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBAXXZ @ 0x140003090
 * Callers:
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x1400030A4 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?erase@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_K0@Z @ 0x14000335C (-erase@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_K0@Z.c)
 * Callees:
 *     ?_Xout_of_range@std@@YAXPEBD@Z @ 0x14000306C (-_Xout_of_range@std@@YAXPEBD@Z.c)
 */

void __noreturn std::string::_Xran()
{
  std::_Xout_of_range("invalid string position");
}
