/*
 * XREFs of EtwpFlushTrace @ 0x1405959E0
 * Callers:
 *     NtTraceControl @ 0x14049AB40 (NtTraceControl.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     EtwpCheckLoggerControlAccess @ 0x14048E46C (EtwpCheckLoggerControlAccess.c)
 *     EtwpReleaseLoggerContext @ 0x14049227C (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContext @ 0x1404ED888 (EtwpAcquireLoggerContext.c)
 *     EtwpCaptureString @ 0x1404EDA2C (EtwpCaptureString.c)
 *     EtwpValidateLoggerInfo @ 0x1404EDB3C (EtwpValidateLoggerInfo.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1404EDB70 (EtwpGetLoggerInfoFromContext.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 *     EtwpSynchronizeWithLogger @ 0x140595F24 (EtwpSynchronizeWithLogger.c)
 *     EtwpEventWriteTemplateSession @ 0x140749674 (EtwpEventWriteTemplateSession.c)
 *     EtwpBufferingModeFlush @ 0x14074AF90 (EtwpBufferingModeFlush.c)
 *     EtwpCCSwapStop @ 0x14075225C (EtwpCCSwapStop.c)
 */

__int64 __fastcall EtwpFlushTrace(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  struct _KTHREAD *CurrentThread; // rax
  int LoggerInfoFromContext; // edi
  __int64 v8; // rbx
  ACCESS_MASK v9; // r8d
  int v10; // ebp
  int v11; // eax
  __int64 v12; // rcx
  UNICODE_STRING v13; // xmm0
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-28h] BYREF
  __int64 v18; // [rsp+60h] [rbp+18h] BYREF

  *(_QWORD *)&UnicodeString.Length = 0LL;
  v18 = 0LL;
  UnicodeString.Buffer = 0LL;
  result = EtwpValidateLoggerInfo((_DWORD *)a2);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    LoggerInfoFromContext = EtwpAcquireLoggerContext(a1, v5, &v18);
    if ( LoggerInfoFromContext < 0 )
    {
LABEL_14:
      RtlFreeUnicodeString(&UnicodeString);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      return (unsigned int)LoggerInfoFromContext;
    }
    v8 = v18;
    if ( (*(_DWORD *)(v18 + 12) & 0x40000) != 0 )
    {
      LoggerInfoFromContext = -1073741637;
    }
    else
    {
      v9 = ((*(_DWORD *)(v18 + 12) & 0x100 | 0x400u) >> 3) | 0x40;
      if ( !*(_QWORD *)(v18 + 816) )
        v9 = (*(_DWORD *)(v18 + 12) & 0x100 | 0x400u) >> 3;
      v10 = *(_DWORD *)(v18 + 12) & 0x400;
      if ( v10 )
      {
        if ( !*(_QWORD *)(a2 + 136) || !*(_WORD *)(a2 + 128) )
        {
          LoggerInfoFromContext = -1073741809;
          goto LABEL_13;
        }
        v9 |= 0x40u;
      }
      LoggerInfoFromContext = EtwpCheckLoggerControlAccess(v9, v18);
      if ( LoggerInfoFromContext >= 0 )
      {
        if ( !v10 )
        {
          v11 = EtwpSynchronizeWithLogger(v8, 4LL);
LABEL_10:
          LoggerInfoFromContext = v11;
          if ( v11 >= 0 )
          {
            LoggerInfoFromContext = EtwpGetLoggerInfoFromContext(a2, v8);
            if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_FLUSH_TRACE) )
              EtwpEventWriteTemplateSession(v12, &ETW_EVENT_FLUSH_TRACE, v8);
          }
          goto LABEL_13;
        }
        LoggerInfoFromContext = EtwpCaptureString((unsigned __int16 *)(a2 + 128), &UnicodeString);
        if ( LoggerInfoFromContext >= 0 )
        {
          v13 = UnicodeString;
          UnicodeString.Buffer = 0LL;
          *(UNICODE_STRING *)(v8 + 200) = v13;
          _InterlockedOr((volatile signed __int32 *)(v8 + 836), 1u);
          v14 = *(_DWORD *)(v8 + 12);
          v8 = v18;
          if ( (v14 & 0x2000000) != 0 )
          {
            v15 = 32LL * *(unsigned __int8 *)(v18 + 834) + a1 + 4208;
            if ( v15 )
            {
              v16 = *(_DWORD *)(v15 + 4);
              if ( (v16 & 4) != 0 && (v16 & 0x100) != 0 )
                EtwpCCSwapStop(*(unsigned int *)(v18 + 216), 0LL);
            }
          }
          v11 = EtwpBufferingModeFlush(v8);
          goto LABEL_10;
        }
      }
    }
LABEL_13:
    EtwpReleaseLoggerContext((unsigned int *)v8, 1);
    goto LABEL_14;
  }
  return result;
}
