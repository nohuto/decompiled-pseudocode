/*
 * XREFs of ndisIssueNetEventSetPowerEvent @ 0x1C00C641C
 * Callers:
 *     ?ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C001F834 (-ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ndisPnPIrpSurpriseRemovalInner @ 0x1C00EB838 (ndisPnPIrpSurpriseRemovalInner.c)
 *     ndisDevicePowerOn @ 0x1C01053F0 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C01058B0 (ndisDevicePowerDown.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00BAD34 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C00C4168 (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ndisInitializeNetPnPEvent @ 0x1C00C44BC (ndisInitializeNetPnPEvent.c)
 */

void __fastcall ndisIssueNetEventSetPowerEvent(struct _NDIS_MINIPORT_BLOCK *a1, int a2, char a3)
{
  char v5; // r8
  int v6; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v7; // [rsp+30h] [rbp-C8h] BYREF
  int v8; // [rsp+38h] [rbp-C0h]
  int *v9; // [rsp+40h] [rbp-B8h]
  int v10; // [rsp+48h] [rbp-B0h]

  v6 = a2;
  ndisInitializeNetPnPEvent(&v7, 0LL);
  v8 = 0;
  v9 = &v6;
  v10 = 4;
  ndisDevicePnPEventNotifyFiltersAndAllTransports(a1, (__int64)&v7);
  v5 = v6 == 1 && a3;
  Ndis::BindEngine::ApplyBindChanges(&a1->BindEngine, RunSynchronous, v5);
}
