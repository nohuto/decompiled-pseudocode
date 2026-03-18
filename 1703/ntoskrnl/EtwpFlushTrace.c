/*
 * XREFs of EtwpFlushTrace @ 0x140451AD4
 * Callers:
 *     NtTraceControl @ 0x14047FD70 (NtTraceControl.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     EtwpCCSwapStop @ 0x140435848 (EtwpCCSwapStop.c)
 *     EtwpSynchronizeWithLogger @ 0x14045212C (EtwpSynchronizeWithLogger.c)
 *     EtwpCheckLoggerControlAccess @ 0x1404F1C84 (EtwpCheckLoggerControlAccess.c)
 *     EtwpReleaseLoggerContext @ 0x1404F2B5C (EtwpReleaseLoggerContext.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 *     EtwpAcquireLoggerContext @ 0x140551674 (EtwpAcquireLoggerContext.c)
 *     EtwpValidateLoggerInfo @ 0x140551754 (EtwpValidateLoggerInfo.c)
 *     EtwpGetLoggerInfoFromContext @ 0x140551788 (EtwpGetLoggerInfoFromContext.c)
 *     EtwpCaptureString @ 0x140551AE8 (EtwpCaptureString.c)
 *     EtwpEventWriteTemplateSession @ 0x14070DDE0 (EtwpEventWriteTemplateSession.c)
 *     EtwpBufferingModeFlush @ 0x14070F288 (EtwpBufferingModeFlush.c)
 */

__int64 __fastcall EtwpFlushTrace(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rdx
  int LoggerInfoFromContext; // edi
  __int64 v9; // rbx
  ACCESS_MASK v10; // r8d
  int v11; // ebp
  int v12; // eax
  __int64 v13; // rcx
  UNICODE_STRING v14; // xmm0
  int v15; // eax
  char *v16; // rdx
  int v17; // eax
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-28h] BYREF
  __int64 v19; // [rsp+60h] [rbp+18h] BYREF

  *(_QWORD *)&UnicodeString.Length = 0LL;
  v19 = 0LL;
  UnicodeString.Buffer = 0LL;
  result = EtwpValidateLoggerInfo(a2);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    LoggerInfoFromContext = EtwpAcquireLoggerContext(v5, v4, &v19);
    if ( LoggerInfoFromContext < 0 )
    {
LABEL_14:
      RtlFreeUnicodeString(&UnicodeString);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      return (unsigned int)LoggerInfoFromContext;
    }
    v9 = v19;
    if ( (*(_DWORD *)(v19 + 12) & 0x40000) != 0 )
    {
      LoggerInfoFromContext = -1073741637;
    }
    else
    {
      v7 = 1024LL;
      v10 = ((*(_DWORD *)(v19 + 12) & 0x100 | 0x400u) >> 3) | 0x40;
      if ( !*(_QWORD *)(v19 + 800) )
        v10 = (*(_DWORD *)(v19 + 12) & 0x100 | 0x400u) >> 3;
      v11 = *(_DWORD *)(v19 + 12) & 0x400;
      if ( v11 )
      {
        if ( !*(_QWORD *)(a2 + 136) || !*(_WORD *)(a2 + 128) )
        {
          LoggerInfoFromContext = -1073741809;
          goto LABEL_13;
        }
        v10 |= 0x40u;
      }
      LoggerInfoFromContext = EtwpCheckLoggerControlAccess(v10);
      if ( LoggerInfoFromContext >= 0 )
      {
        if ( !v11 )
        {
          v12 = EtwpSynchronizeWithLogger(v9, 4LL);
LABEL_10:
          LoggerInfoFromContext = v12;
          if ( v12 >= 0 )
          {
            LoggerInfoFromContext = EtwpGetLoggerInfoFromContext(a2, v9);
            if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_FLUSH_TRACE) )
              EtwpEventWriteTemplateSession(v13, &ETW_EVENT_FLUSH_TRACE, v9);
          }
          goto LABEL_13;
        }
        LoggerInfoFromContext = EtwpCaptureString(a2 + 128, &UnicodeString);
        if ( LoggerInfoFromContext >= 0 )
        {
          v14 = UnicodeString;
          UnicodeString.Buffer = 0LL;
          *(UNICODE_STRING *)(v9 + 184) = v14;
          _InterlockedOr((volatile signed __int32 *)(v9 + 820), 1u);
          v15 = *(_DWORD *)(v9 + 12);
          v9 = v19;
          if ( (v15 & 0x2000000) != 0 )
          {
            v16 = (char *)&EtwpGroupMasks + 32 * *(unsigned __int8 *)(v19 + 818);
            if ( v16 )
            {
              v17 = *((_DWORD *)v16 + 1);
              if ( (v17 & 4) != 0 && (v17 & 0x100) != 0 )
                EtwpCCSwapStop(*(_DWORD *)(v19 + 200), 0);
            }
          }
          v12 = EtwpBufferingModeFlush(v9);
          goto LABEL_10;
        }
      }
    }
LABEL_13:
    LOBYTE(v7) = 1;
    EtwpReleaseLoggerContext(v9, v7);
    goto LABEL_14;
  }
  return result;
}
