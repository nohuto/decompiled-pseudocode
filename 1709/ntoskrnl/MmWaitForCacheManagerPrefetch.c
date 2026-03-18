/*
 * XREFs of MmWaitForCacheManagerPrefetch @ 0x140020718
 * Callers:
 *     MmWaitMultipleForCacheManagerPrefetch @ 0x140020534 (MmWaitMultipleForCacheManagerPrefetch.c)
 *     CcPerformReadAhead @ 0x140020ED4 (CcPerformReadAhead.c)
 *     CcFetchDataForRead @ 0x14007AE80 (CcFetchDataForRead.c)
 * Callees:
 *     MiPfCompletePrefetchIos @ 0x1400207A4 (MiPfCompletePrefetchIos.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     MiReleaseReadListResources @ 0x1404D1DC8 (MiReleaseReadListResources.c)
 */

__int64 __fastcall MmWaitForCacheManagerPrefetch(_DWORD *P)
{
  unsigned int v1; // ebp
  int v2; // esi
  _QWORD *v3; // r14
  _QWORD *v4; // rdi
  int v5; // ebx

  v1 = 0;
  v2 = P[18] & 1;
  v3 = P;
  do
  {
    v4 = (_QWORD *)*v3;
    v5 = MiPfCompletePrefetchIos(v3 + 11, 0LL, 0LL);
    MiReleaseReadListResources(v3);
    ExFreePoolWithTag(v3, 0);
    v3 = v4;
    if ( v5 < 0 )
      v1 = v5;
  }
  while ( v4 );
  if ( v2 )
    KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
  return v1;
}
