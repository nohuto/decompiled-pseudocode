/*
 * XREFs of sub_1800FC010 @ 0x1800FC010
 * Callers:
 *     sub_1800135E0 @ 0x1800135E0 (sub_1800135E0.c)
 *     sub_180013D40 @ 0x180013D40 (sub_180013D40.c)
 *     sub_180013F50 @ 0x180013F50 (sub_180013F50.c)
 *     sub_1800150A0 @ 0x1800150A0 (sub_1800150A0.c)
 *     sub_18001BDD0 @ 0x18001BDD0 (sub_18001BDD0.c)
 *     sub_18002A508 @ 0x18002A508 (sub_18002A508.c)
 *     sub_18002A7C8 @ 0x18002A7C8 (sub_18002A7C8.c)
 *     sub_18005B7B4 @ 0x18005B7B4 (sub_18005B7B4.c)
 *     sub_18005B944 @ 0x18005B944 (sub_18005B944.c)
 *     sub_18005BDB4 @ 0x18005BDB4 (sub_18005BDB4.c)
 *     sub_18005CB44 @ 0x18005CB44 (sub_18005CB44.c)
 *     RtlGetUserInfoHeap @ 0x1800634E0 (RtlGetUserInfoHeap.c)
 *     RtlSetUserValueHeap @ 0x180063860 (RtlSetUserValueHeap.c)
 *     RtlSetUserFlagsHeap @ 0x1800EB820 (RtlSetUserFlagsHeap.c)
 *     sub_1800EC04C @ 0x1800EC04C (sub_1800EC04C.c)
 *     RtlZeroHeap @ 0x1800EEA80 (RtlZeroHeap.c)
 *     sub_1800EF2CC @ 0x1800EF2CC (sub_1800EF2CC.c)
 *     sub_1800FF610 @ 0x1800FF610 (sub_1800FF610.c)
 *     sub_180100000 @ 0x180100000 (sub_180100000.c)
 *     sub_1801005E4 @ 0x1801005E4 (sub_1801005E4.c)
 *     sub_18010120C @ 0x18010120C (sub_18010120C.c)
 *     sub_1801019C4 @ 0x1801019C4 (sub_1801019C4.c)
 * Callees:
 *     sub_18009A5F0 @ 0x18009A5F0 (sub_18009A5F0.c)
 *     sub_18010473C @ 0x18010473C (sub_18010473C.c)
 */

_UNKNOWN **__fastcall sub_1800FC010(__int64 a1, unsigned __int64 a2)
{
  _UNKNOWN **result; // rax
  unsigned __int64 v4; // r9
  unsigned int v5; // r8d
  int v6; // eax
  unsigned __int16 v7; // cx
  char v8; // al
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int16 v13; // di
  unsigned __int16 v14; // bx
  unsigned __int64 v15; // rax
  int v16; // ecx
  __int64 v17; // rax
  __int64 v18; // r9
  int v19; // ecx
  unsigned __int64 v20; // [rsp+38h] [rbp-20h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = &retaddr;
  v4 = 0LL;
  v5 = 0;
  if ( !byte_18015C3A8 )
  {
    v6 = *(_DWORD *)(a2 + 8);
    if ( (v6 & *(_DWORD *)(a1 + 124)) != 0 )
      goto LABEL_35;
    v5 = 10;
    v7 = v6;
    if ( (*(_DWORD *)(a1 + 112) & 0x4000000) == 0 && HIBYTE(v6) != (BYTE1(v6) ^ (unsigned __int8)(v6 ^ BYTE2(v6))) )
      goto LABEL_35;
    v5 = 1;
    if ( *(_BYTE *)(a2 + 14) )
    {
      v4 = (a2 & 0xFFFFFFFFFFFF0000uLL) + ((1LL - *(unsigned __int8 *)(a2 + 14)) << 16);
      v20 = v4;
    }
    else
    {
      v4 = a1;
      v20 = a1;
    }
    if ( *(_DWORD *)(v4 + 16) != -1114130 )
      goto LABEL_35;
    v8 = *(_BYTE *)(a2 + 15);
    if ( v8 != 4 )
    {
      v5 = 2;
      if ( a2 < *(_QWORD *)(v4 + 48) || a2 >= *(_QWORD *)(v4 + 72) || *(_QWORD *)(v4 + 40) != a1 )
        goto LABEL_35;
    }
    v5 = 3;
    if ( v8 == 3 )
    {
      v9 = a2 + 16;
      v10 = *(_QWORD *)(a2 + 48);
      if ( (v10 & 0xFFF) != 0 )
        goto LABEL_35;
      if ( v10 < *(_QWORD *)(v4 + 48) )
        goto LABEL_35;
      if ( *(_QWORD *)(a2 + 56) + v10 > *(_QWORD *)(v4 + 72) )
        goto LABEL_35;
      v5 = 4;
      v11 = **(_QWORD **)(a2 + 24);
      if ( v11 != *(_QWORD *)(*(_QWORD *)v9 + 8LL) )
        goto LABEL_35;
      if ( v11 != v9 )
        goto LABEL_35;
      v5 = 5;
      v12 = **(_QWORD **)(a2 + 40);
      if ( v12 != *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL) || v12 != a2 + 32 )
        goto LABEL_35;
      v13 = *(_WORD *)(a1 + 140);
    }
    else
    {
      v5 = 6;
      v13 = *(_WORD *)(a1 + 140);
      if ( (v13 ^ *(_WORD *)(a2 + 16LL * v7 + 12)) != v7 )
        goto LABEL_35;
    }
    v5 = 7;
    v14 = *(_WORD *)(a2 + 12);
    if ( v13 == v14
      || ((v15 = a2 - 16 * (v13 ^ (unsigned __int64)v14), !*(_DWORD *)(a1 + 124))
        ? (LOWORD(v15) = *(_WORD *)(v15 + 8))
        : ((v16 = *(_DWORD *)(v15 + 8), (v16 & *(_DWORD *)(a1 + 124)) == 0)
         ? (LOWORD(v15) = *(_DWORD *)(v15 + 8))
         : (LODWORD(v15) = v16 ^ *(_DWORD *)(a1 + 136)),
           v13 = *(_WORD *)(a1 + 140),
           v14 = *(_WORD *)(a2 + 12),
           v4 = v20,
           v5 = 7),
          (_WORD)v15 == (v13 ^ v14)) )
    {
      v5 = 8;
      if ( (*(_BYTE *)(a2 + 10) & 1) != 0
        || (v17 = **(_QWORD **)(a2 + 24), v17 == *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL)) && v17 == a2 + 16 )
      {
        v5 = 9;
      }
    }
LABEL_35:
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(a2 + 11) = *(_BYTE *)(a2 + 8) ^ *(_BYTE *)(a2 + 9) ^ *(_BYTE *)(a2 + 10);
      *(_DWORD *)(a2 + 8) ^= *(_DWORD *)(a1 + 136);
    }
    if ( v5 > 5 )
    {
      if ( v5 <= 7 )
        goto LABEL_49;
      if ( v5 == 8 )
      {
        v18 = 8LL;
        v19 = 13;
        return (_UNKNOWN **)sub_18009A5F0(v19, a1, a2, v18, 0LL, 0LL);
      }
      if ( v5 == 10 )
        goto LABEL_49;
      v19 = 2;
    }
    else
    {
      if ( v5 < 4 )
      {
        if ( v5 > 1 )
        {
          if ( v5 == 2 )
          {
            v18 = *(_QWORD *)(v4 + 40);
            v19 = 12;
          }
          else
          {
            v18 = 3LL;
            v19 = 0;
          }
          return (_UNKNOWN **)sub_18009A5F0(v19, a1, a2, v18, 0LL, 0LL);
        }
LABEL_49:
        v19 = 3;
        goto LABEL_50;
      }
      v19 = 14;
    }
LABEL_50:
    v18 = v5;
    return (_UNKNOWN **)sub_18009A5F0(v19, a1, a2, v18, 0LL, 0LL);
  }
  return result;
}
