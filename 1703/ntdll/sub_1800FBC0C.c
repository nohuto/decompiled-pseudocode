/*
 * XREFs of sub_1800FBC0C @ 0x1800FBC0C
 * Callers:
 *     sub_1800FA81C @ 0x1800FA81C (sub_1800FA81C.c)
 * Callees:
 *     sub_1800FD8D8 @ 0x1800FD8D8 (sub_1800FD8D8.c)
 */

__int64 __fastcall sub_1800FBC0C(__int64 a1, int a2)
{
  int v2; // ebx
  __int64 v3; // r8
  __int64 v4; // rax
  int v6; // [rsp+58h] [rbp+10h]

  v2 = a2;
  if ( a2 < 1 )
    v2 = 4;
  v3 = 0LL;
  if ( a1 )
  {
    if ( v2 >= *(unsigned __int16 *)(a1 + 4) )
    {
      v4 = sub_1800FD8D8(a1, 16, v2, 12);
      v3 = v4;
      if ( v4 )
      {
        *(_DWORD *)v4 = v6;
        *(_QWORD *)(v4 + 8) = v4 + 16;
        *(_WORD *)(v4 + 6) = v2;
      }
    }
  }
  return v3;
}
