/*
 * XREFs of _TlgWriteAgg @ 0x1C01567AC
 * Callers:
 *     NtUserWin32kSysCallFilterStub @ 0x1C00EB9F0 (NtUserWin32kSysCallFilterStub.c)
 * Callees:
 *     ExtractAggregateFieldTypes @ 0x1C01561B0 (ExtractAggregateFieldTypes.c)
 *     InsertEventEntryInLookUpTable @ 0x1C01563A0 (InsertEventEntryInLookUpTable.c)
 */

NTSTATUS __fastcall TlgWriteAgg(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  ULONGLONG v6; // rax
  unsigned __int16 *v7; // rdx
  NTSTATUS result; // eax
  unsigned __int8 AggregateFieldTypes; // al
  __int64 v10; // rcx
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-18h] BYREF

  *(_DWORD *)&EventDescriptor.Id = ((_DWORD)a2 - (unsigned int)&TraceLoggingMetadata) | (*a2 << 24);
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  v6 = *(_QWORD *)(a2 + 3);
  v7 = (unsigned __int16 *)(a2 + 11);
  EventDescriptor.Keyword = v6;
  UserData->Ptr = (ULONGLONG)off_1C01887E8;
  UserData->Size = *(unsigned __int16 *)off_1C01887E8;
  UserData->Reserved = 2;
  UserData[1].Ptr = (ULONGLONG)v7;
  UserData[1].Size = *v7;
  result = -1073741811;
  UserData[1].Reserved = 1;
  if ( (ETWENABLECALLBACK *)qword_1C0188808 == RegisteredProviderEtwCallback )
  {
    AggregateFieldTypes = ExtractAggregateFieldTypes((__int64)RegisteredProviderEtwCallback, (__int64)UserData);
    if ( AggregateFieldTypes )
      return InsertEventEntryInLookUpTable(
               v10,
               (__int128 *)&EventDescriptor,
               7u,
               (__int64)UserData,
               AggregateFieldTypes);
    else
      return EtwWriteTransfer(qword_1C0188800, &EventDescriptor, 0LL, 0LL, 7u, UserData);
  }
  return result;
}
