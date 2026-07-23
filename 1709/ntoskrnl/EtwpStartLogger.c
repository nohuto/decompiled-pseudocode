/*
 * XREFs of EtwpStartLogger @ 0x1404ECD4C
 * Callers:
 *     EtwpStartTrace @ 0x14059D5E4 (EtwpStartTrace.c)
 *     EtwStartAutoLogger @ 0x1405A90A0 (EtwStartAutoLogger.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     PsGetCurrentServerSilo @ 0x140089070 (PsGetCurrentServerSilo.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     MmGetSessionId @ 0x1400A5510 (MmGetSessionId.c)
 *     _TlgWrite @ 0x1400AE914 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1400BA32C (_TlgKeywordOn.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400FA300 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1400FA3C0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _wcsicmp @ 0x14015EB30 (_wcsicmp.c)
 *     memcmp @ 0x14015F370 (memcmp.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x14048685C (EtwpGetSecurityDescriptorByGuid.c)
 *     EtwpAccessCheck @ 0x140490118 (EtwpAccessCheck.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1404921A4 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x14049227C (EtwpReleaseLoggerContext.c)
 *     EtwpFreeSecurityDescriptor @ 0x140492ADC (EtwpFreeSecurityDescriptor.c)
 *     SeCreateClientSecurity @ 0x14049CBB0 (SeCreateClientSecurity.c)
 *     ObLogSecurityDescriptor @ 0x1404BFD80 (ObLogSecurityDescriptor.c)
 *     RtlCreateUnicodeString @ 0x1404DF560 (RtlCreateUnicodeString.c)
 *     EtwpInitLoggerContext @ 0x1404EC878 (EtwpInitLoggerContext.c)
 *     EtwpInitializeTimeStamp @ 0x1404ECC38 (EtwpInitializeTimeStamp.c)
 *     EtwpCheckForStackTracingExtension @ 0x1404ECCF8 (EtwpCheckForStackTracingExtension.c)
 *     EtwpGetFlagExtension @ 0x1404ECD34 (EtwpGetFlagExtension.c)
 *     EtwpCaptureString @ 0x1404EDA2C (EtwpCaptureString.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1404EDB70 (EtwpGetLoggerInfoFromContext.c)
 *     EtwpSendSessionNotification @ 0x1404EDDD4 (EtwpSendSessionNotification.c)
 *     EtwpCheckGuidAccess @ 0x1404EF040 (EtwpCheckGuidAccess.c)
 *     EtwpAllocateTraceBufferPool @ 0x1404EFFE4 (EtwpAllocateTraceBufferPool.c)
 *     EtwpStopLoggerInstance @ 0x1404F0374 (EtwpStopLoggerInstance.c)
 *     ExUuidCreate @ 0x14050B7E0 (ExUuidCreate.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 *     PsCreateSystemThreadEx @ 0x1405549A0 (PsCreateSystemThreadEx.c)
 *     EtwpCreateLogFile @ 0x140577D70 (EtwpCreateLogFile.c)
 *     EtwpLookupLoggerIdByName @ 0x14058B484 (EtwpLookupLoggerIdByName.c)
 *     EtwpFreeLoggerContext @ 0x14058E0D4 (EtwpFreeLoggerContext.c)
 *     EtwpFreeTraceBufferPool @ 0x14058E374 (EtwpFreeTraceBufferPool.c)
 *     EtwpValidateFlagExtension @ 0x14059E32C (EtwpValidateFlagExtension.c)
 *     EtwpGenerateFileName @ 0x14059E648 (EtwpGenerateFileName.c)
 *     EtwpUpdatePerProcessTracing @ 0x140743FB4 (EtwpUpdatePerProcessTracing.c)
 *     EtwpCheckForPoolTagFilterExtension @ 0x140748F80 (EtwpCheckForPoolTagFilterExtension.c)
 *     EtwpEventWriteTemplateAdmin @ 0x14074943C (EtwpEventWriteTemplateAdmin.c)
 *     EtwpEventWriteTemplateSession @ 0x140749674 (EtwpEventWriteTemplateSession.c)
 *     EtwpUpdateLoggerGroupMasks @ 0x140749BD8 (EtwpUpdateLoggerGroupMasks.c)
 *     EtwpUpdateTagFilter @ 0x140749E5C (EtwpUpdateTagFilter.c)
 */

__int64 __fastcall EtwpStartLogger(__int64 a1, __int64 a2)
{
  int v4; // r8d
  unsigned int v5; // ecx
  int v6; // edx
  unsigned int v7; // r14d
  int FileName; // ebx
  ACCESS_MASK v9; // edx
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned int v18; // edi
  __int64 v19; // rax
  unsigned int v20; // eax
  unsigned int v21; // r12d
  __int64 v22; // r8
  signed __int64 v23; // rdx
  signed __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rax
  unsigned int *inited; // rdi
  unsigned int v29; // eax
  int v30; // eax
  unsigned int v31; // eax
  _WORD *v32; // r12
  __int64 v33; // rdx
  unsigned int v34; // eax
  unsigned int v35; // eax
  unsigned int v36; // eax
  __int64 v37; // rdx
  int v38; // ecx
  unsigned int v39; // ecx
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // rcx
  __int64 v42; // r14
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rax
  unsigned int v49; // ecx
  bool v50; // zf
  __int64 v51; // rax
  int v52; // r9d
  __int64 v53; // rbx
  unsigned int v54; // ebx
  const WCHAR *v55; // rdx
  unsigned int v56; // eax
  void *v57; // rcx
  int v58; // ecx
  int v59; // r8d
  unsigned __int8 v60; // [rsp+50h] [rbp-B0h]
  int v61; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v62; // [rsp+58h] [rbp-A8h]
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+70h] [rbp-90h] BYREF
  int v65; // [rsp+78h] [rbp-88h] BYREF
  ACCESS_MASK DesiredAccess; // [rsp+7Ch] [rbp-84h]
  __int64 v67; // [rsp+80h] [rbp-80h]
  __int64 v68; // [rsp+88h] [rbp-78h]
  UNICODE_STRING UnicodeString; // [rsp+90h] [rbp-70h] BYREF
  struct _SECURITY_QUALITY_OF_SERVICE ClientSecurityQos; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v71; // [rsp+B0h] [rbp-50h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v73[2]; // [rsp+C0h] [rbp-40h] BYREF
  int v74; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v75; // [rsp+D8h] [rbp-28h]
  __int64 v76; // [rsp+E0h] [rbp-20h]
  int v77; // [rsp+E8h] [rbp-18h]
  __int128 v78; // [rsp+F0h] [rbp-10h]
  UUID Buf2; // [rsp+100h] [rbp+0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+110h] [rbp+10h] BYREF
  int *v81; // [rsp+130h] [rbp+30h]
  __int64 v82; // [rsp+138h] [rbp+38h]

  v62 = 8;
  SecurityDescriptor = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&UnicodeString, 0LL);
  v4 = *(_DWORD *)(a2 + 64);
  v5 = v4 & 0x9DECE5FF;
  if ( (*(_BYTE *)(a2 + 64) & 3) == 0 && ((v4 & 8) != 0 || (v4 & 4) != 0) )
    v5 = *(_DWORD *)(a2 + 64) & 0x9DECE5FE | 1;
  v6 = v5 | 0x80;
  if ( (v5 & 0x40000) == 0 )
    v6 = v5;
  v7 = v6;
  if ( (v6 & 0x80000) != 0 && (v6 & 0x1000000) != 0 )
    v7 = v6 & 0xFEFFFFFF;
  if ( (v7 & 0x400) != 0 )
  {
    if ( *(_QWORD *)(a2 + 136) || (v7 & 0x4000F) != 0 )
      goto LABEL_129;
    v49 = v7 & 0xFFFFFEFF;
    if ( (v7 & 0x100) == 0 )
      v49 = v7;
    v7 = v49;
    if ( *(_DWORD *)(a2 + 68) )
      *(_DWORD *)(a2 + 68) = 0;
    if ( *(_DWORD *)(a2 + 76) )
      *(_DWORD *)(a2 + 76) = 0;
  }
  if ( (v7 & 3) == 3
    || (v7 & 0xC000) == 0xC000
    || (v7 & 0x700) == 0 && !*(_QWORD *)(a2 + 136)
    || (v7 & 6) == 6
    || (v7 & 2) != 0 && !*(_DWORD *)(a2 + 60)
    || (v7 & 0x20) != 0 && (!*(_DWORD *)(a2 + 60) || (v4 & 0xC) != 0)
    || (v7 & 0x40) != 0
    && ((*(_DWORD *)(a2 + 112) & 2) == 0 || (v7 & 0x402) == 0 && ((v7 & 0x100) == 0 || *(_QWORD *)(a2 + 136)))
    || (v7 & 0xC00000) == 0xC00000 )
  {
    goto LABEL_129;
  }
  if ( (v7 & 8) != 0 )
  {
    if ( !*(_QWORD *)(a2 + 136)
      || (v7 & 2) != 0
      || !*(_DWORD *)(a2 + 60)
      || (*(_DWORD *)(a2 + 112) & 2) != 0
      || (v4 & 0x2000000) != 0 )
    {
      goto LABEL_129;
    }
    v47 = *(_QWORD *)(a2 + 24) - *(_QWORD *)&SystemTraceControlGuid.Data1;
    if ( !v47 )
      v47 = *(_QWORD *)(a2 + 32) - *(_QWORD *)SystemTraceControlGuid.Data4;
    if ( !v47 )
      goto LABEL_129;
    v48 = *(_QWORD *)(a2 + 24) - *(_QWORD *)&CKCLGuid.Data1;
    if ( !v48 )
      v48 = *(_QWORD *)(a2 + 32) - *(_QWORD *)CKCLGuid.Data4;
    if ( !v48 || (v7 & 4) != 0 )
      goto LABEL_129;
  }
  if ( (v4 & 0x3000000) == 0x3000000 || (v4 & 0x4000000) != 0 && (v4 & 0x400) == 0 || (v4 & 0x10000) != 0 )
    goto LABEL_129;
  FileName = EtwpValidateFlagExtension(a2, 256LL);
  if ( FileName < 0 )
    goto LABEL_233;
  v9 = ((v7 & 0x100 | 0x400) >> 3) | 0x40;
  if ( !*(_WORD *)(a2 + 128) )
    v9 = (v7 & 0x100 | 0x400) >> 3;
  DesiredAccess = v9;
  if ( !*(_WORD *)(a2 + 144) || !*(_QWORD *)(a2 + 152) )
    goto LABEL_129;
  FileName = EtwpCaptureString(a2 + 144, &DestinationString);
  if ( FileName )
  {
LABEL_233:
    if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_SESSION_START_FAILED) )
      EtwpEventWriteTemplateAdmin(
        v58,
        (unsigned int)&ETW_EVENT_SESSION_START_FAILED,
        v59,
        (unsigned int)&DestinationString,
        (__int64)&UnicodeString,
        FileName,
        v7);
    RtlFreeUnicodeString(&DestinationString);
    RtlFreeUnicodeString(&UnicodeString);
    EtwpFreeSecurityDescriptor(&SecurityDescriptor);
    return (unsigned int)FileName;
  }
  if ( !(unsigned int)EtwpLookupLoggerIdByName(a1, &DestinationString, &v61) )
  {
LABEL_177:
    FileName = -1073741771;
    goto LABEL_233;
  }
  v10 = *(_QWORD *)(a2 + 24) - *(_QWORD *)&NullGuid.Data1;
  if ( !v10 )
    v10 = *(_QWORD *)(a2 + 32) - *(_QWORD *)NullGuid.Data4;
  if ( v10 )
  {
    Buf2 = *(UUID *)(a2 + 24);
  }
  else
  {
    FileName = ExUuidCreate(&Buf2);
    if ( FileName < 0 )
      goto LABEL_233;
  }
  if ( (v7 & 0xC00000) == 0 )
  {
    if ( KeGetCurrentThread()->PreviousMode
      && (unsigned int)MmGetSessionId((__int64)KeGetCurrentThread()->ApcState.Process) )
    {
      v7 |= 0x400000u;
    }
    else
    {
      v7 |= 0x800000u;
    }
  }
  v11 = *(_QWORD *)&Buf2.Data1;
  v12 = *(_QWORD *)(a1 + 424);
  v13 = *(_QWORD *)&Buf2.Data1 - *(_QWORD *)&SystemTraceControlGuid.Data1;
  v14 = *(_QWORD *)Buf2.Data4;
  v68 = v12;
  if ( *(_QWORD *)&Buf2.Data1 == *(_QWORD *)&SystemTraceControlGuid.Data1 )
    v13 = *(_QWORD *)Buf2.Data4 - *(_QWORD *)SystemTraceControlGuid.Data4;
  if ( !v13 )
    goto LABEL_193;
  v15 = *(_QWORD *)&Buf2.Data1 - *(_QWORD *)&CKCLGuid.Data1;
  if ( *(_QWORD *)&Buf2.Data1 == *(_QWORD *)&CKCLGuid.Data1 )
    v15 = *(_QWORD *)Buf2.Data4 - *(_QWORD *)CKCLGuid.Data4;
  if ( !v15 )
  {
LABEL_193:
    RtlFreeUnicodeString(&DestinationString);
    v53 = v11 - *(_QWORD *)&SystemTraceControlGuid.Data1;
    if ( !v53 )
      v53 = v14 - *(_QWORD *)SystemTraceControlGuid.Data4;
    if ( v53 )
    {
      v54 = 2;
      v62 = 1;
      v55 = L"Circular Kernel Context Logger";
    }
    else
    {
      v54 = 0;
      v62 = 0;
      v55 = L"NT Kernel Logger";
    }
    v61 = v54;
    if ( !RtlCreateUnicodeString(&DestinationString, v55) )
      goto LABEL_201;
    v7 |= 0x80u;
    if ( (v7 & 0x1000000) == 0 )
    {
      v50 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 8LL * v54), v12 | 1, 1LL) == 1;
LABEL_165:
      if ( v50 )
      {
        v21 = v61;
        goto LABEL_57;
      }
      goto LABEL_177;
    }
    goto LABEL_129;
  }
  v16 = *(_QWORD *)&Buf2.Data1 - *(_QWORD *)&GlobalLoggerGuid.Data1;
  if ( *(_QWORD *)&Buf2.Data1 == *(_QWORD *)&GlobalLoggerGuid.Data1 )
    v16 = *(_QWORD *)Buf2.Data4 - *(_QWORD *)GlobalLoggerGuid.Data4;
  if ( !v16 )
  {
    v61 = 1;
    if ( !EtwpGetFlagExtension(a2, 1) )
    {
LABEL_182:
      v50 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 8), v12 | 1, 1LL) == 1;
      goto LABEL_165;
    }
    if ( (v7 & 0x1000000) == 0 )
    {
      RtlFreeUnicodeString(&DestinationString);
      if ( !RtlCreateUnicodeString(&DestinationString, L"NT Kernel Logger") )
        goto LABEL_201;
      v62 = 0;
      goto LABEL_182;
    }
LABEL_129:
    FileName = -1073741811;
    goto LABEL_233;
  }
  v17 = *(_QWORD *)&Buf2.Data1 - *(_QWORD *)&AuditLoggerGuid.Data1;
  if ( *(_QWORD *)&Buf2.Data1 == *(_QWORD *)&AuditLoggerGuid.Data1 )
    v17 = *(_QWORD *)Buf2.Data4 - *(_QWORD *)AuditLoggerGuid.Data4;
  if ( !v17 )
  {
    v61 = 3;
    if ( (v7 & 0x1000000) == 0 )
    {
      RtlFreeUnicodeString(&DestinationString);
      if ( RtlCreateUnicodeString(&DestinationString, L"Eventlog-Security") )
      {
        v7 |= 0x80u;
        v50 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 24), v12 | 1, 1LL) == 1;
        goto LABEL_165;
      }
LABEL_201:
      FileName = -1073741801;
      goto LABEL_233;
    }
    goto LABEL_129;
  }
  if ( !wcsicmp(DestinationString.Buffer, L"Eventlog-Security") )
  {
    v51 = v11 - *(_QWORD *)&AuditLoggerGuid.Data1;
    if ( v11 == *(_QWORD *)&AuditLoggerGuid.Data1 )
      v51 = v14 - *(_QWORD *)AuditLoggerGuid.Data4;
    if ( v51 )
      goto LABEL_177;
  }
  v18 = 4;
  if ( *(_DWORD *)(a1 + 8) <= 4u )
    goto LABEL_51;
  while ( 1 )
  {
    v19 = EtwpAcquireLoggerContextByLoggerId(a1, v18, 0);
    if ( v19 )
      break;
LABEL_50:
    if ( ++v18 >= *(_DWORD *)(a1 + 8) )
      goto LABEL_51;
  }
  v46 = *(_QWORD *)(v19 + 292) - v11;
  if ( !v46 )
    v46 = *(_QWORD *)(v19 + 300) - v14;
  if ( v46 )
  {
    EtwpReleaseLoggerContext((unsigned int *)v19, 0);
    goto LABEL_50;
  }
  EtwpReleaseLoggerContext((unsigned int *)v19, 0);
LABEL_51:
  v20 = *(_DWORD *)(a1 + 8);
  if ( v18 < v20 )
    goto LABEL_177;
  v21 = 4;
  v61 = 4;
  if ( v20 > 4 )
  {
    v22 = v68;
    v23 = v68 | 1;
    do
    {
      v24 = _InterlockedCompareExchange64((volatile signed __int64 *)(v22 + 8LL * v21), v23, 1LL);
      v21 = v61;
      if ( v24 == 1 )
        break;
      v21 = v61 + 1;
      v61 = v21;
    }
    while ( v21 < *(_DWORD *)(a1 + 8) );
  }
  if ( v21 >= *(_DWORD *)(a1 + 8) )
  {
    if ( !byte_1403A5E90 )
    {
      byte_1403A5E90 = 1;
      if ( stru_140354B90.LevelPlus1 > 5 )
      {
        if ( TlgKeywordOn(&stru_140354B90, 0x800000000000uLL) )
        {
          v65 = v52;
          v81 = &v65;
          v82 = 4LL;
          TlgWrite(&stru_140354B90, &unk_1402D4BA6, 0LL, 0LL, 3u, &pData);
        }
      }
    }
    FileName = -1073741670;
    goto LABEL_233;
  }
LABEL_57:
  v25 = *(_QWORD *)(a1 + 416);
  v26 = v21;
  v67 = v21;
  ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v25 + 8LL * v21), 1u);
  EtwpGetSecurityDescriptorByGuid(&Buf2.Data1, &SecurityDescriptor);
  FileName = EtwpAccessCheck(SecurityDescriptor, DesiredAccess, 0LL);
  if ( FileName < 0 )
    goto LABEL_232;
  v27 = *(_QWORD *)&HeapGuid.Data1 - *(_QWORD *)&Buf2.Data1;
  if ( *(_QWORD *)&HeapGuid.Data1 == *(_QWORD *)&Buf2.Data1 )
    v27 = *(_QWORD *)HeapGuid.Data4 - *(_QWORD *)Buf2.Data4;
  if ( v27 )
    v60 = memcmp(&CritSecGuid, &Buf2, 0x10uLL) != 0 ? 9 : 1;
  else
    v60 = 0;
  if ( (*(_DWORD *)(a2 + 64) & 0x2000000) != 0 && v62 == 8 )
  {
    FileName = EtwpCheckGuidAccess(&SystemTraceControlGuid, 128LL, 0LL);
    if ( FileName < 0 )
      goto LABEL_232;
    v56 = 2;
    v62 = 2;
    do
    {
      if ( !_bittest((const signed __int32 *)(a1 + 4172), v56) )
        break;
      ++v56;
    }
    while ( v56 < 8 );
    v62 = v56;
    if ( v56 == 8 )
    {
      FileName = -1073741670;
      goto LABEL_232;
    }
  }
  inited = (unsigned int *)EtwpInitLoggerContext((const void **)&DestinationString, v7);
  RtlFreeUnicodeString(&DestinationString);
  if ( !inited )
  {
    FileName = -1073741801;
    goto LABEL_231;
  }
  *(UUID *)(inited + 73) = Buf2;
  inited[77] = *(_DWORD *)(a2 + 60);
  if ( (*(_DWORD *)(a2 + 80) & 1) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)inited + 208, 0x10u);
    v21 = v61;
  }
  inited[54] = *(_DWORD *)(a2 + 40);
  v29 = *(_DWORD *)(a2 + 68);
  if ( v29 )
  {
    inited[56] = v29;
  }
  else if ( (v7 & 0x100) != 0 )
  {
    inited[56] = (v7 & 0x10) != 0 ? 1000 : 1;
  }
  v30 = *(_DWORD *)(a2 + 76);
  if ( v30 && (inited[56] || v30 < 0) )
    *(_DWORD *)(a2 + 76) = 0;
  v31 = *(_DWORD *)(a2 + 76);
  *inited = v21;
  inited[57] = v31;
  *((_QWORD *)inited + 282) = a1;
  if ( *(_WORD *)(a2 + 128) )
  {
    if ( *(_QWORD *)(a2 + 136) )
    {
      FileName = EtwpCaptureString(a2 + 128, &UnicodeString);
      if ( FileName < 0 )
      {
LABEL_222:
        if ( (inited[3] & 0x2000000) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(a1 + 4172), v62);
        if ( (inited[208] & 0x80u) != 0 )
          ExFreePoolWithTag(*((PVOID *)inited + 267), 0);
        if ( (inited[208] & 0x2000) != 0 )
          _InterlockedDecrement(&dword_14038CC20);
        RtlFreeUnicodeString((PUNICODE_STRING)(inited + 42));
        RtlFreeUnicodeString((PUNICODE_STRING)(inited + 46));
        v57 = (void *)*((_QWORD *)inited + 102);
        if ( v57 )
          ZwClose(v57);
        ExFreePoolWithTag(inited, 0);
LABEL_231:
        v26 = v67;
LABEL_232:
        ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 416) + 8 * v26), 1u);
        _InterlockedExchange64((volatile __int64 *)(v68 + 8 * v26), 1LL);
        goto LABEL_233;
      }
    }
  }
  if ( (*(_DWORD *)(a2 + 112) & 2) != 0 )
  {
    inited[78] = *(_DWORD *)(a2 + 96);
    *(_DWORD *)(a2 + 96) = 0;
  }
  if ( (inited[3] & 8) != 0 )
  {
    *(UNICODE_STRING *)(inited + 46) = UnicodeString;
    RtlInitUnicodeString(&UnicodeString, 0LL);
    v32 = inited + 42;
    FileName = EtwpGenerateFileName(inited + 46, inited + 78, inited + 42);
    if ( FileName >= 0 )
      goto LABEL_76;
    goto LABEL_222;
  }
  v32 = inited + 42;
  *(UNICODE_STRING *)(inited + 42) = UnicodeString;
  RtlInitUnicodeString(&UnicodeString, 0LL);
LABEL_76:
  ClientSecurityQos.Length = 12;
  ClientSecurityQos.ImpersonationLevel = SecurityImpersonation;
  *(_WORD *)&ClientSecurityQos.ContextTrackingMode = 257;
  FileName = SeCreateClientSecurity(KeGetCurrentThread(), &ClientSecurityQos, 0, (PSECURITY_CLIENT_CONTEXT)inited + 10);
  if ( FileName < 0 )
    goto LABEL_222;
  if ( (inited[3] & 0x100) != 0 )
    _InterlockedOr((volatile signed __int32 *)inited + 208, 8u);
  else
    _InterlockedAnd((volatile signed __int32 *)inited + 208, 0xFFFFFFF7);
  if ( (*(_DWORD *)(a2 + 112) & 2) != 0 )
    _InterlockedOr((volatile signed __int32 *)inited + 208, 2u);
  if ( (*(_BYTE *)(a2 + 112) & 1) != 0 )
    _InterlockedOr((volatile signed __int32 *)inited + 208, 1u);
  if ( (*(_DWORD *)(a2 + 112) & 0x4000) != 0 )
    _InterlockedOr((volatile signed __int32 *)inited + 208, 0x4000u);
  EtwpInitializeTimeStamp((__int64)inited);
  v33 = v62;
  if ( v62 < 8 )
  {
    inited[3] |= 0x2000000u;
    *((_BYTE *)inited + 834) = v33;
    if ( (unsigned int)v33 <= 1 )
      _InterlockedOr((volatile signed __int32 *)inited + 208, 0x20u);
    *(_BYTE *)(a1 + 2 * v33 + 4156) = v61;
    if ( inited[54] - 1 >= 3 )
      *(_BYTE *)(a1 + 2 * v33 + 4157) = 1;
    else
      *(_BYTE *)(a1 + 2 * v33 + 4157) = *((_BYTE *)inited + 216);
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 4172), v33);
  }
  FileName = EtwpCheckForStackTracingExtension(a2, (__int64)inited);
  if ( FileName < 0 )
    goto LABEL_222;
  v34 = *(_DWORD *)(a2 + 52);
  if ( v34 )
    inited[60] = v34;
  v35 = *(_DWORD *)(a2 + 56);
  if ( v35 )
    inited[63] = v35;
  v36 = *(_DWORD *)(a2 + 48);
  if ( v36 )
  {
    if ( v36 > 0x4000 )
      *(_DWORD *)(a2 + 48) = 0x4000;
    inited[1] = *(_DWORD *)(a2 + 48) << 10;
  }
  if ( *v32 )
  {
    _InterlockedOr((volatile signed __int32 *)inited + 209, 1u);
    *((_QWORD *)inited + 6) = KeGetCurrentThread();
    FileName = EtwpCreateLogFile(inited, 0LL);
    if ( FileName < 0 )
      goto LABEL_222;
  }
  if ( inited[1] < 0x1000 && (*v32 || (inited[3] & 0x400) != 0) )
    _InterlockedOr((volatile signed __int32 *)inited + 208, 0x1000u);
  v37 = inited[1];
  v38 = 0xFFFF;
  if ( (unsigned __int64)(v37 - 72) < 0xFFFF )
    v38 = v37 - 72;
  inited[2] = v38 & 0xFFFFFFF8;
  FileName = EtwpAllocateTraceBufferPool(inited);
  if ( FileName < 0 )
    goto LABEL_221;
  v39 = inited[77];
  if ( !v39 || (inited[3] & 0x2000) != 0 )
    v40 = 10485760LL;
  else
    v40 = (unsigned __int64)v39 << 20;
  v41 = 2 * inited[1] * inited[63];
  if ( v40 > v41 )
    v41 = v40;
  *((_QWORD *)inited + 54) = v41;
  FileName = ObLogSecurityDescriptor((char *)SecurityDescriptor, &v71, 0x10u);
  if ( FileName >= 0 )
  {
    if ( v71 )
      *((_QWORD *)inited + 100) = v71 + 15;
    else
      *((_QWORD *)inited + 100) = 0LL;
  }
  EtwpFreeSecurityDescriptor(&SecurityDescriptor);
  if ( FileName < 0 )
  {
LABEL_221:
    EtwpFreeTraceBufferPool(inited);
    goto LABEL_222;
  }
  _InterlockedAdd((volatile signed __int32 *)(a1 + 4092), 1u);
  v42 = v67;
  ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 416) + 8 * v67), 1u);
  if ( (inited[3] & 0x400) != 0 )
    goto LABEL_113;
  v74 = 48;
  v78 = 0LL;
  v75 = 0LL;
  v77 = 512;
  v76 = 0LL;
  v73[0] = PsGetCurrentServerSilo();
  v73[1] = inited;
  FileName = PsCreateSystemThreadEx(&Handle, 0x1FFFFFLL, &v74, 0LL, 0LL, EtwpLogger, v73, 0LL, 0LL);
  if ( FileName < 0 )
  {
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 416) + 8 * v42), 1u);
LABEL_239:
    EtwpFreeLoggerContext(inited);
    return (unsigned int)FileName;
  }
  ZwClose(Handle);
  KeWaitForSingleObject(inited + 118, Executive, 0, 0, 0LL);
LABEL_113:
  if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_START_TRACE) )
    EtwpEventWriteTemplateSession(v43, &ETW_EVENT_START_TRACE, inited);
  KeWaitForSingleObject(inited + 162, Executive, 0, 0, 0LL);
  _InterlockedExchange64((volatile __int64 *)(v68 + 8 * v42), (__int64)inited);
  EtwpSendSessionNotification(inited, 5LL);
  if ( (inited[3] & 0x2000000) != 0 )
  {
    if ( a1 == EtwpHostSiloState )
    {
      LOBYTE(v44) = 1;
      FileName = EtwpCheckForPoolTagFilterExtension(inited, a2, v44);
      if ( FileName < 0 )
      {
LABEL_244:
        inited[14] = FileName;
        EtwpStopLoggerInstance(inited);
        if ( (inited[3] & 0x400) == 0 )
          goto LABEL_116;
        EtwpGetLoggerInfoFromContext(a2, inited);
        EtwpReleaseLoggerContext(inited, 1);
        goto LABEL_239;
      }
      EtwpUpdateTagFilter(0LL, 0LL, (char *)&EtwpObjectTypeFilter + 20 * v62);
    }
    FileName = EtwpUpdateLoggerGroupMasks(inited, a2);
    if ( FileName >= 0 )
      goto LABEL_116;
    goto LABEL_244;
  }
LABEL_116:
  if ( v60 != 9 )
    EtwpUpdatePerProcessTracing(a2, a1, *inited, v60);
  EtwpGetLoggerInfoFromContext(a2, inited);
  EtwpReleaseLoggerContext(inited, 1);
  return 0LL;
}
