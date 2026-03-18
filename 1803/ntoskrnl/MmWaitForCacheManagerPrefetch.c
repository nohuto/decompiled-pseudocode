/*
 * XREFs of MmWaitForCacheManagerPrefetch @ 0x140046654
 * Callers:
 *     CcPerformReadAhead @ 0x140045EB4 (CcPerformReadAhead.c)
 *     MmWaitMultipleForCacheManagerPrefetch @ 0x1400C3594 (MmWaitMultipleForCacheManagerPrefetch.c)
 *     CcFetchDataForRead @ 0x14011D8A0 (CcFetchDataForRead.c)
 * Callees:
 *     MiPfCompletePrefetchIos @ 0x14003F2B0 (MiPfCompletePrefetchIos.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     MiReleaseReadListResources @ 0x1404BBF28 (MiReleaseReadListResources.c)
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
