/*
 * XREFs of Interrupter_WdfEvtInterruptDisable @ 0x1C0017DF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     Interrupter_InterruptDisable @ 0x1C00179C4 (Interrupter_InterruptDisable.c)
 */

__int64 __fastcall Interrupter_WdfEvtInterruptDisable(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rcx

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C004B340);
  Interrupter_InterruptDisable(v1);
  v2 = *(_QWORD *)(v1 + 8);
  if ( *(_DWORD *)(v2 + 532) == 1 )
  {
    v3 = *(_QWORD *)(v2 + 128);
    if ( *(_QWORD *)(v3 + 40) == v1 )
      Interrupter_InterruptDisable(*(_QWORD *)(*(_QWORD *)(v3 + 32) + 8LL * *(unsigned int *)(v3 + 64)));
  }
  return 0LL;
}
