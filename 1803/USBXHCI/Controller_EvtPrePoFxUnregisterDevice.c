/*
 * XREFs of Controller_EvtPrePoFxUnregisterDevice @ 0x1C0007D50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Controller_EvtPrePoFxUnregisterDevice(__int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
             WdfDriverGlobals,
             a1,
             off_1C004B408);
  *(_QWORD *)(*(_QWORD *)(result + 8) + 424LL) = 0LL;
  return result;
}
