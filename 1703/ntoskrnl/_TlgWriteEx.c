/*
 * XREFs of _TlgWriteEx @ 0x14020CB14
 * Callers:
 *     MiLogWsEmptyControl @ 0x14007E9D4 (MiLogWsEmptyControl.c)
 *     MiLogTrimWs @ 0x14007F7C0 (MiLogTrimWs.c)
 *     MiProcessWorkingSets @ 0x1400830E0 (MiProcessWorkingSets.c)
 *     MiLogProcessWorkingSetsStop @ 0x1400836EC (MiLogProcessWorkingSetsStop.c)
 *     MmNotifyProcessInSwapTrigger @ 0x1400B1DBC (MmNotifyProcessInSwapTrigger.c)
 *     MiAgeWorkingSet @ 0x1400D81E0 (MiAgeWorkingSet.c)
 *     MiStoreLogNotCandidate @ 0x14013DD00 (MiStoreLogNotCandidate.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x14020B310 (MiLogOutswappedProcessCommitReacquire.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x14020B504 (MiLogOutswappedProcessCommitRelease.c)
 *     MiLogResetPagesCommitRelease @ 0x14020B5F4 (MiLogResetPagesCommitRelease.c)
 *     MiStoreLogFullPagefile @ 0x140220BF4 (MiStoreLogFullPagefile.c)
 *     MiStoreLogWriteCompleteFailure @ 0x140220C60 (MiStoreLogWriteCompleteFailure.c)
 *     MiStoreLogWriteDisabled @ 0x140220CFC (MiStoreLogWriteDisabled.c)
 *     MiStoreLogWriteIssueFailure @ 0x140220DB8 (MiStoreLogWriteIssueFailure.c)
 *     MiStoreLogWriteIssueRetry @ 0x140220F00 (MiStoreLogWriteIssueRetry.c)
 *     MiLogReserveVaFailed @ 0x1406B4BC8 (MiLogReserveVaFailed.c)
 *     MiLogCreateImageFileMapFailure @ 0x1406B5128 (MiLogCreateImageFileMapFailure.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x1406B58F4 (MiLogStrongCodeDriverLoadFailure.c)
 *     MiLogCommitRequestFailed @ 0x1406B6AB0 (MiLogCommitRequestFailed.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x1408039CC (MiFlushStrongCodeDriverLoadFailures.c)
 * Callees:
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
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
