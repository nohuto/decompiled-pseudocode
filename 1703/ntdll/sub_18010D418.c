/*
 * XREFs of sub_18010D418 @ 0x18010D418
 * Callers:
 *     sub_18010BF68 @ 0x18010BF68 (sub_18010BF68.c)
 *     sub_18010C2FC @ 0x18010C2FC (sub_18010C2FC.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18005D580 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 *     ZwMapViewOfSection @ 0x1800A5800 (ZwMapViewOfSection.c)
 */

__int64 sub_18010D418()
{
  NTSTATUS v0; // eax
  ULONG v1; // eax

  v0 = ZwMapViewOfSection();
  if ( v0 < 0 )
  {
    v1 = RtlNtStatusToDosError(v0);
    RtlSetLastWin32Error(v1);
  }
  return 0LL;
}
