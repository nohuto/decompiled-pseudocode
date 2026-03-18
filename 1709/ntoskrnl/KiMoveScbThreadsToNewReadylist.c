/*
 * XREFs of KiMoveScbThreadsToNewReadylist @ 0x14000CFA8
 * Callers:
 *     KeSetSchedulingGroupRankBias @ 0x1400D208C (KeSetSchedulingGroupRankBias.c)
 *     KiResetScb @ 0x1400D23B8 (KiResetScb.c)
 * Callees:
 *     KiGetThreadEffectiveRankNonZero @ 0x1400ABA00 (KiGetThreadEffectiveRankNonZero.c)
 *     KiAddThreadToPrcbQueue @ 0x1400D2720 (KiAddThreadToPrcbQueue.c)
 */

void __fastcall KiMoveScbThreadsToNewReadylist(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  char v5; // cl
  bool v7; // r15
  unsigned int v8; // esi
  unsigned int v9; // eax
  _QWORD *v10; // rbx
  _QWORD *v11; // r14
  _QWORD *v12; // rdi
  int v13; // r9d
  __int64 v14; // r12
  _QWORD *v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rdx
  _QWORD *v18; // rdx
  char v19[4]; // [rsp+30h] [rbp-68h] BYREF
  int v20; // [rsp+34h] [rbp-64h]
  unsigned int v21; // [rsp+38h] [rbp-60h]
  __int64 v22; // [rsp+40h] [rbp-58h]
  __int64 v23; // [rsp+48h] [rbp-50h]
  char v24; // [rsp+A0h] [rbp+8h]
  char v25; // [rsp+A8h] [rbp+10h]
  int v26; // [rsp+B0h] [rbp+18h]
  _QWORD *v27; // [rsp+B8h] [rbp+20h]

  v27 = a4;
  v26 = (int)a3;
  v22 = 0LL;
  v5 = 0;
  v25 = 0;
  v24 = 0;
  v7 = 0;
  v8 = *(unsigned __int16 *)(a1 + 114);
  if ( a2 )
  {
    *(_WORD *)(a2 + 114) |= v8;
    v22 = a2 + 136;
    v5 = 1;
    v24 = 1;
  }
  else if ( a3 )
  {
    v25 = 1;
  }
  else
  {
    v7 = a4 != 0LL;
  }
  while ( v8 )
  {
    _BitScanReverse(&v9, v8);
    v10 = (_QWORD *)(16LL * v9 + a1 + 136);
    v20 = v8 ^ (1 << v9);
    v23 = 16LL * v9;
    v11 = (_QWORD *)*v10;
    v21 = v9;
    do
    {
      v12 = v11 - 27;
      if ( v5 )
      {
        v12[187] = a2;
      }
      else
      {
        *((_DWORD *)v12 + 29) &= ~0x2000u;
        v12[187] = 0LL;
      }
      v11 = (_QWORD *)*v11;
      if ( v7 )
      {
        *((_BYTE *)v12 + 388) = 7;
        v12[27] = *a4;
        *a4 = v12 + 27;
      }
      else
      {
        if ( !v25 )
          continue;
        KiGetThreadEffectiveRankNonZero((_DWORD)v12, a1, (_DWORD)a3, 0, (__int64)v19);
        KiAddThreadToPrcbQueue(v26, (_DWORD)v12, *((char *)v12 + 195), v13, v19[0]);
        a4 = v27;
      }
      v5 = v24;
    }
    while ( v11 != v10 );
    v8 = v20;
    v14 = v23;
    if ( v5 )
    {
      v15 = (_QWORD *)*v10;
      if ( *(_QWORD **)(*v10 + 8LL) != v10 || (v16 = (_QWORD *)v10[1], (_QWORD *)*v16 != v10) )
        __fastfail(3u);
      v17 = v22;
      *v16 = v15;
      v18 = (_QWORD *)(v14 + v17);
      v15[1] = v16;
      a3 = (_QWORD *)v18[1];
      if ( *(_QWORD **)(*v18 + 8LL) != v18 || (_QWORD *)*a3 != v18 )
        __fastfail(3u);
      if ( *(_QWORD **)(*v15 + 8LL) != v15 || *(_QWORD **)v15[1] != v15 )
        __fastfail(3u);
      *a3 = v15;
      v18[1] = v15[1];
      *(_QWORD *)v15[1] = v18;
      v15[1] = a3;
      v5 = v24;
    }
    v10[1] = v10;
    *v10 = v10;
  }
  *(_WORD *)(a1 + 114) = 0;
}
