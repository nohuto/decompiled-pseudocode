/*
 * XREFs of sub_18006BEBC @ 0x18006BEBC
 * Callers:
 *     sub_18006E4FC @ 0x18006E4FC (sub_18006E4FC.c)
 * Callees:
 *     sub_180058198 @ 0x180058198 (sub_180058198.c)
 *     sub_18006E860 @ 0x18006E860 (sub_18006E860.c)
 */

__int64 __fastcall sub_18006BEBC(__int64 a1, __int64 a2, _WORD *a3, int a4)
{
  _WORD *v4; // rbx
  int v5; // ebp
  int v7; // edi
  unsigned __int16 v8; // si
  __int16 v9; // ax
  __int64 result; // rax
  __int16 v11; // [rsp+30h] [rbp-38h] BYREF
  __int64 v12; // [rsp+38h] [rbp-30h] BYREF
  char v13; // [rsp+70h] [rbp+8h] BYREF

  v4 = a3;
  v5 = a2;
  if ( !a1 || !a2 || !a3 || !a4 )
    return 3221225485LL;
  v7 = 2 * a4;
  v8 = 0;
  do
  {
    if ( !*v4 || v7 <= 0 || v8 >= 3u )
      break;
    if ( (int)sub_18006E860(v5, (_DWORD)v4, (unsigned int)&v13, a4, (__int64)&v11) >= 0 )
    {
      v9 = v11;
      *(_WORD *)(a1 + 2) = *(_WORD *)(a1 + 2) & ~(3 << (2 * v8)) | ((v13 & 3) << (2 * v8));
      *(_WORD *)(a1 + 2LL * v8 + 6) = v9;
    }
    result = sub_180058198(v4, v7, &v12);
    if ( (int)result < 0 )
      return result;
    v7 += -2 - v12;
    ++v8;
    v4 = (_WORD *)((char *)v4 + v12 + 2);
  }
  while ( v4 );
  return 0LL;
}
