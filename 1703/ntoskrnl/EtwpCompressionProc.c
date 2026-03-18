/*
 * XREFs of EtwpCompressionProc @ 0x140257980
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     EtwpCompressPendingBuffers @ 0x14025780C (EtwpCompressPendingBuffers.c)
 *     EtwpRelinquishCompressionTarget @ 0x1402581A4 (EtwpRelinquishCompressionTarget.c)
 */

void __fastcall EtwpCompressionProc(unsigned int *a1)
{
  signed __int32 i; // eax
  bool v3; // zf
  unsigned int v4; // eax

  for ( i = _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 246, 0xFFFFFFFF);
        ;
        i = _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 246, 0xFFFFFFFF) )
  {
    v3 = i == 2;
    v4 = a1[254];
    if ( !v3 )
      break;
    if ( v4 )
      EtwpCompressPendingBuffers((__int64)a1);
  }
  if ( !v4 )
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(a1 + 248), 0LL);
    EtwpRelinquishCompressionTarget(a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 124, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)a1 + 124);
    KeAbPostRelease((ULONG_PTR)(a1 + 248));
  }
  ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*((_QWORD *)a1 + 118) + 8LL * *a1 + 408), 1u);
}
