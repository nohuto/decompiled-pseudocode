/*
 * XREFs of sub_18010D57C @ 0x18010D57C
 * Callers:
 *     sub_18010BF68 @ 0x18010BF68 (sub_18010BF68.c)
 *     sub_18010C1E0 @ 0x18010C1E0 (sub_18010C1E0.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18005D580 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 *     ZwWaitForSingleObject @ 0x1800A5380 (ZwWaitForSingleObject.c)
 *     ZwReadFile @ 0x1800A53C0 (ZwReadFile.c)
 */

__int64 __fastcall sub_18010D57C(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  NTSTATUS File; // ecx
  ULONG v7; // eax
  NTSTATUS v8; // [rsp+50h] [rbp-18h]
  int v9; // [rsp+58h] [rbp-10h]

  if ( a4 )
    *a4 = 0;
  File = ZwReadFile();
  if ( File == 259 )
  {
    File = ZwWaitForSingleObject();
    if ( File < 0 )
      goto LABEL_10;
    File = v8;
  }
  if ( File >= 0 )
  {
    if ( a4 )
      *a4 = v9;
    return 1LL;
  }
LABEL_10:
  if ( File == -1073741807 )
  {
    *a4 = 0;
    return 1LL;
  }
  if ( (File & 0xC0000000) == 0x80000000 )
    *a4 = v9;
  v7 = RtlNtStatusToDosError(File);
  RtlSetLastWin32Error(v7);
  return 0LL;
}
