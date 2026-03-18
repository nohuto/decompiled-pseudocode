/*
 * XREFs of sub_140006A01 @ 0x140006A01
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_N_K@Z @ 0x140002FBC (-_Tidy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_N_K@Z.c)
 *     _CxxThrowException_0 @ 0x140003F16 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn sub_140006A01(__int64 a1, __int64 a2)
{
  std::string::_Tidy(*(void ***)(a2 + 96), 1, 0LL);
  throw;
}
