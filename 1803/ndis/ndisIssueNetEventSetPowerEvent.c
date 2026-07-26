/*
 * XREFs of ndisIssueNetEventSetPowerEvent @ 0x1C00B05E4
 * Callers:
 *     ?ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C000F640 (-ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ndisPnPIrpSurpriseRemovalInner @ 0x1C00EE3E8 (ndisPnPIrpSurpriseRemovalInner.c)
 *     ndisDevicePowerOn @ 0x1C0100560 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C0100A70 (ndisDevicePowerDown.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C00B0E0C (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00BBF78 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ndisInitializeNetPnPEvent @ 0x1C00C261C (ndisInitializeNetPnPEvent.c)
 */

void __fastcall ndisIssueNetEventSetPowerEvent(struct _NDIS_MINIPORT_BLOCK *a1, int a2, char a3)
{
  bool v5; // al
  int v6; // [rsp+20h] [rbp-D8h] BYREF
  _BYTE v7[8]; // [rsp+30h] [rbp-C8h] BYREF
  int v8; // [rsp+38h] [rbp-C0h]
  int *v9; // [rsp+40h] [rbp-B8h]
  int v10; // [rsp+48h] [rbp-B0h]

  v6 = a2;
  ndisInitializeNetPnPEvent(v7, 0LL);
  v8 = 0;
  v9 = &v6;
  v10 = 4;
  ndisDevicePnPEventNotifyFiltersAndAllTransports(a1);
  v5 = 1;
  if ( v6 != 1 || !a3 )
    v5 = 0;
  Ndis::BindEngine::ApplyBindChanges(&a1->BindEngine, RunSynchronous, v5);
}
