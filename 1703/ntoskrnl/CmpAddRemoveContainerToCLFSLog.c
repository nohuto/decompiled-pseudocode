/*
 * XREFs of CmpAddRemoveContainerToCLFSLog @ 0x1405990C0
 * Callers:
 *     CmpStartCLFSLog @ 0x14042F0D4 (CmpStartCLFSLog.c)
 *     CmpAddRemoveRMLogContainer @ 0x14066BCA4 (CmpAddRemoveRMLogContainer.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x140080110 (RtlAppendUnicodeStringToString.c)
 *     RtlInitAnsiString @ 0x1400852C0 (RtlInitAnsiString.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     sprintf_s @ 0x14016FE70 (sprintf_s.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlAnsiStringToUnicodeString @ 0x1404C0A50 (RtlAnsiStringToUnicodeString.c)
 *     PsDisableImpersonation @ 0x140510B50 (PsDisableImpersonation.c)
 *     PsRestoreImpersonation @ 0x140510CB0 (PsRestoreImpersonation.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 */

__int64 __fastcall CmpAddRemoveContainerToCLFSLog(
        PLOG_FILE_OBJECT plfoLog,
        PCUNICODE_STRING Source,
        PCUNICODE_STRING a3,
        PCUNICODE_STRING a4,
        PCUNICODE_STRING Sourcea,
        int a6,
        PULONGLONG pcbContainer,
        char a8)
{
  __int16 v12; // cx
  NTSTATUS v13; // ebx
  BOOLEAN v14; // si
  NTSTATUS v15; // eax
  UNICODE_STRING Destination; // [rsp+20h] [rbp-91h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-81h] BYREF
  _STRING SourceString; // [rsp+40h] [rbp-71h] BYREF
  _SE_IMPERSONATION_STATE ImpersonationState; // [rsp+50h] [rbp-61h] BYREF
  $5BC46E0569261879018906DEC3127961 v21; // [rsp+60h] [rbp-51h] BYREF
  char DstBuf[16]; // [rsp+90h] [rbp-21h] BYREF

  RtlInitUnicodeString(&DestinationString, 0LL);
  v12 = Sourcea->Length + 34;
  Destination.Length = 0;
  Destination.MaximumLength = Source->Length + a3->Length + a4->Length + v12;
  Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, Destination.MaximumLength, 0x20204D43u);
  if ( !Destination.Buffer )
    return 3221225626LL;
  RtlAppendUnicodeStringToString(&Destination, Source);
  RtlAppendUnicodeStringToString(&Destination, a3);
  RtlAppendUnicodeStringToString(&Destination, a4);
  sprintf_s(DstBuf, 0x10uLL, ".%u", a6);
  RtlInitAnsiString(&SourceString, DstBuf);
  v13 = RtlAnsiStringToUnicodeString(&DestinationString, &SourceString, 1u);
  if ( v13 >= 0 && DestinationString.Length <= 0x20u )
  {
    RtlAppendUnicodeStringToString(&Destination, &DestinationString);
    RtlAppendUnicodeStringToString(&Destination, Sourcea);
    v14 = PsDisableImpersonation(KeGetCurrentThread(), &ImpersonationState);
    KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)&v21);
    if ( a8 == 1 )
      v15 = ClfsAddLogContainer(plfoLog, pcbContainer, &Destination);
    else
      v15 = ClfsRemoveLogContainer(plfoLog, &Destination, 1u);
    v13 = v15;
    KiUnstackDetachProcess(&v21, 0LL);
    if ( v14 )
      PsRestoreImpersonation(KeGetCurrentThread(), &ImpersonationState);
  }
  RtlFreeUnicodeString(&DestinationString);
  ExFreePoolWithTag(Destination.Buffer, 0);
  return (unsigned int)v13;
}
