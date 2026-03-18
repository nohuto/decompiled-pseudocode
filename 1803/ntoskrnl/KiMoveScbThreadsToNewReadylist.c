/*
 * XREFs of KiMoveScbThreadsToNewReadylist @ 0x1400A8ACC
 * Callers:
 *     KeSetSchedulingGroupRankBias @ 0x1400A8024 (KeSetSchedulingGroupRankBias.c)
 *     KiResetScb @ 0x1400A83C8 (KiResetScb.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x1400A87B0 (KiTransitionSchedulingGroupGeneration.c)
 * Callees:
 *     KiGetThreadEffectiveRankNonZero @ 0x14003A8F0 (KiGetThreadEffectiveRankNonZero.c)
 *     KiAddThreadToPrcbQueue @ 0x1400A8C4C (KiAddThreadToPrcbQueue.c)
 */

void __fastcall KiMoveScbThreadsToNewReadylist(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  unsigned int v4; // edi
  bool v7; // r14
  char v8; // r13
  unsigned int v9; // r12d
  _QWORD *v10; // rbx
  _QWORD *v11; // rsi
  int v12; // edi
  __int64 v13; // r10
  _QWORD *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r10
  _QWORD *v17; // rcx
  _QWORD *v18; // rdx
  _QWORD *v19; // r9
  int v20; // [rsp+30h] [rbp-68h]
  __int64 v21; // [rsp+40h] [rbp-58h]
  char v22; // [rsp+A0h] [rbp+8h]
  char v23; // [rsp+A8h] [rbp+10h] BYREF
  _QWORD *v24; // [rsp+B0h] [rbp+18h]
  _QWORD *v25; // [rsp+B8h] [rbp+20h]

  v25 = a4;
  v24 = a3;
  v4 = *(unsigned __int16 *)(a1 + 114);
  v21 = 0LL;
  v22 = 0;
  v7 = 0;
  v8 = 0;
  if ( a2 )
  {
    *(_WORD *)(a2 + 114) |= v4;
    v21 = a2 + 136;
    v8 = 1;
  }
  else if ( a3 )
  {
    v22 = 1;
  }
  else
  {
    v7 = a4 != 0LL;
  }
  if ( v4 )
  {
    while ( 1 )
    {
      _BitScanReverse(&v9, v4);
      v10 = (_QWORD *)(16LL * v9 + a1 + 136);
      v20 = v4 ^ (1 << v9);
      v11 = (_QWORD *)*v10;
      v12 = (int)v24;
      do
      {
        v13 = (__int64)(v11 - 27);
        v14 = v11;
        if ( v8 )
        {
          v15 = a2;
        }
        else
        {
          *(_DWORD *)(v13 + 116) &= ~0x2000u;
          v15 = 0LL;
        }
        *(_QWORD *)(v13 + 1496) = v15;
        v11 = (_QWORD *)*v11;
        if ( v7 )
        {
          *(_BYTE *)(v13 + 388) = 7;
          *v14 = *a4;
          *a4 = v14;
        }
        else if ( v22 )
        {
          KiGetThreadEffectiveRankNonZero(v13, a1, (__int64)a3, 0, (bool *)&v23);
          KiAddThreadToPrcbQueue(v12, v16, *(char *)(v16 + 195), 0, v23);
          a4 = v25;
        }
      }
      while ( v11 != v10 );
      v4 = v20;
      if ( v8 )
      {
        v17 = (_QWORD *)*v10;
        a3 = (_QWORD *)v10[1];
        if ( *(_QWORD **)(*v10 + 8LL) != v10 || (_QWORD *)*a3 != v10 )
          __fastfail(3u);
        *a3 = v17;
        v17[1] = a3;
        v18 = (_QWORD *)(v21 + 16LL * v9);
        v19 = (_QWORD *)v18[1];
        if ( *(_QWORD **)(*v18 + 8LL) != v18 || (_QWORD *)*v19 != v18 )
          __fastfail(3u);
        if ( *(_QWORD **)(*v17 + 8LL) != v17 || (_QWORD *)*a3 != v17 )
          __fastfail(3u);
        *v19 = v17;
        v18[1] = v17[1];
        *(_QWORD *)v17[1] = v18;
        v17[1] = v19;
      }
      v10[1] = v10;
      *v10 = v10;
      if ( !v20 )
        break;
      a4 = v25;
    }
  }
  *(_WORD *)(a1 + 114) = 0;
}
