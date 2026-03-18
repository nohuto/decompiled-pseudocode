/*
 * XREFs of Controller_EvtDeviceFileCreate @ 0x1C0007B50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Controller_EvtDeviceFileCreate(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  PWDF_DRIVER_GLOBALS v7; // rcx

  v5 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C004B408)
                 + 8);
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a3,
         off_1C004B3E0);
  v7 = WdfDriverGlobals;
  *(_QWORD *)(v6 + 32) = v5;
  *(_BYTE *)(v6 + 40) = 0;
  *(_BYTE *)(v6 + 52) = 1;
  *(_QWORD *)(v6 + 16) = a3;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(v7, a2, 0LL);
}
