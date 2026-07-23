/*
 * XREFs of CmpAddRemoveContainerToCLFSLog @ 0x1405F3254
 * Callers:
 *     CmpStartCLFSLog @ 0x1405F49A0 (CmpStartCLFSLog.c)
 *     CmpAddRemoveRMLogContainer @ 0x1406F9D80 (CmpAddRemoveRMLogContainer.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     RtlInitAnsiString @ 0x14006CE80 (RtlInitAnsiString.c)
 *     RtlAppendUnicodeStringToString @ 0x1400BAE30 (RtlAppendUnicodeStringToString.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     sprintf_s @ 0x14018E540 (sprintf_s.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     PsDisableImpersonation @ 0x1404C0E30 (PsDisableImpersonation.c)
 *     PsRestoreImpersonation @ 0x1404C0F60 (PsRestoreImpersonation.c)
 *     RtlAnsiStringToUnicodeString @ 0x140518030 (RtlAnsiStringToUnicodeString.c)
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
  char v21[48]; // [rsp+60h] [rbp-51h] BYREF
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
    KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v21);
    if ( a8 == 1 )
      v15 = ClfsAddLogContainer(plfoLog, pcbContainer, &Destination);
    else
      v15 = ClfsRemoveLogContainer(plfoLog, &Destination, 1u);
    v13 = v15;
    KiUnstackDetachProcess((__int64)v21, 0LL);
    if ( v14 )
      PsRestoreImpersonation(KeGetCurrentThread(), &ImpersonationState);
  }
  RtlFreeAnsiString(&DestinationString);
  ExFreePoolWithTag(Destination.Buffer, 0);
  return (unsigned int)v13;
}
