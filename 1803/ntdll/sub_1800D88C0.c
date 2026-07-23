/*
 * XREFs of sub_1800D88C0 @ 0x1800D88C0
 * Callers:
 *     sub_1800D8768 @ 0x1800D8768 (sub_1800D8768.c)
 *     sub_1800D8814 @ 0x1800D8814 (sub_1800D8814.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x18009ADA0 (ZwQueryValueKey.c)
 */

__int64 __fastcall sub_1800D88C0(HANDLE KeyHandle, const WCHAR *a2, _DWORD *a3)
{
  NTSTATUS v5; // ecx
  __int64 result; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-48h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-40h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+48h] [rbp-30h] BYREF
  int v10; // [rsp+4Ch] [rbp-2Ch]
  int v11; // [rsp+50h] [rbp-28h]
  int v12; // [rsp+54h] [rbp-24h]

  *a3 = 0;
  RtlInitUnicodeString(&DestinationString, a2);
  v5 = ZwQueryValueKey(
         KeyHandle,
         &DestinationString,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x14u,
         &ResultLength);
  result = 3221225524LL;
  if ( v5 >= 0 )
  {
    if ( v5 != -1073741772 )
    {
      if ( v10 == 4 && v11 == 4 )
      {
        *a3 = v12;
        return 0LL;
      }
      else
      {
        return 3221225473LL;
      }
    }
  }
  else if ( v5 != -1073741772 )
  {
    return (unsigned int)v5;
  }
  return result;
}
