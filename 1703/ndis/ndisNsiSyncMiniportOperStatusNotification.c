/*
 * XREFs of ndisNsiSyncMiniportOperStatusNotification @ 0x1C00B9F64
 * Callers:
 *     ndisIfUpdateInterfaceOnInitialize @ 0x1C001D500 (ndisIfUpdateInterfaceOnInitialize.c)
 *     ndisIfUpdateInterfaceOnAddDevice @ 0x1C001DD24 (ndisIfUpdateInterfaceOnAddDevice.c)
 *     ndisDevicePowerOn @ 0x1C00F5400 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C00F58C0 (ndisDevicePowerDown.c)
 *     ndisMInitializeAdapter @ 0x1C00F904C (ndisMInitializeAdapter.c)
 * Callees:
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00B6D6C (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 */

void __fastcall ndisNsiSyncMiniportOperStatusNotification(__int64 a1)
{
  __int64 v1; // rcx
  _QWORD v2[2]; // [rsp+20h] [rbp-28h] BYREF
  int v3; // [rsp+30h] [rbp-18h]
  int v4; // [rsp+34h] [rbp-14h]

  v1 = *(_QWORD *)(a1 + 4064);
  v2[0] = 1LL;
  v2[1] = v1 + 1112;
  v3 = 8;
  v4 = 536;
  ndisNsiNotifyClientInterfaceChange(v1, 0, (__int64)v2, 1);
}
