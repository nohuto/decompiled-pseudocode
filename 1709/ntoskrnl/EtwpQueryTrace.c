/*
 * XREFs of EtwpQueryTrace @ 0x1404ED7B8
 * Callers:
 *     NtTraceControl @ 0x14049AB40 (NtTraceControl.c)
 *     EtwWmitraceWorker @ 0x14074A7F4 (EtwWmitraceWorker.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     EtwpCheckLoggerControlAccess @ 0x14048E46C (EtwpCheckLoggerControlAccess.c)
 *     EtwpReleaseLoggerContext @ 0x14049227C (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContext @ 0x1404ED888 (EtwpAcquireLoggerContext.c)
 *     EtwpValidateLoggerInfo @ 0x1404EDB3C (EtwpValidateLoggerInfo.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1404EDB70 (EtwpGetLoggerInfoFromContext.c)
 *     EtwpCheckSecurityLoggerAccess @ 0x1405F1024 (EtwpCheckSecurityLoggerAccess.c)
 */

__int64 __fastcall EtwpQueryTrace(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // r9
  struct _KTHREAD *CurrentThread; // rax
  int LoggerInfoFromContext; // edi
  __int64 v8; // rbx
  unsigned int *v9; // rcx
  unsigned int *v10; // [rsp+40h] [rbp+18h] BYREF

  result = EtwpValidateLoggerInfo(a2);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    LoggerInfoFromContext = EtwpAcquireLoggerContext(v5, v4, &v10);
    if ( LoggerInfoFromContext < 0 )
    {
LABEL_8:
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      return (unsigned int)LoggerInfoFromContext;
    }
    v8 = (__int64)v10;
    LoggerInfoFromContext = EtwpCheckLoggerControlAccess(1u, (__int64)v10);
    if ( LoggerInfoFromContext >= 0 )
    {
      if ( (*(_DWORD *)(v8 + 832) & 0x4000) != 0 )
      {
        LoggerInfoFromContext = EtwpCheckSecurityLoggerAccess(KeGetCurrentThread()->ApcState.Process);
        if ( LoggerInfoFromContext < 0 )
        {
          v9 = v10;
          goto LABEL_7;
        }
        v8 = (__int64)v10;
      }
      LoggerInfoFromContext = EtwpGetLoggerInfoFromContext(a2, v8);
    }
    v9 = (unsigned int *)v8;
LABEL_7:
    EtwpReleaseLoggerContext(v9, 1);
    goto LABEL_8;
  }
  return result;
}
