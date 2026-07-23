/*
 * XREFs of _ResUnmapViewOfFile @ 0x180110624
 * Callers:
 *     ResCKeDirectoryOpenMapping @ 0x18001B394 (ResCKeDirectoryOpenMapping.c)
 *     ResCKeSegmentOpenMapping @ 0x18008E1DC (ResCKeSegmentOpenMapping.c)
 *     ResCKeHitsOpenMapping @ 0x18008ECD8 (ResCKeHitsOpenMapping.c)
 *     ResCDirectoryFree @ 0x18010C5EC (ResCDirectoryFree.c)
 *     ResCHitsFree @ 0x18010C818 (ResCHitsFree.c)
 *     ResCSegmentFree @ 0x18010C978 (ResCSegmentFree.c)
 *     _ResCCreateMappingExclusive @ 0x18010EF60 (_ResCCreateMappingExclusive.c)
 *     _ResCOpenMapping @ 0x18010F2F8 (_ResCOpenMapping.c)
 *     ResCFreeCultureMap @ 0x180111554 (ResCFreeCultureMap.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18001ACF0 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18001AD60 (RtlNtStatusToDosError.c)
 *     NtUnmapViewOfSection @ 0x1800A0600 (NtUnmapViewOfSection.c)
 *     RtlFlushSecureMemoryCache @ 0x1800F3D60 (RtlFlushSecureMemoryCache.c)
 */

__int64 __fastcall ResUnmapViewOfFile(PVOID BaseAddress)
{
  NTSTATUS v2; // eax
  int v3; // ebx
  LONG v4; // eax

  v2 = NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
  v3 = v2;
  if ( v2 >= 0 )
    return 1LL;
  if ( v2 == -1073741755 )
  {
    if ( RtlFlushSecureMemoryCache(BaseAddress, 0LL) )
    {
      v3 = NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
      if ( v3 >= 0 )
        return 1LL;
    }
  }
  v4 = RtlNtStatusToDosError(v3);
  RtlSetLastWin32Error(v4);
  return 0LL;
}
