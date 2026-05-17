/*
 * XREFs of sub_18002ABD8 @ 0x18002ABD8
 * Callers:
 *     sub_1800128F0 @ 0x1800128F0 (sub_1800128F0.c)
 *     sub_18002AA88 @ 0x18002AA88 (sub_18002AA88.c)
 * Callees:
 *     sub_18002AC78 @ 0x18002AC78 (sub_18002AC78.c)
 *     sub_18002ACD0 @ 0x18002ACD0 (sub_18002ACD0.c)
 *     sub_18009A5F0 @ 0x18009A5F0 (sub_18009A5F0.c)
 */

__int64 __fastcall sub_18002ABD8(unsigned __int64 a1, __int64 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 *v6; // rcx
  unsigned __int8 v7; // al
  unsigned __int64 v8; // rcx
  __int64 **v9; // r8
  __int64 *v10; // rbx
  __int64 result; // rax
  __int64 v12; // r9

  v4 = a2[5];
  if ( v4 )
  {
    v5 = sub_18002ACD0(a1, v4);
    v6 = *(__int64 **)(v5 + 8);
    if ( *v6 == v5 )
    {
      *a2 = v5;
      a2[1] = (__int64)v6;
      *v6 = (__int64)a2;
      *(_QWORD *)(v5 + 8) = a2;
    }
    else
    {
      sub_18009A5F0(13, 0, v5, 0, *v6, 0LL);
    }
    sub_18002AC78(a1, a2);
  }
  v7 = *((_BYTE *)a2 - 2);
  if ( v7 )
    v8 = ((unsigned __int64)(a2 - 2) & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v7 << 16) + 0x10000;
  else
    v8 = a1;
  v9 = (__int64 **)(v8 + 96);
  v10 = a2 + 2;
  result = *(_QWORD *)(v8 + 96);
  v12 = *(_QWORD *)(result + 8);
  if ( v12 != v8 + 96 )
    return sub_18009A5F0(13, 0, (_DWORD)v9, v12, 0LL, 0LL);
  *v10 = result;
  v10[1] = (__int64)v9;
  *(_QWORD *)(result + 8) = v10;
  *v9 = v10;
  return result;
}
