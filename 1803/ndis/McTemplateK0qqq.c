/*
 * XREFs of McTemplateK0qqq @ 0x1C00412A4
 * Callers:
 *     ndisRequestedDevicePowerIrpComplete @ 0x1C000FF30 (ndisRequestedDevicePowerIrpComplete.c)
 *     ndisWriteWmiStatusIndication @ 0x1C0018BDC (ndisWriteWmiStatusIndication.c)
 *     ndisIfDeletePersistedInterface @ 0x1C0042820 (ndisIfDeletePersistedInterface.c)
 *     ndisNotifyDevicePowerStateChange @ 0x1C00B068C (ndisNotifyDevicePowerStateChange.c)
 *     ndisNotifyWmiBindUnbind @ 0x1C00C0970 (ndisNotifyWmiBindUnbind.c)
 *     ndisValidateMiniportDriverCharacteristicsEntryPoints @ 0x1C00C81A4 (ndisValidateMiniportDriverCharacteristicsEntryPoints.c)
 *     NdisReEnumerateProtocolBindings @ 0x1C00E78C0 (NdisReEnumerateProtocolBindings.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0101C04 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C01036D4 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     ndisAddDevice @ 0x1C0105194 (ndisAddDevice.c)
 *     ndisMInitializeAdapter @ 0x1C0105A70 (ndisMInitializeAdapter.c)
 *     NdisMAllocateMapRegisters @ 0x1C010E570 (NdisMAllocateMapRegisters.c)
 *     NdisMRegisterDmaChannel @ 0x1C010EFB0 (NdisMRegisterDmaChannel.c)
 *     NdisCoDeleteVc @ 0x1C0112C10 (NdisCoDeleteVc.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     McGenEventWriteKM @ 0x1C003D074 (McGenEventWriteKM.c)
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
