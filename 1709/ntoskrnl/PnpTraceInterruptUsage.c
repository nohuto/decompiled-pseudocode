/*
 * XREFs of PnpTraceInterruptUsage @ 0x1400B2DC0
 * Callers:
 *     IopConnectInterrupt @ 0x1404EBE88 (IopConnectInterrupt.c)
 *     IoDisconnectInterrupt @ 0x14058E500 (IoDisconnectInterrupt.c)
 * Callees:
 *     EtwWriteEx @ 0x140087CE0 (EtwWriteEx.c)
 *     _TlgKeywordOn @ 0x1400BA32C (_TlgKeywordOn.c)
 *     ExtractAggregateFieldTypes @ 0x1400BA460 (ExtractAggregateFieldTypes.c)
 *     InsertEventEntryInLookUpTable @ 0x1400BA53C (InsertEventEntryInLookUpTable.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

char __fastcall PnpTraceInterruptUsage(int a1)
{
  ETWENABLECALLBACK *v1; // rax
  unsigned __int64 v2; // rdx
  __int64 v3; // r9
  char v4; // al
  int v5; // r8d
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp+7h] BYREF
  __int64 v8; // [rsp+50h] [rbp+17h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp+1Fh] BYREF
  void *v10; // [rsp+68h] [rbp+2Fh]
  int v11; // [rsp+70h] [rbp+37h]
  int v12; // [rsp+74h] [rbp+3Bh]
  __int64 *v13; // [rsp+78h] [rbp+3Fh]
  int v14; // [rsp+80h] [rbp+47h]
  int v15; // [rsp+84h] [rbp+4Bh]

  LOBYTE(v1) = a1;
  PnpTraceInterruptCount += a1;
  if ( stru_140354A70.LevelPlus1 > 5 )
  {
    LOBYTE(v1) = TlgKeywordOn(&stru_140354A70, 0x400000000000uLL);
    if ( (_BYTE)v1 )
    {
      v15 = 0;
      v13 = &v8;
      v8 = v3;
      v14 = 8;
      *(_DWORD *)&EventDescriptor.Level = 5;
      UserData.Ptr = (ULONGLONG)stru_140354A70.ProviderMetadataPtr;
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_1402CFCFD - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      EventDescriptor.Keyword = v2;
      UserData.Size = *stru_140354A70.ProviderMetadataPtr;
      v10 = &unk_1402CFD08;
      v1 = RegisteredProviderEtwCallback;
      UserData.Reserved = 2;
      v11 = 43;
      v12 = 1;
      if ( (ETWENABLECALLBACK *)stru_140354A70.EnableCallback == RegisteredProviderEtwCallback )
      {
        v4 = ExtractAggregateFieldTypes(
               ((unsigned int)&unk_1402CFCFD - (unsigned int)&TraceLoggingMetadata) | 0xB000000,
               &UserData);
        if ( v4 )
        {
          LOBYTE(v5) = 3;
          LOBYTE(v1) = InsertEventEntryInLookUpTable(
                         (unsigned int)&stru_140354A70,
                         (unsigned int)&EventDescriptor,
                         v5,
                         (unsigned int)&UserData,
                         v4);
        }
        else
        {
          LOBYTE(v1) = EtwWriteEx(stru_140354A70.RegHandle, &EventDescriptor, 0LL, 0, 0LL, 0LL, 3u, &UserData);
        }
      }
    }
  }
  return (char)v1;
}
