/*
 * XREFs of ndisNsiSyncMiniportOperStatusNotification @ 0x1C00AEFC8
 * Callers:
 *     ndisIfUpdateInterfaceOnAddDevice @ 0x1C00036EC (ndisIfUpdateInterfaceOnAddDevice.c)
 *     ndisIfUpdateInterfaceOnInitialize @ 0x1C0003C48 (ndisIfUpdateInterfaceOnInitialize.c)
 *     ndisMInitializeAdapter @ 0x1C00FF8D8 (ndisMInitializeAdapter.c)
 *     ndisDevicePowerOn @ 0x1C01053F0 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C01058B0 (ndisDevicePowerDown.c)
 * Callees:
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00B4EFC (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 */

__int64 __fastcall ndisNsiSyncMiniportOperStatusNotification(__int64 a1)
{
  __int64 v1; // rcx
  _QWORD v3[2]; // [rsp+20h] [rbp-28h] BYREF
  int v4; // [rsp+30h] [rbp-18h]
  int v5; // [rsp+34h] [rbp-14h]

  v1 = *(_QWORD *)(a1 + 4064);
  v3[0] = 1LL;
  v3[1] = v1 + 1112;
  v4 = 8;
  v5 = 536;
  return ndisNsiNotifyClientInterfaceChange(v1, 0LL, v3);
}
