/*
 * XREFs of sub_1800F2924 @ 0x1800F2924
 * Callers:
 *     RtlLcidToLocaleName @ 0x180036A00 (RtlLcidToLocaleName.c)
 *     sub_1800F2AD4 @ 0x1800F2AD4 (sub_1800F2AD4.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x18009ADA0 (ZwQueryValueKey.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 *     sub_1800F287C @ 0x1800F287C (sub_1800F287C.c)
 */

__int64 __fastcall sub_1800F2924(PUNICODE_STRING DestinationString, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  _BYTE v7[32]; // [rsp+50h] [rbp+0h] BYREF

  if ( !sub_1800F287C((__int64)DestinationString, a2, a3, a4) )
    return 3221225473LL;
  if ( (int)ZwQueryValueKey() < 0 )
    return 3221225473LL;
  if ( *(_DWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0uLL) + 0x24) != 1 )
    return 3221225473LL;
  v5 = *(_QWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28);
  if ( (v5 & 1) != 0
    || !(_DWORD)v5
    || *(_WORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0uLL) + 0x2A + 2 * ((unsigned __int64)(unsigned int)v5 >> 1))
    || (unsigned int)v5 > DestinationString->MaximumLength )
  {
    return 3221225473LL;
  }
  memmove(
    DestinationString->Buffer,
    (const void *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFE0uLL) + 44),
    (unsigned int)v5);
  RtlInitUnicodeString(DestinationString, DestinationString->Buffer);
  return 0LL;
}
