/*
 * XREFs of EtwpUpdateTrace @ 0x140450B18
 * Callers:
 *     NtTraceControl @ 0x14049AB40 (NtTraceControl.c)
 *     EtwWmitraceWorker @ 0x14074A7F4 (EtwWmitraceWorker.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     EtwpQueryUsedProcessorCount @ 0x1400E08AC (EtwpQueryUsedProcessorCount.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x140450E0C (EtwpUpdateLoggerSecurityDescriptor.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x14048685C (EtwpGetSecurityDescriptorByGuid.c)
 *     EtwpCheckLoggerControlAccess @ 0x14048E46C (EtwpCheckLoggerControlAccess.c)
 *     EtwpReleaseLoggerContext @ 0x14049227C (EtwpReleaseLoggerContext.c)
 *     EtwpFreeSecurityDescriptor @ 0x140492ADC (EtwpFreeSecurityDescriptor.c)
 *     SeCreateClientSecurity @ 0x14049CBB0 (SeCreateClientSecurity.c)
 *     EtwpCheckForStackTracingExtension @ 0x1404ECCF8 (EtwpCheckForStackTracingExtension.c)
 *     EtwpAcquireLoggerContext @ 0x1404ED888 (EtwpAcquireLoggerContext.c)
 *     EtwpCaptureString @ 0x1404EDA2C (EtwpCaptureString.c)
 *     EtwpValidateLoggerInfo @ 0x1404EDB3C (EtwpValidateLoggerInfo.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1404EDB70 (EtwpGetLoggerInfoFromContext.c)
 *     EtwpGetSystemMaximumBufferCount @ 0x1404F0098 (EtwpGetSystemMaximumBufferCount.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 *     EtwpSynchronizeWithLogger @ 0x140595F24 (EtwpSynchronizeWithLogger.c)
 *     EtwpValidateFlagExtension @ 0x14059E32C (EtwpValidateFlagExtension.c)
 *     EtwpUpdatePerProcessTracing @ 0x140743FB4 (EtwpUpdatePerProcessTracing.c)
 *     EtwpCheckForPoolTagFilterExtension @ 0x140748F80 (EtwpCheckForPoolTagFilterExtension.c)
 *     EtwpEventWriteTemplateSession @ 0x140749674 (EtwpEventWriteTemplateSession.c)
 *     EtwpUpdateLoggerGroupMasks @ 0x140749BD8 (EtwpUpdateLoggerGroupMasks.c)
 *     EtwpSendDbgId @ 0x14074AC50 (EtwpSendDbgId.c)
 *     EtwpCheckSystemTraceAccess @ 0x140751BD8 (EtwpCheckSystemTraceAccess.c)
 */

__int64 __fastcall EtwpUpdateTrace(__int64 a1, __int64 a2)
{
  ACCESS_MASK v4; // r15d
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS LoggerInfoFromContext; // ebx
  unsigned int *v8; // rdi
  int v9; // r12d
  unsigned int v10; // r14d
  __int64 v11; // rdx
  unsigned int *v12; // r15
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r13
  unsigned int v17; // r10d
  unsigned int SystemMaximumBufferCount; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  __int64 v21; // rcx
  void *v22; // rcx
  UNICODE_STRING v23; // xmm0
  __int64 v24; // r9
  int v25; // ecx
  unsigned int *v26; // [rsp+20h] [rbp-30h]
  struct _SECURITY_QUALITY_OF_SERVICE ClientSecurityQos; // [rsp+28h] [rbp-28h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-18h] BYREF
  unsigned int *v30; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v31; // [rsp+A8h] [rbp+58h] BYREF

  *(_QWORD *)&UnicodeString.Length = 0LL;
  v30 = 0LL;
  UnicodeString.Buffer = 0LL;
  v4 = 128;
  result = EtwpValidateLoggerInfo(a2);
  if ( (int)result >= 0 )
  {
    result = EtwpValidateFlagExtension();
    if ( (int)result >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      LoggerInfoFromContext = EtwpAcquireLoggerContext(a1, a2, &v30);
      if ( LoggerInfoFromContext < 0 )
      {
LABEL_8:
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        return (unsigned int)LoggerInfoFromContext;
      }
      v8 = v30;
      v9 = *(_DWORD *)(a2 + 64);
      v10 = v30[3];
      v26 = v30 + 3;
      if ( (v10 & 0x40) != 0
        || (v9 & 3) == 3
        || (*(_DWORD *)(a2 + 64) & 0xC000) == 0xC000
        || (v9 & 2) != 0 && (v10 & 2) == 0
        || (v9 & 6) == 6 )
      {
        goto LABEL_6;
      }
      if ( (v9 & 0x100) != 0 || (v10 & 0x100) != 0 )
        v4 = 160;
      if ( *(_QWORD *)(a2 + 136) && *(_WORD *)(a2 + 128) )
        v4 |= 0x40u;
      LoggerInfoFromContext = EtwpCheckLoggerControlAccess(v4);
      if ( LoggerInfoFromContext < 0 )
        goto LABEL_7;
      if ( *(_QWORD *)(a2 + 136) && *(_WORD *)(a2 + 128) )
      {
        if ( (v10 & 8) != 0 || (v9 & 8) != 0 || (v10 & 0x400) != 0 )
          goto LABEL_6;
        LoggerInfoFromContext = EtwpCaptureString(a2 + 128, &UnicodeString);
        if ( LoggerInfoFromContext < 0 )
          goto LABEL_7;
        v22 = (void *)*((_QWORD *)v8 + 92);
        if ( v22 )
        {
          ObfDereferenceObject(v22);
          *((_QWORD *)v8 + 92) = 0LL;
        }
        v8 = v30;
        ClientSecurityQos.Length = 12;
        ClientSecurityQos.ImpersonationLevel = SecurityImpersonation;
        *(_WORD *)&ClientSecurityQos.ContextTrackingMode = 257;
        LoggerInfoFromContext = SeCreateClientSecurity(
                                  KeGetCurrentThread(),
                                  &ClientSecurityQos,
                                  0,
                                  (PSECURITY_CLIENT_CONTEXT)v30 + 10);
        if ( LoggerInfoFromContext < 0 )
          goto LABEL_7;
        v23 = UnicodeString;
        UnicodeString.Buffer = 0LL;
        *(UNICODE_STRING *)(v8 + 50) = v23;
        EtwpSynchronizeWithLogger(v8, 4LL);
        LoggerInfoFromContext = EtwpSynchronizeWithLogger(v8, 2LL);
        if ( LoggerInfoFromContext < 0 || !v8[84] )
          goto LABEL_7;
      }
      if ( (v10 & 0x400) != 0 )
        goto LABEL_24;
      if ( (v9 & 0x100) != 0 )
      {
        v10 |= 0x100u;
        if ( !v8[56] )
          v8[56] = (v10 & 0x10) != 0 ? 1000 : 1;
LABEL_24:
        v12 = v8 + 73;
        v13 = *(_QWORD *)(v8 + 73);
        v14 = *(_QWORD *)&HeapGuid.Data1 - v13;
        if ( *(_QWORD *)&HeapGuid.Data1 == v13 )
          v14 = *(_QWORD *)HeapGuid.Data4 - *(_QWORD *)(v8 + 75);
        if ( v14 )
        {
          v15 = *(_QWORD *)&CritSecGuid.Data1 - v13;
          if ( *(_QWORD *)&CritSecGuid.Data1 == v13 )
            v15 = *(_QWORD *)CritSecGuid.Data4 - *(_QWORD *)(v8 + 75);
          v16 = a1;
          if ( v15 )
          {
LABEL_30:
            LoggerInfoFromContext = EtwpCheckForStackTracingExtension(a2, v8);
            if ( LoggerInfoFromContext >= 0 )
            {
              if ( (*v26 & 0x2000000) == 0
                || (LoggerInfoFromContext = EtwpCheckSystemTraceAccess(v8, 128LL), LoggerInfoFromContext >= 0)
                && (v16 != EtwpHostSiloState
                 || (LoggerInfoFromContext = EtwpCheckForPoolTagFilterExtension(v8, a2, 0LL), LoggerInfoFromContext >= 0))
                && (LoggerInfoFromContext = EtwpUpdateLoggerGroupMasks(v8, a2), LoggerInfoFromContext >= 0) )
              {
                v17 = *(_DWORD *)(a2 + 56);
                if ( v17 )
                {
                  if ( v8[1] )
                    SystemMaximumBufferCount = EtwpGetSystemMaximumBufferCount(v8);
                  else
                    SystemMaximumBufferCount = 0;
                  if ( v17 > SystemMaximumBufferCount )
                    *(_DWORD *)(a2 + 56) = SystemMaximumBufferCount;
                  v19 = *(_DWORD *)(a2 + 56);
                  if ( v19 > v8[63] )
                    v8[63] = v19;
                }
                if ( (v10 & 0x400) == 0 )
                {
                  v20 = *(_DWORD *)(a2 + 68);
                  if ( v20 )
                  {
                    if ( v20 != v8[56] )
                    {
                      v8[56] = v20;
                      EtwpSynchronizeWithLogger(v8, 4LL);
                    }
                  }
                }
                if ( (v9 & 0x80000) == 0 )
                {
                  if ( (v10 & 0x80000) != 0 )
                    v10 &= ~0x80000u;
                  goto LABEL_46;
                }
                if ( v8[79] != 1 )
                {
                  _InterlockedOr((volatile signed __int32 *)v8 + 209, 0x800u);
                  v10 |= 0x80000u;
                  if ( ((_BYTE)KdDebuggerNotPresent || KdPitchDebugger) && !KdEventLoggingPresent )
                  {
                    v8 = v30;
                  }
                  else
                  {
                    v8 = v30;
                    EtwpSendDbgId(v30);
                  }
LABEL_46:
                  if ( (v9 & 0x80u) == 0
                    || (EtwpGetSecurityDescriptorByGuid(v12, &v31),
                        LoggerInfoFromContext = EtwpUpdateLoggerSecurityDescriptor(v8, v31),
                        EtwpFreeSecurityDescriptor(&v31),
                        LoggerInfoFromContext >= 0) )
                  {
                    *v26 = v10;
                    if ( *(_DWORD *)(a2 + 76) )
                    {
                      if ( v8[56] || (v10 & 0x400) != 0 )
                        goto LABEL_50;
                      v25 = v8[63] - EtwpQueryUsedProcessorCount((__int64)v8) - 1;
                      if ( *(_DWORD *)(a2 + 76) > v25 )
                        *(_DWORD *)(a2 + 76) = v25;
                      if ( *(int *)(a2 + 76) < 0 )
LABEL_50:
                        *(_DWORD *)(a2 + 76) = 0;
                    }
                    v8[57] = *(_DWORD *)(a2 + 76);
                    LoggerInfoFromContext = EtwpGetLoggerInfoFromContext(a2, v8);
                    if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_UPDATE_TRACE) )
                      EtwpEventWriteTemplateSession(v21, &ETW_EVENT_UPDATE_TRACE, v8);
                  }
                  goto LABEL_7;
                }
                LoggerInfoFromContext = -1073741637;
              }
            }
LABEL_7:
            RtlFreeUnicodeString(&UnicodeString);
            LOBYTE(v11) = 1;
            EtwpReleaseLoggerContext(v8, v11);
            goto LABEL_8;
          }
          v24 = 1LL;
        }
        else
        {
          v16 = a1;
          v24 = 0LL;
        }
        EtwpUpdatePerProcessTracing(a2, v16, *v8, v24);
        goto LABEL_30;
      }
      if ( (v10 & 0x100) == 0 )
        goto LABEL_24;
      if ( *((_QWORD *)v8 + 102) )
      {
        v10 &= ~0x100u;
        EtwpSynchronizeWithLogger(v8, 8LL);
        goto LABEL_24;
      }
LABEL_6:
      LoggerInfoFromContext = -1073741811;
      goto LABEL_7;
    }
  }
  return result;
}
