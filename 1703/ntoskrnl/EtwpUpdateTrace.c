/*
 * XREFs of EtwpUpdateTrace @ 0x1405D8AE8
 * Callers:
 *     NtTraceControl @ 0x14047FD70 (NtTraceControl.c)
 *     EtwWmitraceWorker @ 0x14070EB94 (EtwWmitraceWorker.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     EtwpQueryUsedProcessorCount @ 0x140087D60 (EtwpQueryUsedProcessorCount.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     EtwpUpdateLoggerGroupMasks @ 0x140434B6C (EtwpUpdateLoggerGroupMasks.c)
 *     EtwpSynchronizeWithLogger @ 0x14045212C (EtwpSynchronizeWithLogger.c)
 *     EtwpCheckForPoolTagFilterExtension @ 0x14045E944 (EtwpCheckForPoolTagFilterExtension.c)
 *     EtwpCheckLoggerControlAccess @ 0x1404F1C84 (EtwpCheckLoggerControlAccess.c)
 *     EtwpReleaseLoggerContext @ 0x1404F2B5C (EtwpReleaseLoggerContext.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x1404F2EF8 (EtwpGetSecurityDescriptorByGuid.c)
 *     EtwpFreeSecurityDescriptor @ 0x1404F65AC (EtwpFreeSecurityDescriptor.c)
 *     SeCreateClientSecurity @ 0x14050B3A0 (SeCreateClientSecurity.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 *     EtwpValidateFlagExtension @ 0x14054F1FC (EtwpValidateFlagExtension.c)
 *     EtwpCheckForStackTracingExtension @ 0x14054F7D8 (EtwpCheckForStackTracingExtension.c)
 *     EtwpGetSystemMaximumBufferCount @ 0x140550960 (EtwpGetSystemMaximumBufferCount.c)
 *     EtwpAcquireLoggerContext @ 0x140551674 (EtwpAcquireLoggerContext.c)
 *     EtwpValidateLoggerInfo @ 0x140551754 (EtwpValidateLoggerInfo.c)
 *     EtwpGetLoggerInfoFromContext @ 0x140551788 (EtwpGetLoggerInfoFromContext.c)
 *     EtwpCaptureString @ 0x140551AE8 (EtwpCaptureString.c)
 *     EtwpCheckSystemTraceAccess @ 0x1405D8D94 (EtwpCheckSystemTraceAccess.c)
 *     EtwpUpdatePerProcessTracing @ 0x140709DA0 (EtwpUpdatePerProcessTracing.c)
 *     EtwpEventWriteTemplateSession @ 0x14070DDE0 (EtwpEventWriteTemplateSession.c)
 *     EtwpSendDbgId @ 0x14070F004 (EtwpSendDbgId.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x1407131E0 (EtwpUpdateLoggerSecurityDescriptor.c)
 */

__int64 __fastcall EtwpUpdateTrace(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int *v5; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int LoggerInfoFromContext; // ebx
  unsigned int *v8; // rdi
  int v9; // r15d
  unsigned int v10; // r14d
  ACCESS_MASK v11; // eax
  unsigned int *v12; // r12
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned int v16; // r10d
  unsigned int v17; // eax
  __int64 v18; // rcx
  void *v19; // rcx
  UNICODE_STRING v20; // xmm0
  __int64 v21; // r9
  unsigned int SystemMaximumBufferCount; // eax
  unsigned int v23; // eax
  int v24; // ecx
  unsigned int *v25; // [rsp+20h] [rbp-30h]
  struct _SECURITY_QUALITY_OF_SERVICE ClientSecurityQos; // [rsp+28h] [rbp-28h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-18h] BYREF
  unsigned int *v28; // [rsp+A0h] [rbp+50h] BYREF
  void *v29; // [rsp+A8h] [rbp+58h] BYREF

  *(_QWORD *)&UnicodeString.Length = 0LL;
  v28 = 0LL;
  UnicodeString.Buffer = 0LL;
  result = EtwpValidateLoggerInfo((_DWORD *)a2);
  if ( (int)result >= 0 )
  {
    result = EtwpValidateFlagExtension(v5);
    if ( (int)result >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      LoggerInfoFromContext = EtwpAcquireLoggerContext(a1, a2, &v28);
      if ( LoggerInfoFromContext < 0 )
      {
LABEL_8:
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        return (unsigned int)LoggerInfoFromContext;
      }
      v8 = v28;
      v9 = *(_DWORD *)(a2 + 64);
      v10 = v28[3];
      v25 = v28 + 3;
      if ( (v10 & 0x40) != 0
        || (v9 & 3) == 3
        || (*(_DWORD *)(a2 + 64) & 0xC000) == 0xC000
        || (v9 & 2) != 0 && (v10 & 2) == 0
        || (v9 & 6) == 6 )
      {
        goto LABEL_6;
      }
      v11 = ((v10 | v9) & 0x100) == 0 ? 128 : 160;
      if ( *(_QWORD *)(a2 + 136) && *(_WORD *)(a2 + 128) )
        v11 |= 0x40u;
      LoggerInfoFromContext = EtwpCheckLoggerControlAccess(v11, (__int64)v28);
      if ( LoggerInfoFromContext < 0 )
        goto LABEL_7;
      if ( *(_QWORD *)(a2 + 136) && *(_WORD *)(a2 + 128) )
      {
        if ( (v10 & 8) != 0 || (v9 & 8) != 0 || (v10 & 0x400) != 0 )
          goto LABEL_6;
        LoggerInfoFromContext = EtwpCaptureString((unsigned __int16 *)(a2 + 128), &UnicodeString);
        if ( LoggerInfoFromContext < 0 )
          goto LABEL_7;
        v19 = (void *)*((_QWORD *)v8 + 90);
        if ( v19 )
        {
          ObfDereferenceObject(v19);
          *((_QWORD *)v8 + 90) = 0LL;
        }
        v8 = v28;
        ClientSecurityQos.Length = 12;
        ClientSecurityQos.ImpersonationLevel = SecurityImpersonation;
        *(_WORD *)&ClientSecurityQos.ContextTrackingMode = 257;
        LoggerInfoFromContext = SeCreateClientSecurity(
                                  KeGetCurrentThread(),
                                  &ClientSecurityQos,
                                  0,
                                  (PSECURITY_CLIENT_CONTEXT)(v28 + 176));
        if ( LoggerInfoFromContext < 0 )
          goto LABEL_7;
        v20 = UnicodeString;
        UnicodeString.Buffer = 0LL;
        *(UNICODE_STRING *)(v8 + 46) = v20;
        EtwpSynchronizeWithLogger((__int64)v8, 4u);
        LoggerInfoFromContext = EtwpSynchronizeWithLogger((__int64)v8, 2u);
        if ( LoggerInfoFromContext < 0 || !v8[80] )
          goto LABEL_7;
      }
      if ( (v10 & 0x400) != 0 )
        goto LABEL_18;
      if ( (v9 & 0x100) != 0 )
      {
        v10 |= 0x100u;
        if ( !v8[52] )
          v8[52] = (v10 & 0x10) != 0 ? 1000 : 1;
LABEL_18:
        v12 = v8 + 69;
        v13 = *(_QWORD *)(v8 + 69);
        v14 = *(_QWORD *)&HeapGuid.Data1 - v13;
        if ( *(_QWORD *)&HeapGuid.Data1 == v13 )
          v14 = *(_QWORD *)HeapGuid.Data4 - *(_QWORD *)(v8 + 71);
        if ( v14 )
        {
          v15 = *(_QWORD *)&CritSecGuid.Data1 - v13;
          if ( *(_QWORD *)&CritSecGuid.Data1 == v13 )
            v15 = *(_QWORD *)CritSecGuid.Data4 - *(_QWORD *)(v8 + 71);
          if ( v15 )
          {
LABEL_24:
            LoggerInfoFromContext = EtwpCheckForStackTracingExtension(a2, (__int64)v8);
            if ( LoggerInfoFromContext >= 0 )
            {
              if ( (*v25 & 0x2000000) == 0
                || (LoggerInfoFromContext = EtwpCheckSystemTraceAccess(v8, 128LL), LoggerInfoFromContext >= 0)
                && (LoggerInfoFromContext = EtwpCheckForPoolTagFilterExtension((__int64)v8, a2, 0),
                    LoggerInfoFromContext >= 0)
                && (LoggerInfoFromContext = EtwpUpdateLoggerGroupMasks((__int64)v8, a2), LoggerInfoFromContext >= 0) )
              {
                v16 = *(_DWORD *)(a2 + 56);
                if ( v16 )
                {
                  if ( v8[1] )
                    SystemMaximumBufferCount = EtwpGetSystemMaximumBufferCount(v8);
                  else
                    SystemMaximumBufferCount = 0;
                  if ( v16 > SystemMaximumBufferCount )
                    *(_DWORD *)(a2 + 56) = SystemMaximumBufferCount;
                  v23 = *(_DWORD *)(a2 + 56);
                  if ( v23 > v8[59] )
                    v8[59] = v23;
                }
                if ( (v10 & 0x400) == 0 )
                {
                  v17 = *(_DWORD *)(a2 + 68);
                  if ( v17 )
                  {
                    if ( v17 != v8[52] )
                    {
                      v8[52] = v17;
                      EtwpSynchronizeWithLogger((__int64)v8, 4u);
                    }
                  }
                }
                if ( (v9 & 0x80000) == 0 )
                {
                  if ( (v10 & 0x80000) != 0 )
                    v10 &= ~0x80000u;
                  goto LABEL_35;
                }
                if ( v8[75] != 1 )
                {
                  _InterlockedOr((volatile signed __int32 *)v8 + 205, 0x800u);
                  v10 |= 0x80000u;
                  if ( ((_BYTE)KdDebuggerNotPresent || KdPitchDebugger) && !KdEventLoggingPresent )
                  {
                    v8 = v28;
                  }
                  else
                  {
                    v8 = v28;
                    EtwpSendDbgId(v28);
                  }
LABEL_35:
                  if ( (v9 & 0x80u) == 0
                    || (EtwpGetSecurityDescriptorByGuid(v12, &v29),
                        LoggerInfoFromContext = EtwpUpdateLoggerSecurityDescriptor(v8, v29),
                        EtwpFreeSecurityDescriptor(&v29),
                        LoggerInfoFromContext >= 0) )
                  {
                    *v25 = v10;
                    if ( *(_DWORD *)(a2 + 76) )
                    {
                      if ( v8[52] || (v10 & 0x400) != 0 )
                        goto LABEL_84;
                      v24 = v8[59] - EtwpQueryUsedProcessorCount((__int64)v8) - 1;
                      if ( *(_DWORD *)(a2 + 76) > v24 )
                        *(_DWORD *)(a2 + 76) = v24;
                      if ( *(int *)(a2 + 76) < 0 )
LABEL_84:
                        *(_DWORD *)(a2 + 76) = 0;
                    }
                    v8[53] = *(_DWORD *)(a2 + 76);
                    LoggerInfoFromContext = EtwpGetLoggerInfoFromContext(a2, (__int64)v8);
                    if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_UPDATE_TRACE) )
                      EtwpEventWriteTemplateSession(v18, &ETW_EVENT_UPDATE_TRACE, v8);
                  }
                  goto LABEL_7;
                }
                LoggerInfoFromContext = -1073741637;
              }
            }
LABEL_7:
            RtlFreeUnicodeString(&UnicodeString);
            EtwpReleaseLoggerContext(v8, 1);
            goto LABEL_8;
          }
          v21 = 1LL;
        }
        else
        {
          v21 = 0LL;
        }
        EtwpUpdatePerProcessTracing(a2, a1, *v8, v21);
        goto LABEL_24;
      }
      if ( (v10 & 0x100) == 0 )
        goto LABEL_18;
      if ( *((_QWORD *)v8 + 100) )
      {
        v10 &= ~0x100u;
        EtwpSynchronizeWithLogger((__int64)v8, 8u);
        goto LABEL_18;
      }
LABEL_6:
      LoggerInfoFromContext = -1073741811;
      goto LABEL_7;
    }
  }
  return result;
}
