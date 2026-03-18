/*
 * XREFs of ?_Xlength_error@std@@YAXPEBD@Z @ 0x140003048
 * Callers:
 *     ?_Xlen@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBAXXZ @ 0x140003034 (-_Xlen@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEBAXXZ.c)
 * Callees:
 *     ??0length_error@std@@QEAA@PEBD@Z @ 0x140002DAC (--0length_error@std@@QEAA@PEBD@Z.c)
 *     _CxxThrowException_0 @ 0x140003F16 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_Xlength_error(char *a1)
{
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  std::length_error::length_error((std::length_error *)pExceptionObject, a1);
  throw (std::length_error *)pExceptionObject;
}
