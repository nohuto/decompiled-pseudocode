/*
 * XREFs of WPP_SF_qqD @ 0x1C0030BFC
 * Callers:
 *     RaDriverPnpIrp @ 0x1C0005580 (RaDriverPnpIrp.c)
 *     RaUnitPnpIrp @ 0x1C0005620 (RaUnitPnpIrp.c)
 *     RaDriverDeviceControlIrp @ 0x1C00058E0 (RaDriverDeviceControlIrp.c)
 *     RaUnitDeviceControlIrp @ 0x1C0005984 (RaUnitDeviceControlIrp.c)
 *     RaDriverScsiIrp @ 0x1C0007280 (RaDriverScsiIrp.c)
 *     RaUnitScsiIrp @ 0x1C0007320 (RaUnitScsiIrp.c)
 *     RaUnitStartIo @ 0x1C0008160 (RaUnitStartIo.c)
 *     RaidUnitCompleteRequest @ 0x1C000A210 (RaidUnitCompleteRequest.c)
 *     RaUnitAsyncError @ 0x1C000B8F8 (RaUnitAsyncError.c)
 *     RaUnitPowerIrp @ 0x1C000E690 (RaUnitPowerIrp.c)
 *     RaidUnitSetPowerIrp @ 0x1C000E774 (RaidUnitSetPowerIrp.c)
 *     RaidUnitSetSystemPowerIrp @ 0x1C000E82C (RaidUnitSetSystemPowerIrp.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C000EB58 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaAdapterStartPowerIo @ 0x1C000F2C8 (RaAdapterStartPowerIo.c)
 *     RaidAdapterQuerySystemPowerIrp @ 0x1C000F4E4 (RaidAdapterQuerySystemPowerIrp.c)
 *     RaidAdapterSetSystemPowerCompletion @ 0x1C000F5C0 (RaidAdapterSetSystemPowerCompletion.c)
 *     RaidAdapterSetSystemPowerIrp @ 0x1C000F714 (RaidAdapterSetSystemPowerIrp.c)
 *     RaidAdapterQuerySystemPowerCompletionRoutine @ 0x1C000F990 (RaidAdapterQuerySystemPowerCompletionRoutine.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1C000FA60 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterSetDevicePowerCompletionRoutine @ 0x1C000FB10 (RaidAdapterSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterQueryDevicePowerCompletionRoutine @ 0x1C000FBB0 (RaidAdapterQueryDevicePowerCompletionRoutine.c)
 *     RaidAdapterDevicePowerDownSrbComplete @ 0x1C000FCC0 (RaidAdapterDevicePowerDownSrbComplete.c)
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C000FE30 (RaidAdapterPowerUpDeviceCompletion.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C0010460 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaDriverPowerIrp @ 0x1C0010AC0 (RaDriverPowerIrp.c)
 *     RaidAdapterPowerIrp @ 0x1C0010B68 (RaidAdapterPowerIrp.c)
 *     RaidAdapterSetDevicePowerIrp @ 0x1C0010D00 (RaidAdapterSetDevicePowerIrp.c)
 *     RaidAdapterPowerDownDevice @ 0x1C0010E6C (RaidAdapterPowerDownDevice.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C0010F4C (RaidAdapterStartDeviceIrp.c)
 *     RaidAdapterDevicePowerstopAdapter @ 0x1C00119D8 (RaidAdapterDevicePowerstopAdapter.c)
 *     RaidAdapterPnpIrp @ 0x1C0012070 (RaidAdapterPnpIrp.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C00123E4 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaidAdapterPowerDownDeviceCompletion @ 0x1C001C9B0 (RaidAdapterPowerDownDeviceCompletion.c)
 *     RaUnitRemoveDeviceIrp @ 0x1C003C584 (RaUnitRemoveDeviceIrp.c)
 *     RaUnitStartResetIo @ 0x1C003CE38 (RaUnitStartResetIo.c)
 *     RaidUnitCompleteResetRequest @ 0x1C003E190 (RaidUnitCompleteResetRequest.c)
 *     RaidUnitIdentityUpdateWorkRoutine @ 0x1C003E810 (RaidUnitIdentityUpdateWorkRoutine.c)
 *     RaDriverCloseIrp @ 0x1C005F710 (RaDriverCloseIrp.c)
 *     RaDriverCreateIrp @ 0x1C005F7C0 (RaDriverCreateIrp.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C006006C (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaDriverSystemControlIrp @ 0x1C0063B60 (RaDriverSystemControlIrp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001F300 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_SF_qqD(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  __int64 v6; // [rsp+90h] [rbp+28h] BYREF
  va_list va1; // [rsp+90h] [rbp+28h]
  va_list va2; // [rsp+98h] [rbp+30h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v4 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v6 = va_arg(va2, _QWORD);
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))&WPP_MAIN_CB.SectorSize)(
           a1,
           43LL,
           a3,
           a2,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           8LL,
           va2,
           4LL,
           0LL);
}
