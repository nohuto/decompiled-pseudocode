/*
 * XREFs of sub_18010D69C @ 0x18010D69C
 * Callers:
 *     sub_18010BD78 @ 0x18010BD78 (sub_18010BD78.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18005D580 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 *     ZwWaitForSingleObject @ 0x1800A5380 (ZwWaitForSingleObject.c)
 */

__int64 __fastcall sub_18010D69C(void *a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  LONG v4; // eax
  LARGE_INTEGER Timeout; // [rsp+30h] [rbp+8h] BYREF

  if ( ((unsigned int)a1 & 0x10000003) == 3LL )
    return 0LL;
  Timeout.QuadPart = -50000000LL;
  v2 = ZwWaitForSingleObject(a1, 0, &Timeout);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = RtlNtStatusToDosError(v2);
    RtlSetLastWin32Error(v4);
  }
  return v3;
}
