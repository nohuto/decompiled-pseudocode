/*
 * XREFs of ndisNsiSyncMiniportMediaConnectStateNotification @ 0x1C00AF01C
 * Callers:
 *     ndisIfUpdateInterfaceOnInitialize @ 0x1C0003C48 (ndisIfUpdateInterfaceOnInitialize.c)
 * Callees:
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00B4EFC (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 */

__int64 __fastcall ndisNsiSyncMiniportMediaConnectStateNotification(__int64 a1)
{
  __int64 v1; // rcx
  _QWORD v3[2]; // [rsp+20h] [rbp-28h] BYREF
  int v4; // [rsp+30h] [rbp-18h]
  int v5; // [rsp+34h] [rbp-14h]

  v1 = *(_QWORD *)(a1 + 4064);
  v3[0] = 1LL;
  v3[1] = v1 + 1220;
  v4 = 4;
  v5 = 644;
  return ndisNsiNotifyClientInterfaceChange(v1, 0LL, v3);
}
