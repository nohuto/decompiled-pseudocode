/*
 * XREFs of sub_1800F5394 @ 0x1800F5394
 * Callers:
 *     RtlLcidToLocaleName @ 0x1800454D0 (RtlLcidToLocaleName.c)
 *     sub_1800F5630 @ 0x1800F5630 (sub_1800F5630.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwQueryValueKey @ 0x1800A55E0 (ZwQueryValueKey.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     sub_1800F52EC @ 0x1800F52EC (sub_1800F52EC.c)
 */

__int64 __fastcall sub_1800F5394(PUNICODE_STRING DestinationString, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  _BYTE v7[32]; // [rsp+50h] [rbp+0h] BYREF

  if ( !sub_1800F52EC((__int64)DestinationString, a2, a3, a4) )
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
