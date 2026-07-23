/*
 * XREFs of sub_1801050C4 @ 0x1801050C4
 * Callers:
 *     sub_1800531B0 @ 0x1800531B0 (sub_1800531B0.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x18001F9F0 (RtlFreeUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x180046500 (RtlCreateUnicodeString.c)
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 *     sub_18007D6CC @ 0x18007D6CC (sub_18007D6CC.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     memcmp @ 0x180099A70 (memcmp.c)
 *     wcschr @ 0x18009BA10 (wcschr.c)
 *     wcsrchr @ 0x18009BC50 (wcsrchr.c)
 *     wcsstr @ 0x18009BCE0 (wcsstr.c)
 */

ULONG __fastcall sub_1801050C4(const wchar_t **a1, volatile signed __int32 *a2, _UNICODE_STRING *a3)
{
  wchar_t *v6; // rsi
  NTSTATUS v8; // ecx
  wchar_t Buf2[1024]; // [rsp+20h] [rbp-828h] BYREF

  v6 = wcschr(a1[1], 0x25u);
  if ( v6 && v6 == wcsrchr(a1[1], 0x25u) && wcsstr(a1[1], L"%d") )
  {
    if ( !(unsigned int)sub_18007D6CC(Buf2, 0x800uLL, a1[1], (unsigned int)_InterlockedIncrement(a2))
      && memcmp(a1[1], Buf2, *(unsigned __int16 *)a1) )
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
