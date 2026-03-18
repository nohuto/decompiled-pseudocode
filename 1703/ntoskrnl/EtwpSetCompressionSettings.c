/*
 * XREFs of EtwpSetCompressionSettings @ 0x140258294
 * Callers:
 *     NtTraceControl @ 0x14047FD70 (NtTraceControl.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14000D920 (PsGetCurrentServerSiloGlobals.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     EtwpReleaseLoggerContext @ 0x1404F2B5C (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1404F2C44 (EtwpAcquireLoggerContextByLoggerId.c)
 */

__int64 __fastcall EtwpSetCompressionSettings(unsigned int *a1)
{
  unsigned int v2; // ebx
  _QWORD *CurrentServerSiloGlobals; // rax
  __int64 v4; // rax
  _DWORD *v5; // rsi
  volatile signed __int64 *v6; // rdi

  v2 = 0;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v4 = EtwpAcquireLoggerContextByLoggerId(CurrentServerSiloGlobals[108], *a1, 0LL);
  v5 = (_DWORD *)v4;
  if ( v4 )
  {
    v6 = (volatile signed __int64 *)(v4 + 992);
    ExAcquirePushLockExclusiveEx(v4 + 992, 0LL);
    v5[256] = a1[1];
    v5[255] = a1[2];
    v5[257] = a1[3];
    if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v6);
    KeAbPostRelease((ULONG_PTR)v6);
    EtwpReleaseLoggerContext(v5, 0LL);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
