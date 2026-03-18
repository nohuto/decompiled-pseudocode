/*
 * XREFs of EtwpQueryTrace @ 0x14058B85C
 * Callers:
 *     NtTraceControl @ 0x14058F8F0 (NtTraceControl.c)
 *     EtwWmitraceWorker @ 0x1407ACCA4 (EtwWmitraceWorker.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     EtwpGetLoggerInfoFromContext @ 0x14058B16C (EtwpGetLoggerInfoFromContext.c)
 *     EtwpValidateLoggerInfo @ 0x14058B828 (EtwpValidateLoggerInfo.c)
 *     EtwpAcquireLoggerContext @ 0x14058BB5C (EtwpAcquireLoggerContext.c)
 *     EtwpCheckLoggerControlAccess @ 0x14058F1B4 (EtwpCheckLoggerControlAccess.c)
 *     EtwpReleaseLoggerContext @ 0x140590D4C (EtwpReleaseLoggerContext.c)
 *     EtwpCheckSecurityLoggerAccess @ 0x140605EF4 (EtwpCheckSecurityLoggerAccess.c)
 */

__int64 __fastcall EtwpQueryTrace(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // r9
  struct _KTHREAD *CurrentThread; // rax
  int LoggerInfoFromContext; // edi
  int *v8; // rbx
  __int64 v9; // rdx
  int *v10; // rcx
  int *v11; // [rsp+40h] [rbp+18h] BYREF

  result = EtwpValidateLoggerInfo(a2);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    LoggerInfoFromContext = EtwpAcquireLoggerContext(v5, v4, &v11);
    if ( LoggerInfoFromContext < 0 )
    {
LABEL_8:
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      return (unsigned int)LoggerInfoFromContext;
    }
    v8 = v11;
    LoggerInfoFromContext = EtwpCheckLoggerControlAccess(1u);
    if ( LoggerInfoFromContext >= 0 )
    {
      if ( (v8[208] & 0x4000) != 0 )
      {
        LoggerInfoFromContext = EtwpCheckSecurityLoggerAccess(KeGetCurrentThread()->ApcState.Process);
        if ( LoggerInfoFromContext < 0 )
        {
          v10 = v11;
          goto LABEL_7;
        }
        v8 = v11;
      }
      LoggerInfoFromContext = EtwpGetLoggerInfoFromContext((__int64)a2, v8);
    }
    v10 = v8;
LABEL_7:
    LOBYTE(v9) = 1;
    EtwpReleaseLoggerContext(v10, v9);
    goto LABEL_8;
  }
  return result;
}
