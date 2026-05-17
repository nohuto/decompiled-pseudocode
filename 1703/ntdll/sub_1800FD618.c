/*
 * XREFs of sub_1800FD618 @ 0x1800FD618
 * Callers:
 *     sub_1800FD028 @ 0x1800FD028 (sub_1800FD028.c)
 * Callees:
 *     sub_18007FDBC @ 0x18007FDBC (sub_18007FDBC.c)
 */

__int64 __fastcall sub_1800FD618(__int64 a1, int a2)
{
  int v4; // ebx
  char v5; // bp
  _WORD *v6; // rdi
  int v7; // esi
  __int16 *v8; // r14
  unsigned __int8 v9; // dl
  __int64 v10; // r15
  __int16 v11; // r8
  __int16 v12; // r8
  __int16 v14; // [rsp+58h] [rbp+10h] BYREF

  v4 = 0;
  v5 = 0;
  v6 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 28LL * a2);
  v7 = 0;
  v8 = v6 + 6;
  do
  {
    v9 = (v6[4] >> (2 * v5)) & 3;
    if ( !v9 )
      goto LABEL_13;
    if ( v9 == 2 )
    {
      if ( *v8 == a2 )
      {
        v6[4] &= ~(3 << v7);
        goto LABEL_13;
      }
      goto LABEL_12;
    }
    v10 = *(_QWORD *)(a1 + 24);
    v11 = *v8;
    v14 = -1;
    if ( (int)sub_18007FDBC(v10, v9, v11, &v14) < 0 )
      goto LABEL_12;
    v12 = v14;
    if ( v14 >= 0 && v14 < (int)*(unsigned __int16 *)(v10 + 6) && v14 != a2 )
    {
      if ( (*(_BYTE *)(28LL * v14 + *(_QWORD *)(v10 + 16)) & 1) != 0 )
      {
        v6[4] = (2 << v7) | v6[4] & ~(3 << v7);
        *v8 = v12;
      }
LABEL_12:
      ++v4;
    }
LABEL_13:
    ++v5;
    v7 += 2;
    ++v8;
  }
  while ( v7 < 8 );
  if ( v4 >= 1 )
    return 0LL;
  *v6 |= 0x1000u;
  return 3221225473LL;
}
