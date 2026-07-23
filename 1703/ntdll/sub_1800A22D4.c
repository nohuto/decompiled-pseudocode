/*
 * XREFs of sub_1800A22D4 @ 0x1800A22D4
 * Callers:
 *     sub_1800A1A64 @ 0x1800A1A64 (sub_1800A1A64.c)
 * Callees:
 *     RtlUnicodeToMultiByteN @ 0x180043E30 (RtlUnicodeToMultiByteN.c)
 *     sub_180095DE0 @ 0x180095DE0 (sub_180095DE0.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall sub_1800A22D4(ULONG *a1, CHAR *a2, size_t a3, WCHAR a4)
{
  ULONG BytesInMultiByteString; // [rsp+48h] [rbp+10h] BYREF
  WCHAR UnicodeString; // [rsp+58h] [rbp+20h] BYREF

  UnicodeString = a4;
  if ( !a2 && a3 )
  {
    if ( a1 )
      *a1 = 0;
    return 0LL;
  }
  if ( a1 )
    *a1 = -1;
  if ( a3 > 0x7FFFFFFF )
  {
    sub_180095DE0();
    return 22LL;
  }
  if ( !a2 )
  {
    if ( a1 )
      *a1 = dword_180155E94;
    return 0LL;
  }
  if ( RtlUnicodeToMultiByteN(a2, a3, &BytesInMultiByteString, &UnicodeString, 2u) >= 0 )
  {
    if ( a1 )
      *a1 = BytesInMultiByteString;
    return 0LL;
  }
  if ( a3 )
    memset(a2, 0, a3);
  return 42LL;
}
