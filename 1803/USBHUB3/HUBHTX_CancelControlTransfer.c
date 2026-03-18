/*
 * XREFs of HUBHTX_CancelControlTransfer @ 0x1C0003B34
 * Callers:
 *     HUBPSM20_CancellingDisableOnHubStopSuspend @ 0x1C000E740 (HUBPSM20_CancellingDisableOnHubStopSuspend.c)
 *     HUBPSM30_CancellingResetOnSurpriseRemove @ 0x1C000E760 (HUBPSM30_CancellingResetOnSurpriseRemove.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001DC8 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBHTX_CancelControlTransfer(__int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2064))(
             WdfDriverGlobals,
             *(_QWORD *)(a1 + 16));
  if ( !(_BYTE)result )
    return WPP_RECORDER_SF_(
             *(_QWORD *)(a1 + 1432),
             2u,
             4u,
             0x27u,
             (__int64)&WPP_657f02cd6e64326733be7ab9e49a31de_Traceguids);
  return result;
}
