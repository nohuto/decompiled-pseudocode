/*
 * XREFs of sub_18010C198 @ 0x18010C198
 * Callers:
 *     sub_180109B30 @ 0x180109B30 (sub_180109B30.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18005D580 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 *     ZwFlushVirtualMemory @ 0x1800A6F30 (ZwFlushVirtualMemory.c)
 */

__int64 __fastcall sub_18010C198(void *a1)
{
  int v1; // eax
  LONG v2; // eax
  _IO_STATUS_BLOCK v4; // [rsp+20h] [rbp-18h] BYREF
  ULONG_PTR v5; // [rsp+40h] [rbp+8h] BYREF
  PVOID v6; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0LL;
  v6 = a1;
  v1 = ZwFlushVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v6, &v5, &v4);
  if ( v1 >= 0 )
    return 1LL;
  v2 = RtlNtStatusToDosError(v1);
  RtlSetLastWin32Error(v2);
  return 0LL;
}
