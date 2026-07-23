/*
 * XREFs of ResCultureNameToLCID @ 0x18010EE14
 * Callers:
 *     ResCGetCultureID @ 0x180111628 (ResCGetCultureID.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18001ACF0 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18001AD60 (RtlNtStatusToDosError.c)
 *     RtlInitUnicodeStringEx @ 0x180035290 (RtlInitUnicodeStringEx.c)
 *     RtlCultureNameToLCID @ 0x1800524A0 (RtlCultureNameToLCID.c)
 */

__int64 __fastcall ResCultureNameToLCID(PCWSTR SourceString)
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
