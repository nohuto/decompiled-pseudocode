/*
 * XREFs of sub_18010D3AC @ 0x18010D3AC
 * Callers:
 *     sub_18010BF68 @ 0x18010BF68 (sub_18010BF68.c)
 *     sub_18010C1E0 @ 0x18010C1E0 (sub_18010C1E0.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18005D580 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwQueryInformationFile @ 0x1800A5520 (ZwQueryInformationFile.c)
 */

__int64 __fastcall sub_18010D3AC(__int64 a1, _QWORD *a2)
{
  NTSTATUS InformationFile; // eax
  ULONG v4; // eax
  __int64 v6; // [rsp+48h] [rbp-20h]

  InformationFile = ZwQueryInformationFile();
  if ( InformationFile >= 0 )
  {
    *a2 = v6;
    return 1LL;
  }
  else
  {
    v4 = RtlNtStatusToDosError(InformationFile);
    RtlSetLastWin32Error(v4);
    return 0LL;
  }
}
