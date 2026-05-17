/*
 * XREFs of _ResMapViewOfFile @ 0x180110408
 * Callers:
 *     _ResCCreateMappingExclusive @ 0x18010EF60 (_ResCCreateMappingExclusive.c)
 *     _ResCOpenMapping @ 0x18010F2F8 (_ResCOpenMapping.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18001ACF0 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18001AD60 (RtlNtStatusToDosError.c)
 *     ZwMapViewOfSection @ 0x1800A05C0 (ZwMapViewOfSection.c)
 */

__int64 ResMapViewOfFile()
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
