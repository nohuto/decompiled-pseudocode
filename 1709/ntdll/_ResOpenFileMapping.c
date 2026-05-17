/*
 * XREFs of _ResOpenFileMapping @ 0x1801104C4
 * Callers:
 *     _ResCOpenMapping @ 0x18010F2F8 (_ResCOpenMapping.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18001ACF0 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18001AD60 (RtlNtStatusToDosError.c)
 *     RtlInitUnicodeString @ 0x180052680 (RtlInitUnicodeString.c)
 *     NtOpenSection @ 0x1800A07A0 (NtOpenSection.c)
 *     BaseGetNamedObjectDirectory @ 0x18010E86C (BaseGetNamedObjectDirectory.c)
 */

__int64 __fastcall ResOpenFileMapping(__int64 a1, __int64 a2, const WCHAR *a3)
{
  NTSTATUS v3; // ecx
  ULONG v4; // eax
  int NamedObjectDirectory; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  int v8; // [rsp+30h] [rbp-30h]
  __int64 v9; // [rsp+38h] [rbp-28h]
  UNICODE_STRING *p_DestinationString; // [rsp+40h] [rbp-20h]
  int v11; // [rsp+48h] [rbp-18h]
  __int128 v12; // [rsp+50h] [rbp-10h]
  __int64 v13; // [rsp+80h] [rbp+20h] BYREF
  __int64 v14; // [rsp+88h] [rbp+28h]

  if ( !a3 )
  {
    v3 = -1073741811;
LABEL_3:
    v4 = RtlNtStatusToDosError(v3);
    RtlSetLastWin32Error(v4);
    return 0LL;
  }
  RtlInitUnicodeString(&DestinationString, a3);
  NamedObjectDirectory = BaseGetNamedObjectDirectory(&v13);
  if ( NamedObjectDirectory < 0
    || (v9 = v13,
        p_DestinationString = &DestinationString,
        v8 = 48,
        v11 = 2,
        v12 = 0LL,
        NamedObjectDirectory = NtOpenSection(),
        NamedObjectDirectory < 0) )
  {
    v3 = NamedObjectDirectory;
    goto LABEL_3;
  }
  return v14;
}
