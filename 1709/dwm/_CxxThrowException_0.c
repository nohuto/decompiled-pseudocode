/*
 * XREFs of _CxxThrowException_0 @ 0x140003F16
 * Callers:
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x140003014 (-_Xbad_alloc@std@@YAXXZ.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x140003048 (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Xout_of_range@std@@YAXPEBD@Z @ 0x14000306C (-_Xout_of_range@std@@YAXPEBD@Z.c)
 *     sub_140006A01 @ 0x140006A01 (sub_140006A01.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall __noreturn CxxThrowException_0(void *pExceptionObject, _ThrowInfo *pThrowInfo)
{
  _CxxThrowException(pExceptionObject, pThrowInfo);
}
