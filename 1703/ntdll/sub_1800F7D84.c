/*
 * XREFs of sub_1800F7D84 @ 0x1800F7D84
 * Callers:
 *     sub_1800F7744 @ 0x1800F7744 (sub_1800F7744.c)
 * Callees:
 *     sub_1800F77D8 @ 0x1800F77D8 (sub_1800F77D8.c)
 */

__int64 __fastcall sub_1800F7D84(_QWORD *a1, unsigned __int8 a2)
{
  __int64 result; // rax
  __int64 v4; // r11
  __int64 v5; // r10
  __int64 v6; // r11
  unsigned __int16 *v7; // rdx
  unsigned __int16 *v8; // r8
  unsigned __int16 *v9; // r11
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rdx
  unsigned __int16 *v14; // r11
  unsigned __int16 *v15; // [rsp+30h] [rbp+8h] BYREF

  result = a1[5];
  v4 = a1[10];
  a1[13] = result;
  if ( result != v4 )
  {
    v15 = (unsigned __int16 *)(result - 2);
    result = sub_1800F77D8((__int64)a1, &v15);
    v7 = (unsigned __int16 *)(v6 - 2);
    v8 = v15;
    v9 = (unsigned __int16 *)(v6 - 4);
    if ( *(int *)(v5 + 88) <= 0xFFFF )
      v9 = v7;
    if ( v15 != v9 )
    {
      v10 = *(_QWORD *)(v5 + 112);
      v11 = *(_QWORD *)(v10 + 32);
      v12 = *(_QWORD *)(v10 + 40);
      do
      {
        v13 = result & 0x7F;
        result = v12 + ((__int64)(*(unsigned __int8 *)(((__int64)(int)result >> 7) + v11) - 1) << 7);
        LOBYTE(v10) = *(_BYTE *)(v13 + result) & 0x3F;
        if ( (unsigned __int8)v10 < a2 )
          break;
        *(_QWORD *)(v5 + 104) = v8;
        v15 = v8 - 1;
        result = sub_1800F77D8(v10, &v15);
        v8 = v15;
      }
      while ( v15 != v14 );
    }
  }
  return result;
}
