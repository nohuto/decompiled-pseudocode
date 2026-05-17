/*
 * XREFs of RtlNormalizeString @ 0x180069450
 * Callers:
 *     sub_180068000 @ 0x180068000 (sub_180068000.c)
 * Callees:
 *     sub_1800694C8 @ 0x1800694C8 (sub_1800694C8.c)
 *     sub_180069810 @ 0x180069810 (sub_180069810.c)
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
  result = sub_180069810(a1, &v10);
  if ( (int)result >= 0 )
    return sub_1800694C8(v10, v7, a3, a4, v8);
  return result;
}
