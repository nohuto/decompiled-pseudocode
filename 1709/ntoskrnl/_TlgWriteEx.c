/*
 * XREFs of _TlgWriteEx @ 0x140213AC0
 * Callers:
 *     MiLogTrimWs @ 0x14000BBA0 (MiLogTrimWs.c)
 *     MiAgeWorkingSet @ 0x14009C900 (MiAgeWorkingSet.c)
 *     MiProcessWorkingSets @ 0x14009FE30 (MiProcessWorkingSets.c)
 *     MiLogProcessWorkingSetsStop @ 0x1400BA29C (MiLogProcessWorkingSetsStop.c)
 *     MmNotifyProcessInSwapTrigger @ 0x1400BFE8C (MmNotifyProcessInSwapTrigger.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x140212208 (MiLogOutswappedProcessCommitReacquire.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x1402123FC (MiLogOutswappedProcessCommitRelease.c)
 *     MiLogResetPagesCommitRelease @ 0x1402124EC (MiLogResetPagesCommitRelease.c)
 *     MiStoreLogFullPagefile @ 0x14022C4C4 (MiStoreLogFullPagefile.c)
 *     MiStoreLogNotCandidate @ 0x14022C530 (MiStoreLogNotCandidate.c)
 *     MiStoreLogWriteCompleteFailure @ 0x14022C5F8 (MiStoreLogWriteCompleteFailure.c)
 *     MiStoreLogWriteDisabled @ 0x14022C68C (MiStoreLogWriteDisabled.c)
 *     MiStoreLogWriteIssueFailure @ 0x14022C748 (MiStoreLogWriteIssueFailure.c)
 *     MiStoreLogWriteIssueRetry @ 0x14022C890 (MiStoreLogWriteIssueRetry.c)
 *     MmStoreLogCorruptionFixed @ 0x14022D9C4 (MmStoreLogCorruptionFixed.c)
 *     MiLogWsEmptyControl @ 0x140230D80 (MiLogWsEmptyControl.c)
 *     MiLogReserveVaFailed @ 0x1406E0BD0 (MiLogReserveVaFailed.c)
 *     MiLogCreateImageFileMapFailure @ 0x1406E1280 (MiLogCreateImageFileMapFailure.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x1406E1B44 (MiLogStrongCodeDriverLoadFailure.c)
 *     MiLogCommitRequestFailed @ 0x1406E35C4 (MiLogCommitRequestFailed.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x14082955C (MiFlushStrongCodeDriverLoadFailures.c)
 * Callees:
 *     EtwWriteEx @ 0x140087CE0 (EtwWriteEx.c)
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
