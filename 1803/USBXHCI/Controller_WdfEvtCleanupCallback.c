/*
 * XREFs of Controller_WdfEvtCleanupCallback @ 0x1C000B970
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     Controller_RemoveControllerFromGlobalControllerList @ 0x1C0009444 (Controller_RemoveControllerFromGlobalControllerList.c)
 *     Etw_ControllerDelete @ 0x1C0035FD8 (Etw_ControllerDelete.c)
 *     Controller_DestroySecureObject @ 0x1C0053D60 (Controller_DestroySecureObject.c)
 */

__int64 __fastcall Controller_WdfEvtCleanupCallback(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rcx

  v1 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                   WdfDriverGlobals,
                   a1,
                   off_1C004B430);
  Controller_DestroySecureObject(v1);
  Controller_RemoveControllerFromGlobalControllerList(v1);
  return Etw_ControllerDelete(v2, v1);
}
