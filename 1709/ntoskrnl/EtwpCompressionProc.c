/*
 * XREFs of EtwpCompressionProc @ 0x1402813E0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400FA300 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpCompressPendingBuffers @ 0x140281264 (EtwpCompressPendingBuffers.c)
 *     EtwpRelinquishCompressionTarget @ 0x140281C04 (EtwpRelinquishCompressionTarget.c)
 */

void __fastcall EtwpCompressionProc(unsigned int *a1)
{
  signed __int32 i; // eax
  bool v3; // zf
  unsigned int v4; // eax

  for ( i = _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 574, 0xFFFFFFFF);
        ;
        i = _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 574, 0xFFFFFFFF) )
  {
    v3 = i == 2;
    v4 = a1[582];
    if ( !v3 )
      break;
    if ( v4 )
      EtwpCompressPendingBuffers((__int64)a1);
  }
  if ( !v4 )
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(a1 + 576), 0LL);
    EtwpRelinquishCompressionTarget(a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 288, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)a1 + 288);
    KeAbPostRelease((ULONG_PTR)(a1 + 576));
  }
  ExReleaseRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a1 + 282) + 416LL) + 8LL * *a1),
    1u);
}
