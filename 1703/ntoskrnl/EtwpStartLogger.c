/*
 * XREFs of EtwpStartLogger @ 0x1405509F8
 * Callers:
 *     EtwpStartTrace @ 0x14045C080 (EtwpStartTrace.c)
 *     EtwStartAutoLogger @ 0x140555730 (EtwStartAutoLogger.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400053B0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140061BB0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     MmGetSessionId @ 0x14008BB90 (MmGetSessionId.c)
 *     PsGetCurrentServerSilo @ 0x140094960 (PsGetCurrentServerSilo.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _wcsicmp @ 0x14016A0F0 (_wcsicmp.c)
 *     memcmp @ 0x14016A960 (memcmp.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     EtwpStopLoggerInstance @ 0x140434A54 (EtwpStopLoggerInstance.c)
 *     EtwpUpdateLoggerGroupMasks @ 0x140434B6C (EtwpUpdateLoggerGroupMasks.c)
 *     EtwpFreeLoggerContext @ 0x1404358CC (EtwpFreeLoggerContext.c)
 *     EtwpFreeTraceBufferPool @ 0x140435B54 (EtwpFreeTraceBufferPool.c)
 *     EtwpGenerateFileName @ 0x14045E0F4 (EtwpGenerateFileName.c)
 *     EtwpCheckForPoolTagFilterExtension @ 0x14045E944 (EtwpCheckForPoolTagFilterExtension.c)
 *     RtlCreateUnicodeString @ 0x1404C1CA0 (RtlCreateUnicodeString.c)
 *     EtwpAccessCheck @ 0x1404F2AB8 (EtwpAccessCheck.c)
 *     EtwpReleaseLoggerContext @ 0x1404F2B5C (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1404F2C44 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x1404F2EF8 (EtwpGetSecurityDescriptorByGuid.c)
 *     EtwpFreeSecurityDescriptor @ 0x1404F65AC (EtwpFreeSecurityDescriptor.c)
 *     SeCreateClientSecurity @ 0x14050B3A0 (SeCreateClientSecurity.c)
 *     ObLogSecurityDescriptor @ 0x14050E5E0 (ObLogSecurityDescriptor.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 *     ExUuidCreate @ 0x14054C980 (ExUuidCreate.c)
 *     EtwpValidateFlagExtension @ 0x14054F1FC (EtwpValidateFlagExtension.c)
 *     EtwpLookupLoggerIdByName @ 0x14054F2BC (EtwpLookupLoggerIdByName.c)
 *     EtwpInitLoggerContext @ 0x14054F348 (EtwpInitLoggerContext.c)
 *     EtwpInitializeTimeStamp @ 0x14054F700 (EtwpInitializeTimeStamp.c)
 *     EtwpCheckForStackTracingExtension @ 0x14054F7D8 (EtwpCheckForStackTracingExtension.c)
 *     EtwpGetFlagExtension @ 0x14054F814 (EtwpGetFlagExtension.c)
 *     EtwpAllocateTraceBufferPool @ 0x14054F858 (EtwpAllocateTraceBufferPool.c)
 *     EtwpGetLoggerInfoFromContext @ 0x140551788 (EtwpGetLoggerInfoFromContext.c)
 *     EtwpCaptureString @ 0x140551AE8 (EtwpCaptureString.c)
 *     EtwpSendSessionNotification @ 0x140551BF8 (EtwpSendSessionNotification.c)
 *     EtwpCheckGuidAccess @ 0x140554B20 (EtwpCheckGuidAccess.c)
 *     EtwpCreateLogFile @ 0x14055808C (EtwpCreateLogFile.c)
 *     PsCreateSystemThreadEx @ 0x1405679C0 (PsCreateSystemThreadEx.c)
 *     EtwpUpdatePerProcessTracing @ 0x140709DA0 (EtwpUpdatePerProcessTracing.c)
 *     EtwpEventWriteTemplateAdmin @ 0x14070DAC8 (EtwpEventWriteTemplateAdmin.c)
 *     EtwpEventWriteTemplateSession @ 0x14070DDE0 (EtwpEventWriteTemplateSession.c)
 */

__int64 __fastcall EtwpStartLogger(__int64 a1, __int64 a2)
{
  int v4; // r8d
  unsigned int v5; // r13d
  unsigned int v6; // ecx
  int v7; // edx
  unsigned int v8; // r14d
  int FileName; // ebx
  ACCESS_MASK v10; // edx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned int v19; // edi
  unsigned int *v20; // rax
  __int64 v21; // rdi
  signed __int64 v22; // rdx
  signed __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // r12
  int v26; // eax
  char v27; // cl
  __int64 v28; // rax
  unsigned int *inited; // rdi
  unsigned int v30; // eax
  int v31; // eax
  _WORD *v32; // r12
  __int64 v33; // r13
  unsigned int v34; // eax
  unsigned int v35; // eax
  unsigned int v36; // eax
  __int64 v37; // rdx
  int v38; // ecx
  unsigned int v39; // ecx
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // rcx
  __int64 v42; // r12
  __int64 v43; // r14
  __int64 v44; // rcx
  __int64 v46; // rcx
  unsigned int v47; // ecx
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rbx
  unsigned int v51; // ebx
  const WCHAR *v52; // rdx
  bool v53; // zf
  __int64 v54; // rcx
  __int64 v55; // rax
  unsigned int v56; // eax
  void *v57; // rcx
  int v58; // ecx
  int v59; // r8d
  unsigned __int8 v60; // [rsp+50h] [rbp-B0h]
  unsigned int v61; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v62; // [rsp+58h] [rbp-A8h]
  __int64 v63; // [rsp+60h] [rbp-A0h]
  __int64 v64; // [rsp+68h] [rbp-98h]
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+80h] [rbp-80h] BYREF
  ACCESS_MASK DesiredAccess; // [rsp+88h] [rbp-78h]
  UNICODE_STRING UnicodeString; // [rsp+90h] [rbp-70h] BYREF
  struct _SECURITY_QUALITY_OF_SERVICE ClientSecurityQos; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v70; // [rsp+B0h] [rbp-50h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v72[2]; // [rsp+C0h] [rbp-40h] BYREF
  int v73; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v74; // [rsp+D8h] [rbp-28h]
  __int64 v75; // [rsp+E0h] [rbp-20h]
  int v76; // [rsp+E8h] [rbp-18h]
  __int128 v77; // [rsp+F0h] [rbp-10h]
  UUID Buf2; // [rsp+100h] [rbp+0h] BYREF

  v63 = a1;
  v62 = 8;
  SecurityDescriptor = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&UnicodeString, 0LL);
  v4 = *(_DWORD *)(a2 + 64);
  v5 = 4;
  v6 = v4 & 0x9DECE5FF;
  if ( (*(_BYTE *)(a2 + 64) & 3) == 0 && ((v4 & 8) != 0 || (v4 & 4) != 0) )
    v6 = *(_DWORD *)(a2 + 64) & 0x9DECE5FE | 1;
  v7 = v6 | 0x80;
  if ( (v6 & 0x40000) == 0 )
    v7 = v6;
  v8 = v7;
  if ( (v7 & 0x80000) != 0 && (v7 & 0x1000000) != 0 )
    v8 = v7 & 0xFEFFFFFF;
  if ( (v8 & 0x400) != 0 )
  {
    if ( *(_QWORD *)(a2 + 136) || (v8 & 0x4000F) != 0 )
      goto LABEL_129;
    v47 = v8 & 0xFFFFFEFF;
    if ( (v8 & 0x100) == 0 )
      v47 = v8;
    v8 = v47;
    if ( *(_DWORD *)(a2 + 68) )
      *(_DWORD *)(a2 + 68) = 0;
    if ( *(_DWORD *)(a2 + 76) )
      *(_DWORD *)(a2 + 76) = 0;
  }
  if ( (v8 & 3) == 3
    || (v8 & 0xC000) == 0xC000
    || (v8 & 0x700) == 0 && !*(_QWORD *)(a2 + 136)
    || (v8 & 6) == 6
    || (v8 & 2) != 0 && !*(_DWORD *)(a2 + 60)
    || (v8 & 0x20) != 0 && (!*(_DWORD *)(a2 + 60) || (v4 & 0xC) != 0)
    || (v8 & 0x40) != 0
    && ((*(_DWORD *)(a2 + 112) & 2) == 0 || (v8 & 0x402) == 0 && ((v8 & 0x100) == 0 || *(_QWORD *)(a2 + 136)))
    || (v8 & 0xC00000) == 0xC00000 )
  {
    goto LABEL_129;
  }
  if ( (v8 & 8) != 0 )
  {
    if ( !*(_QWORD *)(a2 + 136)
      || (v8 & 2) != 0
      || !*(_DWORD *)(a2 + 60)
      || (*(_DWORD *)(a2 + 112) & 2) != 0
      || (v4 & 0x2000000) != 0 )
    {
      goto LABEL_129;
    }
    v48 = *(_QWORD *)(a2 + 24) - *(_QWORD *)&SystemTraceControlGuid.Data1;
    if ( !v48 )
      v48 = *(_QWORD *)(a2 + 32) - *(_QWORD *)SystemTraceControlGuid.Data4;
    if ( !v48 )
      goto LABEL_129;
    v49 = *(_QWORD *)(a2 + 24) - *(_QWORD *)&CKCLGuid.Data1;
    if ( !v49 )
      v49 = *(_QWORD *)(a2 + 32) - *(_QWORD *)CKCLGuid.Data4;
    if ( !v49 || (v8 & 4) != 0 )
      goto LABEL_129;
  }
  if ( (v4 & 0x3000000) == 0x3000000 || (v4 & 0x4000400) == 0x4000000 || (v4 & 0x10000) != 0 )
    goto LABEL_129;
  FileName = EtwpValidateFlagExtension((unsigned int *)a2);
  if ( FileName < 0 )
    goto LABEL_239;
  v10 = ((v8 & 0x100 | 0x400) >> 3) | 0x40;
  if ( !*(_WORD *)(a2 + 128) )
    v10 = (v8 & 0x100 | 0x400) >> 3;
  DesiredAccess = v10;
  if ( !*(_WORD *)(a2 + 144) || !*(_QWORD *)(a2 + 152) )
    goto LABEL_129;
  FileName = EtwpCaptureString(a2 + 144, &DestinationString);
  if ( FileName )
  {
LABEL_239:
    if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_SESSION_START_FAILED) )
      EtwpEventWriteTemplateAdmin(
        v58,
        (unsigned int)&ETW_EVENT_SESSION_START_FAILED,
        v59,
        (unsigned int)&DestinationString,
        (__int64)&UnicodeString,
        FileName,
        v8);
    RtlFreeUnicodeString(&DestinationString);
    RtlFreeUnicodeString(&UnicodeString);
    EtwpFreeSecurityDescriptor(&SecurityDescriptor);
    return (unsigned int)FileName;
  }
  if ( !(unsigned int)EtwpLookupLoggerIdByName(a1, &DestinationString, &v61) )
  {
LABEL_190:
    FileName = -1073741771;
    goto LABEL_239;
  }
  v11 = *(_QWORD *)(a2 + 24) - *(_QWORD *)&NullGuid.Data1;
  if ( !v11 )
    v11 = *(_QWORD *)(a2 + 32) - *(_QWORD *)NullGuid.Data4;
  if ( v11 )
  {
    Buf2 = *(UUID *)(a2 + 24);
  }
  else
  {
    FileName = ExUuidCreate(&Buf2);
    if ( FileName < 0 )
      goto LABEL_239;
  }
  if ( (v8 & 0xC00000) == 0 )
  {
    if ( KeGetCurrentThread()->PreviousMode && (unsigned int)MmGetSessionId(KeGetCurrentThread()->ApcState.Process) )
      v8 |= 0x400000u;
    else
      v8 |= 0x800000u;
  }
  v12 = *(_QWORD *)&Buf2.Data1;
  v13 = a1 + 920;
  v14 = *(_QWORD *)Buf2.Data4;
  v15 = *(_QWORD *)&Buf2.Data1 - *(_QWORD *)&SystemTraceControlGuid.Data1;
  if ( *(_QWORD *)&Buf2.Data1 == *(_QWORD *)&SystemTraceControlGuid.Data1 )
    v15 = *(_QWORD *)Buf2.Data4 - *(_QWORD *)SystemTraceControlGuid.Data4;
  if ( !v15 )
    goto LABEL_161;
  v16 = *(_QWORD *)&Buf2.Data1 - *(_QWORD *)&CKCLGuid.Data1;
  if ( *(_QWORD *)&Buf2.Data1 == *(_QWORD *)&CKCLGuid.Data1 )
    v16 = *(_QWORD *)Buf2.Data4 - *(_QWORD *)CKCLGuid.Data4;
  if ( !v16 )
  {
LABEL_161:
    RtlFreeUnicodeString(&DestinationString);
    v50 = v12 - *(_QWORD *)&SystemTraceControlGuid.Data1;
    if ( !v50 )
      v50 = v14 - *(_QWORD *)SystemTraceControlGuid.Data4;
    if ( v50 )
    {
      v51 = 2;
      v62 = 1;
      v61 = 2;
      v52 = L"Circular Kernel Context Logger";
    }
    else
    {
      v51 = 0;
      v61 = 0;
      v62 = 0;
      v52 = L"NT Kernel Logger";
    }
    if ( !RtlCreateUnicodeString(&DestinationString, v52) )
      goto LABEL_204;
    v8 |= 0x80u;
    if ( (v8 & 0x1000000) == 0 && v63 == EtwpHostSiloState )
    {
      v53 = _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 8LL * v51), v13 | 1, 1LL) == 1;
      goto LABEL_169;
    }
    goto LABEL_129;
  }
  v17 = *(_QWORD *)&Buf2.Data1 - *(_QWORD *)&GlobalLoggerGuid.Data1;
  if ( *(_QWORD *)&Buf2.Data1 == *(_QWORD *)&GlobalLoggerGuid.Data1 )
    v17 = *(_QWORD *)Buf2.Data4 - *(_QWORD *)GlobalLoggerGuid.Data4;
  if ( !v17 )
  {
    v61 = 1;
    if ( !EtwpGetFlagExtension(a2, 1) )
      goto LABEL_196;
    if ( (v8 & 0x1000000) == 0 && v63 == EtwpHostSiloState )
    {
      RtlFreeUnicodeString(&DestinationString);
      if ( !RtlCreateUnicodeString(&DestinationString, L"NT Kernel Logger") )
        goto LABEL_204;
      v62 = 0;
LABEL_196:
      v53 = _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 8), v13 | 1, 1LL) == 1;
LABEL_169:
      if ( v53 )
      {
        v5 = v61;
        goto LABEL_56;
      }
      goto LABEL_190;
    }
LABEL_129:
    FileName = -1073741811;
    goto LABEL_239;
  }
  v18 = *(_QWORD *)&Buf2.Data1 - *(_QWORD *)&AuditLoggerGuid.Data1;
  if ( *(_QWORD *)&Buf2.Data1 == *(_QWORD *)&AuditLoggerGuid.Data1 )
    v18 = *(_QWORD *)Buf2.Data4 - *(_QWORD *)AuditLoggerGuid.Data4;
  if ( !v18 )
  {
    v61 = 3;
    if ( (v8 & 0x1000000) == 0 )
    {
      RtlFreeUnicodeString(&DestinationString);
      if ( RtlCreateUnicodeString(&DestinationString, L"Eventlog-Security") )
      {
        v8 |= 0x80u;
        v53 = _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 24), v13 | 1, 1LL) == 1;
        goto LABEL_169;
      }
LABEL_204:
      FileName = -1073741801;
      goto LABEL_239;
    }
    goto LABEL_129;
  }
  if ( !wcsicmp(DestinationString.Buffer, L"Eventlog-Security") )
  {
    v55 = v12 - *(_QWORD *)&AuditLoggerGuid.Data1;
    if ( v12 == *(_QWORD *)&AuditLoggerGuid.Data1 )
      v55 = v14 - *(_QWORD *)AuditLoggerGuid.Data4;
    if ( v55 )
      goto LABEL_190;
  }
  v19 = 4;
  while ( 1 )
  {
    v20 = EtwpAcquireLoggerContextByLoggerId(v63, v19, 0);
    if ( v20 )
      break;
LABEL_50:
    if ( ++v19 >= 0x40 )
      goto LABEL_51;
  }
  v46 = *(_QWORD *)(v20 + 69) - v12;
  if ( !v46 )
    v46 = *(_QWORD *)(v20 + 71) - v14;
  if ( v46 )
  {
    EtwpReleaseLoggerContext(v20, 0);
    goto LABEL_50;
  }
  EtwpReleaseLoggerContext(v20, 0);
LABEL_51:
  if ( v19 < 0x40 )
    goto LABEL_190;
  v21 = v63;
  v61 = 4;
  v22 = (v63 + 920) | 1;
  do
  {
    v23 = _InterlockedCompareExchange64((volatile signed __int64 *)(v21 + 8LL * v5 + 920), v22, 1LL);
    v5 = v61;
    if ( v23 == 1 )
      break;
    v5 = v61 + 1;
    v61 = v5;
  }
  while ( v5 < 0x40 );
  if ( v5 >= 0x40 )
  {
    FileName = -1073741670;
    goto LABEL_239;
  }
LABEL_56:
  v24 = v63;
  v25 = v5;
  v64 = v5;
  ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v63 + 8LL * v5 + 408), 1u);
  EtwpGetSecurityDescriptorByGuid(&Buf2.Data1, &SecurityDescriptor);
  v26 = EtwpAccessCheck(SecurityDescriptor, DesiredAccess, 0LL);
  v27 = 0;
  FileName = v26;
  if ( v26 < 0 )
    goto LABEL_238;
  v28 = *(_QWORD *)&HeapGuid.Data1 - *(_QWORD *)&Buf2.Data1;
  if ( *(_QWORD *)&HeapGuid.Data1 == *(_QWORD *)&Buf2.Data1 )
    v28 = *(_QWORD *)HeapGuid.Data4 - *(_QWORD *)Buf2.Data4;
  if ( v28 )
    v27 = memcmp(&CritSecGuid, &Buf2, 0x10uLL) != 0 ? 9 : 1;
  v60 = v27;
  if ( (*(_DWORD *)(a2 + 64) & 0x2000000) == 0 || v62 != 8 )
    goto LABEL_62;
  if ( v24 != EtwpHostSiloState )
  {
    FileName = -1073741790;
    goto LABEL_238;
  }
  FileName = EtwpCheckGuidAccess(&SystemTraceControlGuid, 128LL, 0LL);
  if ( FileName < 0 )
    goto LABEL_238;
  v56 = 2;
  v62 = 2;
  do
  {
    if ( !_bittest(&EtwpActiveSystemLoggers, v56) )
      break;
    ++v56;
  }
  while ( v56 < 8 );
  v62 = v56;
  if ( v56 == 8 )
  {
    FileName = -1073741670;
    goto LABEL_238;
  }
LABEL_62:
  inited = (unsigned int *)EtwpInitLoggerContext((const void **)&DestinationString, v8);
  RtlFreeUnicodeString(&DestinationString);
  if ( !inited )
  {
    FileName = -1073741801;
LABEL_237:
    v24 = v63;
LABEL_238:
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v24 + 8 * v25 + 408), 1u);
    _InterlockedExchange64((volatile __int64 *)(v24 + 8 * v25 + 920), 1LL);
    goto LABEL_239;
  }
  *(UUID *)(inited + 69) = Buf2;
  inited[73] = *(_DWORD *)(a2 + 60);
  if ( (*(_DWORD *)(a2 + 80) & 1) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)inited + 204, 0x10u);
    v5 = v61;
  }
  inited[50] = *(_DWORD *)(a2 + 40);
  v30 = *(_DWORD *)(a2 + 68);
  if ( v30 )
  {
    inited[52] = v30;
  }
  else if ( (v8 & 0x100) != 0 )
  {
    inited[52] = (v8 & 0x10) != 0 ? 1000 : 1;
  }
  v31 = *(_DWORD *)(a2 + 76);
  if ( v31 && (inited[52] || v31 < 0) )
    *(_DWORD *)(a2 + 76) = 0;
  inited[53] = *(_DWORD *)(a2 + 76);
  *((_QWORD *)inited + 118) = v63;
  *inited = v5;
  if ( *(_WORD *)(a2 + 128) )
  {
    if ( *(_QWORD *)(a2 + 136) )
    {
      FileName = EtwpCaptureString(a2 + 128, &UnicodeString);
      if ( FileName < 0 )
      {
LABEL_227:
        LODWORD(v33) = v62;
        goto LABEL_228;
      }
    }
  }
  if ( (*(_DWORD *)(a2 + 112) & 2) != 0 )
  {
    inited[74] = *(_DWORD *)(a2 + 96);
    *(_DWORD *)(a2 + 96) = 0;
  }
  if ( (inited[3] & 8) == 0 )
  {
    v32 = inited + 38;
    *(UNICODE_STRING *)(inited + 38) = UnicodeString;
    RtlInitUnicodeString(&UnicodeString, 0LL);
    goto LABEL_75;
  }
  *(UNICODE_STRING *)(inited + 42) = UnicodeString;
  RtlInitUnicodeString(&UnicodeString, 0LL);
  v32 = inited + 38;
  FileName = EtwpGenerateFileName(
               (unsigned __int16 *)inited + 84,
               (volatile signed __int32 *)inited + 74,
               (UNICODE_STRING *)(inited + 38));
  if ( FileName < 0 )
  {
LABEL_226:
    v25 = v64;
    goto LABEL_227;
  }
LABEL_75:
  ClientSecurityQos.Length = 12;
  ClientSecurityQos.ImpersonationLevel = SecurityImpersonation;
  *(_WORD *)&ClientSecurityQos.ContextTrackingMode = 257;
  FileName = SeCreateClientSecurity(
               KeGetCurrentThread(),
               &ClientSecurityQos,
               0,
               (PSECURITY_CLIENT_CONTEXT)(inited + 176));
  if ( FileName < 0 )
    goto LABEL_226;
  if ( (inited[3] & 0x100) != 0 )
    _InterlockedOr((volatile signed __int32 *)inited + 204, 8u);
  else
    _InterlockedAnd((volatile signed __int32 *)inited + 204, 0xFFFFFFF7);
  if ( (*(_DWORD *)(a2 + 112) & 2) != 0 )
    _InterlockedOr((volatile signed __int32 *)inited + 204, 2u);
  if ( (*(_BYTE *)(a2 + 112) & 1) != 0 )
    _InterlockedOr((volatile signed __int32 *)inited + 204, 1u);
  if ( (*(_DWORD *)(a2 + 112) & 0x4000) != 0 )
    _InterlockedOr((volatile signed __int32 *)inited + 204, 0x4000u);
  EtwpInitializeTimeStamp((__int64)inited);
  v33 = v62;
  if ( v62 < 8 )
  {
    inited[3] |= 0x2000000u;
    *((_BYTE *)inited + 818) = v33;
    if ( (unsigned int)v33 <= 1 )
      _InterlockedOr((volatile signed __int32 *)inited + 204, 0x20u);
    EtwpSystemLogger[2 * v33] = v61;
    if ( inited[50] - 1 >= 3 )
      byte_140344E01[2 * v33] = 1;
    else
      byte_140344E01[2 * v33] = *((_BYTE *)inited + 200);
    _interlockedbittestandset(&EtwpActiveSystemLoggers, v33);
  }
  FileName = EtwpCheckForStackTracingExtension(a2, (__int64)inited);
  if ( FileName < 0 )
    goto LABEL_220;
  v34 = *(_DWORD *)(a2 + 52);
  if ( v34 )
    inited[56] = v34;
  v35 = *(_DWORD *)(a2 + 56);
  if ( v35 )
    inited[59] = v35;
  v36 = *(_DWORD *)(a2 + 48);
  if ( v36 )
  {
    if ( v36 > 0x4000 )
      *(_DWORD *)(a2 + 48) = 0x4000;
    inited[1] = *(_DWORD *)(a2 + 48) << 10;
  }
  if ( *v32 )
  {
    _InterlockedOr((volatile signed __int32 *)inited + 205, 1u);
    *((_QWORD *)inited + 6) = KeGetCurrentThread();
    FileName = EtwpCreateLogFile(inited, 0LL);
    if ( FileName < 0 )
    {
LABEL_220:
      v25 = v64;
LABEL_228:
      if ( (inited[3] & 0x2000000) != 0 )
        _interlockedbittestandreset(&EtwpActiveSystemLoggers, v33);
      if ( (inited[204] & 0x80u) != 0 )
        ExFreePoolWithTag(*((PVOID *)inited + 104), 0);
      if ( (inited[204] & 0x2000) != 0 )
        _InterlockedDecrement(&dword_14036EA60);
      RtlFreeUnicodeString((PUNICODE_STRING)(inited + 38));
      RtlFreeUnicodeString((PUNICODE_STRING)(inited + 42));
      v57 = (void *)*((_QWORD *)inited + 100);
      if ( v57 )
        ZwClose(v57);
      ExFreePoolWithTag(inited, 0);
      goto LABEL_237;
    }
  }
  if ( inited[1] < 0x1000 && (*v32 || (inited[3] & 0x400) != 0) )
    _InterlockedOr((volatile signed __int32 *)inited + 204, 0x1000u);
  v37 = inited[1];
  v38 = 0xFFFF;
  if ( (unsigned __int64)(v37 - 72) < 0xFFFF )
    v38 = v37 - 72;
  inited[2] = v38 & 0xFFFFFFF8;
  FileName = EtwpAllocateTraceBufferPool((__int64)inited);
  if ( FileName < 0 )
    goto LABEL_219;
  v39 = inited[73];
  if ( !v39 || (inited[3] & 0x2000) != 0 )
    v40 = 10485760LL;
  else
    v40 = (unsigned __int64)v39 << 20;
  v41 = 2 * inited[1] * inited[59];
  if ( v40 > v41 )
    v41 = v40;
  *((_QWORD *)inited + 52) = v41;
  FileName = ObLogSecurityDescriptor((char *)SecurityDescriptor, &v70, 0x10u);
  if ( FileName >= 0 )
  {
    if ( v70 )
      *((_QWORD *)inited + 98) = v70 + 15;
    else
      *((_QWORD *)inited + 98) = 0LL;
  }
  EtwpFreeSecurityDescriptor(&SecurityDescriptor);
  if ( FileName < 0 )
  {
LABEL_219:
    EtwpFreeTraceBufferPool(inited);
    goto LABEL_220;
  }
  v42 = v63;
  _InterlockedAdd((volatile signed __int32 *)(v63 + 5092), 1u);
  v43 = v64;
  ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v42 + 8 * v64 + 408), 1u);
  if ( (inited[3] & 0x400) != 0 )
    goto LABEL_112;
  v73 = 48;
  v77 = 0LL;
  v74 = 0LL;
  v76 = 512;
  v75 = 0LL;
  v72[0] = PsGetCurrentServerSilo();
  v72[1] = inited;
  FileName = PsCreateSystemThreadEx(
               (unsigned int)&Handle,
               0x1FFFFF,
               (unsigned int)&v73,
               0,
               0LL,
               (__int64)EtwpLogger,
               (__int64)v72,
               0LL,
               0LL);
  if ( FileName < 0 )
  {
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v42 + 8 * v43 + 408), 1u);
    goto LABEL_223;
  }
  ZwClose(Handle);
  KeWaitForSingleObject(inited + 114, Executive, 0, 0, 0LL);
LABEL_112:
  if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_START_TRACE) )
    EtwpEventWriteTemplateSession(v44, &ETW_EVENT_START_TRACE, inited);
  KeWaitForSingleObject(inited + 158, Executive, 0, 0, 0LL);
  _InterlockedExchange64((volatile __int64 *)(v42 + 8 * v43 + 920), (__int64)inited);
  EtwpSendSessionNotification(inited, 5LL);
  if ( (inited[3] & 0x2000000) != 0
    && ((FileName = EtwpCheckForPoolTagFilterExtension((__int64)inited, a2, 1), FileName < 0)
     || (v54 = 5 * v33,
         EtwpObjectTypeFilter[2 * v54] = 1,
         dword_140344C84[v54] = 42,
         FileName = EtwpUpdateLoggerGroupMasks((__int64)inited, a2),
         FileName < 0))
    && (inited[14] = FileName, EtwpStopLoggerInstance((unsigned __int64)inited), (inited[3] & 0x400) != 0) )
  {
    EtwpGetLoggerInfoFromContext(a2, inited);
    EtwpReleaseLoggerContext(inited, 1);
LABEL_223:
    EtwpFreeLoggerContext((char *)inited);
    return (unsigned int)FileName;
  }
  else
  {
    if ( v60 != 9 )
      EtwpUpdatePerProcessTracing(a2, v42, *inited, v60);
    EtwpGetLoggerInfoFromContext(a2, inited);
    EtwpReleaseLoggerContext(inited, 1);
    return 0LL;
  }
}
