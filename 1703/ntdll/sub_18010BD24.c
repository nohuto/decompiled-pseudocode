/*
 * XREFs of sub_18010BD24 @ 0x18010BD24
 * Callers:
 *     sub_180002BD0 @ 0x180002BD0 (sub_180002BD0.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18005D580 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 *     ZwReleaseMutant @ 0x1800A5700 (ZwReleaseMutant.c)
 *     sub_18010C390 @ 0x18010C390 (sub_18010C390.c)
 */

__int64 __fastcall sub_18010BD24(void *a1)
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
  return v1 & (unsigned int)-((unsigned int)sub_18010C390(a1) != 0);
}
