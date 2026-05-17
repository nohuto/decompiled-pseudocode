/*
 * XREFs of sub_18000AF00 @ 0x18000AF00
 * Callers:
 *     sub_18000AB38 @ 0x18000AB38 (sub_18000AB38.c)
 * Callees:
 *     ZwQueryKey @ 0x18009AD80 (ZwQueryKey.c)
 */

__int64 __fastcall sub_18000AF00(__int64 a1, __int16 a2)
{
  __int64 result; // rax
  char v3; // [rsp+48h] [rbp+10h] BYREF

  if ( (a2 & 0x100) != 0 )
    return 0LL;
  result = ZwQueryKey(a1, 8LL, &v3);
  if ( (int)result >= 0 )
  {
    if ( (v3 & 1) != 0 )
      return 0LL;
    result = 3221225506LL;
  }
  if ( (_DWORD)result != -1073741431 )
    __fastfail(9u);
  return result;
}
