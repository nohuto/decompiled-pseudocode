/*
 * XREFs of _TlgWrite @ 0x180001078
 * Callers:
 *     ?LogTelemetry@CDwmInitTelemetryAggregator@@UEAAXXZ @ 0x180001360 (-LogTelemetry@CDwmInitTelemetryAggregator@@UEAAXXZ.c)
 *     ?TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z @ 0x180001518 (-TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z.c)
 *     DllMain @ 0x180001644 (DllMain.c)
 *     DwmpCreateSessionProcess @ 0x180002E90 (DwmpCreateSessionProcess.c)
 *     DwmpTerminateSessionProcess @ 0x1800032E0 (DwmpTerminateSessionProcess.c)
 *     ?PostEvent@RestartEventData@DwmInitAsimov@@UEAAXPEBU_TlgProvider_t@@@Z @ 0x180005340 (-PostEvent@RestartEventData@DwmInitAsimov@@UEAAXPEBU_TlgProvider_t@@@Z.c)
 *     ?PostEvent@FallbackToBddEventData@DwmInitAsimov@@UEAAXPEBU_TlgProvider_t@@@Z @ 0x180005430 (-PostEvent@FallbackToBddEventData@DwmInitAsimov@@UEAAXPEBU_TlgProvider_t@@@Z.c)
 *     ?PostEvent@SessionShutdownOnCreateFailureEventData@DwmInitAsimov@@UEAAXPEBU_TlgProvider_t@@@Z @ 0x180005520 (-PostEvent@SessionShutdownOnCreateFailureEventData@DwmInitAsimov@@UEAAXPEBU_TlgProvider_t@@@Z.c)
 *     ?PostEvent@SessionShutdownOnRestartFailureEventData@DwmInitAsimov@@UEAAXPEBU_TlgProvider_t@@@Z @ 0x1800055F0 (-PostEvent@SessionShutdownOnRestartFailureEventData@DwmInitAsimov@@UEAAXPEBU_TlgProvider_t@@@Z.c)
 * Callees:
 *     <none>
 */

TLG_STATUS __stdcall TlgWrite(
        TraceLoggingHProvider hProvider,
        const void *pEventMetadata,
        LPCGUID pActivityId,
        LPCGUID pRelatedActivityId,
        UINT32 cData,
        EVENT_DATA_DESCRIPTOR *pData)
{
  ULONG v7; // ecx
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-18h] BYREF

  *(_DWORD *)&EventDescriptor.Id = ((_DWORD)pEventMetadata - (unsigned int)&TraceLoggingMetadata) | (*(unsigned __int8 *)pEventMetadata << 24);
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)((char *)pEventMetadata + 1);
  EventDescriptor.Keyword = *(_QWORD *)((char *)pEventMetadata + 3);
  pData->Ptr = *((_QWORD *)hProvider + 1);
  v7 = **((unsigned __int16 **)hProvider + 1);
  pData[1].Ptr = (ULONGLONG)pEventMetadata + 11;
  pData->Size = v7;
  pData->Reserved = 2;
  pData[1].Size = *(unsigned __int16 *)((char *)pEventMetadata + 11);
  pData[1].Reserved = 1;
  return EventWriteTransfer(*((_QWORD *)hProvider + 4), &EventDescriptor, 0LL, 0LL, cData, pData);
}
