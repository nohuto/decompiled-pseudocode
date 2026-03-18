/*
 * XREFs of MmWaitForCacheManagerPrefetch @ 0x14010AFD0
 * Callers:
 *     CcPerformReadAhead @ 0x1400215AC (CcPerformReadAhead.c)
 *     MmWaitMultipleForCacheManagerPrefetch @ 0x14002A7E4 (MmWaitMultipleForCacheManagerPrefetch.c)
 *     CcFetchDataForRead @ 0x14009D9B0 (CcFetchDataForRead.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     MiPfCompletePrefetchIos @ 0x14010B05C (MiPfCompletePrefetchIos.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MiReleaseReadListResources @ 0x140515B6C (MiReleaseReadListResources.c)
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
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  return v1;
}
