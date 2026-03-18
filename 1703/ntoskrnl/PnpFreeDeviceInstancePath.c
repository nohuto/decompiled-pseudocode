/*
 * XREFs of PnpFreeDeviceInstancePath @ 0x14044C5B0
 * Callers:
 *     IopDestroyDeviceNode @ 0x14044C1A0 (IopDestroyDeviceNode.c)
 *     PiBuildDeviceNodeInstancePath @ 0x14044C490 (PiBuildDeviceNodeInstancePath.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall PnpFreeDeviceInstancePath(__int64 a1)
{
  void *v2; // rcx

  ExAcquireFastMutex(&PnpDeviceReferenceTableLock);
  v2 = *(void **)(a1 + 48);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x49706E50u);
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0LL;
  KeReleaseGuardedMutex(&PnpDeviceReferenceTableLock);
}
