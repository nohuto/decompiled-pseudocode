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

PVOID __fastcall sub_18010D418(void *a1, int a2, __int64 a3, __int64 a4, ULONG_PTR ViewSize)
{
  ULONG Win32Protect; // eax
  int v6; // eax
  LONG v7; // eax
  LARGE_INTEGER SectionOffset; // [rsp+50h] [rbp-18h] BYREF
  PVOID BaseAddress; // [rsp+58h] [rbp-10h] BYREF

  BaseAddress = 0LL;
  SectionOffset.QuadPart = 0LL;
  if ( a2 == 1 )
  {
    Win32Protect = 8;
  }
  else if ( (a2 & 2) != 0 )
  {
    Win32Protect = (a2 & 0x20) != 0 ? 64 : 4;
  }
  else if ( (a2 & 4) != 0 )
  {
    Win32Protect = (a2 & 0x20) != 0 ? 32 : 2;
  }
  else
  {
    Win32Protect = 1;
  }
  v6 = ZwMapViewOfSection(
         a1,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &BaseAddress,
         0LL,
         0LL,
         &SectionOffset,
         &ViewSize,
         ViewShare,
         0,
         Win32Protect);
  if ( v6 >= 0 )
    return BaseAddress;
  v7 = RtlNtStatusToDosError(v6);
  RtlSetLastWin32Error(v7);
  return 0LL;
}
