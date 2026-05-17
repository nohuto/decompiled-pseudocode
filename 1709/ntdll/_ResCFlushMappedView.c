/*
 * XREFs of _ResCFlushMappedView @ 0x18010F194
 * Callers:
 *     ResCHitsFree @ 0x18010C818 (ResCHitsFree.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18001ACF0 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18001AD60 (RtlNtStatusToDosError.c)
 *     ZwFlushVirtualMemory @ 0x1800A1D10 (ZwFlushVirtualMemory.c)
 */

__int64 ResCFlushMappedView()
{
  NTSTATUS v0; // eax
  ULONG v1; // eax

  v0 = ZwFlushVirtualMemory();
  if ( v0 >= 0 )
    return 1LL;
  v1 = RtlNtStatusToDosError(v0);
  RtlSetLastWin32Error(v1);
  return 0LL;
}
