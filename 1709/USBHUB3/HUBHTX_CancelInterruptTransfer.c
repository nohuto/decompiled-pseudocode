/*
 * XREFs of HUBHTX_CancelInterruptTransfer @ 0x1C000354C
 * Callers:
 *     HUBHSM_CancellingInterruptTransferOnSuspend @ 0x1C00072C0 (HUBHSM_CancellingInterruptTransferOnSuspend.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001DD8 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBHTX_CancelInterruptTransfer(__int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2064))(
             WdfDriverGlobals,
             *(_QWORD *)(a1 + 960));
  if ( !(_BYTE)result )
    return WPP_RECORDER_SF_(
             *(_QWORD *)(a1 + 2512),
             2u,
             3u,
             0x1Fu,
             (__int64)&WPP_c9133184bb0b3c65ec7754ef3e1e0957_Traceguids);
  return result;
}
