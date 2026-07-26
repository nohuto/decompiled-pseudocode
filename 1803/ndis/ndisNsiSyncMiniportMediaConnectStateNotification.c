/*
 * XREFs of ndisNsiSyncMiniportMediaConnectStateNotification @ 0x1C00C249C
 * Callers:
 *     ndisIfUpdateInterfaceOnInitialize @ 0x1C001D6D8 (ndisIfUpdateInterfaceOnInitialize.c)
 * Callees:
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00C078C (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 */

void __fastcall ndisNsiSyncMiniportMediaConnectStateNotification(__int64 a1)
{
  __int64 v1; // rcx
  _QWORD v2[2]; // [rsp+20h] [rbp-28h] BYREF
  int v3; // [rsp+30h] [rbp-18h]
  int v4; // [rsp+34h] [rbp-14h]

  v1 = *(_QWORD *)(a1 + 4064);
  v2[0] = 1LL;
  v2[1] = v1 + 1220;
  v3 = 4;
  v4 = 644;
  ndisNsiNotifyClientInterfaceChange(v1, 0, (__int64)v2, 1);
}
