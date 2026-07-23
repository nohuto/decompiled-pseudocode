/*
 * XREFs of sub_18010C390 @ 0x18010C390
 * Callers:
 *     sub_180109904 @ 0x180109904 (sub_180109904.c)
 *     sub_180109B30 @ 0x180109B30 (sub_180109B30.c)
 *     sub_180109C90 @ 0x180109C90 (sub_180109C90.c)
 *     sub_18010BD24 @ 0x18010BD24 (sub_18010BD24.c)
 *     sub_18010BD78 @ 0x18010BD78 (sub_18010BD78.c)
 *     sub_18010BF68 @ 0x18010BF68 (sub_18010BF68.c)
 *     sub_18010C1E0 @ 0x18010C1E0 (sub_18010C1E0.c)
 *     sub_18010C2FC @ 0x18010C2FC (sub_18010C2FC.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18005D580 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 */

__int64 __fastcall sub_18010C390(void *a1)
{
  int v1; // eax
  LONG v3; // eax

  if ( (_DWORD)a1 != -12 && (_DWORD)a1 != -11 && (_DWORD)a1 != -10 && ((unsigned int)a1 & 0x10000003) != 3LL )
  {
    v1 = ZwClose(a1);
    if ( v1 >= 0 )
      return 1LL;
    v3 = RtlNtStatusToDosError(v1);
    RtlSetLastWin32Error(v3);
  }
  return 0LL;
}
