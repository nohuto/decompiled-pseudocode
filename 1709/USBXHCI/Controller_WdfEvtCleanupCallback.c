/*
 * XREFs of Controller_WdfEvtCleanupCallback @ 0x1C0014220
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     Controller_RemoveControllerFromGlobalControllerList @ 0x1C00120CC (Controller_RemoveControllerFromGlobalControllerList.c)
 *     Etw_ControllerDelete @ 0x1C00383FC (Etw_ControllerDelete.c)
 *     Controller_DestroySecureObject @ 0x1C0056E88 (Controller_DestroySecureObject.c)
 */

__int64 __fastcall Controller_WdfEvtCleanupCallback(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C004E430);
  Controller_DestroySecureObject(v1);
  if ( *(_QWORD *)(v1 + 456) )
  {
    (*(void (__fastcall **)(_QWORD))(v1 + 504))(*(_QWORD *)(v1 + 472));
    *(_QWORD *)(v1 + 456) = 0LL;
  }
  memset((void *)(v1 + 464), 0, 0x38uLL);
  Controller_RemoveControllerFromGlobalControllerList((_QWORD *)v1);
  return Etw_ControllerDelete(v2, v1);
}
