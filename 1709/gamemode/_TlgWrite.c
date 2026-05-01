/*
 * XREFs of _TlgWrite @ 0x180001000
 * Callers:
 *     DllMain @ 0x180001150 (DllMain.c)
 *     GetExpandedResourceExclusiveCpuCount @ 0x180001320 (GetExpandedResourceExclusiveCpuCount.c)
 *     ReleaseExclusiveCpuSets @ 0x1800013F0 (ReleaseExclusiveCpuSets.c)
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
  ULONG v6; // ecx
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-18h] BYREF

  *(_DWORD *)&EventDescriptor.Id = ((_DWORD)pEventMetadata - (unsigned int)&TraceLoggingMetadata) | (*(unsigned __int8 *)pEventMetadata << 24);
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)((char *)pEventMetadata + 1);
  EventDescriptor.Keyword = *(_QWORD *)((char *)pEventMetadata + 3);
  pData->Ptr = (ULONGLONG)off_180006008;
  v6 = *(unsigned __int16 *)off_180006008;
  pData[1].Ptr = (ULONGLONG)pEventMetadata + 11;
  pData->Size = v6;
  pData->Reserved = 2;
  pData[1].Size = *(unsigned __int16 *)((char *)pEventMetadata + 11);
  pData[1].Reserved = 1;
  return EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, cData, pData);
}
