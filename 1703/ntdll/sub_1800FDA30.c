/*
 * XREFs of sub_1800FDA30 @ 0x1800FDA30
 * Callers:
 *     sub_18000DC18 @ 0x18000DC18 (sub_18000DC18.c)
 *     sub_18000DDA0 @ 0x18000DDA0 (sub_18000DDA0.c)
 *     sub_18000E224 @ 0x18000E224 (sub_18000E224.c)
 *     sub_18001BE98 @ 0x18001BE98 (sub_18001BE98.c)
 *     sub_18001C138 @ 0x18001C138 (sub_18001C138.c)
 *     sub_18001C798 @ 0x18001C798 (sub_18001C798.c)
 *     sub_18001D964 @ 0x18001D964 (sub_18001D964.c)
 *     sub_18001EE00 @ 0x18001EE00 (sub_18001EE00.c)
 *     sub_1800222E0 @ 0x1800222E0 (sub_1800222E0.c)
 *     sub_180022560 @ 0x180022560 (sub_180022560.c)
 *     sub_1800265E0 @ 0x1800265E0 (sub_1800265E0.c)
 *     sub_18002CC00 @ 0x18002CC00 (sub_18002CC00.c)
 *     RtlGetUserInfoHeap @ 0x180076E40 (RtlGetUserInfoHeap.c)
 *     RtlSetUserValueHeap @ 0x180077230 (RtlSetUserValueHeap.c)
 *     sub_18008AB60 @ 0x18008AB60 (sub_18008AB60.c)
 *     sub_180090710 @ 0x180090710 (sub_180090710.c)
 *     sub_180090C78 @ 0x180090C78 (sub_180090C78.c)
 *     sub_18009100C @ 0x18009100C (sub_18009100C.c)
 *     RtlSetUserFlagsHeap @ 0x1800EF7D0 (RtlSetUserFlagsHeap.c)
 *     sub_1800EFFE8 @ 0x1800EFFE8 (sub_1800EFFE8.c)
 *     RtlZeroHeap @ 0x1800F1D20 (RtlZeroHeap.c)
 *     sub_180101730 @ 0x180101730 (sub_180101730.c)
 *     sub_180102330 @ 0x180102330 (sub_180102330.c)
 * Callees:
 *     sub_1800A4DFC @ 0x1800A4DFC (sub_1800A4DFC.c)
 *     sub_1800F22CC @ 0x1800F22CC (sub_1800F22CC.c)
 */

_UNKNOWN **__fastcall sub_1800FDA30(__int64 a1, unsigned __int64 a2)
{
  _UNKNOWN **result; // rax
  unsigned __int64 v5; // r9
  unsigned int v6; // r8d
  int v7; // edi
  char v8; // cl
  _QWORD **v10; // rdx
  unsigned __int64 v11; // rcx
  _QWORD **v12; // rax
  _QWORD **v13; // rdx
  _QWORD **v14; // rax
  unsigned __int16 v15; // ax
  unsigned __int64 v16; // rax
  int v17; // ecx
  __int16 v18; // cx
  __int64 v19; // rax
  __int64 v20; // r9
  int v21; // ecx
  unsigned __int64 v22; // [rsp+38h] [rbp-20h]
  int v23; // [rsp+48h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = &retaddr;
  v5 = 0LL;
  v6 = 0;
  if ( !byte_18015B388 )
  {
    v7 = *(_DWORD *)(a1 + 124);
    if ( (v7 & *(_DWORD *)(a2 + 8)) != 0 )
      goto LABEL_34;
    v6 = 10;
    if ( (*(_DWORD *)(a1 + 112) & 0x4000000) == 0
      && *(_BYTE *)(a2 + 11) != (*(_BYTE *)(a2 + 8) ^ (unsigned __int8)(*(_BYTE *)(a2 + 9) ^ *(_BYTE *)(a2 + 10))) )
    {
      goto LABEL_34;
    }
    v6 = 1;
    if ( *(_BYTE *)(a2 + 14) )
    {
      v5 = (a2 & 0xFFFFFFFFFFFF0000uLL) + ((1LL - *(unsigned __int8 *)(a2 + 14)) << 16);
      v22 = v5;
    }
    else
    {
      v5 = a1;
      v22 = a1;
    }
    if ( *(_DWORD *)(v5 + 16) != -1114130 )
      goto LABEL_34;
    v8 = *(_BYTE *)(a2 + 15);
    if ( v8 != 4 )
    {
      v6 = 2;
      if ( a2 < *(_QWORD *)(v5 + 48) || a2 >= *(_QWORD *)(v5 + 72) || *(_QWORD *)(v5 + 40) != a1 )
        goto LABEL_34;
    }
    v6 = 3;
    if ( v8 == 3 )
    {
      v10 = (_QWORD **)(a2 + 16);
      v11 = *(_QWORD *)(a2 + 48);
      if ( (v11 & 0xFFF) != 0 )
        goto LABEL_34;
      if ( v11 < *(_QWORD *)(v5 + 48) )
        goto LABEL_34;
      if ( *(_QWORD *)(a2 + 56) + v11 > *(_QWORD *)(v5 + 72) )
        goto LABEL_34;
      v6 = 4;
      v12 = **(_QWORD ****)(a2 + 24);
      if ( v12 != (_QWORD **)(*v10)[1] )
        goto LABEL_34;
      if ( v12 != v10 )
        goto LABEL_34;
      v6 = 5;
      v13 = v10 + 2;
      v14 = (_QWORD **)*v13[1];
      if ( v14 != (_QWORD **)(*v13)[1] || v14 != v13 )
        goto LABEL_34;
    }
    else
    {
      v6 = 6;
      if ( (*(_WORD *)(a2 + 16LL * *(unsigned __int16 *)(a2 + 8) + 12) ^ *(_WORD *)(a1 + 140)) != *(_WORD *)(a2 + 8) )
        goto LABEL_34;
    }
    v6 = 7;
    v15 = *(_WORD *)(a1 + 140);
    if ( v15 == *(_WORD *)(a2 + 12) )
      goto LABEL_30;
    v16 = a2 - 16 * (v15 ^ (unsigned __int64)*(unsigned __int16 *)(a2 + 12));
    if ( v7 )
    {
      v17 = *(_DWORD *)(v16 + 8);
      LOWORD(v23) = v17;
      if ( (v17 & *(_DWORD *)(a1 + 124)) != 0 )
        v23 = v17 ^ *(_DWORD *)(a1 + 136);
      v18 = v23;
      v5 = v22;
      v6 = 7;
    }
    else
    {
      v18 = *(_WORD *)(v16 + 8);
    }
    if ( v18 == (*(_WORD *)(a2 + 12) ^ *(_WORD *)(a1 + 140)) )
    {
LABEL_30:
      v6 = 8;
      if ( (*(_BYTE *)(a2 + 10) & 1) != 0
        || (v19 = **(_QWORD **)(a2 + 24), v19 == *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL)) && v19 == a2 + 16 )
      {
        v6 = 9;
      }
    }
LABEL_34:
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(a2 + 11) = *(_BYTE *)(a2 + 8) ^ *(_BYTE *)(a2 + 9) ^ *(_BYTE *)(a2 + 10);
      *(_DWORD *)(a2 + 8) ^= *(_DWORD *)(a1 + 136);
    }
    if ( v6 > 5 )
    {
      if ( v6 <= 7 )
        goto LABEL_48;
      if ( v6 == 8 )
      {
        v20 = 8LL;
        v21 = 12;
        return (_UNKNOWN **)sub_1800A4DFC(v21, a1, a2, v20, 0LL, 0LL);
      }
      if ( v6 == 10 )
        goto LABEL_48;
      v21 = 2;
    }
    else
    {
      if ( v6 < 4 )
      {
        if ( v6 > 1 )
        {
          if ( v6 == 2 )
          {
            v20 = *(_QWORD *)(v5 + 40);
            v21 = 11;
          }
          else
          {
            v20 = 3LL;
            v21 = 0;
          }
          return (_UNKNOWN **)sub_1800A4DFC(v21, a1, a2, v20, 0LL, 0LL);
        }
LABEL_48:
        v21 = 3;
        goto LABEL_49;
      }
      v21 = 13;
    }
LABEL_49:
    v20 = v6;
    return (_UNKNOWN **)sub_1800A4DFC(v21, a1, a2, v20, 0LL, 0LL);
  }
  return result;
}
