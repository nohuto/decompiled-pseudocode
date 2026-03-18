/*
 * XREFs of EtwpStopTrace @ 0x140589108
 * Callers:
 *     NtTraceControl @ 0x14058F8F0 (NtTraceControl.c)
 *     EtwShutdown @ 0x1405EAAFC (EtwShutdown.c)
 *     EtwWmitraceWorker @ 0x1407ACCA4 (EtwWmitraceWorker.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140006430 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140006660 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     ObReferenceObjectByPointer @ 0x140073920 (ObReferenceObjectByPointer.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     EtwEventEnabled @ 0x1400F3870 (EtwEventEnabled.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     EtwpFreeLoggerContext @ 0x140493884 (EtwpFreeLoggerContext.c)
 *     EtwpStopLoggerInstance @ 0x140587E20 (EtwpStopLoggerInstance.c)
 *     EtwpGetLoggerInfoFromContext @ 0x14058B16C (EtwpGetLoggerInfoFromContext.c)
 *     EtwpValidateLoggerInfo @ 0x14058B828 (EtwpValidateLoggerInfo.c)
 *     EtwpAcquireLoggerContext @ 0x14058BB5C (EtwpAcquireLoggerContext.c)
 *     EtwpCheckLoggerControlAccess @ 0x14058F1B4 (EtwpCheckLoggerControlAccess.c)
 *     EtwpReleaseLoggerContext @ 0x140590D4C (EtwpReleaseLoggerContext.c)
 *     EtwpEventWriteTemplateSession @ 0x1407AB340 (EtwpEventWriteTemplateSession.c)
 */

__int64 __fastcall EtwpStopTrace(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  __int16 v7; // dx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rdx
  int LoggerInfoFromContext; // edi
  unsigned int *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rdi
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
      v11 = (unsigned int *)P;
      if ( !a3 )
      {
        if ( (*((_DWORD *)P + 3) & 0x40) != 0 )
        {
          LOBYTE(v9) = 1;
          EtwpReleaseLoggerContext(P, v9);
          LoggerInfoFromContext = -1073741811;
          goto LABEL_24;
        }
        LoggerInfoFromContext = EtwpCheckLoggerControlAccess(0x80u);
        if ( LoggerInfoFromContext < 0 )
        {
          LOBYTE(v12) = 1;
          EtwpReleaseLoggerContext(v11, v12);
          goto LABEL_24;
        }
      }
      v13 = *v11;
      if ( (v11[3] & 0x400) == 0 )
      {
        v14 = (void *)*((_QWORD *)v11 + 6);
        ObReferenceObjectByPointer(v14, 0x100000u, (POBJECT_TYPE)PsThreadType, 0);
        KeResetEvent((PRKEVENT)(v11 + 118));
        v15 = (unsigned int)v13;
        if ( ExAcquireRundownProtectionCacheAwareEx(
               *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 424) + 8 * v13),
               1u) )
        {
          LoggerInfoFromContext = EtwpStopLoggerInstance((unsigned __int64)v11);
          if ( LoggerInfoFromContext < 0 )
            ExReleaseRundownProtectionCacheAwareEx(
              *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 424) + 8 * v15),
              1u);
        }
        else
        {
          LoggerInfoFromContext = -2147483611;
        }
        LOBYTE(v16) = 1;
        EtwpReleaseLoggerContext(v11, v16);
        if ( LoggerInfoFromContext >= 0 )
        {
          if ( (v11[14] & 0x80000000) == 0 )
          {
            while ( KeWaitForSingleObject(v11 + 118, Executive, 0, 0, &Timeout) == 258 )
              ;
          }
          LoggerInfoFromContext = EtwpGetLoggerInfoFromContext(a2, v11);
          if ( LoggerInfoFromContext >= 0 )
          {
            LoggerInfoFromContext = v11[14];
            if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_STOP_TRACE) )
              EtwpEventWriteTemplateSession(v17, &ETW_EVENT_STOP_TRACE, v11);
          }
          ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 424) + 8 * v15), 1u);
        }
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        if ( LoggerInfoFromContext >= 0 )
          KeWaitForSingleObject(v14, Executive, 0, 0, 0LL);
        ObfDereferenceObject(v14);
        return (unsigned int)LoggerInfoFromContext;
      }
      v18 = EtwpStopLoggerInstance((unsigned __int64)v11);
      LOBYTE(v19) = 1;
      LoggerInfoFromContext = v18;
      EtwpReleaseLoggerContext(v11, v19);
      if ( LoggerInfoFromContext >= 0 )
      {
        LoggerInfoFromContext = EtwpGetLoggerInfoFromContext(a2, v11);
        EtwpFreeLoggerContext((char *)v11);
      }
    }
LABEL_24:
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return (unsigned int)LoggerInfoFromContext;
  }
  return result;
}
