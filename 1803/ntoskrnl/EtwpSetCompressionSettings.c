/*
 * XREFs of EtwpSetCompressionSettings @ 0x1402B3F8C
 * Callers:
 *     NtTraceControl @ 0x14058F8F0 (NtTraceControl.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400A5690 (PsGetCurrentServerSiloGlobals.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     EtwpReleaseLoggerContext @ 0x140590D4C (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140590D94 (EtwpAcquireLoggerContextByLoggerId.c)
 */

__int64 __fastcall EtwpSetCompressionSettings(unsigned int *a1)
{
  unsigned int v2; // ebx
  _QWORD *CurrentServerSiloGlobals; // rax
  __int64 v4; // rax
  _DWORD *v5; // rsi
  volatile signed __int64 *v6; // rdi
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx

  v2 = 0;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v4 = EtwpAcquireLoggerContextByLoggerId(CurrentServerSiloGlobals[108], *a1, 0LL);
  v5 = (_DWORD *)v4;
  if ( v4 )
  {
    v6 = (volatile signed __int64 *)(v4 + 1160);
    ExAcquirePushLockExclusiveEx(v4 + 1160, 0LL);
    v5[298] = a1[1];
    v5[297] = a1[2];
    v5[299] = a1[3];
    v9 = _InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL);
    LOBYTE(v9) = v9 & 6;
    if ( (_BYTE)v9 == 2 )
      ExfTryToWakePushLock(v6, v9, v7, v8);
    KeAbPostRelease((ULONG_PTR)v6);
    EtwpReleaseLoggerContext(v5, 0LL);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
