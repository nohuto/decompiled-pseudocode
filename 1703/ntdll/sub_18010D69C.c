/*
 * XREFs of sub_18010D69C @ 0x18010D69C
 * Callers:
 *     sub_18010BD78 @ 0x18010BD78 (sub_18010BD78.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18005D580 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 *     ZwWaitForSingleObject @ 0x1800A5380 (ZwWaitForSingleObject.c)
 */

__int64 __fastcall sub_18010D69C(int a1)
{
  NTSTATUS v2; // eax
  unsigned int v3; // ebx
  ULONG v4; // eax

  if ( (a1 & 0x10000003) == 3LL )
    return 0LL;
  v2 = ZwWaitForSingleObject();
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = RtlNtStatusToDosError(v2);
    RtlSetLastWin32Error(v4);
  }
  return v3;
}
