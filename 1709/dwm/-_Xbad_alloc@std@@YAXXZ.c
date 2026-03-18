/*
 * XREFs of ?_Xbad_alloc@std@@YAXXZ @ 0x140003014
 * Callers:
 *     ??2@YAPEAX_K@Z @ 0x140002D1C (--2@YAPEAX_K@Z.c)
 *     ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K0@Z @ 0x140002EC0 (-_Copy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K0@Z.c)
 *     sub_1400069C0 @ 0x1400069C0 (sub_1400069C0.c)
 * Callees:
 *     ??0bad_alloc@std@@QEAA@XZ @ 0x140002D74 (--0bad_alloc@std@@QEAA@XZ.c)
 *     _CxxThrowException_0 @ 0x140003F16 (_CxxThrowException_0.c)
 */

void __noreturn std::_Xbad_alloc(void)
{
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  std::bad_alloc::bad_alloc((std::bad_alloc *)pExceptionObject);
  throw (std::bad_alloc *)pExceptionObject;
}
