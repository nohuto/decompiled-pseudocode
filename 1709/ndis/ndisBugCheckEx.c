/*
 * XREFs of ndisBugCheckEx @ 0x1C004F1C8
 * Callers:
 *     ?ndisNblTrackerVerifyNoNblsHeld@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C0001CC4 (-ndisNblTrackerVerifyNoNblsHeld@@YAXPEAU_NDIS_NBL_TRACKER@@@Z.c)
 *     NdisDereferenceWithTag @ 0x1C0006C70 (NdisDereferenceWithTag.c)
 *     ndisIndicateStatusInternal @ 0x1C0007254 (ndisIndicateStatusInternal.c)
 *     ndisIfSetInterfaceState @ 0x1C0008250 (ndisIfSetInterfaceState.c)
 *     ndisCreateHandler @ 0x1C0008A80 (ndisCreateHandler.c)
 *     ndisCleanupUserOpenContext @ 0x1C0009040 (ndisCleanupUserOpenContext.c)
 *     ndisIfDereferenceMiniport @ 0x1C00091B0 (ndisIfDereferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0009380 (ndisDereferenceMiniport.c)
 *     ndisDereferenceMiniportForNsi @ 0x1C000985C (ndisDereferenceMiniportForNsi.c)
 *     ndisReferenceMiniportByHandleForNsi @ 0x1C0009C2C (ndisReferenceMiniportByHandleForNsi.c)
 *     ndisMTimerDpcX @ 0x1C0009FC0 (ndisMTimerDpcX.c)
 *     ndisFOidRequestCompleteInternal @ 0x1C000A160 (ndisFOidRequestCompleteInternal.c)
 *     ndisInterruptDpc @ 0x1C000A480 (ndisInterruptDpc.c)
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C000A970 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ndisQueueOidRequest @ 0x1C000B550 (ndisQueueOidRequest.c)
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C000BC90 (ndisReferenceTopMiniportByNameForNsi.c)
 *     ndisOidRequestComplete @ 0x1C000C470 (ndisOidRequestComplete.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C000D6B0 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C000E3F0 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     NdisMRestartComplete @ 0x1C0011380 (NdisMRestartComplete.c)
 *     ndisQueuedMiniportDpcWorkItem @ 0x1C0018B70 (ndisQueuedMiniportDpcWorkItem.c)
 *     ndisQueuedCheckForHang @ 0x1C00198D0 (ndisQueuedCheckForHang.c)
 *     ndisDoOidRequests @ 0x1C001A290 (ndisDoOidRequests.c)
 *     NdisIfAddIfStackEntry @ 0x1C001B790 (NdisIfAddIfStackEntry.c)
 *     NdisMPauseComplete @ 0x1C001DE10 (NdisMPauseComplete.c)
 *     ndisMTimerObjectDpc @ 0x1C0023190 (ndisMTimerObjectDpc.c)
 *     ndisOidPostRcvFilterClearFilter @ 0x1C003A3E0 (ndisOidPostRcvFilterClearFilter.c)
 *     NdisIfDeregisterProvider @ 0x1C0040470 (NdisIfDeregisterProvider.c)
 *     ?ndisVerifySynchronousOidAfterCompletion@@YAXPEAU_NDIS_OID_REQUEST@@HPEAU_NDIS_OBJECT_HEADER@@@Z @ 0x1C004232C (-ndisVerifySynchronousOidAfterCompletion@@YAXPEAU_NDIS_OID_REQUEST@@HPEAU_NDIS_OBJECT_HEADER@@@Z.c)
 *     NdisFSynchronousOidRequest @ 0x1C0042680 (NdisFSynchronousOidRequest.c)
 *     NdisSynchronousOidRequest @ 0x1C0042980 (NdisSynchronousOidRequest.c)
 *     ndisSynchronousOidRequest @ 0x1C00477E8 (ndisSynchronousOidRequest_ea_1C00477E8.c)
 *     ndisFInvokeSynchronousOidRequestComplete @ 0x1C00596D0 (ndisFInvokeSynchronousOidRequestComplete.c)
 *     ndisMInvokeSynchronousOidRequest @ 0x1C005FE98 (ndisMInvokeSynchronousOidRequest.c)
 *     ndisBindRequest @ 0x1C0064BA0 (ndisBindRequest.c)
 *     ?NdisPDReportECIteration@@YAXPEAUPD_EC_HANDLE__@@E@Z @ 0x1C0076210 (-NdisPDReportECIteration@@YAXPEAUPD_EC_HANDLE__@@E@Z.c)
 *     ?NdisPDSetupBufferFromMemoryHandle@@YAXPEAU_PD_BUFFER@@PEAUPD_MEMORY_HANDLE__@@KK@Z @ 0x1C0076350 (-NdisPDSetupBufferFromMemoryHandle@@YAXPEAU_PD_BUFFER@@PEAUPD_MEMORY_HANDLE__@@KK@Z.c)
 *     ?NdisPDSetupBufferFromPdBuffer@@YAXPEAU_PD_BUFFER@@PEBU1@KK@Z @ 0x1C00763C0 (-NdisPDSetupBufferFromPdBuffer@@YAXPEAU_PD_BUFFER@@PEBU1@KK@Z.c)
 *     ?ndisTriggerPDDrainNotification@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z @ 0x1C0076CD0 (-ndisTriggerPDDrainNotification@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z.c)
 *     NdisMTriggerPDDrainNotification @ 0x1C0077250 (NdisMTriggerPDDrainNotification.c)
 *     ndisMIndicatePDConfigChange @ 0x1C0077C5C (ndisMIndicatePDConfigChange.c)
 *     ndisOidPostPDOpenProvider @ 0x1C0077E30 (ndisOidPostPDOpenProvider.c)
 *     ?ndisExecuteRSSv2DirectOid@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_RSS_DPC_WORKER_CONTEXT@@U_PROCESSOR_NUMBER@@@Z @ 0x1C007A270 (-ndisExecuteRSSv2DirectOid@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_RSS_DP.c)
 *     ndisWaitForEvent @ 0x1C00AB64C (ndisWaitForEvent.c)
 *     ?NdisPDAssociateNotificationEvent@@YAXPEAU_NDIS_PD_QUEUE@@PEAU_KEVENT@@@Z @ 0x1C00F4F80 (-NdisPDAssociateNotificationEvent@@YAXPEAU_NDIS_PD_QUEUE@@PEAU_KEVENT@@@Z.c)
 *     ?NdisPDDeleteBMGroup@@YAXPEAUPD_BUFFER_MANAGEMENT_GROUP_HANDLE__@@@Z @ 0x1C00F5510 (-NdisPDDeleteBMGroup@@YAXPEAUPD_BUFFER_MANAGEMENT_GROUP_HANDLE__@@@Z.c)
 *     ?NdisPDPIRequestDrainNotification@@YAXPEAU_NDIS_PD_QUEUE@@@Z @ 0x1C00F6830 (-NdisPDPIRequestDrainNotification@@YAXPEAU_NDIS_PD_QUEUE@@@Z.c)
 *     ?NdisPDRemoveProviderFromBMGroup@@YAXPEAUNDIS_PD_PROVIDER_HANDLE__@@@Z @ 0x1C00F6C30 (-NdisPDRemoveProviderFromBMGroup@@YAXPEAUNDIS_PD_PROVIDER_HANDLE__@@@Z.c)
 *     ?NdisPDStopEC@@YAXPEAUPD_EC_HANDLE__@@@Z @ 0x1C00F6EE0 (-NdisPDStopEC@@YAXPEAUPD_EC_HANDLE__@@@Z.c)
 *     ndisReportTimeoutWaitingForExternalDriver @ 0x1C00F99B4 (ndisReportTimeoutWaitingForExternalDriver.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn ndisBugCheckEx(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0x7Cu, BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
}
