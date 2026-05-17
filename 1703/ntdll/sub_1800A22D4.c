/*
 * XREFs of sub_1800A22D4 @ 0x1800A22D4
 * Callers:
 *     sub_1800A1A64 @ 0x1800A1A64 (sub_1800A1A64.c)
 * Callees:
 *     RtlUnicodeToMultiByteN @ 0x180043E30 (RtlUnicodeToMultiByteN.c)
 *     sub_180095DE0 @ 0x180095DE0 (sub_180095DE0.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall sub_1800A22D4(_DWORD *a1, _BYTE *a2, size_t a3, unsigned __int16 a4)
{
  unsigned int v8; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int16 v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = a4;
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
