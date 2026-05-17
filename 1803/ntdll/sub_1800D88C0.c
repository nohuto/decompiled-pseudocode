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

__int64 __fastcall sub_1800D88C0(__int64 a1, const WCHAR *a2, _DWORD *a3)
{
  int ValueKey; // ecx
  __int64 result; // rax
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-40h] BYREF
  int v7; // [rsp+4Ch] [rbp-2Ch]
  int v8; // [rsp+50h] [rbp-28h]
  int v9; // [rsp+54h] [rbp-24h]

  *a3 = 0;
  RtlInitUnicodeString(&DestinationString, a2);
  ValueKey = ZwQueryValueKey();
  result = 3221225524LL;
  if ( ValueKey >= 0 )
  {
    if ( v7 == 4 && v8 == 4 )
    {
      *a3 = v9;
      return 0LL;
    }
    else
    {
      return 3221225473LL;
    }
  }
  else if ( ValueKey != -1073741772 )
  {
    return (unsigned int)ValueKey;
  }
  return result;
}
