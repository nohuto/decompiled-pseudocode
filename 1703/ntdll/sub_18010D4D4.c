/*
 * XREFs of sub_18010D4D4 @ 0x18010D4D4
 * Callers:
 *     sub_18010C2FC @ 0x18010C2FC (sub_18010C2FC.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     RtlSetLastWin32Error @ 0x18005D580 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 *     ZwOpenSection @ 0x1800A59E0 (ZwOpenSection.c)
 *     sub_18010B930 @ 0x18010B930 (sub_18010B930.c)
 */

__int64 __fastcall sub_18010D4D4(__int64 a1, __int64 a2, const WCHAR *a3)
{
  NTSTATUS v3; // ecx
  ULONG v4; // eax
  int v6; // eax
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
  v6 = sub_18010B930(&v13);
  if ( v6 < 0
    || (v9 = v13, p_DestinationString = &DestinationString, v8 = 48, v11 = 2, v12 = 0LL, v6 = ZwOpenSection(), v6 < 0) )
  {
    v3 = v6;
    goto LABEL_3;
  }
  return v14;
}
