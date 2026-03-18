/*
 * XREFs of EtwpCompressionProc @ 0x1402B3670
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140006430 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     EtwpCompressPendingBuffers @ 0x1402B34F8 (EtwpCompressPendingBuffers.c)
 *     EtwpRelinquishCompressionTarget @ 0x1402B3E9C (EtwpRelinquishCompressionTarget.c)
 */

void __fastcall EtwpCompressionProc(unsigned int *a1)
{
  signed __int32 i; // eax
  bool v3; // zf
  unsigned int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

  for ( i = _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 288, 0xFFFFFFFF);
        ;
        i = _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 288, 0xFFFFFFFF) )
  {
    v3 = i == 2;
    v4 = a1[296];
    if ( !v3 )
      break;
    if ( v4 )
      EtwpCompressPendingBuffers((__int64)a1);
  }
  if ( !v4 )
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(a1 + 290), 0LL);
    EtwpRelinquishCompressionTarget(a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 145, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)a1 + 145, v5, v6, v7);
    KeAbPostRelease((ULONG_PTR)(a1 + 290));
  }
  ExReleaseRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a1 + 139) + 424LL) + 8LL * *a1),
    1u);
}
