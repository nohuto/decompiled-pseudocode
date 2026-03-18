/*
 * XREFs of EtwpStopTrace @ 0x140434854
 * Callers:
 *     NtTraceControl @ 0x14047FD70 (NtTraceControl.c)
 *     EtwShutdown @ 0x140578394 (EtwShutdown.c)
 *     EtwWmitraceWorker @ 0x14070EB94 (EtwWmitraceWorker.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400053B0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140061BB0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObReferenceObjectByPointer @ 0x14012B9D0 (ObReferenceObjectByPointer.c)
 *     EtwpStopLoggerInstance @ 0x140434A54 (EtwpStopLoggerInstance.c)
 *     EtwpFreeLoggerContext @ 0x1404358CC (EtwpFreeLoggerContext.c)
 *     EtwpCheckLoggerControlAccess @ 0x1404F1C84 (EtwpCheckLoggerControlAccess.c)
 *     EtwpReleaseLoggerContext @ 0x1404F2B5C (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContext @ 0x140551674 (EtwpAcquireLoggerContext.c)
 *     EtwpValidateLoggerInfo @ 0x140551754 (EtwpValidateLoggerInfo.c)
 *     EtwpGetLoggerInfoFromContext @ 0x140551788 (EtwpGetLoggerInfoFromContext.c)
 *     EtwpEventWriteTemplateSession @ 0x14070DDE0 (EtwpEventWriteTemplateSession.c)
 */

__int64 __fastcall EtwpStopTrace(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  __int16 v7; // dx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rdx
  int LoggerInfoFromContext; // edi
  struct _KEVENT *v11; // rbx
  __int64 v12; // rdx
  __int64 Lock; // rdi
  void *v14; // r14
  __int64 v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rdx
  LARGE_INTEGER Timeout; // [rsp+30h] [rbp-38h] BYREF
  PVOID P; // [rsp+88h] [rbp+20h] BYREF

  P = 0LL;
  Timeout.QuadPart = -2000000000LL;
  result = EtwpValidateLoggerInfo(a2);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    CurrentThread->KernelApcDisable += v7;
    LoggerInfoFromContext = EtwpAcquireLoggerContext(a1, a2, &P);
    if ( LoggerInfoFromContext >= 0 )
    {
      v11 = (struct _KEVENT *)P;
      if ( a3 )
        goto LABEL_6;
      if ( (*((_DWORD *)P + 3) & 0x40) != 0 )
      {
        LOBYTE(v9) = 1;
        EtwpReleaseLoggerContext(P, v9);
        LoggerInfoFromContext = -1073741811;
      }
      else
      {
        LoggerInfoFromContext = EtwpCheckLoggerControlAccess(0x80u);
        if ( LoggerInfoFromContext >= 0 )
        {
LABEL_6:
          Lock = (unsigned int)v11->Header.Lock;
          if ( (HIDWORD(v11->Header.WaitListHead.Flink) & 0x400) != 0 )
          {
            v18 = EtwpStopLoggerInstance(v11);
            LOBYTE(v19) = 1;
            LoggerInfoFromContext = v18;
            EtwpReleaseLoggerContext(v11, v19);
            if ( LoggerInfoFromContext >= 0 )
            {
              LoggerInfoFromContext = EtwpGetLoggerInfoFromContext(a2, v11);
              EtwpFreeLoggerContext(v11);
            }
          }
          else
          {
            v14 = *(void **)&v11[2].Header.Lock;
            ObReferenceObjectByPointer(v14, 0x100000u, (POBJECT_TYPE)PsThreadType, 0);
            KeResetEvent(v11 + 19);
            v15 = (unsigned int)Lock;
            if ( ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 8 * Lock + 408), 1u) )
            {
              LoggerInfoFromContext = EtwpStopLoggerInstance(v11);
              if ( LoggerInfoFromContext < 0 )
                ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 8 * v15 + 408), 1u);
            }
            else
            {
              LoggerInfoFromContext = -2147483611;
            }
            LOBYTE(v16) = 1;
            EtwpReleaseLoggerContext(v11, v16);
            if ( LoggerInfoFromContext >= 0 )
            {
              if ( SLODWORD(v11[2].Header.WaitListHead.Flink) >= 0 )
              {
                while ( KeWaitForSingleObject(&v11[19], Executive, 0, 0, &Timeout) == 258 )
                  ;
              }
              LoggerInfoFromContext = EtwpGetLoggerInfoFromContext(a2, v11);
              if ( LoggerInfoFromContext >= 0 )
              {
                LoggerInfoFromContext = (int)v11[2].Header.WaitListHead.Flink;
                if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_STOP_TRACE) )
                  EtwpEventWriteTemplateSession(v17, &ETW_EVENT_STOP_TRACE, v11);
              }
              ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 8 * v15 + 408), 1u);
              if ( LoggerInfoFromContext >= 0 )
                KeWaitForSingleObject(v14, Executive, 0, 0, 0LL);
            }
            ObfDereferenceObject(v14);
          }
          goto LABEL_19;
        }
        LOBYTE(v12) = 1;
        EtwpReleaseLoggerContext(v11, v12);
      }
    }
LABEL_19:
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return (unsigned int)LoggerInfoFromContext;
  }
  return result;
}
