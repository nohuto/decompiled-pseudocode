/*
 * XREFs of WPP_SF_qqD @ 0x1C002C2D0
 * Callers:
 *     RaDriverPnpIrp @ 0x1C0007700 (RaDriverPnpIrp.c)
 *     RaUnitPnpIrp @ 0x1C00077A0 (RaUnitPnpIrp.c)
 *     RaDriverDeviceControlIrp @ 0x1C0007FE0 (RaDriverDeviceControlIrp.c)
 *     RaUnitDeviceControlIrp @ 0x1C0008110 (RaUnitDeviceControlIrp.c)
 *     RaDriverScsiIrp @ 0x1C0008520 (RaDriverScsiIrp.c)
 *     RaUnitScsiIrp @ 0x1C00085C0 (RaUnitScsiIrp.c)
 *     RaUnitStartIo @ 0x1C0009A00 (RaUnitStartIo.c)
 *     RaidUnitCompleteRequest @ 0x1C000B0C0 (RaidUnitCompleteRequest.c)
 *     RaUnitAsyncError @ 0x1C000CED4 (RaUnitAsyncError.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C000DA0C (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaDriverPowerIrp @ 0x1C000DBB0 (RaDriverPowerIrp.c)
 *     RaidAdapterPowerIrp @ 0x1C000DC58 (RaidAdapterPowerIrp.c)
 *     RaUnitPowerIrp @ 0x1C000DD20 (RaUnitPowerIrp.c)
 *     RaidUnitSetPowerIrp @ 0x1C000DE04 (RaidUnitSetPowerIrp.c)
 *     RaidUnitSetSystemPowerIrp @ 0x1C000DF8C (RaidUnitSetSystemPowerIrp.c)
 *     RaidAdapterSetSystemPowerIrp @ 0x1C000E1DC (RaidAdapterSetSystemPowerIrp.c)
 *     RaidAdapterSetDevicePowerIrp @ 0x1C000E2AC (RaidAdapterSetDevicePowerIrp.c)
 *     RaidAdapterQuerySystemPowerIrp @ 0x1C000E4AC (RaidAdapterQuerySystemPowerIrp.c)
 *     RaidAdapterDevicePowerDownSrbComplete @ 0x1C000E5F0 (RaidAdapterDevicePowerDownSrbComplete.c)
 *     RaidAdapterDevicePowerstopAdapter @ 0x1C000E64C (RaidAdapterDevicePowerstopAdapter.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C000E868 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaidAdapterPowerDownDevice @ 0x1C000F0C0 (RaidAdapterPowerDownDevice.c)
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C000F1A0 (RaidAdapterPowerUpDeviceCompletion.c)
 *     RaAdapterStartPowerIo @ 0x1C000F43C (RaAdapterStartPowerIo.c)
 *     RaidAdapterSetSystemPowerCompletion @ 0x1C00105B0 (RaidAdapterSetSystemPowerCompletion.c)
 *     RaidAdapterQuerySystemPowerCompletionRoutine @ 0x1C0010AB0 (RaidAdapterQuerySystemPowerCompletionRoutine.c)
 *     RaidAdapterPowerDownDeviceCompletion @ 0x1C0010B80 (RaidAdapterPowerDownDeviceCompletion.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1C0010CC0 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterSetDevicePowerCompletionRoutine @ 0x1C0010D70 (RaidAdapterSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterQueryDevicePowerCompletionRoutine @ 0x1C0010E10 (RaidAdapterQueryDevicePowerCompletionRoutine.c)
 *     RaidAdapterPnpIrp @ 0x1C00125A4 (RaidAdapterPnpIrp.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C001274C (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaUnitRemoveDeviceIrp @ 0x1C00177B0 (RaUnitRemoveDeviceIrp.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C0028C7C (RaidAdapterStartDeviceIrp.c)
 *     RaUnitStartResetIo @ 0x1C003B464 (RaUnitStartResetIo.c)
 *     RaidUnitCompleteResetRequest @ 0x1C003C7A0 (RaidUnitCompleteResetRequest.c)
 *     RaidUnitIdentityUpdateWorkRoutine @ 0x1C003CDF0 (RaidUnitIdentityUpdateWorkRoutine.c)
 *     RaDriverCreateIrp @ 0x1C005E120 (RaDriverCreateIrp.c)
 *     RaDriverCloseIrp @ 0x1C005E1D0 (RaDriverCloseIrp.c)
 *     RaDriverSystemControlIrp @ 0x1C0060710 (RaDriverSystemControlIrp.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C0063900 (RaidAdapterFilterResourceRequirementsIrp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0017DD0 (_guard_dispatch_icall_nop.c)
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
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
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
