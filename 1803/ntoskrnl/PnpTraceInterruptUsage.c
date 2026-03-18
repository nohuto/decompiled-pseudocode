/*
 * XREFs of PnpTraceInterruptUsage @ 0x140168E28
 * Callers:
 *     IoDisconnectInterrupt @ 0x14060B8E0 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x14060BCDC (IopConnectInterrupt.c)
 * Callees:
 *     _TlgKeywordOn @ 0x14006F0F0 (_TlgKeywordOn.c)
 *     InsertEventEntryInLookUpTable @ 0x14006F1E0 (InsertEventEntryInLookUpTable.c)
 *     ExtractAggregateFieldTypes @ 0x14006F550 (ExtractAggregateFieldTypes.c)
 *     EtwWriteEx @ 0x1400EF860 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

char __fastcall PnpTraceInterruptUsage(int a1)
{
  ETWENABLECALLBACK *v1; // rax
  unsigned __int64 v2; // rdx
  __int64 v3; // r9
  unsigned __int8 AggregateFieldTypes; // al
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp+7h] BYREF
  __int64 v7; // [rsp+50h] [rbp+17h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp+1Fh] BYREF
  void *v9; // [rsp+68h] [rbp+2Fh]
  int v10; // [rsp+70h] [rbp+37h]
  int v11; // [rsp+74h] [rbp+3Bh]
  __int64 *v12; // [rsp+78h] [rbp+3Fh]
  int v13; // [rsp+80h] [rbp+47h]
  int v14; // [rsp+84h] [rbp+4Bh]

  LOBYTE(v1) = a1;
  PnpTraceInterruptCount += a1;
  if ( stru_140397160.LevelPlus1 > 5 )
  {
    LOBYTE(v1) = TlgKeywordOn(&stru_140397160, 0x400000000000uLL);
    if ( (_BYTE)v1 )
    {
      v14 = 0;
      v12 = &v7;
      v7 = v3;
      v13 = 8;
      *(_DWORD *)&EventDescriptor.Level = 5;
      UserData.Ptr = (ULONGLONG)stru_140397160.ProviderMetadataPtr;
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_1403096C9 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      EventDescriptor.Keyword = v2;
      UserData.Size = *stru_140397160.ProviderMetadataPtr;
      v9 = &unk_1403096D4;
      v1 = TlgAggregateInternalRegisteredProviderEtwCallback;
      UserData.Reserved = 2;
      v10 = 43;
      v11 = 1;
      if ( (ETWENABLECALLBACK *)stru_140397160.EnableCallback == TlgAggregateInternalRegisteredProviderEtwCallback )
      {
        AggregateFieldTypes = ExtractAggregateFieldTypes(
                                ((unsigned int)&unk_1403096C9 - (unsigned int)&TraceLoggingMetadata) | 0xB000000,
                                (__int64)&UserData);
        if ( AggregateFieldTypes )
          LOBYTE(v1) = InsertEventEntryInLookUpTable(
                         (__int64)&stru_140397160,
                         &EventDescriptor,
                         3u,
                         (__int64)&UserData,
                         AggregateFieldTypes);
        else
          LOBYTE(v1) = EtwWriteEx(stru_140397160.RegHandle, &EventDescriptor, 0LL, 0, 0LL, 0LL, 3u, &UserData);
      }
    }
  }
  return (char)v1;
}
