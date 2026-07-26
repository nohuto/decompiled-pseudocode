/*
 * XREFs of WPP_SF_dq @ 0x1C004B014
 * Callers:
 *     ndisLogMiniportEvent @ 0x1C00111C8 (ndisLogMiniportEvent.c)
 *     NdisAllocateSharedMemory @ 0x1C001B9E0 (NdisAllocateSharedMemory.c)
 *     ndisRequestDevicePowerD0 @ 0x1C001FE9C (ndisRequestDevicePowerD0.c)
 *     ?ndisIfCreateCompartmentBlock@@YAJIPEAU_GUID@@PEAU_NDIS_NSI_COMPARTMENT_RW@@PEAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C0021A78 (-ndisIfCreateCompartmentBlock@@YAJIPEAU_GUID@@PEAU_NDIS_NSI_COMPARTMENT_RW@@PEAPEAU_NDIS_IF_COMP.c)
 *     ?ndisIfCreateCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@PEAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C003D288 (-ndisIfCreateCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@PEAPEAU_NDIS_IF_COMPARTMENT_BLO.c)
 *     ndisIfDereferenceCompartmentForUser @ 0x1C00418D4 (ndisIfDereferenceCompartmentForUser.c)
 *     ndisIfReferenceCompartmentForUser @ 0x1C0041AAC (ndisIfReferenceCompartmentForUser.c)
 *     ?ndisSendPmOidsForSuspend@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z @ 0x1C006E64C (-ndisSendPmOidsForSuspend@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z.c)
 *     NdisMIdleNotificationConfirm @ 0x1C006F3F0 (NdisMIdleNotificationConfirm.c)
 *     ndisIdleWaitWakeCallback @ 0x1C0070150 (ndisIdleWaitWakeCallback.c)
 *     ndisPowerSuspendRequestComplete @ 0x1C0070400 (ndisPowerSuspendRequestComplete.c)
 *     ndisSetPowerResumeComplete @ 0x1C0071460 (ndisSetPowerResumeComplete.c)
 *     ndisSetPowerResumeCompleteWorkItem @ 0x1C0071590 (ndisSetPowerResumeCompleteWorkItem.c)
 *     ndisSubmitIdleRequest @ 0x1C0071820 (ndisSubmitIdleRequest.c)
 *     ?ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z @ 0x1C0072780 (-ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z.c)
 *     ?ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C0072A80 (-ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@PEAU_IRP@@@Z @ 0x1C00734A0 (-ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     ?ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C00738A4 (-ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00739F4 (-ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisNicQuietRequestComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C0073C80 (-ndisNicQuietRequestComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@.c)
 *     ?ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C0073EE0 (-ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ndisRequestWaitWake @ 0x1C00AE030 (ndisRequestWaitWake.c)
 *     ndisRequestDeviceLowPower @ 0x1C00C6A7C (ndisRequestDeviceLowPower.c)
 *     DisableMagicPacketKeyword @ 0x1C00DEE70 (DisableMagicPacketKeyword.c)
 *     ndisReadNicAutoPowerSaverTimeoutKeywords @ 0x1C00F2988 (ndisReadNicAutoPowerSaverTimeoutKeywords.c)
 *     ndisReadSSTimeoutKeywords @ 0x1C00F2A5C (ndisReadSSTimeoutKeywords.c)
 *     ?ndisMSendOidPmParametersForAoAc@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00F33DC (-ndisMSendOidPmParametersForAoAc@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00F3E24 (-ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?NdisPDBMAllocateCommonBuffer@@YAJPEAUNDIS_PD_BM_DOMAIN_HANDLE__@@KKKPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C00F9090 (-NdisPDBMAllocateCommonBuffer@@YAJPEAUNDIS_PD_BM_DOMAIN_HANDLE__@@KKKPEAT_LARGE_INTEGER@@PEAPEAX.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E79C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_dq(unsigned __int16 a1, const struct _GUID *a2, int a3, ...)
{
  int v3; // [rsp+60h] [rbp+18h] BYREF
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  v3 = a3;
  ndisWppFastTraceMessage(a2, a1, &v3, 4LL, va, 8LL, 0LL);
}
