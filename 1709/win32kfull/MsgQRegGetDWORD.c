/*
 * XREFs of MsgQRegGetDWORD @ 0x1C01B5534
 * Callers:
 *     ?InitLogQMsg@@YAXXZ @ 0x1C0123028 (-InitLogQMsg@@YAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

NTSTATUS __fastcall MsgQRegGetDWORD(HANDLE KeyHandle, const WCHAR *a2, _DWORD *a3)
{
  NTSTATUS result; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-438h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-430h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+50h] [rbp-418h] BYREF
  int v9; // [rsp+54h] [rbp-414h]
  int v10; // [rsp+5Ch] [rbp-40Ch]

  RtlInitUnicodeString(&DestinationString, a2);
  result = ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x400u,
             &ResultLength);
  if ( result >= 0 )
  {
    if ( v9 == 4 )
      *a3 = v10;
    else
      return -1073741811;
  }
  return result;
}
