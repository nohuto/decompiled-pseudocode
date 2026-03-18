/*
 * XREFs of EtwpQueryTrace @ 0x1405515A4
 * Callers:
 *     NtTraceControl @ 0x14047FD70 (NtTraceControl.c)
 *     EtwWmitraceWorker @ 0x14070EB94 (EtwWmitraceWorker.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     EtwpCheckSecurityLoggerAccess @ 0x14045E400 (EtwpCheckSecurityLoggerAccess.c)
 *     EtwpCheckLoggerControlAccess @ 0x1404F1C84 (EtwpCheckLoggerControlAccess.c)
 *     EtwpReleaseLoggerContext @ 0x1404F2B5C (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContext @ 0x140551674 (EtwpAcquireLoggerContext.c)
 *     EtwpValidateLoggerInfo @ 0x140551754 (EtwpValidateLoggerInfo.c)
 *     EtwpGetLoggerInfoFromContext @ 0x140551788 (EtwpGetLoggerInfoFromContext.c)
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
LABEL_3:
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      return (unsigned int)LoggerInfoFromContext;
    }
    v8 = (__int64)v10;
    LoggerInfoFromContext = EtwpCheckLoggerControlAccess(1u, (__int64)v10);
    if ( LoggerInfoFromContext >= 0 )
    {
      if ( (*(_DWORD *)(v8 + 816) & 0x4000) != 0 )
      {
        LoggerInfoFromContext = EtwpCheckSecurityLoggerAccess((__int64)KeGetCurrentThread()->ApcState.Process);
        if ( LoggerInfoFromContext < 0 )
        {
          v9 = v10;
          goto LABEL_9;
        }
        v8 = (__int64)v10;
      }
      LoggerInfoFromContext = EtwpGetLoggerInfoFromContext(a2, v8);
    }
    v9 = (unsigned int *)v8;
LABEL_9:
    EtwpReleaseLoggerContext(v9, 1);
    goto LABEL_3;
  }
  return result;
}
