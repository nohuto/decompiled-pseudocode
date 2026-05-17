/*
 * XREFs of sub_180060414 @ 0x180060414
 * Callers:
 *     sub_1800603AC @ 0x1800603AC (sub_1800603AC.c)
 * Callees:
 *     sub_18001F734 @ 0x18001F734 (sub_18001F734.c)
 *     sub_180022300 @ 0x180022300 (sub_180022300.c)
 *     sub_180023C10 @ 0x180023C10 (sub_180023C10.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_18006059C @ 0x18006059C (sub_18006059C.c)
 *     sub_180062960 @ 0x180062960 (sub_180062960.c)
 *     sub_18009A63C @ 0x18009A63C (sub_18009A63C.c)
 */

_QWORD *__fastcall sub_180060414(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  bool v4; // zf
  _QWORD *v5; // rbx
  unsigned int v6; // r12d
  _QWORD *i; // rsi
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rdx
  _QWORD *v13; // rdx
  _QWORD *v14; // r9
  _QWORD *v15; // rdx
  _QWORD *result; // rax
  _QWORD *v17; // [rsp+30h] [rbp-10h] BYREF
  _QWORD **v18; // [rsp+38h] [rbp-8h]
  char v19; // [rsp+70h] [rbp+30h] BYREF

  v4 = *(_QWORD *)(a1 + 48) == 0LL;
  v5 = &v17;
  v18 = &v17;
  v17 = &v17;
  v6 = a2;
  if ( !v4 )
  {
    if ( (a2 & 1) == 0 )
      RtlAcquireSRWLockExclusive(a1 + 24, a2, a3, a4);
    v19 = -1;
    for ( i = *(_QWORD **)(a1 + 32); i != (_QWORD *)(a1 + 32); i = (_QWORD *)*i )
    {
      v9 = (unsigned __int64)&i[4 * *(unsigned __int8 *)(a1 + 10)];
      v10 = v9 + 32LL * (256 - *(unsigned __int8 *)(a1 + 10));
      while ( v9 < v10 )
      {
        if ( (*(_BYTE *)(v9 + 24) & 1) == 0 && (unsigned __int16)(*(_DWORD *)(v9 + 28) >> 8) != 0xFFFF )
        {
          sub_180022300(a1, v9);
          *(_BYTE *)(v9 + 24) |= 1u;
          v11 = 32LL * ((unsigned int)*(unsigned __int8 *)(v9 + 31) - 1);
          *(_BYTE *)(v11 + v9 + 24) |= 1u;
          v9 = sub_180023C10(a1, v9, v6, 1, &v19);
          v12 = sub_18001F734(a1, v9, 0LL);
          if ( v12 )
          {
            i = (_QWORD *)i[1];
            sub_18009A63C(a1, v12);
            v14 = v18;
            if ( *v18 != &v17 )
              __fastfail(3u);
            v13[1] = v18;
            *v13 = &v17;
            *v14 = v13;
            v18 = (_QWORD **)v13;
            break;
          }
        }
        v9 += 32LL * *(unsigned __int8 *)(v9 + 31);
      }
    }
    sub_18006059C(a1, v6);
    v5 = v17;
  }
  while ( 1 )
  {
    result = &v17;
    if ( v5 == &v17 )
      break;
    v15 = v5;
    v5 = (_QWORD *)*v5;
    sub_180062960(a1, v15, 1LL);
  }
  return result;
}
