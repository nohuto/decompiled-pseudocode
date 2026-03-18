/*
 * XREFs of HUBPDO_EvtDeviceSelfManagedIoSuspend @ 0x1C0012540
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBPDO_EvtDeviceSelfManagedIoSuspend(__int64 a1)
{
  __int64 v1; // rax

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C005B070);
  *(_DWORD *)(v1 + 32) &= ~1u;
  return 0LL;
}
