/*
 * XREFs of RtlConvertLCIDToString @ 0x1800E7AB0
 * Callers:
 *     RtlpConvertCultureNamesToLCIDs @ 0x1800E8C70 (RtlpConvertCultureNamesToLCIDs.c)
 * Callees:
 *     sub_180001E28 @ 0x180001E28 (sub_180001E28.c)
 *     RtlIntegerToUnicodeString @ 0x180040980 (RtlIntegerToUnicodeString.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

NTSTATUS __fastcall RtlConvertLCIDToString(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        _WORD *a4,
        unsigned int a5)
{
  unsigned int v9; // ebx
  NTSTATUS result; // eax
  int v11; // esi
  unsigned int i; // eax
  UNICODE_STRING v13; // [rsp+20h] [rbp-438h] BYREF
  _BYTE v14[1024]; // [rsp+30h] [rbp-428h] BYREF

  memset(v14, 0, sizeof(v14));
  v9 = a5;
  if ( a5 >= 0x200 )
    return -2147483643;
  v13.Length = 2 * a5;
  v13.MaximumLength = 2 * a5;
  v13.Buffer = (wchar_t *)v14;
  result = RtlIntegerToUnicodeString(a1, a2, &v13);
  v11 = 0;
  if ( result >= 0 )
  {
    for ( i = v13.Length >> 1; i < a3; ++i )
    {
      if ( !v9 )
        return -1073741823;
      *a4++ = 48;
      --v9;
    }
    if ( (int)sub_180001E28(a4, v9, (__int64)v13.Buffer) < 0 )
      return -1073741823;
    return v11;
  }
  return result;
}
