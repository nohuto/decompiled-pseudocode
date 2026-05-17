/*
 * XREFs of RtlNormalizeString @ 0x18006B080
 * Callers:
 *     sub_180069CA0 @ 0x180069CA0 (sub_180069CA0.c)
 * Callees:
 *     sub_18006B0F8 @ 0x18006B0F8 (sub_18006B0F8.c)
 *     sub_18006BBAC @ 0x18006BBAC (sub_18006BBAC.c)
 */

__int64 __fastcall RtlNormalizeString(__int64 a1, __int64 a2, int a3, int a4, int *a5)
{
  int v7; // esi
  __int64 v8; // rbx
  __int64 result; // rax
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  if ( !a2 )
    return 3221225485LL;
  if ( a3 < -1 )
    return 3221225485LL;
  if ( !(_DWORD)a1 )
    return 3221225485LL;
  v8 = (__int64)a5;
  if ( *a5 < 0 )
    return 3221225485LL;
  result = sub_18006BBAC(a1, &v10);
  if ( (int)result >= 0 )
    return sub_18006B0F8(v10, v7, a3, a4, v8);
  return result;
}
