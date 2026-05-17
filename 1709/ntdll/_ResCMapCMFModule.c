/*
 * XREFs of _ResCMapCMFModule @ 0x18001B470
 * Callers:
 *     ResCKeDirectoryOpenMapping @ 0x18001B394 (ResCKeDirectoryOpenMapping.c)
 *     ResCKeSegmentOpenMapping @ 0x18008E1DC (ResCKeSegmentOpenMapping.c)
 *     ResCKeHitsOpenMapping @ 0x18008ECD8 (ResCKeHitsOpenMapping.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18001ACF0 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18001AD60 (RtlNtStatusToDosError.c)
 *     NtMapCMFModule @ 0x1800A21F0 (NtMapCMFModule.c)
 */

__int64 __fastcall ResCMapCMFModule(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  NTSTATUS v5; // eax
  ULONG v6; // eax

  v5 = NtMapCMFModule(a1, a2, a5);
  if ( v5 < 0 )
  {
    v6 = RtlNtStatusToDosError(v5);
    RtlSetLastWin32Error(v6);
  }
  return 0LL;
}
