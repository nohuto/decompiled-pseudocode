/*
 * XREFs of ?_Xout_of_range@std@@YAXPEBD@Z @ 0x14000306C
 * Callers:
 *     ?_Xran@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBAXXZ @ 0x140003090 (-_Xran@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEBAXXZ.c)
 * Callees:
 *     ??0length_error@std@@QEAA@PEBD@Z @ 0x140002DAC (--0length_error@std@@QEAA@PEBD@Z.c)
 *     _CxxThrowException_0 @ 0x140003F16 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_Xout_of_range(char *a1)
{
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  std::length_error::length_error((std::length_error *)pExceptionObject, a1);
  throw (std::out_of_range *)pExceptionObject;
}
