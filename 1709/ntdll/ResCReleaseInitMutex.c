/*
 * XREFs of ResCReleaseInitMutex @ 0x18010ED1C
 * Callers:
 *     ResCRuntimeGetSegmentDataEx @ 0x18008E028 (ResCRuntimeGetSegmentDataEx.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18001ACF0 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18001AD60 (RtlNtStatusToDosError.c)
 *     ZwReleaseMutant @ 0x1800A04C0 (ZwReleaseMutant.c)
 *     _ResCloseHandle @ 0x18010F38C (_ResCloseHandle.c)
 */

__int64 __fastcall ResCReleaseInitMutex(void *a1)
{
  int v1; // ebx
  int v4; // eax
  LONG v5; // eax

  v1 = 0;
  if ( !a1 )
    return 0LL;
  v4 = ZwReleaseMutant(a1, 0LL);
  if ( v4 < 0 )
  {
    v5 = RtlNtStatusToDosError(v4);
    RtlSetLastWin32Error(v5);
  }
  else
  {
    v1 = 1;
  }
  return v1 & (unsigned int)-((unsigned int)ResCloseHandle(a1) != 0);
}
