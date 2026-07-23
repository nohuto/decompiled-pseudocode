/*
 * XREFs of sub_180004530 @ 0x180004530
 * Callers:
 *     sub_1800064C0 @ 0x1800064C0 (sub_1800064C0.c)
 * Callees:
 *     sub_180004624 @ 0x180004624 (sub_180004624.c)
 *     RtlNtStatusToDosError @ 0x180008400 (RtlNtStatusToDosError.c)
 *     RtlFreeUnicodeString @ 0x180011530 (RtlFreeUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x180038060 (RtlCreateUnicodeString.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     memcmp @ 0x18008EED0 (memcmp.c)
 *     wcschr @ 0x180090C50 (wcschr.c)
 *     wcsrchr @ 0x180090EA0 (wcsrchr.c)
 *     wcsstr @ 0x180090F30 (wcsstr.c)
 */

ULONG __fastcall sub_180004530(const wchar_t **a1, volatile signed __int32 *a2, _UNICODE_STRING *a3)
{
  wchar_t *v6; // rsi
  NTSTATUS v8; // ecx
  wchar_t Buf2[1024]; // [rsp+20h] [rbp-828h] BYREF

  v6 = wcschr(a1[1], 0x25u);
  if ( v6 && v6 == wcsrchr(a1[1], 0x25u) && wcsstr(a1[1], L"%d") )
  {
    _InterlockedExchangeAdd(a2, 1u);
    if ( !(unsigned int)sub_180004624(Buf2) && memcmp(a1[1], Buf2, *(unsigned __int16 *)a1) )
    {
      RtlFreeUnicodeString(a3);
      RtlCreateUnicodeString(a3, Buf2);
      return 0;
    }
    v8 = -1073741776;
  }
  else
  {
    v8 = -1073741773;
  }
  return RtlNtStatusToDosError(v8);
}
