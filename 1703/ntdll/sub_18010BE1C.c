/*
 * XREFs of sub_18010BE1C @ 0x18010BE1C
 * Callers:
 *     sub_18010E1E0 @ 0x18010E1E0 (sub_18010E1E0.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x180040170 (RtlInitUnicodeStringEx.c)
 *     RtlCultureNameToLCID @ 0x180045FF0 (RtlCultureNameToLCID.c)
 *     RtlSetLastWin32Error @ 0x18005D580 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 */

__int64 __fastcall sub_18010BE1C(PCWSTR SourceString)
{
  LONG v1; // ecx
  NTSTATUS inited; // eax
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  DWORD Lcid; // [rsp+40h] [rbp+8h] BYREF

  Lcid = 0;
  if ( !SourceString )
    goto LABEL_2;
  inited = RtlInitUnicodeStringEx(&DestinationString, SourceString);
  if ( (inited & 0xC0000000) == 0xC0000000 )
  {
    v1 = RtlNtStatusToDosError(inited);
    goto LABEL_3;
  }
  if ( !RtlCultureNameToLCID(&DestinationString, &Lcid) )
  {
LABEL_2:
    v1 = 50;
LABEL_3:
    RtlSetLastWin32Error(v1);
    return 0LL;
  }
  return Lcid;
}
