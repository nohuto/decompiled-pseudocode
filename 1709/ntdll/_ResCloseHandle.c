/*
 * XREFs of _ResCloseHandle @ 0x18010F38C
 * Callers:
 *     ResCDirectoryFree @ 0x18010C5EC (ResCDirectoryFree.c)
 *     ResCHitsFree @ 0x18010C818 (ResCHitsFree.c)
 *     ResCSegmentFree @ 0x18010C978 (ResCSegmentFree.c)
 *     ResCReleaseInitMutex @ 0x18010ED1C (ResCReleaseInitMutex.c)
 *     ResCRequestInitMutex @ 0x18010ED70 (ResCRequestInitMutex.c)
 *     _ResCCreateMappingExclusive @ 0x18010EF60 (_ResCCreateMappingExclusive.c)
 *     _ResCLoadFixedSize @ 0x18010F1DC (_ResCLoadFixedSize.c)
 *     _ResCOpenMapping @ 0x18010F2F8 (_ResCOpenMapping.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18001ACF0 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18001AD60 (RtlNtStatusToDosError.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 */

__int64 __fastcall ResCloseHandle(void *a1)
{
  int v1; // eax
  LONG v3; // eax

  if ( (_DWORD)a1 != -12 && (_DWORD)a1 != -11 && (_DWORD)a1 != -10 && ((unsigned int)a1 & 0x10000003) != 3LL )
  {
    v1 = NtClose(a1);
    if ( v1 >= 0 )
      return 1LL;
    v3 = RtlNtStatusToDosError(v1);
    RtlSetLastWin32Error(v3);
  }
  return 0LL;
}
