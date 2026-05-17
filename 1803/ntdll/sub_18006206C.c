/*
 * XREFs of sub_18006206C @ 0x18006206C
 * Callers:
 *     sub_180061F8C @ 0x180061F8C (sub_180061F8C.c)
 * Callees:
 *     sub_1800021C8 @ 0x1800021C8 (sub_1800021C8.c)
 *     sub_180002300 @ 0x180002300 (sub_180002300.c)
 *     sub_1800031BC @ 0x1800031BC (sub_1800031BC.c)
 *     sub_1800630A4 @ 0x1800630A4 (sub_1800630A4.c)
 *     sub_180105AB4 @ 0x180105AB4 (sub_180105AB4.c)
 */

__int64 __fastcall sub_18006206C(__int64 a1, __int64 a2, char a3)
{
  unsigned int v3; // edi
  __int64 v4; // r14
  __int64 v5; // rsi
  _QWORD *v6; // r15
  signed __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  _QWORD *v13; // rax
  __int16 v15; // cx
  _QWORD *v16; // r8
  __int64 v17; // rax
  int v18[4]; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v19; // [rsp+78h] [rbp+38h] BYREF
  unsigned int v20; // [rsp+88h] [rbp+48h] BYREF

  v3 = 0;
  v4 = a2;
  v5 = a1;
  if ( !*(_QWORD *)a2 )
  {
    v13 = (_QWORD *)(a1 + 32);
    if ( (_QWORD *)*v13 != v13 )
    {
      v16 = (_QWORD *)*v13;
      goto LABEL_34;
    }
    return (unsigned int)-2147483622;
  }
  if ( (*(_BYTE *)(a2 + 18) & 2) != 0 )
  {
    v6 = *(_QWORD **)a2;
    if ( a3 )
    {
      v7 = (signed __int64)&v6[4 * *(unsigned __int8 *)(a1 + 10)];
      goto LABEL_11;
    }
    if ( *v6 != a1 + 32 )
    {
LABEL_32:
      v16 = (_QWORD *)*v6;
      a2 = v4;
LABEL_34:
      sub_1800630A4(a1, a2, v16);
      return v3;
    }
    return (unsigned int)-2147483622;
  }
  if ( !a3 )
    return (unsigned int)-2147483622;
  v6 = (_QWORD *)(*(_QWORD *)a1 & *(_QWORD *)a2);
  v7 = (signed __int64)&v6[4 * ((unsigned __int64)(unsigned int)(*(_DWORD *)a2 - (_DWORD)v6) >> *(_BYTE *)(a1 + 8))];
  if ( (*(_QWORD *)a2 & 0xFFFLL) == 0 && (*(_BYTE *)(v7 + 24) & 2) != 0 )
    goto LABEL_43;
  if ( (*(_BYTE *)(v7 + 24) & 2) == 0 )
    v7 += -32LL * *(unsigned __int8 *)(v7 + 31);
  v8 = (v7 & *(_QWORD *)a1) + ((v7 - (v7 & *(_QWORD *)a1)) >> 5 << *(_BYTE *)(a1 + 8));
  v9 = *(_QWORD *)v4;
  v10 = (*(_BYTE *)(v7 + 24) & 0xC) == 8
      ? sub_1800031BC(*(_QWORD *)(a1 + 80), v8, v9, &v20, &v19, (__int64)v18)
      : sub_1800021C8(*(_QWORD *)(a1 + 88), v8, v9, &v20, &v19, (__int64)v18);
  *(_QWORD *)v4 = v10;
  if ( !v10 )
  {
LABEL_43:
    while ( 1 )
    {
      v7 += 32LL * *(unsigned __int8 *)(v7 + 31);
LABEL_11:
      if ( (unsigned int)((v7 - (v7 & *(_QWORD *)v5)) >> 5) >= 0x100 )
        break;
      if ( (*(_BYTE *)(v7 + 24) & 1) == 0 || (*(_BYTE *)(v7 + 24) & 0x10) != 0 || (*(_BYTE *)(v7 + 24) & 0xC) == 4 )
      {
        *(_QWORD *)v4 = (v7 & *(_QWORD *)v5) + ((v7 - (v7 & *(_QWORD *)v5)) >> 5 << *(_BYTE *)(v5 + 8));
        *(_WORD *)(v4 + 18) = 4096;
        *(_QWORD *)(v4 + 8) = (unsigned __int64)*(unsigned __int8 *)(v7 + 31) << *(_BYTE *)(v5 + 8);
        *(_WORD *)(v4 + 16) = 0;
        return v3;
      }
      v11 = (v7 & *(_QWORD *)v5) + ((v7 - (v7 & *(_QWORD *)v5)) >> 5 << *(_BYTE *)(v5 + 8));
      if ( (*(_BYTE *)(v7 + 24) & 0xCu) < 8 )
      {
        *(_QWORD *)v4 = v11;
        sub_180105AB4(v5, v4);
        return v3;
      }
      if ( (*(_BYTE *)(v7 + 24) & 0xC) == 8 )
      {
        v17 = sub_1800031BC(*(_QWORD *)(v5 + 80), v11, v11, &v20, &v19, (__int64)v18);
        *(_QWORD *)v4 = v17;
        if ( v17 )
        {
          sub_180002300((__int64 *)v5, (__int64 *)v4, v20, v19, v18[0]);
          v15 = 0x8000;
          goto LABEL_24;
        }
      }
      else
      {
        v12 = sub_1800021C8(*(_QWORD *)(v5 + 88), v11, v11, &v20, &v19, (__int64)v18);
        *(_QWORD *)v4 = v12;
        if ( v12 )
        {
          sub_180002300((__int64 *)v5, (__int64 *)v4, v20, v19, v18[0]);
          return v3;
        }
      }
    }
    if ( *v6 == v5 + 32 )
      return (unsigned int)-2147483622;
    a1 = v5;
    goto LABEL_32;
  }
  sub_180002300((__int64 *)v5, (__int64 *)v4, v20, v19, v18[0]);
  v15 = 0x8000;
  if ( (*(_BYTE *)(v7 + 24) & 0xC) != 8 )
    v15 = 0;
LABEL_24:
  *(_WORD *)(v4 + 18) |= v15;
  return v3;
}
