/*
 * XREFs of CmpStartCLFSLog @ 0x14042F0D4
 * Callers:
 *     CmpStartRMLog @ 0x14042EC9C (CmpStartRMLog.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x140080110 (RtlAppendUnicodeStringToString.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PsDisableImpersonation @ 0x140510B50 (PsDisableImpersonation.c)
 *     PsRestoreImpersonation @ 0x140510CB0 (PsRestoreImpersonation.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x1405990C0 (CmpAddRemoveContainerToCLFSLog.c)
 */

__int64 __fastcall CmpStartCLFSLog(
        PCUNICODE_STRING Source,
        PCUNICODE_STRING a2,
        __int64 a3,
        void *a4,
        int a5,
        unsigned __int64 *a6,
        int *a7,
        FILE_OBJECT **a8,
        PVOID *a9)
{
  unsigned __int16 v12; // cx
  NTSTATUS LogFileInformation; // ebx
  CLFS_INFORMATION *PoolWithTag; // rax
  CLFS_INFORMATION *v15; // rsi
  int TotalContainers; // edi
  FILE_OBJECT *v17; // rax
  BOOLEAN v19; // [rsp+60h] [rbp-79h]
  FILE_OBJECT *pplfoLog; // [rsp+68h] [rbp-71h] BYREF
  UNICODE_STRING Destination; // [rsp+70h] [rbp-69h] BYREF
  ULONG pcbInfoBuffer; // [rsp+80h] [rbp-59h] BYREF
  PVOID ppvMarshalContext; // [rsp+88h] [rbp-51h] BYREF
  PULONGLONG pcbContainer; // [rsp+90h] [rbp-49h]
  _SE_IMPERSONATION_STATE ImpersonationState; // [rsp+98h] [rbp-41h] BYREF
  $5BC46E0569261879018906DEC3127961 v26; // [rsp+A8h] [rbp-31h] BYREF

  pcbContainer = a6;
  *a8 = 0LL;
  *a9 = 0LL;
  v12 = Source->Length + 26 + a2->Length;
  Destination.Length = 0;
  Destination.MaximumLength = v12;
  Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v12, 0x20204D43u);
  if ( !Destination.Buffer )
    return 3221225626LL;
  *a8 = 0LL;
  *a9 = 0LL;
  RtlAppendUnicodeStringToString(&Destination, &CmpLogPrefix);
  RtlAppendUnicodeStringToString(&Destination, Source);
  RtlAppendUnicodeStringToString(&Destination, a2);
  RtlAppendUnicodeStringToString(&Destination, &CmpLogExt);
  pplfoLog = 0LL;
  ppvMarshalContext = 0LL;
  v19 = PsDisableImpersonation(KeGetCurrentThread(), &ImpersonationState);
  KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)&v26);
  LogFileInformation = ClfsCreateLogFile(&pplfoLog, &Destination, 0xC0010000, 0, a4, 1u, 8u, 0, 0x200u, 0LL, 0);
  if ( LogFileInformation < 0 )
  {
    if ( LogFileInformation == -1073741772 )
    {
      LogFileInformation = ClfsCreateLogFile(&pplfoLog, &Destination, 0xC0010000, 0, a4, 2u, 8u, 0, 0x200u, 0LL, 0);
      if ( LogFileInformation >= 0 )
      {
        TotalContainers = 0;
        while ( 1 )
        {
          LogFileInformation = CmpAddRemoveContainerToCLFSLog(
                                 pplfoLog,
                                 Source,
                                 a2,
                                 &CmpLogExt,
                                 &CmpContainerSuffix,
                                 TotalContainers,
                                 pcbContainer,
                                 1);
          if ( LogFileInformation < 0 )
            break;
          if ( (unsigned int)++TotalContainers >= 3 )
            goto LABEL_6;
        }
      }
    }
  }
  else
  {
    pcbInfoBuffer = 120;
    PoolWithTag = (CLFS_INFORMATION *)ExAllocatePoolWithTag(PagedPool, 0x78uLL, 0x20204D43u);
    v15 = PoolWithTag;
    if ( PoolWithTag )
    {
      LogFileInformation = ClfsGetLogFileInformation(pplfoLog, PoolWithTag, &pcbInfoBuffer);
      if ( LogFileInformation < 0 )
      {
        ExFreePoolWithTag(v15, 0);
      }
      else
      {
        TotalContainers = v15->TotalContainers;
        ExFreePoolWithTag(v15, 0);
LABEL_6:
        LogFileInformation = ClfsCreateMarshallingArea(
                               pplfoLog,
                               PagedPool,
                               0LL,
                               0LL,
                               0x1000u,
                               2u,
                               0x14u,
                               &ppvMarshalContext);
        if ( LogFileInformation >= 0 )
        {
          v17 = pplfoLog;
          *a7 = TotalContainers;
          *a8 = v17;
          *a9 = ppvMarshalContext;
        }
      }
    }
    else
    {
      LogFileInformation = -1073741670;
    }
  }
  KiUnstackDetachProcess(&v26, 0LL);
  if ( v19 )
    PsRestoreImpersonation(KeGetCurrentThread(), &ImpersonationState);
  ExFreePoolWithTag(Destination.Buffer, 0);
  if ( LogFileInformation < 0 )
  {
    if ( pplfoLog )
      ClfsCloseLogFileObject(pplfoLog);
  }
  return (unsigned int)LogFileInformation;
}
