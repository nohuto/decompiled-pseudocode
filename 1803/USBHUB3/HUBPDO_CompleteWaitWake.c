/*
 * XREFs of HUBPDO_CompleteWaitWake @ 0x1C001715C
 * Callers:
 *     HUBPDO_WakeNotificationIoctlComplete @ 0x1C0017210 (HUBPDO_WakeNotificationIoctlComplete.c)
 *     HUBDSM_AckingPortEventInD3Cold @ 0x1C001DC10 (HUBDSM_AckingPortEventInD3Cold.c)
 *     HUBDSM_DisarmingDeviceForWakeOnD0Entry @ 0x1C001DD80 (HUBDSM_DisarmingDeviceForWakeOnD0Entry.c)
 *     HUBDSM_WaitingForD0EntryOnHwWake @ 0x1C001DE90 (HUBDSM_WaitingForD0EntryOnHwWake.c)
 *     HUBDSM_CompletingWaitWakeOnDetachDuringSuspending @ 0x1C001E160 (HUBDSM_CompletingWaitWakeOnDetachDuringSuspending.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HUBPDO_CompleteWaitWake(__int64 a1)
{
  KIRQL v2; // bl
  __int64 v3; // rax
  int v4; // esi
  int v5; // [rsp+28h] [rbp-10h]

  v2 = KfRaiseIrql(2u);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 16));
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 688))(
         WdfDriverGlobals,
         v3,
         0LL);
  KeLowerIrql(v2);
  if ( v4 < 0 )
  {
    v5 = v4;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      3u,
      5u,
      0x7Eu,
      (__int64)&WPP_0e6bdc1f81e733846865473e2191b11e_Traceguids,
      v5);
  }
}
