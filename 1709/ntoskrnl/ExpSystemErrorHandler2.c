/*
 * XREFs of ExpSystemErrorHandler2 @ 0x14043AD40
 * Callers:
 *     ExpSystemErrorHandler @ 0x14018A800 (ExpSystemErrorHandler.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     PsGetCurrentServerSilo @ 0x140089070 (PsGetCurrentServerSilo.c)
 *     RtlInitAnsiString @ 0x1400AE570 (RtlInitAnsiString.c)
 *     RtlStringCbPrintfA @ 0x140139C5C (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     strcat_s @ 0x140164750 (strcat_s.c)
 *     strcpy_s @ 0x1401647F0 (strcpy_s.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     RtlAnsiStringToUnicodeString @ 0x1404DE910 (RtlAnsiStringToUnicodeString.c)
 *     RtlUnicodeStringToAnsiString @ 0x1404DF110 (RtlUnicodeStringToAnsiString.c)
 *     MmLockPagableSectionByHandle @ 0x140507380 (MmLockPagableSectionByHandle.c)
 *     RtlFindMessage @ 0x140516150 (RtlFindMessage.c)
 *     PsQuerySystemDllInfo @ 0x14053D978 (PsQuerySystemDllInfo.c)
 *     RtlUnicodeStringToOemString @ 0x14056D7A0 (RtlUnicodeStringToOemString.c)
 *     PoShutdownBugCheck @ 0x1406FC900 (PoShutdownBugCheck.c)
 *     PsTerminateServerSilo @ 0x140714A10 (PsTerminateServerSilo.c)
 *     RtlxUnicodeStringToOemSize @ 0x14071E040 (RtlxUnicodeStringToOemSize.c)
 */

__int64 __fastcall ExpSystemErrorHandler2(
        ULONG_PTR BugCheckParameter1,
        unsigned int a2,
        int a3,
        _MESSAGE_RESOURCE_ENTRY *a4,
        char a5)
{
  ULONG v7; // r15d
  int v8; // eax
  unsigned int v9; // edi
  __int64 i; // rbx
  char *v11; // r14
  char *v12; // rsi
  char *v13; // rbx
  __int64 SystemDllInfo; // rax
  void *v15; // r10
  unsigned __int64 v16; // rax
  unsigned __int16 v17; // di
  char *PoolWithTag; // rax
  __int64 v19; // rdi
  char *v20; // rax
  BYTE *Text; // r14
  __int64 v22; // rax
  unsigned int v23; // r13d
  char *v24; // rax
  char *v25; // rax
  int j; // edi
  char *v27; // rbx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  __int64 CurrentServerSilo; // rax
  __int64 v31; // rcx
  int v33; // [rsp+40h] [rbp-208h]
  PMESSAGE_RESOURCE_ENTRY MessageResourceEntry; // [rsp+68h] [rbp-1E0h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-1D8h] BYREF
  const char *v36; // [rsp+80h] [rbp-1C8h]
  _STRING v37; // [rsp+88h] [rbp-1C0h] BYREF
  _STRING SourceString; // [rsp+98h] [rbp-1B0h] BYREF
  _STRING DestinationString; // [rsp+A8h] [rbp-1A0h] BYREF
  ULONG_PTR BugCheckParameter2[5]; // [rsp+B8h] [rbp-190h] BYREF
  char pszFormat[32]; // [rsp+E0h] [rbp-168h] BYREF
  char pszDest[256]; // [rsp+100h] [rbp-148h] BYREF

  v7 = BugCheckParameter1;
  MessageResourceEntry = a4;
  v8 = 5;
  if ( a2 <= 5 )
    v8 = a2;
  v9 = v8;
  LODWORD(v36) = v8;
  pszFormat[0] = 0;
  memset(BugCheckParameter2, 0, sizeof(BugCheckParameter2));
  memmove(BugCheckParameter2, a4, 8LL * v9);
  DestinationString.Buffer = 0LL;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v33 = i;
    if ( (unsigned int)i >= v9 )
      break;
    if ( _bittest(&a3, i) )
    {
      strcat_s(pszFormat, 0x20uLL, " %s");
      if ( RtlUnicodeStringToAnsiString(&DestinationString, *((PCUNICODE_STRING *)&a4->Length + i), 1u) < 0 )
        BugCheckParameter2[(unsigned int)i] = (ULONG_PTR)L"???";
      else
        BugCheckParameter2[(unsigned int)i] = (ULONG_PTR)DestinationString.Buffer;
    }
    else
    {
      strcat_s(pszFormat, 0x20uLL, " %x");
    }
  }
  strcat_s(pszFormat, 0x20uLL, "\n");
  v11 = pszFormat;
  v12 = "Unknown Hard Error";
  v13 = "Unknown Hard Error";
  SystemDllInfo = PsQuerySystemDllInfo(0LL);
  if ( SystemDllInfo )
  {
    v15 = *(void **)(SystemDllInfo + 24);
    if ( KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess )
      v15 = *(void **)(SystemDllInfo + 32);
    if ( RtlFindMessage(v15, 0xBu, (_BYTE)NlsMbCodePageTag != 0 ? 0x409 : 0, v7, &MessageResourceEntry) < 0 )
    {
      v13 = "Unknown Hard Error";
      v11 = "Unknown Hard Error";
      goto LABEL_45;
    }
    if ( (MessageResourceEntry->Flags & 1) != 0 )
    {
      RtlInitUnicodeString(&UnicodeString, (PCWSTR)MessageResourceEntry->Text);
      if ( (_BYTE)NlsMbCodePageTag )
        LOWORD(v16) = RtlxUnicodeStringToOemSize(&UnicodeString);
      else
        v16 = ((unsigned __int64)UnicodeString.Length + 2) >> 1;
      SourceString.Length = v16;
      v17 = v16 + 16;
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(unsigned __int16)v16 + 16, 0x20727245u);
      v13 = PoolWithTag;
      if ( !PoolWithTag )
        goto LABEL_24;
      SourceString.MaximumLength = v17;
      SourceString.Buffer = PoolWithTag;
      if ( RtlUnicodeStringToAnsiString(&SourceString, &UnicodeString, 0) < 0 )
      {
        ExFreePoolWithTag(v13, 0);
LABEL_24:
        v13 = "Unknown Hard Error";
        v20 = "Unknown Hard Error";
        v19 = -1LL;
        goto LABEL_31;
      }
      v19 = -1LL;
    }
    else
    {
      Text = MessageResourceEntry->Text;
      v19 = -1LL;
      v22 = -1LL;
      do
        ++v22;
      while ( Text[v22] );
      v23 = v22 + 16;
      v24 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(v22 + 16), 0x20727245u);
      v13 = v24;
      if ( !v24 )
      {
        v20 = "Unknown Hard Error";
        v13 = "Unknown Hard Error";
LABEL_31:
        if ( v13 == "Unknown Hard Error" )
        {
          j = v33;
        }
        else
        {
          v25 = v13;
          do
            ++v19;
          while ( v13[v19] );
          while ( (_DWORD)v19 && *v25 >= 32 )
          {
            ++v25;
            LODWORD(v19) = v19 - 1;
          }
          *v25 = 0;
          v20 = v25 + 1;
          for ( j = v19 - 1; j && *v20 && *v20 <= 32; --j )
            ++v20;
        }
        v11 = (char *)qword_140429230;
        if ( j )
          v11 = v20;
        goto LABEL_45;
      }
      strcpy_s(v24, v23, (const char *)Text);
    }
    v20 = pszFormat;
    goto LABEL_31;
  }
LABEL_45:
  if ( RtlStringCbPrintfA(pszDest, 0x100uLL, "\nSTOP: %lx %s\n", v7, v13) < 0 )
    RtlStringCbPrintfA(pszDest, 0x100uLL, "\nHardError %lx\n", v7);
  MmLockPagableSectionByHandle(ExPageLockHandle);
  v36 = "Unknown Hard Error";
  v27 = "Unknown Hard Error";
  MessageResourceEntry = (PMESSAGE_RESOURCE_ENTRY)"Unknown Hard Error";
  RtlInitAnsiString(&SourceString, pszDest);
  if ( RtlAnsiStringToUnicodeString(&UnicodeString, &SourceString, 1u) >= 0 )
  {
    if ( (_BYTE)NlsMbOemCodePageTag )
      LOWORD(v28) = RtlxUnicodeStringToOemSize(&UnicodeString);
    else
      v28 = ((unsigned __int64)UnicodeString.Length + 2) >> 1;
    v37.Length = v28;
    v37.MaximumLength = v28;
    v12 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned __int16)v28, 0x20727245u);
    v37.Buffer = v12;
    v36 = v12;
    if ( v12 )
      RtlUnicodeStringToOemString(&v37, &UnicodeString, 0);
  }
  if ( RtlStringCbPrintfA(
         pszDest,
         0x100uLL,
         v11,
         BugCheckParameter2[0],
         BugCheckParameter2[1],
         BugCheckParameter2[2],
         BugCheckParameter2[3]) < 0 )
    RtlStringCbPrintfA(
      pszDest,
      0x100uLL,
      "Exception Processing Message %lx Parameters %Ix %Ix %Ix %Ix",
      v7,
      LODWORD(BugCheckParameter2[0]),
      LODWORD(BugCheckParameter2[1]),
      LODWORD(BugCheckParameter2[2]),
      LODWORD(BugCheckParameter2[3]));
  RtlInitAnsiString(&SourceString, pszDest);
  if ( RtlAnsiStringToUnicodeString(&UnicodeString, &SourceString, 1u) >= 0 )
  {
    if ( (_BYTE)NlsMbOemCodePageTag )
      LOWORD(v29) = RtlxUnicodeStringToOemSize(&UnicodeString);
    else
      v29 = ((unsigned __int64)UnicodeString.Length + 2) >> 1;
    v37.Length = v29;
    v37.MaximumLength = v29;
    v27 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned __int16)v29, 0x20727245u);
    v37.Buffer = v27;
    if ( v27 )
      RtlUnicodeStringToOemString(&v37, &UnicodeString, 0);
  }
  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( !CurrentServerSilo )
  {
    if ( a5 )
    {
      LOBYTE(v31) = 1;
      PoShutdownBugCheck(v31, 76LL, v7, BugCheckParameter2, v12, v27);
    }
    KeBugCheckEx(0x4Cu, v7, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v12, (ULONG_PTR)v27);
  }
  return PsTerminateServerSilo(CurrentServerSilo, v7);
}
