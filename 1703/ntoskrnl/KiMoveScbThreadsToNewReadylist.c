/*
 * XREFs of KiMoveScbThreadsToNewReadylist @ 0x14011F5AC
 * Callers:
 *     KeSetSchedulingGroupRankBias @ 0x14001D2E4 (KeSetSchedulingGroupRankBias.c)
 *     KiResetScb @ 0x14001D5B8 (KiResetScb.c)
 * Callees:
 *     KiGetThreadEffectiveRankNonZero @ 0x140113960 (KiGetThreadEffectiveRankNonZero.c)
 *     KiAddThreadToPrcbQueue @ 0x14011F700 (KiAddThreadToPrcbQueue.c)
 */

int __fastcall KiMoveScbThreadsToNewReadylist(__int64 a1, __int64 a2, _QWORD *a3, _QWORD **a4)
{
  char v5; // cl
  bool v7; // r14
  unsigned int v8; // edi
  char v9; // r13
  _QWORD *v10; // rax
  _QWORD *v11; // rbx
  int v12; // r12d
  _QWORD *v13; // rsi
  __int64 v14; // r10
  __int64 v15; // r10
  _QWORD *v16; // rcx
  _QWORD *v17; // rax
  _QWORD *v18; // rdx
  __int64 v20; // [rsp+38h] [rbp-60h]
  __int64 v21; // [rsp+40h] [rbp-58h]
  char v22; // [rsp+A0h] [rbp+8h]
  char v23; // [rsp+A8h] [rbp+10h] BYREF
  _QWORD *v24; // [rsp+B0h] [rbp+18h]
  _QWORD **v25; // [rsp+B8h] [rbp+20h]

  v25 = a4;
  v24 = a3;
  v20 = 0LL;
  v5 = 0;
  v22 = 0;
  v7 = 0;
  v8 = *(unsigned __int16 *)(a1 + 114);
  v9 = 0;
  if ( a2 )
  {
    *(_WORD *)(a2 + 114) |= v8;
    LODWORD(v10) = a2 + 136;
    v20 = a2 + 136;
    v9 = 1;
  }
  else
  {
    LODWORD(v10) = 1;
    if ( a3 )
    {
      v5 = 1;
      v22 = 1;
    }
    else
    {
      v7 = a4 != 0LL;
    }
  }
  if ( !v8 )
    goto LABEL_15;
  while ( 2 )
  {
    _BitScanReverse((unsigned int *)&v10, v8);
    v8 ^= 1 << (char)v10;
    v11 = (_QWORD *)(16LL * (unsigned int)v10 + a1 + 136);
    v21 = 16LL * (unsigned int)v10;
    v12 = (int)v24;
    v13 = (_QWORD *)*v11;
    do
    {
      v14 = (__int64)(v13 - 27);
      if ( v9 )
      {
        *(_QWORD *)(v14 + 1496) = a2;
      }
      else
      {
        *(_DWORD *)(v14 + 116) &= ~0x2000u;
        *(_QWORD *)(v14 + 1496) = 0LL;
      }
      v13 = (_QWORD *)*v13;
      if ( v7 )
      {
        *(_BYTE *)(v14 + 388) = 7;
        v10 = *a4;
        *(_QWORD *)(v14 + 216) = *a4;
        *a4 = (_QWORD *)(v14 + 216);
      }
      else
      {
        if ( !v5 )
          continue;
        KiGetThreadEffectiveRankNonZero(v14, a1, (__int64)a3, 0, (bool *)&v23);
        LODWORD(v10) = KiAddThreadToPrcbQueue(v12, v15, *(char *)(v15 + 195), 0, v23);
        a4 = v25;
      }
      v5 = v22;
    }
    while ( v13 != v11 );
    if ( v9 )
    {
      v16 = (_QWORD *)*v11;
      v17 = (_QWORD *)v11[1];
      if ( *(_QWORD **)(*v11 + 8LL) != v11 || (_QWORD *)*v17 != v11 )
        __fastfail(3u);
      *v17 = v16;
      v18 = (_QWORD *)(v21 + v20);
      v16[1] = v17;
      a3 = *(_QWORD **)(v21 + v20 + 8);
      if ( *(_QWORD **)(*v18 + 8LL) != v18 || (_QWORD *)*a3 != v18 )
        __fastfail(3u);
      if ( *(_QWORD **)(*v16 + 8LL) != v16 || *(_QWORD **)v16[1] != v16 )
        __fastfail(3u);
      *a3 = v16;
      v18[1] = v16[1];
      v10 = (_QWORD *)v16[1];
      *v10 = v18;
      v16[1] = a3;
    }
    v11[1] = v11;
    *v11 = v11;
    if ( v8 )
    {
      v5 = v22;
      continue;
    }
    break;
  }
LABEL_15:
  *(_WORD *)(a1 + 114) = 0;
  return (int)v10;
}
