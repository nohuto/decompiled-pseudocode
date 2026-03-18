/*
 * XREFs of Controller_EvtPrePoFxUnregisterDevice @ 0x1C0010AF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Controller_EvtPrePoFxUnregisterDevice(__int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
             WdfDriverGlobals,
             a1,
             off_1C004E408);
  *(_QWORD *)(*(_QWORD *)(result + 8) + 424LL) = 0LL;
  return result;
}
