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

__int64 __fastcall sub_18005DC24(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  NTSTATUS v5; // eax
  ULONG v6; // eax

  v5 = ZwMapCMFModule(a1, a2, a5);
  if ( v5 < 0 )
  {
    v6 = RtlNtStatusToDosError(v5);
    RtlSetLastWin32Error(v6);
  }
  return 0LL;
}
