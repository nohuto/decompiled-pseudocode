/*
 * XREFs of Interrupter_DeferToDpcOrWorkItem @ 0x1C001DE24
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C001DE94 (Interrupter_DeferredWorkProcessor.c)
 *     Interrupter_IoWorkItemRequeueDpc @ 0x1C001EA50 (Interrupter_IoWorkItemRequeueDpc.c)
 *     Interrupter_WdfEvtInterruptIsr @ 0x1C001EC50 (Interrupter_WdfEvtInterruptIsr.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Interrupter_DeferToDpcOrWorkItem(__int64 a1)
{
  if ( *(_BYTE *)(*(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                                WdfDriverGlobals,
                                a1,
                                off_1C004E340)
                            + 8)
                + 441LL) )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3328))(WdfDriverGlobals, a1);
  else
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1136))(WdfDriverGlobals, a1);
}
