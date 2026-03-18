/*
 * XREFs of NtUserWin32kSysCallFilterStub @ 0x1C00E5D80
 * Callers:
 *     <none>
 * Callees:
 *     _TlgCreateWsz @ 0x1C00073E8 (_TlgCreateWsz.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     _TlgKeywordOn @ 0x1C00533FC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     ?GetProcessAppContainerSid@@YAPEAGXZ @ 0x1C00DE840 (-GetProcessAppContainerSid@@YAPEAGXZ.c)
 *     ?GetProcessCommandLine@@YAPEAGXZ @ 0x1C00DE92C (-GetProcessCommandLine@@YAPEAGXZ.c)
 *     _TlgCreateSz @ 0x1C00E5FE4 (_TlgCreateSz.c)
 *     EtwSyscallFilterMessage @ 0x1C00FCD20 (EtwSyscallFilterMessage.c)
 *     ExtractAggregateFieldTypes @ 0x1C0156BA0 (ExtractAggregateFieldTypes.c)
 *     InsertEventEntryInLookUpTable @ 0x1C0156D70 (InsertEventEntryInLookUpTable.c)
 */

char __fastcall NtUserWin32kSysCallFilterStub(__int64 psz, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  unsigned __int16 *ProcessAppContainerSid; // r14
  unsigned __int16 *ProcessCommandLine; // rax
  const WCHAR *v8; // r15
  const WCHAR *v9; // r12
  const CHAR *v10; // r13
  __int64 v11; // rsi
  ETWENABLECALLBACK *v12; // rax
  int v13; // r10d
  char v14; // al
  int v15; // ecx
  int v16; // r8d
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v20[20]; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+F0h] [rbp-10h] BYREF
  void *v22; // [rsp+100h] [rbp+0h]
  int v23; // [rsp+108h] [rbp+8h]
  int v24; // [rsp+10Ch] [rbp+Ch]
  __int64 *v25; // [rsp+110h] [rbp+10h]
  int v26; // [rsp+118h] [rbp+18h]
  int v27; // [rsp+11Ch] [rbp+1Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+120h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+130h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+140h] [rbp+40h] BYREF

  v4 = a2;
  ProcessAppContainerSid = GetProcessAppContainerSid(psz, a2, a3, a4);
  ProcessCommandLine = GetProcessCommandLine();
  v8 = &word_1C0163008;
  v9 = &word_1C0163008;
  v10 = (const CHAR *)&unk_1C016D198;
  if ( ProcessAppContainerSid )
    v9 = ProcessAppContainerSid;
  v11 = (__int64)ProcessCommandLine;
  if ( ProcessCommandLine )
    v8 = ProcessCommandLine;
  if ( psz )
    v10 = (const CHAR *)psz;
  EtwSyscallFilterMessage(v10, v9, v8);
  LOBYTE(v12) = PsIsWin32KFilterAuditEnabled();
  if ( (_BYTE)v12 )
  {
    LOBYTE(v12) = (_BYTE)gafServiceFilterAuditCache;
    if ( !_interlockedbittestandset(
            (volatile signed __int32 *)gafServiceFilterAuditCache + ((unsigned __int64)v4 >> 5),
            v4 & 0x1F) )
    {
      memset(v20, 0, 0x98uLL);
      LODWORD(v20[0]) = -1073740791;
      v20[2] = v4;
      LODWORD(v20[3]) = 2;
      v20[4] = 41LL;
      v20[5] = v4;
      LOBYTE(v12) = WerSubmitUserCrashReport(-2LL, v20, 0LL, 30LL, 3);
    }
    if ( dword_1C01867E0 > 5u )
    {
      LOBYTE(v12) = TlgKeywordOn((TraceLoggingHProvider)&dword_1C01867E0, 0x800000000000uLL);
      if ( (_BYTE)v12 )
      {
        v27 = 0;
        v25 = &v19;
        v19 = 1LL;
        v26 = 8;
        TlgCreateSz(&pDesc, v10);
        TlgCreateWsz(&v29, v9);
        TlgCreateWsz(&v30, v8);
        *(_DWORD *)&EventDescriptor.Level = 5;
        EventDescriptor.Keyword = 0x800000000000LL;
        UserData.Ptr = (ULONGLONG)off_1C01867E8;
        *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_1C016A066 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
        UserData.Size = *(unsigned __int16 *)off_1C01867E8;
        v22 = &unk_1C016A071;
        v12 = RegisteredProviderEtwCallback;
        UserData.Reserved = 2;
        v23 = 95;
        v24 = v13;
        if ( (ETWENABLECALLBACK *)qword_1C0186808 == RegisteredProviderEtwCallback )
        {
          v14 = ExtractAggregateFieldTypes(
                  ((unsigned int)&unk_1C016A066 - (unsigned int)&TraceLoggingMetadata) | 0xB000000,
                  &UserData);
          if ( v14 )
          {
            LOBYTE(v16) = 6;
            LOBYTE(v12) = InsertEventEntryInLookUpTable(
                            v15,
                            (unsigned int)&EventDescriptor,
                            v16,
                            (unsigned int)&UserData,
                            v14);
          }
          else
          {
            LOBYTE(v12) = EtwWriteTransfer(qword_1C0186800, &EventDescriptor, 0LL, 0LL, 6u, &UserData);
          }
        }
      }
    }
  }
  if ( ProcessAppContainerSid )
    LOBYTE(v12) = Win32FreePool((__int64)ProcessAppContainerSid);
  if ( v11 )
    LOBYTE(v12) = Win32FreePool(v11);
  return (char)v12;
}
