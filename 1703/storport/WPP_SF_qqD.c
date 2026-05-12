/*
 * XREFs of WPP_SF_qqD @ 0x1C0030584
 * Callers:
 *     RaDriverPnpIrp @ 0x1C0004D80 (RaDriverPnpIrp.c)
 *     RaUnitPnpIrp @ 0x1C0004E20 (RaUnitPnpIrp.c)
 *     RaDriverDeviceControlIrp @ 0x1C00050C0 (RaDriverDeviceControlIrp.c)
 *     RaUnitDeviceControlIrp @ 0x1C0005164 (RaUnitDeviceControlIrp.c)
 *     RaDriverScsiIrp @ 0x1C0006EF0 (RaDriverScsiIrp.c)
 *     RaUnitScsiIrp @ 0x1C0006F90 (RaUnitScsiIrp.c)
 *     RaUnitStartIo @ 0x1C0007D00 (RaUnitStartIo.c)
 *     RaidUnitCompleteRequest @ 0x1C0008A50 (RaidUnitCompleteRequest.c)
 *     RaUnitAsyncError @ 0x1C000AB10 (RaUnitAsyncError.c)
 *     RaUnitPowerIrp @ 0x1C000E39C (RaUnitPowerIrp.c)
 *     RaidUnitSetPowerIrp @ 0x1C000E478 (RaidUnitSetPowerIrp.c)
 *     RaidUnitSetSystemPowerIrp @ 0x1C000E530 (RaidUnitSetSystemPowerIrp.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C000E860 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaAdapterStartPowerIo @ 0x1C000EC8C (RaAdapterStartPowerIo.c)
 *     RaidAdapterQuerySystemPowerIrp @ 0x1C000EE68 (RaidAdapterQuerySystemPowerIrp.c)
 *     RaidAdapterSetSystemPowerCompletion @ 0x1C000EF40 (RaidAdapterSetSystemPowerCompletion.c)
 *     RaidAdapterSetSystemPowerIrp @ 0x1C000F0A8 (RaidAdapterSetSystemPowerIrp.c)
 *     RaidAdapterQuerySystemPowerCompletionRoutine @ 0x1C000F2B0 (RaidAdapterQuerySystemPowerCompletionRoutine.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1C000F390 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterSetDevicePowerCompletionRoutine @ 0x1C000F440 (RaidAdapterSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterQueryDevicePowerCompletionRoutine @ 0x1C000F4E0 (RaidAdapterQueryDevicePowerCompletionRoutine.c)
 *     RaidAdapterDevicePowerDownSrbComplete @ 0x1C000F5D0 (RaidAdapterDevicePowerDownSrbComplete.c)
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C0011690 (RaidAdapterPowerUpDeviceCompletion.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C0011770 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaDriverPowerIrp @ 0x1C0011A80 (RaDriverPowerIrp.c)
 *     RaidAdapterPowerIrp @ 0x1C0011B28 (RaidAdapterPowerIrp.c)
 *     RaidAdapterSetDevicePowerIrp @ 0x1C0011CC0 (RaidAdapterSetDevicePowerIrp.c)
 *     RaidAdapterPowerDownDevice @ 0x1C0011E30 (RaidAdapterPowerDownDevice.c)
 *     RaidAdapterDevicePowerstopAdapter @ 0x1C0011F10 (RaidAdapterDevicePowerstopAdapter.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C0012174 (RaidAdapterStartDeviceIrp.c)
 *     RaidAdapterPnpIrp @ 0x1C0012708 (RaidAdapterPnpIrp.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C0012A74 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaidAdapterPowerDownDeviceCompletion @ 0x1C001BFF0 (RaidAdapterPowerDownDeviceCompletion.c)
 *     RaUnitRemoveDeviceIrp @ 0x1C003A840 (RaUnitRemoveDeviceIrp.c)
 *     RaUnitStartResetIo @ 0x1C003B0F4 (RaUnitStartResetIo.c)
 *     RaidUnitCompleteResetRequest @ 0x1C003C870 (RaidUnitCompleteResetRequest.c)
 *     RaidUnitIdentityUpdateWorkRoutine @ 0x1C003D940 (RaidUnitIdentityUpdateWorkRoutine.c)
 *     RaDriverCloseIrp @ 0x1C005D760 (RaDriverCloseIrp.c)
 *     RaDriverCreateIrp @ 0x1C005D810 (RaDriverCreateIrp.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C005DD1C (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaDriverSystemControlIrp @ 0x1C00617A0 (RaDriverSystemControlIrp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001ED80 (_guard_dispatch_icall_nop.c)
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
