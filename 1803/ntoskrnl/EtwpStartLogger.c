/*
 * XREFs of EtwpStartLogger @ 0x14058A5A4
 * Callers:
 *     EtwpStartTrace @ 0x140588150 (EtwpStartTrace.c)
 *     EtwStartAutoLogger @ 0x14063DF10 (EtwStartAutoLogger.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140006430 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140006660 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     _TlgWrite @ 0x14000769C (_TlgWrite.c)
 *     MmGetSessionId @ 0x14003F520 (MmGetSessionId.c)
 *     _TlgKeywordOn @ 0x14006F0F0 (_TlgKeywordOn.c)
 *     PsGetCurrentServerSilo @ 0x1400F17B0 (PsGetCurrentServerSilo.c)
 *     EtwEventEnabled @ 0x1400F3870 (EtwEventEnabled.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _wcsicmp @ 0x140188860 (_wcsicmp.c)
 *     memcmp @ 0x140189130 (memcmp.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     EtwpFreeTraceBufferPool @ 0x140493744 (EtwpFreeTraceBufferPool.c)
 *     EtwpFreeLoggerContext @ 0x140493884 (EtwpFreeLoggerContext.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     ObLogSecurityDescriptor @ 0x1404C6E50 (ObLogSecurityDescriptor.c)
 *     SeCreateClientSecurity @ 0x1404D41D0 (SeCreateClientSecurity.c)
 *     RtlCreateUnicodeString @ 0x140518CB0 (RtlCreateUnicodeString.c)
 *     PsCreateSystemThreadEx @ 0x14052AC40 (PsCreateSystemThreadEx.c)
 *     ExUuidCreate @ 0x14052FD70 (ExUuidCreate.c)
 *     EtwpGenerateFileName @ 0x1405878D8 (EtwpGenerateFileName.c)
 *     EtwpStopLoggerInstance @ 0x140587E20 (EtwpStopLoggerInstance.c)
 *     EtwpCreateLogFile @ 0x1405884D0 (EtwpCreateLogFile.c)
 *     EtwpValidateFlagExtension @ 0x140589318 (EtwpValidateFlagExtension.c)
 *     EtwpInitLoggerContext @ 0x1405893D4 (EtwpInitLoggerContext.c)
 *     EtwpInitializeTimeStamp @ 0x140589770 (EtwpInitializeTimeStamp.c)
 *     EtwpCheckForStackTracingExtension @ 0x140589850 (EtwpCheckForStackTracingExtension.c)
 *     EtwpGetFlagExtension @ 0x14058988C (EtwpGetFlagExtension.c)
 *     EtwpAllocateTraceBufferPool @ 0x1405898CC (EtwpAllocateTraceBufferPool.c)
 *     EtwpSendSessionNotification @ 0x14058A040 (EtwpSendSessionNotification.c)
 *     EtwpGetLoggerInfoFromContext @ 0x14058B16C (EtwpGetLoggerInfoFromContext.c)
 *     EtwpCaptureString @ 0x14058BA4C (EtwpCaptureString.c)
 *     EtwpLookupLoggerIdByName @ 0x14058DBC4 (EtwpLookupLoggerIdByName.c)
 *     EtwpCheckGuidAccess @ 0x14058DC64 (EtwpCheckGuidAccess.c)
 *     EtwpAccessCheck @ 0x14058F44C (EtwpAccessCheck.c)
 *     EtwpReleaseLoggerContext @ 0x140590D4C (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140590D94 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpFreeSecurityDescriptor @ 0x1405917E4 (EtwpFreeSecurityDescriptor.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x14059189C (EtwpGetSecurityDescriptorByGuid.c)
 *     EtwpCheckForPoolTagFilterExtension @ 0x140628A54 (EtwpCheckForPoolTagFilterExtension.c)
 *     EtwpUpdateLoggerGroupMasks @ 0x140628AE8 (EtwpUpdateLoggerGroupMasks.c)
 *     EtwpUpdatePerProcessTracing @ 0x1407A5C94 (EtwpUpdatePerProcessTracing.c)
 *     EtwpEventWriteTemplateAdmin @ 0x1407AB108 (EtwpEventWriteTemplateAdmin.c)
 *     EtwpEventWriteTemplateSession @ 0x1407AB340 (EtwpEventWriteTemplateSession.c)
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
  __int64 v11; // rdi
  UUID v12; // kr00_16
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r9
  unsigned int v18; // r12d
  unsigned int v19; // eax
  __int64 v20; // rax
  unsigned int v21; // r12d
  signed __int64 v22; // rax
  __int64 v23; // r13
  __int64 v24; // rax
  unsigned int *inited; // rdi
  unsigned int v26; // eax
  int v27; // eax
  int v28; // ecx
  __int64 v29; // r12
  UNICODE_STRING *v30; // r13
  int v31; // eax
  __int64 v32; // r9
  unsigned int v33; // eax
  unsigned int v34; // eax
  unsigned int v35; // eax
  unsigned int v36; // ecx
  int v37; // edx
  unsigned int v38; // ecx
  unsigned __int64 v39; // rdx
  __int64 v40; // rdi
  int v41; // eax
  char *v42; // rcx
  __int64 v43; // r14
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rdx
  __int64 v48; // rax
  __int64 v49; // rax
  unsigned int v50; // ecx
  __int64 v51; // rbx
  unsigned int v52; // ebx
  const WCHAR *v53; // rdx
  bool v54; // zf
  char v55; // dl
  __int64 v56; // rcx
  __int64 v57; // rax
  int v58; // r9d
  unsigned int v59; // eax
  __int64 v60; // rdx
  unsigned int v61; // eax
  void *v62; // rcx
  int v63; // ecx
  int v64; // r8d
  unsigned __int8 v65; // [rsp+50h] [rbp-B0h]
  int v66; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v67; // [rsp+58h] [rbp-A8h]
  __int64 v68; // [rsp+60h] [rbp-A0h]
  __int64 v69; // [rsp+68h] [rbp-98h]
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+80h] [rbp-80h] BYREF
  __int64 v72; // [rsp+88h] [rbp-78h]
  int v73; // [rsp+90h] [rbp-70h] BYREF
  ACCESS_MASK DesiredAccess; // [rsp+94h] [rbp-6Ch]
  UNICODE_STRING UnicodeString; // [rsp+98h] [rbp-68h] BYREF
  struct _SECURITY_QUALITY_OF_SERVICE ClientSecurityQos; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v77; // [rsp+B8h] [rbp-48h] BYREF
  HANDLE Handle; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v79[2]; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v80; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v81; // [rsp+E8h] [rbp-18h]
  int v82; // [rsp+F0h] [rbp-10h]
  __int128 v83; // [rsp+F8h] [rbp-8h]
  UUID Buf2; // [rsp+108h] [rbp+8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+118h] [rbp+18h] BYREF
  int *v86; // [rsp+138h] [rbp+38h]
  __int64 v87; // [rsp+140h] [rbp+40h]

  v68 = a1;
  v67 = 8;
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
      goto LABEL_126;
    v50 = v7 & 0xFFFFFEFF;
    if ( (v7 & 0x100) == 0 )
      v50 = v7;
    v7 = v50;
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
    goto LABEL_126;
  }
  if ( (v7 & 8) != 0 )
  {
    if ( !*(_QWORD *)(a2 + 136)
      || (v7 & 2) != 0
      || !*(_DWORD *)(a2 + 60)
      || (*(_DWORD *)(a2 + 112) & 2) != 0
      || (v4 & 0x2000000) != 0 )
    {
      goto LABEL_126;
    }
    v48 = *(_QWORD *)(a2 + 24) - *(_QWORD *)&SystemTraceControlGuid.Data1;
    if ( !v48 )
      v48 = *(_QWORD *)(a2 + 32) - *(_QWORD *)SystemTraceControlGuid.Data4;
    if ( !v48 )
      goto LABEL_126;
    v49 = *(_QWORD *)(a2 + 24) - *(_QWORD *)&CKCLGuid.Data1;
    if ( !v49 )
      v49 = *(_QWORD *)(a2 + 32) - *(_QWORD *)CKCLGuid.Data4;
    if ( !v49 || (v7 & 4) != 0 )
      goto LABEL_126;
  }
  if ( (v4 & 0x3000000) == 0x3000000 || (v4 & 0x4000000) != 0 && (v4 & 0x400) == 0 || (v4 & 0x10000) != 0 )
    goto LABEL_126;
  FileName = EtwpValidateFlagExtension((unsigned int *)a2);
  if ( FileName < 0 )
    goto LABEL_244;
  v9 = ((v7 & 0x100 | 0x400) >> 3) | 0x40;
  if ( !*(_WORD *)(a2 + 128) )
    v9 = (v7 & 0x100 | 0x400) >> 3;
  DesiredAccess = v9;
  if ( !*(_WORD *)(a2 + 144) || !*(_QWORD *)(a2 + 152) )
    goto LABEL_126;
  FileName = EtwpCaptureString(a2 + 144, &DestinationString);
  if ( FileName )
  {
LABEL_244:
    if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_SESSION_START_FAILED) )
      EtwpEventWriteTemplateAdmin(
        v63,
        (unsigned int)&ETW_EVENT_SESSION_START_FAILED,
        v64,
        (unsigned int)&DestinationString,
        (__int64)&UnicodeString,
        FileName,
        v7);
    RtlFreeAnsiString(&DestinationString);
    RtlFreeAnsiString(&UnicodeString);
    EtwpFreeSecurityDescriptor(&SecurityDescriptor);
    return (unsigned int)FileName;
  }
  if ( !(unsigned int)EtwpLookupLoggerIdByName(a1, &DestinationString, &v66) )
  {
LABEL_195:
    FileName = -1073741771;
    goto LABEL_244;
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
      goto LABEL_244;
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
  v11 = *(_QWORD *)(a1 + 432);
  v12 = Buf2;
  v13 = *(_QWORD *)&Buf2.Data1 - *(_QWORD *)&SystemTraceControlGuid.Data1;
  v72 = v11;
  if ( *(_QWORD *)&Buf2.Data1 == *(_QWORD *)&SystemTraceControlGuid.Data1 )
    v13 = *(_QWORD *)Buf2.Data4 - *(_QWORD *)SystemTraceControlGuid.Data4;
  if ( !v13 )
    goto LABEL_158;
  v14 = *(_QWORD *)&Buf2.Data1 - *(_QWORD *)&CKCLGuid.Data1;
  if ( *(_QWORD *)&Buf2.Data1 == *(_QWORD *)&CKCLGuid.Data1 )
    v14 = *(_QWORD *)Buf2.Data4 - *(_QWORD *)CKCLGuid.Data4;
  if ( !v14 )
  {
LABEL_158:
    RtlFreeAnsiString(&DestinationString);
    v51 = *(_QWORD *)&v12.Data1 - *(_QWORD *)&SystemTraceControlGuid.Data1;
    if ( *(_QWORD *)&v12.Data1 == *(_QWORD *)&SystemTraceControlGuid.Data1 )
      v51 = *(_QWORD *)v12.Data4 - *(_QWORD *)SystemTraceControlGuid.Data4;
    if ( v51 )
    {
      v52 = 2;
      v67 = 1;
      v53 = L"Circular Kernel Context Logger";
    }
    else
    {
      v52 = 0;
      v67 = 0;
      v53 = L"NT Kernel Logger";
    }
    v66 = v52;
    if ( !RtlCreateUnicodeString(&DestinationString, v53) )
      goto LABEL_211;
    v7 |= 0x80u;
    if ( (v7 & 0x1000000) == 0 )
    {
      v54 = _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 8LL * v52), v11 | 1, 1LL) == 1;
      goto LABEL_165;
    }
    goto LABEL_126;
  }
  v15 = *(_QWORD *)&Buf2.Data1 - *(_QWORD *)&GlobalLoggerGuid.Data1;
  if ( *(_QWORD *)&Buf2.Data1 == *(_QWORD *)&GlobalLoggerGuid.Data1 )
    v15 = *(_QWORD *)Buf2.Data4 - *(_QWORD *)GlobalLoggerGuid.Data4;
  if ( v15 )
  {
    v16 = *(_QWORD *)&Buf2.Data1 - *(_QWORD *)&AuditLoggerGuid.Data1;
    if ( *(_QWORD *)&Buf2.Data1 == *(_QWORD *)&AuditLoggerGuid.Data1 )
      v16 = *(_QWORD *)Buf2.Data4 - *(_QWORD *)AuditLoggerGuid.Data4;
    if ( v16 )
    {
      if ( wcsicmp(DestinationString.Buffer, L"Eventlog-Security") )
        goto LABEL_250;
      v57 = *(_QWORD *)&v12.Data1 - *(_QWORD *)&AuditLoggerGuid.Data1;
      if ( *(_QWORD *)&v12.Data1 == *(_QWORD *)&AuditLoggerGuid.Data1 )
        v57 = *(_QWORD *)v12.Data4 - *(_QWORD *)AuditLoggerGuid.Data4;
      if ( !v57 )
      {
LABEL_250:
        v17 = v68;
        v18 = 4;
        v19 = *(_DWORD *)(v68 + 16);
        if ( v19 <= 4 )
          goto LABEL_53;
        while ( 1 )
        {
          v20 = EtwpAcquireLoggerContextByLoggerId(v17, v18, 0LL);
          if ( v20 )
          {
            v40 = *(_QWORD *)(v20 + 292) - *(_QWORD *)&v12.Data1;
            if ( !v40 )
              v40 = *(_QWORD *)(v20 + 300) - *(_QWORD *)v12.Data4;
            EtwpReleaseLoggerContext(v20, 0LL);
            if ( !v40 )
              break;
          }
          v17 = v68;
          ++v18;
          v19 = *(_DWORD *)(v68 + 16);
          if ( v18 >= v19 )
            goto LABEL_52;
        }
        v17 = v68;
        v19 = *(_DWORD *)(v68 + 16);
LABEL_52:
        v11 = v72;
        if ( v18 >= v19 )
        {
LABEL_53:
          v21 = 4;
          v66 = 4;
          if ( v19 > 4 )
          {
            do
            {
              v22 = _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 8LL * v21), v11 | 1, 1LL);
              v21 = v66;
              if ( v22 == 1 )
                break;
              v21 = v66 + 1;
              v66 = v21;
            }
            while ( v21 < *(_DWORD *)(v17 + 16) );
          }
          if ( v21 >= *(_DWORD *)(v17 + 16) )
          {
            if ( !byte_1403EBDC0 )
            {
              byte_1403EBDC0 = 1;
              if ( stru_1403977A0.LevelPlus1 > 5 )
              {
                if ( TlgKeywordOn(&stru_1403977A0, 0x800000000000uLL) )
                {
                  v73 = v58;
                  v86 = &v73;
                  v87 = 4LL;
                  TlgWrite(&stru_1403977A0, &unk_14030EDCF, 0LL, 0LL, 3u, &pData);
                }
              }
            }
            FileName = -1073741670;
            goto LABEL_244;
          }
          goto LABEL_57;
        }
      }
      goto LABEL_195;
    }
    v66 = 3;
    if ( (v7 & 0x1000000) == 0 )
    {
      RtlFreeAnsiString(&DestinationString);
      if ( RtlCreateUnicodeString(&DestinationString, L"Eventlog-Security") )
      {
        v7 |= 0x80u;
        v54 = _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 24), v11 | 1, 1LL) == 1;
        goto LABEL_165;
      }
LABEL_211:
      FileName = -1073741801;
      goto LABEL_244;
    }
    goto LABEL_126;
  }
  v66 = 1;
  if ( EtwpGetFlagExtension(a2, 1) )
  {
    if ( (v7 & 0x1000000) == 0 )
    {
      RtlFreeAnsiString(&DestinationString);
      if ( !RtlCreateUnicodeString(&DestinationString, L"NT Kernel Logger") )
        goto LABEL_211;
      v67 = 0;
      goto LABEL_200;
    }
LABEL_126:
    FileName = -1073741811;
    goto LABEL_244;
  }
LABEL_200:
  v54 = _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 8), v11 | 1, 1LL) == 1;
LABEL_165:
  if ( !v54 )
    goto LABEL_195;
  v21 = v66;
LABEL_57:
  v23 = v21;
  v69 = v21;
  ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v68 + 424) + 8LL * v21), 1u);
  EtwpGetSecurityDescriptorByGuid(&Buf2, &SecurityDescriptor);
  FileName = EtwpAccessCheck(SecurityDescriptor, DesiredAccess, 0LL);
  if ( FileName < 0 )
    goto LABEL_243;
  v24 = *(_QWORD *)&HeapGuid.Data1 - *(_QWORD *)&Buf2.Data1;
  if ( *(_QWORD *)&HeapGuid.Data1 == *(_QWORD *)&Buf2.Data1 )
    v24 = *(_QWORD *)HeapGuid.Data4 - *(_QWORD *)Buf2.Data4;
  if ( v24 )
    v65 = memcmp(&CritSecGuid, &Buf2, 0x10uLL) != 0 ? 9 : 1;
  else
    v65 = 0;
  if ( (*(_DWORD *)(a2 + 64) & 0x2000000) == 0 || v67 != 8 )
    goto LABEL_63;
  FileName = EtwpCheckGuidAccess(&SystemTraceControlGuid, 128LL, 0LL);
  if ( FileName < 0 )
  {
LABEL_243:
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v68 + 424) + 8 * v23), 1u);
    _InterlockedExchange64((volatile __int64 *)(v72 + 8 * v23), 1LL);
    goto LABEL_244;
  }
  v59 = 2;
  v67 = 2;
  do
  {
    if ( !_bittest((const signed __int32 *)(v68 + 4188), v59) )
      break;
    ++v59;
  }
  while ( v59 < 8 );
  v67 = v59;
  if ( v59 == 8 )
  {
    FileName = -1073741670;
    goto LABEL_243;
  }
LABEL_63:
  inited = (unsigned int *)EtwpInitLoggerContext((const void **)&DestinationString, v7);
  RtlFreeAnsiString(&DestinationString);
  if ( !inited )
  {
    FileName = -1073741801;
    goto LABEL_243;
  }
  *(UUID *)(inited + 73) = Buf2;
  inited[77] = *(_DWORD *)(a2 + 60);
  if ( (*(_DWORD *)(a2 + 80) & 1) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)inited + 208, 0x10u);
    v21 = v66;
  }
  inited[54] = *(_DWORD *)(a2 + 40);
  v26 = *(_DWORD *)(a2 + 68);
  if ( v26 )
  {
    inited[56] = v26;
  }
  else if ( (v7 & 0x100) != 0 )
  {
    inited[56] = (v7 & 0x10) != 0 ? 1000 : 1;
  }
  v27 = *(_DWORD *)(a2 + 76);
  v28 = v27;
  if ( v27 && (inited[56] || v27 < 0) )
  {
    *(_DWORD *)(a2 + 76) = 0;
    v28 = 0;
  }
  *inited = v21;
  v29 = v68;
  inited[57] = v28;
  *((_QWORD *)inited + 139) = v29;
  if ( *(_WORD *)(a2 + 128) )
  {
    if ( *(_QWORD *)(a2 + 136) )
    {
      FileName = EtwpCaptureString(a2 + 128, &UnicodeString);
      if ( FileName < 0 )
      {
LABEL_234:
        if ( (inited[3] & 0x2000000) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(v29 + 4188), v67);
        v61 = inited[208];
        if ( (v61 & 0x80u) != 0 )
        {
          ExFreePoolWithTag(*((PVOID *)inited + 123), 0);
          v61 = inited[208];
        }
        if ( (v61 & 0x2000) != 0 )
          _InterlockedDecrement(&dword_1403D0EE0);
        RtlFreeAnsiString((PUNICODE_STRING)(inited + 42));
        RtlFreeAnsiString((PUNICODE_STRING)(inited + 46));
        v62 = (void *)*((_QWORD *)inited + 102);
        if ( v62 )
          ZwClose(v62);
        ExFreePoolWithTag(inited, 0);
        goto LABEL_243;
      }
    }
  }
  if ( (*(_DWORD *)(a2 + 112) & 2) != 0 )
  {
    inited[78] = *(_DWORD *)(a2 + 96);
    *(_DWORD *)(a2 + 96) = 0;
  }
  v30 = (UNICODE_STRING *)(inited + 42);
  if ( (inited[3] & 8) != 0 )
  {
    *(UNICODE_STRING *)(inited + 46) = UnicodeString;
    RtlInitUnicodeString(&UnicodeString, 0LL);
    FileName = EtwpGenerateFileName(
                 (unsigned __int16 *)inited + 92,
                 (volatile signed __int32 *)inited + 78,
                 (UNICODE_STRING *)(inited + 42));
    if ( FileName < 0 )
      goto LABEL_232;
  }
  else
  {
    *v30 = UnicodeString;
    RtlInitUnicodeString(&UnicodeString, 0LL);
  }
  ClientSecurityQos.Length = 12;
  ClientSecurityQos.ImpersonationLevel = SecurityImpersonation;
  *(_WORD *)&ClientSecurityQos.ContextTrackingMode = 257;
  FileName = SeCreateClientSecurity(KeGetCurrentThread(), &ClientSecurityQos, 0, (PSECURITY_CLIENT_CONTEXT)inited + 10);
  if ( FileName < 0 )
  {
LABEL_232:
    v29 = v68;
    goto LABEL_233;
  }
  if ( (inited[3] & 0x100) != 0 )
    _InterlockedOr((volatile signed __int32 *)inited + 208, 8u);
  else
    _InterlockedAnd((volatile signed __int32 *)inited + 208, 0xFFFFFFF7);
  v31 = *(_DWORD *)(a2 + 112);
  if ( (v31 & 2) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)inited + 208, 2u);
    v31 = *(_DWORD *)(a2 + 112);
  }
  if ( (v31 & 1) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)inited + 208, 1u);
    v31 = *(_DWORD *)(a2 + 112);
  }
  if ( (v31 & 0x4000) != 0 )
    _InterlockedOr((volatile signed __int32 *)inited + 208, 0x4000u);
  EtwpInitializeTimeStamp((__int64)inited);
  v32 = v67;
  if ( v67 < 8 )
  {
    inited[3] |= 0x2000000u;
    *((_BYTE *)inited + 834) = v32;
    if ( (unsigned int)v32 <= 1 )
      _InterlockedOr((volatile signed __int32 *)inited + 208, 0x20u);
    v29 = v68;
    v55 = 1;
    *(_BYTE *)(v68 + 2 * v32 + 4172) = v66;
    if ( inited[54] - 1 < 4 )
      v55 = inited[54];
    *(_BYTE *)(v29 + 2 * v32 + 4173) = v55;
    _interlockedbittestandset((volatile signed __int32 *)(v29 + 4188), v32);
  }
  else
  {
    v29 = v68;
  }
  FileName = EtwpCheckForStackTracingExtension(a2, (__int64)inited);
  if ( FileName < 0 )
    goto LABEL_233;
  v33 = *(_DWORD *)(a2 + 52);
  if ( v33 )
    inited[60] = v33;
  v34 = *(_DWORD *)(a2 + 56);
  if ( v34 )
    inited[63] = v34;
  v35 = *(_DWORD *)(a2 + 48);
  if ( v35 )
  {
    if ( v35 > 0x4000 )
    {
      *(_DWORD *)(a2 + 48) = 0x4000;
      v35 = 0x4000;
    }
    inited[1] = v35 << 10;
  }
  if ( v30->Length )
  {
    _InterlockedOr((volatile signed __int32 *)inited + 209, 1u);
    *((_QWORD *)inited + 6) = KeGetCurrentThread();
    FileName = EtwpCreateLogFile((__int64)inited, 0);
    if ( FileName < 0 )
      goto LABEL_233;
  }
  v36 = inited[1];
  if ( v36 < 0x1000 && (v30->Length || (inited[3] & 0x400) != 0) )
  {
    _InterlockedOr((volatile signed __int32 *)inited + 208, 0x1000u);
    v36 = inited[1];
  }
  v37 = 0xFFFF;
  if ( (unsigned __int64)v36 - 72 < 0xFFFF )
    v37 = v36 - 72;
  inited[2] = v37 & 0xFFFFFFF8;
  FileName = EtwpAllocateTraceBufferPool((__int64)inited);
  if ( FileName < 0 )
    goto LABEL_226;
  v38 = inited[77];
  if ( !v38 || (inited[3] & 0x2000) != 0 )
    v39 = 10485760LL;
  else
    v39 = (unsigned __int64)v38 << 20;
  v41 = inited[1] * inited[63];
  if ( v39 <= (unsigned int)(2 * v41) )
    v39 = (unsigned int)(2 * v41);
  v42 = (char *)SecurityDescriptor;
  *((_QWORD *)inited + 54) = v39;
  FileName = ObLogSecurityDescriptor(v42, &v77, 0x10u);
  if ( FileName >= 0 )
  {
    if ( v77 )
      *((_QWORD *)inited + 100) = v77 + 15;
    else
      *((_QWORD *)inited + 100) = 0LL;
  }
  EtwpFreeSecurityDescriptor(&SecurityDescriptor);
  if ( FileName < 0 )
  {
LABEL_226:
    EtwpFreeTraceBufferPool(inited);
LABEL_233:
    v23 = v69;
    goto LABEL_234;
  }
  _InterlockedAdd((volatile signed __int32 *)(v29 + 4100), 1u);
  v43 = v69;
  ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v29 + 424) + 8 * v69), 1u);
  if ( (inited[3] & 0x400) == 0 )
  {
    LODWORD(v80) = 48;
    v83 = 0LL;
    *((_QWORD *)&v80 + 1) = 0LL;
    v82 = 512;
    v81 = 0LL;
    v79[0] = PsGetCurrentServerSilo();
    v79[1] = inited;
    FileName = PsCreateSystemThreadEx(
                 (__int64)&Handle,
                 0x1FFFFF,
                 &v80,
                 0LL,
                 0LL,
                 (__int64)EtwpLogger,
                 (__int64)v79,
                 0LL,
                 0LL);
    if ( FileName < 0 )
    {
      ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v29 + 424) + 8 * v43), 1u);
LABEL_229:
      EtwpFreeLoggerContext((char *)inited);
      return (unsigned int)FileName;
    }
    ZwClose(Handle);
    KeWaitForSingleObject(inited + 118, Executive, 0, 0, 0LL);
  }
  if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_START_TRACE) )
    EtwpEventWriteTemplateSession(v44, &ETW_EVENT_START_TRACE, inited);
  KeWaitForSingleObject(inited + 162, Executive, 0, 0, 0LL);
  _InterlockedExchange64((volatile __int64 *)(v72 + 8 * v43), (__int64)inited);
  EtwpSendSessionNotification((__int64)inited, 5u, 0);
  if ( (inited[3] & 0x2000000) == 0 )
    goto LABEL_123;
  if ( v29 != EtwpHostSiloState )
  {
LABEL_175:
    FileName = EtwpUpdateLoggerGroupMasks(inited, a2);
    if ( FileName >= 0 )
      goto LABEL_123;
    goto LABEL_230;
  }
  LOBYTE(v45) = 1;
  FileName = EtwpCheckForPoolTagFilterExtension(inited, a2, v45);
  if ( FileName >= 0 )
  {
    v56 = 5LL * v67;
    *((_WORD *)&EtwpObjectTypeFilter + 2 * v56) = 1;
    *((_DWORD *)&EtwpObjectTypeFilter + v56 + 1) = 42;
    goto LABEL_175;
  }
LABEL_230:
  inited[14] = FileName;
  EtwpStopLoggerInstance((unsigned __int64)inited);
  if ( (inited[3] & 0x400) != 0 )
  {
    EtwpGetLoggerInfoFromContext(a2, inited);
    LOBYTE(v60) = 1;
    EtwpReleaseLoggerContext(inited, v60);
    goto LABEL_229;
  }
LABEL_123:
  if ( v65 != 9 )
    EtwpUpdatePerProcessTracing(a2, v29, *inited, v65);
  EtwpGetLoggerInfoFromContext(a2, inited);
  LOBYTE(v46) = 1;
  EtwpReleaseLoggerContext(inited, v46);
  return 0LL;
}
