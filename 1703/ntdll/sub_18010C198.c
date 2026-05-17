/*
 * XREFs of sub_18010C198 @ 0x18010C198
 * Callers:
 *     sub_180109B30 @ 0x180109B30 (sub_180109B30.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18005D580 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 *     ZwFlushVirtualMemory @ 0x1800A6F30 (ZwFlushVirtualMemory.c)
 */

__int64 sub_18010C198()
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
