/*
 * XREFs of McTemplateK0qqq @ 0x1C00401C4
 * Callers:
 *     ndisWriteWmiStatusIndication @ 0x1C0008030 (ndisWriteWmiStatusIndication.c)
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C001BCB0 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     ndisRequestedDevicePowerIrpComplete @ 0x1C001FFC0 (ndisRequestedDevicePowerIrpComplete.c)
 *     ndisIfDeletePersistedInterface @ 0x1C00416D8 (ndisIfDeletePersistedInterface.c)
 *     ndisNotifyWmiBindUnbind @ 0x1C00B55DC (ndisNotifyWmiBindUnbind.c)
 *     ndisNotifyDevicePowerStateChange @ 0x1C00C64C0 (ndisNotifyDevicePowerStateChange.c)
 *     NdisReEnumerateProtocolBindings @ 0x1C00E6070 (NdisReEnumerateProtocolBindings.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00FE490 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ndisMInitializeAdapter @ 0x1C00FF8D8 (ndisMInitializeAdapter.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C01021E4 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     ndisAddDevice @ 0x1C0103FA8 (ndisAddDevice.c)
 *     NdisMAllocateMapRegisters @ 0x1C010C5E0 (NdisMAllocateMapRegisters.c)
 *     NdisMRegisterDmaChannel @ 0x1C010D020 (NdisMRegisterDmaChannel.c)
 *     NdisCoDeleteVc @ 0x1C0110C00 (NdisCoDeleteVc.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     McGenEventWriteKM @ 0x1C003BD2C (McGenEventWriteKM.c)
 */

ULONG __stdcall McTemplateK0qqq(
        PMCGEN_TRACE_CONTEXT Context,
        PCEVENT_DESCRIPTOR Descriptor,
        const GUID *Activity,
        const unsigned int Arg0,
        const unsigned int Arg1,
        const unsigned int Arg2)
{
  _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-50h] BYREF
  unsigned int *v8; // [rsp+40h] [rbp-40h]
  __int64 v9; // [rsp+48h] [rbp-38h]
  const unsigned int *p_Arg1; // [rsp+50h] [rbp-30h]
  __int64 v11; // [rsp+58h] [rbp-28h]
  const unsigned int *p_Arg2; // [rsp+60h] [rbp-20h]
  __int64 v13; // [rsp+68h] [rbp-18h]
  unsigned int v14; // [rsp+A8h] [rbp+28h] BYREF

  v14 = Arg0;
  v8 = &v14;
  v9 = 4LL;
  p_Arg1 = &Arg1;
  p_Arg2 = &Arg2;
  v11 = 4LL;
  v13 = 4LL;
  return McGenEventWriteKM(NDIS_PROVIDER_ID_Context, Descriptor, Activity, 4u, &v7);
}
