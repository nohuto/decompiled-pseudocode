/*
 * XREFs of ExTryToAcquireFastMutex @ 0x14007C620
 * Callers:
 *     KeTryToAcquireGuardedMutex @ 0x14007C600 (KeTryToAcquireGuardedMutex.c)
 *     FsRtlTryToAcquireHeaderMutex @ 0x1401447E0 (FsRtlTryToAcquireHeaderMutex.c)
 *     RawScanDeletedList @ 0x1404953E0 (RawScanDeletedList.c)
 *     CreateMiniNtBootKey @ 0x1408DCEA0 (CreateMiniNtBootKey.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x14007C82C (KeAbPostReleaseEx.c)
 */

BOOLEAN __stdcall ExTryToAcquireFastMutex(PFAST_MUTEX FastMutex)
{
  __int64 v2; // rax
  unsigned __int8 CurrentIrql; // dl
  BOOLEAN result; // al

  v2 = KeAbPreAcquire((ULONG_PTR)FastMutex, 0LL, 1);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( _interlockedbittestandreset(&FastMutex->Count, 0) )
  {
    if ( v2 )
      *(_BYTE *)(v2 + 26) |= 1u;
    result = 1;
    FastMutex->Owner = KeGetCurrentThread();
    FastMutex->OldIrql = CurrentIrql;
  }
  else
  {
    __writecr8(CurrentIrql);
    if ( v2 )
      KeAbPostReleaseEx((ULONG_PTR)FastMutex);
    _mm_pause();
    return 0;
  }
  return result;
}
