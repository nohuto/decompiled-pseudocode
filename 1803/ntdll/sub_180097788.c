/*
 * XREFs of sub_180097788 @ 0x180097788
 * Callers:
 *     sub_180096EA4 @ 0x180096EA4 (sub_180096EA4.c)
 * Callees:
 *     RtlUnicodeToMultiByteN @ 0x18006CF00 (RtlUnicodeToMultiByteN.c)
 *     sub_18008B020 @ 0x18008B020 (sub_18008B020.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall sub_180097788(_DWORD *a1, _BYTE *a2, size_t a3, __int16 a4)
{
  unsigned int v8; // [rsp+48h] [rbp+10h] BYREF
  unsigned int v9; // [rsp+58h] [rbp+20h] BYREF

  LOWORD(v9) = a4;
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
    sub_18008B020();
    return 22LL;
  }
  if ( !a2 )
  {
    if ( a1 )
      *a1 = dword_180156EF4;
    return 0LL;
  }
  if ( (int)RtlUnicodeToMultiByteN(a2, a3, &v8, &v9, 2u) >= 0 )
  {
    if ( a1 )
      *a1 = v8;
    return 0LL;
  }
  if ( a3 )
    memset(a2, 0, a3);
  return 42LL;
}
