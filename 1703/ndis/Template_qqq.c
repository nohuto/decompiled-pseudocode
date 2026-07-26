/*
 * XREFs of Template_qqq @ 0x1C0043A1C
 * Callers:
 *     ndisRequestedDevicePowerIrpComplete @ 0x1C00127A0 (ndisRequestedDevicePowerIrpComplete.c)
 *     ndisWriteWmiStatusIndication @ 0x1C0019200 (ndisWriteWmiStatusIndication.c)
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C0020200 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     ndisIfDeletePersistedInterface @ 0x1C0044BC0 (ndisIfDeletePersistedInterface.c)
 *     ndisNotifyDevicePowerStateChange @ 0x1C00A75FC (ndisNotifyDevicePowerStateChange.c)
 *     ndisNotifyWmiBindUnbind @ 0x1C00B739C (ndisNotifyWmiBindUnbind.c)
 *     NdisReEnumerateProtocolBindings @ 0x1C00DC030 (NdisReEnumerateProtocolBindings.c)
 *     ndisAddDevice @ 0x1C00F6250 (ndisAddDevice.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00F821C (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     ndisMInitializeAdapter @ 0x1C00F904C (ndisMInitializeAdapter.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00FAB6C (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     NdisMAllocateMapRegisters @ 0x1C0103650 (NdisMAllocateMapRegisters.c)
 *     NdisMRegisterDmaChannel @ 0x1C0104090 (NdisMRegisterDmaChannel.c)
 *     NdisCoDeleteVc @ 0x1C0107BF0 (NdisCoDeleteVc.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qqq(__int64 a1, const EVENT_DESCRIPTOR *a2, const GUID *a3, int a4, char a5, char a6)
{
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-40h] BYREF
  char *v8; // [rsp+40h] [rbp-30h]
  __int64 v9; // [rsp+48h] [rbp-28h]
  char *v10; // [rsp+50h] [rbp-20h]
  __int64 v11; // [rsp+58h] [rbp-18h]
  int v12; // [rsp+98h] [rbp+28h] BYREF

  v12 = a4;
  UserData.Ptr = (unsigned __int64)&v12;
  *(_QWORD *)&UserData.Size = 4LL;
  v8 = &a5;
  v10 = &a6;
  v9 = 4LL;
  v11 = 4LL;
  return EtwWrite(Microsoft_Windows_NDISHandle, a2, a3, 3u, &UserData);
}
