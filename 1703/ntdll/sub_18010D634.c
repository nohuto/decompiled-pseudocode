/*
 * XREFs of sub_18010D634 @ 0x18010D634
 * Callers:
 *     sub_180002D84 @ 0x180002D84 (sub_180002D84.c)
 *     sub_1800033F0 @ 0x1800033F0 (sub_1800033F0.c)
 *     sub_18005DB48 @ 0x18005DB48 (sub_18005DB48.c)
 *     sub_180109904 @ 0x180109904 (sub_180109904.c)
 *     sub_180109B30 @ 0x180109B30 (sub_180109B30.c)
 *     sub_180109C90 @ 0x180109C90 (sub_180109C90.c)
 *     sub_18010BF68 @ 0x18010BF68 (sub_18010BF68.c)
 *     sub_18010C2FC @ 0x18010C2FC (sub_18010C2FC.c)
 *     sub_18010E10C @ 0x18010E10C (sub_18010E10C.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18005D580 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 *     ZwUnmapViewOfSection @ 0x1800A5840 (ZwUnmapViewOfSection.c)
 *     RtlFlushSecureMemoryCache @ 0x1800F30F0 (RtlFlushSecureMemoryCache.c)
 */

__int64 __fastcall sub_18010D634(PVOID BaseAddress)
{
  NTSTATUS v2; // eax
  int v3; // ebx
  LONG v4; // eax

  v2 = ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
  v3 = v2;
  if ( v2 >= 0 )
    return 1LL;
  if ( v2 == -1073741755 )
  {
    if ( RtlFlushSecureMemoryCache(BaseAddress, 0LL) )
    {
      v3 = ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
      if ( v3 >= 0 )
        return 1LL;
    }
  }
  v4 = RtlNtStatusToDosError(v3);
  RtlSetLastWin32Error(v4);
  return 0LL;
}
