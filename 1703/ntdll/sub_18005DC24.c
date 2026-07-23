/*
 * XREFs of sub_18005DC24 @ 0x18005DC24
 * Callers:
 *     sub_180002D84 @ 0x180002D84 (sub_180002D84.c)
 *     sub_1800033F0 @ 0x1800033F0 (sub_1800033F0.c)
 *     sub_18005DB48 @ 0x18005DB48 (sub_18005DB48.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18005D580 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 *     ZwMapCMFModule @ 0x1800A7410 (ZwMapCMFModule.c)
 */

PVOID __fastcall sub_18005DC24(ULONG a1, ULONG a2, ULONG *a3, ULONG *a4, PULONG CacheIndexOut)
{
  int v5; // eax
  LONG v6; // eax
  PVOID v8; // [rsp+30h] [rbp-18h] BYREF

  v8 = 0LL;
  v5 = ZwMapCMFModule(a1, a2, CacheIndexOut, a4, a3, &v8);
  if ( v5 >= 0 )
    return v8;
  v6 = RtlNtStatusToDosError(v5);
  RtlSetLastWin32Error(v6);
  return 0LL;
}
