/*
 * XREFs of ExGetExpirationDate @ 0x1405C2C4C
 * Callers:
 *     ExInitializeTimeRefresh @ 0x14083CB54 (ExInitializeTimeRefresh.c)
 *     ExInitLicenseData @ 0x14083D688 (ExInitLicenseData.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     RtlTimeFieldsToTime @ 0x14011C830 (RtlTimeFieldsToTime.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwQueryLicenseValue @ 0x1401801E0 (ZwQueryLicenseValue.c)
 */

__int64 __fastcall ExGetExpirationDate(PLARGE_INTEGER Time)
{
  NTSTATUS v2; // eax
  NTSTATUS v3; // ebx
  __int64 v4; // rax
  ULONG ResultDataSize; // [rsp+30h] [rbp-40h] BYREF
  ULONG Type; // [rsp+34h] [rbp-3Ch] BYREF
  _TIME_FIELDS TimeFields; // [rsp+38h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-28h] BYREF
  __int64 Data; // [rsp+58h] [rbp-18h] BYREF
  __int64 v11; // [rsp+60h] [rbp-10h]

  Type = 0;
  ResultDataSize = 0;
  *(_QWORD *)&TimeFields.Year = 0LL;
  *(_QWORD *)&TimeFields.Minute = 0LL;
  Data = 0LL;
  v11 = 0LL;
  if ( !Time )
    return (unsigned int)-1073741811;
  RtlInitUnicodeString(&DestinationString, L"Kernel-ExpirationDate");
  v2 = ZwQueryLicenseValue(&DestinationString, &Type, 0LL, 0, &ResultDataSize);
  v3 = v2;
  if ( v2 != -1073741789 )
  {
    if ( v2 < 0 )
      goto LABEL_17;
    goto LABEL_16;
  }
  if ( ResultDataSize == 16 && Type == 3 )
  {
    v3 = ZwQueryLicenseValue(&DestinationString, &Type, &Data, 0x10u, &ResultDataSize);
    if ( v3 < 0 )
    {
LABEL_17:
      Time->QuadPart = 0LL;
      return (unsigned int)v3;
    }
    v4 = -Data;
    if ( !Data )
      v4 = -v11;
    if ( !v4 )
    {
      Time->QuadPart = 0LL;
      goto LABEL_10;
    }
    TimeFields.Year = Data;
    *(_DWORD *)&TimeFields.Month = *(_DWORD *)((char *)&Data + 2);
    TimeFields.Hour = HIWORD(Data);
    *(_DWORD *)&TimeFields.Minute = v11;
    LOWORD(ResultDataSize) = WORD1(v11);
    if ( RtlTimeFieldsToTime(&TimeFields, Time) != 1 )
    {
LABEL_16:
      v3 = -1073741823;
      goto LABEL_17;
    }
  }
  else
  {
    v3 = -1073741772;
  }
LABEL_10:
  if ( v3 < 0 )
    goto LABEL_17;
  return (unsigned int)v3;
}
