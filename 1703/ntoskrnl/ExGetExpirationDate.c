/*
 * XREFs of ExGetExpirationDate @ 0x1405A651C
 * Callers:
 *     ExInitializeTimeRefresh @ 0x140808838 (ExInitializeTimeRefresh.c)
 *     ExInitLicenseData @ 0x140808950 (ExInitLicenseData.c)
 * Callees:
 *     RtlTimeFieldsToTime @ 0x140026E40 (RtlTimeFieldsToTime.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwQueryLicenseValue @ 0x140180800 (ZwQueryLicenseValue.c)
 */

__int64 __fastcall ExGetExpirationDate(PLARGE_INTEGER Time)
{
  int LicenseValue; // eax
  unsigned int v3; // ebx
  int v5; // [rsp+34h] [rbp-4Ch] BYREF
  struct _TIME_FIELDS TimeFields; // [rsp+38h] [rbp-48h]
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-38h] BYREF
  __int64 v8; // [rsp+58h] [rbp-28h]
  __int64 v9; // [rsp+60h] [rbp-20h]

  v5 = 0;
  *(_QWORD *)&TimeFields.Year = 0LL;
  *(_QWORD *)&TimeFields.Minute = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  if ( Time )
  {
    RtlInitUnicodeString(&DestinationString, L"Kernel-ExpirationDate");
    LicenseValue = ZwQueryLicenseValue((__int64)&DestinationString, (__int64)&v5, 0LL);
    v3 = LicenseValue;
    if ( LicenseValue == -1073741789 )
    {
      v3 = -1073741772;
    }
    else if ( LicenseValue >= 0 )
    {
      v3 = -1073741823;
    }
    Time->QuadPart = 0LL;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
