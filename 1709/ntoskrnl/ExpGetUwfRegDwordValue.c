/*
 * XREFs of ExpGetUwfRegDwordValue @ 0x140283730
 * Callers:
 *     ExpGetSystemWriteConstraintInformation @ 0x1407544A4 (ExpGetSystemWriteConstraintInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x14017DBA0 (ZwQueryValueKey.c)
 */

NTSTATUS __fastcall ExpGetUwfRegDwordValue(void *a1, UNICODE_STRING *a2, _DWORD *a3)
{
  NTSTATUS result; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-38h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+38h] [rbp-30h] BYREF
  int v7; // [rsp+3Ch] [rbp-2Ch]
  int v8; // [rsp+40h] [rbp-28h]
  int v9; // [rsp+44h] [rbp-24h]

  ResultLength = 0;
  result = ZwQueryValueKey(a1, a2, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength);
  if ( result >= 0 )
  {
    if ( v8 == 4 && v7 == 4 )
      *a3 = v9;
    else
      return -1073741788;
  }
  return result;
}
