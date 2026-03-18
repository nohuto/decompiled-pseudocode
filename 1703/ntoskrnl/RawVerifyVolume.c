/*
 * XREFs of RawVerifyVolume @ 0x14023AA3C
 * Callers:
 *     RawFileSystemControl @ 0x14042228C (RawFileSystemControl.c)
 * Callees:
 *     RawInitiateDeleteVolume @ 0x140005468 (RawInitiateDeleteVolume.c)
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x14001B7C0 (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A9390 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A9410 (KeAcquireQueuedSpinLock.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 */

__int64 __fastcall RawVerifyVolume(__int64 a1, __int64 a2)
{
  KIRQL v4; // al
  __int64 v5; // rbx
  char v6; // di
  KIRQL v7; // al

  v4 = KeAcquireQueuedSpinLock(9uLL);
  v5 = *(_QWORD *)(a1 + 8);
  v6 = 0;
  if ( (*(_BYTE *)(v5 + 4) & 1) != 0 )
  {
    ++*(_DWORD *)(v5 + 28);
    v6 = 1;
  }
  KeReleaseQueuedSpinLock(9uLL, v4);
  if ( v6 )
  {
    ExWaitForRundownProtectionReleaseCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a2 + 216));
    ExAcquireFastMutex((PFAST_MUTEX)(a2 + 224));
    v7 = KeAcquireQueuedSpinLock(9uLL);
    --*(_DWORD *)(v5 + 28);
    KeReleaseQueuedSpinLock(9uLL, v7);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 184) + 16LL) + 48LL) &= ~2u;
    if ( !RawInitiateDeleteVolume((PFSRTL_ADVANCED_FCB_HEADER)a2, 1, 0) )
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a2 + 224));
  }
  return 3221225490LL;
}
