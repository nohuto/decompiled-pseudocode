/*
 * XREFs of RawVerifyVolume @ 0x1402502B4
 * Callers:
 *     RawFileSystemControl @ 0x1405478B0 (RawFileSystemControl.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A3FD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A4D50 (KeReleaseQueuedSpinLock.c)
 *     RawInitiateDeleteVolume @ 0x1400FA43C (RawInitiateDeleteVolume.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x1400FCFD0 (ExWaitForRundownProtectionReleaseCacheAware.c)
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
