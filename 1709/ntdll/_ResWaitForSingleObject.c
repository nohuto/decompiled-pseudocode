/*
 * XREFs of _ResWaitForSingleObject @ 0x18011068C
 * Callers:
 *     ResCRequestInitMutex @ 0x18010ED70 (ResCRequestInitMutex.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18001ACF0 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18001AD60 (RtlNtStatusToDosError.c)
 *     NtWaitForSingleObject @ 0x1800A0140 (NtWaitForSingleObject.c)
 */

__int64 __fastcall ResWaitForSingleObject(void *a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  LONG v4; // eax
  LARGE_INTEGER Timeout; // [rsp+30h] [rbp+8h] BYREF

  if ( ((unsigned int)a1 & 0x10000003) == 3LL )
    return 0LL;
  Timeout.QuadPart = -50000000LL;
  v2 = NtWaitForSingleObject(a1, 0, &Timeout);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = RtlNtStatusToDosError(v2);
    RtlSetLastWin32Error(v4);
  }
  return v3;
}
