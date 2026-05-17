/*
 * XREFs of sub_18002AD5C @ 0x18002AD5C
 * Callers:
 *     sub_1800128F0 @ 0x1800128F0 (sub_1800128F0.c)
 *     sub_18002A7C8 @ 0x18002A7C8 (sub_18002A7C8.c)
 * Callees:
 *     sub_18002ADD8 @ 0x18002ADD8 (sub_18002ADD8.c)
 *     sub_18009A5F0 @ 0x18009A5F0 (sub_18009A5F0.c)
 */

__int64 __fastcall sub_18002AD5C(__int64 a1, __int64 *a2)
{
  __int64 *v2; // r8
  __int64 *v4; // rdx
  __int64 result; // rax
  __int64 v7; // r9
  __int64 *v8; // rcx
  __int64 v9; // r9
  __int64 v10; // rdx

  v2 = a2 + 2;
  v4 = (__int64 *)a2[3];
  result = *v2;
  v7 = *v4;
  if ( *v4 == *(_QWORD *)(*v2 + 8) && (__int64 *)v7 == v2 )
  {
    *v4 = result;
    *(_QWORD *)(result + 8) = v4;
  }
  else
  {
    result = sub_18009A5F0(13, 0, (_DWORD)v2, *(_QWORD *)(result + 8), v7, 0LL);
  }
  if ( a2[5] )
  {
    sub_18002ADD8(a1, a2);
    result = *a2;
    v8 = (__int64 *)a2[1];
    v9 = *(_QWORD *)(*a2 + 8);
    v10 = *v8;
    if ( *v8 == v9 && (__int64 *)v10 == a2 )
    {
      *v8 = result;
      *(_QWORD *)(result + 8) = v8;
    }
    else
    {
      return sub_18009A5F0(13, 0, (_DWORD)a2, v9, v10, 0LL);
    }
  }
  return result;
}
