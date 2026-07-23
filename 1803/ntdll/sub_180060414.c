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

_QWORD *__fastcall sub_180060414(__int64 a1, unsigned int a2)
{
  bool v2; // zf
  _QWORD *v3; // rbx
  _QWORD *i; // rsi
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rdx
  _QWORD *v11; // rdx
  _QWORD *v12; // r9
  _QWORD *v13; // rdx
  _QWORD *result; // rax
  _QWORD *v15; // [rsp+30h] [rbp-10h] BYREF
  _QWORD **v16; // [rsp+38h] [rbp-8h]
  char v17; // [rsp+70h] [rbp+30h] BYREF

  v2 = *(_QWORD *)(a1 + 48) == 0LL;
  v3 = &v15;
  v16 = &v15;
  v15 = &v15;
  if ( !v2 )
  {
    if ( (a2 & 1) == 0 )
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 24));
    v17 = -1;
    for ( i = *(_QWORD **)(a1 + 32); i != (_QWORD *)(a1 + 32); i = (_QWORD *)*i )
    {
      v7 = (unsigned __int64)&i[4 * *(unsigned __int8 *)(a1 + 10)];
      v8 = v7 + 32LL * (256 - *(unsigned __int8 *)(a1 + 10));
      while ( v7 < v8 )
      {
        if ( (*(_BYTE *)(v7 + 24) & 1) == 0 && (unsigned __int16)(*(_DWORD *)(v7 + 28) >> 8) != 0xFFFF )
        {
          sub_180022300(a1, v7);
          *(_BYTE *)(v7 + 24) |= 1u;
          v9 = 32LL * ((unsigned int)*(unsigned __int8 *)(v7 + 31) - 1);
          *(_BYTE *)(v9 + v7 + 24) |= 1u;
          v7 = sub_180023C10(a1, v7, a2, 1, &v17);
          v10 = sub_18001F734(a1, v7, 0);
          if ( v10 )
          {
            i = (_QWORD *)i[1];
            sub_18009A63C(a1, v10);
            v12 = v16;
            if ( *v16 != &v15 )
              __fastfail(3u);
            v11[1] = v16;
            *v11 = &v15;
            *v12 = v11;
            v16 = (_QWORD **)v11;
            break;
          }
        }
        v7 += 32LL * *(unsigned __int8 *)(v7 + 31);
      }
    }
    sub_18006059C(a1, a2);
    v3 = v15;
  }
  while ( 1 )
  {
    result = &v15;
    if ( v3 == &v15 )
      break;
    v13 = v3;
    v3 = (_QWORD *)*v3;
    sub_180062960(a1, v13, 1LL);
  }
  return result;
}
