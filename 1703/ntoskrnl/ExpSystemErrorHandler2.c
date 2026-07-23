/*
 * XREFs of ExpSystemErrorHandler2 @ 0x14041B230
 * Callers:
 *     ExpSystemErrorHandler @ 0x14018AB00 (ExpSystemErrorHandler.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1400852C0 (RtlInitAnsiString.c)
 *     PsGetCurrentServerSilo @ 0x140094960 (PsGetCurrentServerSilo.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfA @ 0x1401556EC (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     strcat_s @ 0x14016FF50 (strcat_s.c)
 *     strcpy_s @ 0x14016FFF0 (strcpy_s.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlFindMessage @ 0x140429F70 (RtlFindMessage.c)
 *     RtlUnicodeStringToOemString @ 0x140433750 (RtlUnicodeStringToOemString.c)
 *     PsQuerySystemDllInfo @ 0x1404499AC (PsQuerySystemDllInfo.c)
 *     MmLockPagableSectionByHandle @ 0x1404B2EC0 (MmLockPagableSectionByHandle.c)
 *     RtlAnsiStringToUnicodeString @ 0x1404C0A50 (RtlAnsiStringToUnicodeString.c)
 *     RtlUnicodeStringToAnsiString @ 0x1404C1180 (RtlUnicodeStringToAnsiString.c)
 *     PoShutdownBugCheck @ 0x1406C9EC0 (PoShutdownBugCheck.c)
 *     PsTerminateServerSilo @ 0x1406DE560 (PsTerminateServerSilo.c)
 *     RtlxUnicodeStringToOemSize @ 0x1406E5B30 (RtlxUnicodeStringToOemSize.c)
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
  unsigned __int64 v16; // rdi
  char *PoolWithTag; // rax
  __int64 v18; // rdi
  char *v19; // rax
  BYTE *Text; // r13
  __int64 v21; // rax
  unsigned int v22; // r14d
  char *v23; // rax
  char *v24; // rax
  int j; // edi
  char *v26; // rbx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  __int64 CurrentServerSilo; // rax
  __int64 v30; // rcx
  int v32; // [rsp+40h] [rbp-208h]
  PMESSAGE_RESOURCE_ENTRY MessageResourceEntry; // [rsp+68h] [rbp-1E0h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-1D8h] BYREF
  const char *v35; // [rsp+80h] [rbp-1C8h]
  _STRING v36; // [rsp+88h] [rbp-1C0h] BYREF
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
  LODWORD(v35) = v8;
  pszFormat[0] = 0;
  memset(BugCheckParameter2, 0, sizeof(BugCheckParameter2));
  memmove(BugCheckParameter2, a4, 8LL * v9);
  DestinationString.Buffer = 0LL;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v32 = i;
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
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned __int16)v16 + 16LL, 0x20727245u);
      v13 = PoolWithTag;
      if ( !PoolWithTag )
        goto LABEL_24;
      SourceString.MaximumLength = v16 + 16;
      SourceString.Buffer = PoolWithTag;
      if ( RtlUnicodeStringToAnsiString(&SourceString, &UnicodeString, 0) < 0 )
      {
        ExFreePoolWithTag(v13, 0);
LABEL_24:
        v13 = "Unknown Hard Error";
        v19 = "Unknown Hard Error";
        v18 = -1LL;
        goto LABEL_31;
      }
      v18 = -1LL;
    }
    else
    {
      Text = MessageResourceEntry->Text;
      v18 = -1LL;
      v21 = -1LL;
      do
        ++v21;
      while ( Text[v21] );
      v22 = v21 + 16;
      v23 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(v21 + 16), 0x20727245u);
      v13 = v23;
      if ( !v23 )
      {
        v19 = "Unknown Hard Error";
        v13 = "Unknown Hard Error";
LABEL_31:
        if ( v13 == "Unknown Hard Error" )
        {
          j = v32;
        }
        else
        {
          v24 = v13;
          do
            ++v18;
          while ( v13[v18] );
          while ( (_DWORD)v18 && *v24 >= 32 )
          {
            ++v24;
            LODWORD(v18) = v18 - 1;
          }
          *v24 = 0;
          v19 = v24 + 1;
          for ( j = v18 - 1; j && *v19 && *v19 <= 32; --j )
            ++v19;
        }
        v11 = (char *)File;
        if ( j )
          v11 = v19;
        goto LABEL_45;
      }
      strcpy_s(v23, v22, (const char *)Text);
    }
    v19 = pszFormat;
    goto LABEL_31;
  }
LABEL_45:
  if ( RtlStringCbPrintfA(pszDest, 0x100uLL, "\nSTOP: %lx %s\n", v7, v13) < 0 )
    RtlStringCbPrintfA(pszDest, 0x100uLL, "\nHardError %lx\n", v7);
  MmLockPagableSectionByHandle(ExPageLockHandle);
  v35 = "Unknown Hard Error";
  v26 = "Unknown Hard Error";
  MessageResourceEntry = (PMESSAGE_RESOURCE_ENTRY)"Unknown Hard Error";
  RtlInitAnsiString(&SourceString, pszDest);
  if ( RtlAnsiStringToUnicodeString(&UnicodeString, &SourceString, 1u) >= 0 )
  {
    if ( (_BYTE)NlsMbOemCodePageTag )
      LOWORD(v27) = RtlxUnicodeStringToOemSize(&UnicodeString);
    else
      v27 = ((unsigned __int64)UnicodeString.Length + 2) >> 1;
    v36.Length = v27;
    v36.MaximumLength = v27;
    v12 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned __int16)v27, 0x20727245u);
    v36.Buffer = v12;
    v35 = v12;
    if ( v12 )
      RtlUnicodeStringToOemString(&v36, &UnicodeString, 0);
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
      LOWORD(v28) = RtlxUnicodeStringToOemSize(&UnicodeString);
    else
      v28 = ((unsigned __int64)UnicodeString.Length + 2) >> 1;
    v36.Length = v28;
    v36.MaximumLength = v28;
    v26 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned __int16)v28, 0x20727245u);
    v36.Buffer = v26;
    if ( v26 )
      RtlUnicodeStringToOemString(&v36, &UnicodeString, 0);
  }
  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( !CurrentServerSilo )
  {
    if ( a5 )
    {
      LOBYTE(v30) = 1;
      PoShutdownBugCheck(v30, 76LL, v7, BugCheckParameter2, v12, v26);
    }
    KeBugCheckEx(0x4Cu, v7, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v12, (ULONG_PTR)v26);
  }
  return PsTerminateServerSilo(CurrentServerSilo, v7);
}
