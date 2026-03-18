/*
 * XREFs of _TlgWriteEx @ 0x14007A058
 * Callers:
 *     MiProcessWorkingSets @ 0x14000A690 (MiProcessWorkingSets.c)
 *     MiAgeWorkingSet @ 0x14000BA50 (MiAgeWorkingSet.c)
 *     MiLogProcessWorkingSetsStop @ 0x14006F060 (MiLogProcessWorkingSetsStop.c)
 *     PopDiagTraceFxDefaultPepWorkerEnd @ 0x140079E34 (PopDiagTraceFxDefaultPepWorkerEnd.c)
 *     MiLogWsEmptyControl @ 0x140083B24 (MiLogWsEmptyControl.c)
 *     MiLogTrimWs @ 0x140083F9C (MiLogTrimWs.c)
 *     MmNotifyProcessInSwapTrigger @ 0x1400AA758 (MmNotifyProcessInSwapTrigger.c)
 *     MiStoreLogNotCandidate @ 0x140154D10 (MiStoreLogNotCandidate.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x140250744 (MiLogOutswappedProcessCommitReacquire.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x140250938 (MiLogOutswappedProcessCommitRelease.c)
 *     MiLogResetPagesCommitRelease @ 0x140250A28 (MiLogResetPagesCommitRelease.c)
 *     MiStoreLogFullPagefile @ 0x140267878 (MiStoreLogFullPagefile.c)
 *     MiStoreLogWriteCompleteFailure @ 0x1402678E4 (MiStoreLogWriteCompleteFailure.c)
 *     MiStoreLogWriteDisabled @ 0x140267988 (MiStoreLogWriteDisabled.c)
 *     MiStoreLogWriteIssueFailure @ 0x140267A44 (MiStoreLogWriteIssueFailure.c)
 *     MiStoreLogWriteIssueRetry @ 0x140267B8C (MiStoreLogWriteIssueRetry.c)
 *     MmStoreLogCorruptionFixed @ 0x140267CAC (MmStoreLogCorruptionFixed.c)
 *     MiLogReserveVaFailed @ 0x14074BB00 (MiLogReserveVaFailed.c)
 *     MiLogCreateImageFileMapFailure @ 0x14074C040 (MiLogCreateImageFileMapFailure.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x14074C8EC (MiLogStrongCodeDriverLoadFailure.c)
 *     MiLogCommitRequestFailed @ 0x140753DB0 (MiLogCommitRequestFailed.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x14089C6CC (MiFlushStrongCodeDriverLoadFailures.c)
 * Callees:
 *     EtwWriteEx @ 0x1400EF860 (EtwWriteEx.c)
 */

TLG_STATUS __stdcall TlgWriteEx(
        TraceLoggingHProvider hProvider,
        const void *pEventMetadata,
        ULONG64 filter,
        ULONG flags,
        LPCGUID pActivityId,
        LPCGUID pRelatedActivityId,
        UINT32 cData,
        EVENT_DATA_DESCRIPTOR *pData)
{
  ULONG v9; // ecx
  EVENT_DESCRIPTOR v11; // [rsp+40h] [rbp-18h] BYREF

  *(_DWORD *)&v11.Id = ((_DWORD)pEventMetadata - (unsigned int)&TraceLoggingMetadata) | (*(unsigned __int8 *)pEventMetadata << 24);
  *(_DWORD *)&v11.Level = *(unsigned __int16 *)((char *)pEventMetadata + 1);
  v11.Keyword = *(_QWORD *)((char *)pEventMetadata + 3);
  pData->Ptr = (ULONGLONG)hProvider->ProviderMetadataPtr;
  v9 = *hProvider->ProviderMetadataPtr;
  pData[1].Ptr = (ULONGLONG)pEventMetadata + 11;
  pData->Size = v9;
  pData->Reserved = 2;
  pData[1].Size = *(unsigned __int16 *)((char *)pEventMetadata + 11);
  pData[1].Reserved = 1;
  return EtwWriteEx(hProvider->RegHandle, &v11, 0LL, 1u, 0LL, 0LL, cData, pData);
}
