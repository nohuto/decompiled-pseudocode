/*
 * XREFs of EtwpFlushTrace @ 0x140580054
 * Callers:
 *     NtTraceControl @ 0x14058F8F0 (NtTraceControl.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     EtwEventEnabled @ 0x1400F3870 (EtwEventEnabled.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     EtwpSynchronizeWithLogger @ 0x140580194 (EtwpSynchronizeWithLogger.c)
 *     EtwpGetLoggerInfoFromContext @ 0x14058B16C (EtwpGetLoggerInfoFromContext.c)
 *     EtwpValidateLoggerInfo @ 0x14058B828 (EtwpValidateLoggerInfo.c)
 *     EtwpCaptureString @ 0x14058BA4C (EtwpCaptureString.c)
 *     EtwpAcquireLoggerContext @ 0x14058BB5C (EtwpAcquireLoggerContext.c)
 *     EtwpCheckLoggerControlAccess @ 0x14058F1B4 (EtwpCheckLoggerControlAccess.c)
 *     EtwpReleaseLoggerContext @ 0x140590D4C (EtwpReleaseLoggerContext.c)
 *     EtwpCCSwapStop @ 0x140629C04 (EtwpCCSwapStop.c)
 *     EtwpEventWriteTemplateSession @ 0x1407AB340 (EtwpEventWriteTemplateSession.c)
 *     EtwpBufferingModeFlush @ 0x1407AD440 (EtwpBufferingModeFlush.c)
 */

__int64 __fastcall EtwpFlushTrace(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rdx
  int LoggerInfoFromContext; // edi
  __int64 v9; // rbx
  ACCESS_MASK v10; // r8d
  int v11; // ebp
  __int64 v12; // r14
  int v13; // eax
  __int64 v14; // rcx
  UNICODE_STRING v15; // xmm0
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-38h] BYREF
  __int64 v20; // [rsp+70h] [rbp+18h] BYREF

  *(_QWORD *)&UnicodeString.Length = 0LL;
  v20 = 0LL;
  UnicodeString.Buffer = 0LL;
  result = EtwpValidateLoggerInfo(a2);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    LoggerInfoFromContext = EtwpAcquireLoggerContext(a1, v5, &v20);
    if ( LoggerInfoFromContext < 0 )
    {
LABEL_15:
      RtlFreeAnsiString(&UnicodeString);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      return (unsigned int)LoggerInfoFromContext;
    }
    v9 = v20;
    if ( (*(_DWORD *)(v20 + 12) & 0x40000) != 0 )
    {
      LoggerInfoFromContext = -1073741637;
    }
    else
    {
      v7 = 1024LL;
      v10 = ((*(_DWORD *)(v20 + 12) & 0x100 | 0x400u) >> 3) | 0x40;
      if ( !*(_QWORD *)(v20 + 816) )
        v10 = (*(_DWORD *)(v20 + 12) & 0x100 | 0x400u) >> 3;
      v11 = *(_DWORD *)(v20 + 12) & 0x400;
      if ( v11 )
      {
        if ( !*(_QWORD *)(a2 + 136) || (v12 = a2 + 128, !*(_WORD *)(a2 + 128)) )
        {
          LoggerInfoFromContext = -1073741809;
          goto LABEL_14;
        }
        v10 |= 0x40u;
      }
      else
      {
        v12 = a2 + 128;
      }
      LoggerInfoFromContext = EtwpCheckLoggerControlAccess(v10);
      if ( LoggerInfoFromContext >= 0 )
      {
        if ( !v11 )
        {
          v13 = EtwpSynchronizeWithLogger(v9, 4LL);
LABEL_11:
          LoggerInfoFromContext = v13;
          if ( v13 >= 0 )
          {
            LoggerInfoFromContext = EtwpGetLoggerInfoFromContext(a2, v9);
            if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_FLUSH_TRACE) )
              EtwpEventWriteTemplateSession(v14, &ETW_EVENT_FLUSH_TRACE, v9);
          }
          goto LABEL_14;
        }
        LoggerInfoFromContext = EtwpCaptureString(v12, &UnicodeString);
        if ( LoggerInfoFromContext >= 0 )
        {
          v15 = UnicodeString;
          UnicodeString.Buffer = 0LL;
          *(UNICODE_STRING *)(v9 + 200) = v15;
          _InterlockedOr((volatile signed __int32 *)(v9 + 836), 1u);
          v16 = *(_DWORD *)(v9 + 12);
          v9 = v20;
          if ( (v16 & 0x2000000) != 0 )
          {
            v17 = a1 + 32 * (*(unsigned __int8 *)(v20 + 834) + 132LL);
            if ( v17 )
            {
              v18 = *(_DWORD *)(v17 + 4);
              if ( (v18 & 4) != 0 && (v18 & 0x100) != 0 )
                EtwpCCSwapStop(*(unsigned int *)(v20 + 216), 0LL);
            }
          }
          v13 = EtwpBufferingModeFlush(v9);
          goto LABEL_11;
        }
      }
    }
LABEL_14:
    LOBYTE(v7) = 1;
    EtwpReleaseLoggerContext(v9, v7);
    goto LABEL_15;
  }
  return result;
}
