/*
 * XREFs of Endpoint_EvtStaticStreamsCleanupCallback @ 0x1C00190F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     XilEndpoint_FreeStreamContextArray @ 0x1C00178C8 (XilEndpoint_FreeStreamContextArray.c)
 *     WPP_RECORDER_SF_ddqqq @ 0x1C001DAF4 (WPP_RECORDER_SF_ddqqq.c)
 */

void __fastcall Endpoint_EvtStaticStreamsCleanupCallback(__int64 a1)
{
  _QWORD *v1; // [rsp+40h] [rbp-18h]

  v1 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                   WdfDriverGlobals,
                   a1,
                   off_1C004E368);
  WPP_RECORDER_SF_ddqqq(
    *(_QWORD *)(*v1 + 80LL),
    *(_DWORD *)(*v1 + 144LL),
    *(unsigned __int8 *)(*(_QWORD *)(*v1 + 16LL) + 135LL),
    102);
  XilEndpoint_FreeStreamContextArray(v1);
}
