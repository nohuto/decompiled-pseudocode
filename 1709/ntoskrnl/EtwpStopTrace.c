/*
 * XREFs of EtwpStopTrace @ 0x1404F0484
 * Callers:
 *     NtTraceControl @ 0x14049AB40 (NtTraceControl.c)
 *     EtwShutdown @ 0x140748DA0 (EtwShutdown.c)
 *     EtwWmitraceWorker @ 0x14074A7F4 (EtwWmitraceWorker.c)
 * Callees:
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     ObReferenceObjectByPointer @ 0x1400DE9F0 (ObReferenceObjectByPointer.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400FA300 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1400FA3C0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     EtwpCheckLoggerControlAccess @ 0x14048E46C (EtwpCheckLoggerControlAccess.c)
 *     EtwpReleaseLoggerContext @ 0x14049227C (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContext @ 0x1404ED888 (EtwpAcquireLoggerContext.c)
 *     EtwpValidateLoggerInfo @ 0x1404EDB3C (EtwpValidateLoggerInfo.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1404EDB70 (EtwpGetLoggerInfoFromContext.c)
 *     EtwpStopLoggerInstance @ 0x1404F0374 (EtwpStopLoggerInstance.c)
 *     EtwpFreeLoggerContext @ 0x14058E0D4 (EtwpFreeLoggerContext.c)
 *     EtwpEventWriteTemplateSession @ 0x140749674 (EtwpEventWriteTemplateSession.c)
 */

__int64 __fastcall EtwpStopTrace(__int64 a1, _DWORD *a2, char a3)
{
  __int64 result; // rax
  __int16 v7; // dx
  struct _KTHREAD *CurrentThread; // rax
  int LoggerInfoFromContext; // edi
  unsigned int *v10; // rbx
  __int64 v11; // rdi
  void *v12; // r14
  __int64 v13; // r15
  __int64 v14; // rcx
  LARGE_INTEGER Timeout; // [rsp+30h] [rbp-38h] BYREF
  PVOID P; // [rsp+88h] [rbp+20h] BYREF

  P = 0LL;
  Timeout.QuadPart = -2000000000LL;
  result = EtwpValidateLoggerInfo(a2);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    CurrentThread->KernelApcDisable += v7;
    LoggerInfoFromContext = EtwpAcquireLoggerContext(a1, (__int64)a2, (__int64 *)&P);
    if ( LoggerInfoFromContext >= 0 )
    {
      v10 = (unsigned int *)P;
      if ( !a3 )
      {
        if ( (*((_DWORD *)P + 3) & 0x40) != 0 )
        {
          EtwpReleaseLoggerContext((unsigned int *)P, 1);
          LoggerInfoFromContext = -1073741811;
          goto LABEL_22;
        }
        LoggerInfoFromContext = EtwpCheckLoggerControlAccess(0x80u, (__int64)P);
        if ( LoggerInfoFromContext < 0 )
        {
          EtwpReleaseLoggerContext(v10, 1);
          goto LABEL_22;
        }
      }
      v11 = *v10;
      if ( (v10[3] & 0x400) == 0 )
      {
        v12 = (void *)*((_QWORD *)v10 + 6);
        ObReferenceObjectByPointer(v12, 0x100000u, (POBJECT_TYPE)PsThreadType, 0);
        KeResetEvent((PRKEVENT)(v10 + 118));
        v13 = (unsigned int)v11;
        if ( ExAcquireRundownProtectionCacheAwareEx(
               *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 416) + 8 * v11),
               1u) )
        {
          LoggerInfoFromContext = EtwpStopLoggerInstance((__int64)v10);
          if ( LoggerInfoFromContext < 0 )
            ExReleaseRundownProtectionCacheAwareEx(
              *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 416) + 8 * v13),
              1u);
        }
        else
        {
          LoggerInfoFromContext = -2147483611;
        }
        EtwpReleaseLoggerContext(v10, 1);
        if ( LoggerInfoFromContext >= 0 )
        {
          if ( (v10[14] & 0x80000000) == 0 )
          {
            while ( KeWaitForSingleObject(v10 + 118, Executive, 0, 0, &Timeout) == 258 )
              ;
          }
          LoggerInfoFromContext = EtwpGetLoggerInfoFromContext((__int64)a2, (__int64)v10);
          if ( LoggerInfoFromContext >= 0 )
          {
            LoggerInfoFromContext = v10[14];
            if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_STOP_TRACE) )
              EtwpEventWriteTemplateSession(v14, &ETW_EVENT_STOP_TRACE, v10);
          }
          ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 416) + 8 * v13), 1u);
        }
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        if ( LoggerInfoFromContext >= 0 )
          KeWaitForSingleObject(v12, Executive, 0, 0, 0LL);
        ObfDereferenceObject(v12);
        return (unsigned int)LoggerInfoFromContext;
      }
      LoggerInfoFromContext = EtwpStopLoggerInstance((__int64)v10);
      EtwpReleaseLoggerContext(v10, 1);
      if ( LoggerInfoFromContext >= 0 )
      {
        LoggerInfoFromContext = EtwpGetLoggerInfoFromContext((__int64)a2, (__int64)v10);
        EtwpFreeLoggerContext(v10);
      }
    }
LABEL_22:
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return (unsigned int)LoggerInfoFromContext;
  }
  return result;
}
