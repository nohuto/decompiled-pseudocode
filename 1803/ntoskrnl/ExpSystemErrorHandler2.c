/*
 * XREFs of ExpSystemErrorHandler2 @ 0x140487900
 * Callers:
 *     ExpSystemErrorHandler @ 0x1401B44B0 (ExpSystemErrorHandler.c)
 * Callees:
 *     RtlInitAnsiString @ 0x14006CE80 (RtlInitAnsiString.c)
 *     PsGetCurrentServerSilo @ 0x1400F17B0 (PsGetCurrentServerSilo.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfA @ 0x140171A78 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     strcat_s @ 0x14018E620 (strcat_s.c)
 *     strcpy_s @ 0x14018E6D0 (strcpy_s.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlAnsiStringToUnicodeString @ 0x140518030 (RtlAnsiStringToUnicodeString.c)
 *     RtlUnicodeStringToAnsiString @ 0x140518490 (RtlUnicodeStringToAnsiString.c)
 *     MmLockPagableSectionByHandle @ 0x14053EAD0 (MmLockPagableSectionByHandle.c)
 *     PsQuerySystemDllInfo @ 0x14055FF3C (PsQuerySystemDllInfo.c)
 *     RtlFindMessage @ 0x1405BB760 (RtlFindMessage.c)
 *     RtlUnicodeStringToOemString @ 0x140605CC0 (RtlUnicodeStringToOemString.c)
 *     PoShutdownBugCheck @ 0x140762AF0 (PoShutdownBugCheck.c)
 *     PsTerminateServerSilo @ 0x140778C00 (PsTerminateServerSilo.c)
 *     RtlxUnicodeStringToOemSize @ 0x1407817D0 (RtlxUnicodeStringToOemSize.c)
 */

__int64 __fastcall ExpSystemErrorHandler2(
        ULONG MessageId,
        unsigned int a2,
        int a3,
        _MESSAGE_RESOURCE_ENTRY *a4,
        char a5)
{
  int v8; // eax
  unsigned int v9; // edi
  __int64 i; // rbx
  char *Buffer; // rax
  char *v12; // r14
  char *v13; // rsi
  char *v14; // rbx
  __int64 SystemDllInfo; // rax
  void *v16; // r10
  unsigned __int64 v17; // rax
  __int16 v18; // di
  char *PoolWithTag; // rax
  char *v20; // rax
  __int64 v21; // rdi
  BYTE *Text; // r13
  __int64 v23; // rax
  unsigned int v24; // r14d
  char *v25; // rax
  char *v26; // rax
  int j; // edi
  char *v28; // rbx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  __int64 CurrentServerSilo; // rax
  __int64 v32; // rcx
  int v34; // [rsp+40h] [rbp-218h]
  NTSTATUS v35; // [rsp+50h] [rbp-208h]
  PMESSAGE_RESOURCE_ENTRY MessageResourceEntry; // [rsp+68h] [rbp-1F0h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-1E8h] BYREF
  const char *v38; // [rsp+80h] [rbp-1D8h]
  _STRING v39; // [rsp+88h] [rbp-1D0h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+98h] [rbp-1C0h]
  _STRING SourceString; // [rsp+A0h] [rbp-1B8h] BYREF
  _STRING DestinationString; // [rsp+B0h] [rbp-1A8h] BYREF
  ULONG_PTR BugCheckParameter2[5]; // [rsp+C0h] [rbp-198h] BYREF
  char pszFormat[40]; // [rsp+E8h] [rbp-170h] BYREF
  char pszDest[256]; // [rsp+110h] [rbp-148h] BYREF

  LODWORD(BugCheckParameter1) = MessageId;
  MessageResourceEntry = a4;
  v8 = 5;
  if ( a2 <= 5 )
    v8 = a2;
  v9 = v8;
  LODWORD(v38) = v8;
  pszFormat[0] = 0;
  memset(BugCheckParameter2, 0, sizeof(BugCheckParameter2));
  memmove(BugCheckParameter2, a4, 8LL * v9);
  DestinationString.Buffer = 0LL;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v34 = i;
    if ( (unsigned int)i >= v9 )
      break;
    if ( _bittest(&a3, i) )
    {
      strcat_s(pszFormat, 0x20uLL, " %s");
      v35 = RtlUnicodeStringToAnsiString(&DestinationString, *((PCUNICODE_STRING *)&a4->Length + i), 1u);
      Buffer = (char *)L"???";
      if ( v35 >= 0 )
        Buffer = DestinationString.Buffer;
      BugCheckParameter2[(unsigned int)i] = (ULONG_PTR)Buffer;
    }
    else
    {
      strcat_s(pszFormat, 0x20uLL, " %x");
    }
  }
  strcat_s(pszFormat, 0x20uLL, "\n");
  v12 = pszFormat;
  v13 = "Unknown Hard Error";
  v14 = "Unknown Hard Error";
  SystemDllInfo = PsQuerySystemDllInfo(0LL);
  if ( SystemDllInfo )
  {
    v16 = *(void **)(SystemDllInfo + 24);
    if ( KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess )
      v16 = *(void **)(SystemDllInfo + 32);
    if ( RtlFindMessage(v16, 0xBu, (_BYTE)NlsMbCodePageTag != 0 ? 0x409 : 0, MessageId, &MessageResourceEntry) < 0 )
    {
      v14 = "Unknown Hard Error";
      v12 = "Unknown Hard Error";
      goto LABEL_45;
    }
    if ( (MessageResourceEntry->Flags & 1) != 0 )
    {
      RtlInitUnicodeString(&UnicodeString, (PCWSTR)MessageResourceEntry->Text);
      if ( (_BYTE)NlsMbCodePageTag )
        LOWORD(v17) = RtlxUnicodeStringToOemSize(&UnicodeString);
      else
        v17 = ((unsigned __int64)UnicodeString.Length + 2) >> 1;
      v18 = v17;
      SourceString.Length = v17;
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(unsigned __int16)v17 + 16, 0x20727245u);
      v14 = PoolWithTag;
      if ( !PoolWithTag )
        goto LABEL_23;
      SourceString.MaximumLength = v18 + 16;
      SourceString.Buffer = PoolWithTag;
      if ( RtlUnicodeStringToAnsiString(&SourceString, &UnicodeString, 0) < 0 )
      {
        ExFreePoolWithTag(v14, 0);
LABEL_23:
        v14 = "Unknown Hard Error";
        v20 = "Unknown Hard Error";
        v21 = -1LL;
        goto LABEL_31;
      }
      v21 = -1LL;
    }
    else
    {
      Text = MessageResourceEntry->Text;
      v21 = -1LL;
      v23 = -1LL;
      do
        ++v23;
      while ( Text[v23] );
      v24 = v23 + 16;
      v25 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(v23 + 16), 0x20727245u);
      v14 = v25;
      if ( !v25 )
      {
        v20 = "Unknown Hard Error";
        v14 = "Unknown Hard Error";
LABEL_31:
        if ( v14 == "Unknown Hard Error" )
        {
          j = v34;
        }
        else
        {
          v26 = v14;
          do
            ++v21;
          while ( v14[v21] );
          while ( (_DWORD)v21 && *v26 >= 32 )
          {
            ++v26;
            LODWORD(v21) = v21 - 1;
          }
          *v26 = 0;
          v20 = v26 + 1;
          for ( j = v21 - 1; j && *v20 && *v20 <= 32; --j )
            ++v20;
        }
        v12 = algn_14047CDB0;
        if ( j )
          v12 = v20;
        goto LABEL_45;
      }
      strcpy_s(v25, v24, (const char *)Text);
    }
    v20 = pszFormat;
    goto LABEL_31;
  }
LABEL_45:
  if ( RtlStringCbPrintfA(pszDest, 0x100uLL, "\nSTOP: %lx %s\n", MessageId, v14) < 0 )
    RtlStringCbPrintfA(pszDest, 0x100uLL, "\nHardError %lx\n", MessageId);
  MmLockPagableSectionByHandle(ExPageLockHandle);
  v38 = "Unknown Hard Error";
  v28 = "Unknown Hard Error";
  MessageResourceEntry = (PMESSAGE_RESOURCE_ENTRY)"Unknown Hard Error";
  RtlInitAnsiString(&SourceString, pszDest);
  if ( RtlAnsiStringToUnicodeString(&UnicodeString, &SourceString, 1u) >= 0 )
  {
    if ( (_BYTE)NlsMbOemCodePageTag )
      LOWORD(v29) = RtlxUnicodeStringToOemSize(&UnicodeString);
    else
      v29 = ((unsigned __int64)UnicodeString.Length + 2) >> 1;
    v39.Length = v29;
    v39.MaximumLength = v29;
    v13 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned __int16)v29, 0x20727245u);
    v39.Buffer = v13;
    v38 = v13;
    if ( v13 )
      RtlUnicodeStringToOemString(&v39, &UnicodeString, 0);
  }
  if ( RtlStringCbPrintfA(
         pszDest,
         0x100uLL,
         v12,
         BugCheckParameter2[0],
         BugCheckParameter2[1],
         BugCheckParameter2[2],
         BugCheckParameter2[3]) < 0 )
    RtlStringCbPrintfA(
      pszDest,
      0x100uLL,
      "Exception Processing Message %lx Parameters %Ix %Ix %Ix %Ix",
      MessageId,
      LODWORD(BugCheckParameter2[0]),
      LODWORD(BugCheckParameter2[1]),
      LODWORD(BugCheckParameter2[2]),
      LODWORD(BugCheckParameter2[3]));
  RtlInitAnsiString(&SourceString, pszDest);
  if ( RtlAnsiStringToUnicodeString(&UnicodeString, &SourceString, 1u) >= 0 )
  {
    if ( (_BYTE)NlsMbOemCodePageTag )
      LOWORD(v30) = RtlxUnicodeStringToOemSize(&UnicodeString);
    else
      v30 = ((unsigned __int64)UnicodeString.Length + 2) >> 1;
    v39.Length = v30;
    v39.MaximumLength = v30;
    v28 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned __int16)v30, 0x20727245u);
    v39.Buffer = v28;
    if ( v28 )
      RtlUnicodeStringToOemString(&v39, &UnicodeString, 0);
  }
  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( !CurrentServerSilo )
  {
    if ( a5 )
    {
      LOBYTE(v32) = 1;
      PoShutdownBugCheck(v32, 76LL, (unsigned int)BugCheckParameter1, BugCheckParameter2, v13, v28);
    }
    KeBugCheckEx(0x4Cu, (unsigned int)BugCheckParameter1, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v13, (ULONG_PTR)v28);
  }
  return PsTerminateServerSilo(CurrentServerSilo);
}
