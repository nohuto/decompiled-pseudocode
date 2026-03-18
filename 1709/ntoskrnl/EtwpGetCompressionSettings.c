/*
 * XREFs of EtwpGetCompressionSettings @ 0x140281838
 * Callers:
 *     NtTraceControl @ 0x14049AB40 (NtTraceControl.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400D2E30 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1404921A4 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x14049227C (EtwpReleaseLoggerContext.c)
 */

__int64 __fastcall EtwpGetCompressionSettings(unsigned __int16 *a1, unsigned int *a2)
{
  unsigned int v2; // edi
  unsigned int v4; // ebx
  _QWORD *CurrentServerSiloGlobals; // rax
  __int64 v6; // rax
  _DWORD *v7; // rsi
  signed __int64 *v8; // rdi

  v2 = *a1;
  v4 = 0;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v6 = EtwpAcquireLoggerContextByLoggerId(CurrentServerSiloGlobals[108], v2, 0LL);
  v7 = (_DWORD *)v6;
  if ( v6 )
  {
    *a2 = v2;
    v8 = (signed __int64 *)(v6 + 2304);
    ExAcquirePushLockSharedEx(v6 + 2304, 0LL);
    a2[1] = v7[584];
    a2[2] = v7[583];
    a2[3] = v7[585];
    if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v8);
    KeAbPostRelease((ULONG_PTR)v8);
    EtwpReleaseLoggerContext(v7, 0LL);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
