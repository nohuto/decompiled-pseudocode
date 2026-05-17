/*
 * XREFs of _ResGetFileSizeEx @ 0x18011039C
 * Callers:
 *     _ResCCreateMappingExclusive @ 0x18010EF60 (_ResCCreateMappingExclusive.c)
 *     _ResCLoadFixedSize @ 0x18010F1DC (_ResCLoadFixedSize.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18001ACF0 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18001AD60 (RtlNtStatusToDosError.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtQueryInformationFile @ 0x1800A02E0 (NtQueryInformationFile.c)
 */

__int64 __fastcall ResGetFileSizeEx(__int64 a1, _QWORD *a2)
{
  NTSTATUS InformationFile; // eax
  ULONG v4; // eax
  __int64 v6; // [rsp+48h] [rbp-20h]

  InformationFile = NtQueryInformationFile();
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
