/*
 * XREFs of KiTransitionSchedulingGroupGeneration @ 0x140043F10
 * Callers:
 *     KiGroupSchedulingGenerationEnd @ 0x1400428E0 (KiGroupSchedulingGenerationEnd.c)
 * Callees:
 *     KiChargeSchedulingGroupCycleTime @ 0x1400442B8 (KiChargeSchedulingGroupCycleTime.c)
 *     KiIsThreadRankNonZero @ 0x1401138D0 (KiIsThreadRankNonZero.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x140113960 (KiGetThreadEffectiveRankNonZero.c)
 *     KiInsertNonMaxOverQuotaScb @ 0x140113CDC (KiInsertNonMaxOverQuotaScb.c)
 *     KiAddThreadToPrcbQueue @ 0x14011F700 (KiAddThreadToPrcbQueue.c)
 */

void __fastcall KiTransitionSchedulingGroupGeneration(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  unsigned __int64 v4; // rcx
  unsigned int v5; // r14d
  __int64 v6; // r13
  _QWORD *v7; // r12
  _QWORD *v8; // r15
  _QWORD *v9; // rdi
  char v10; // al
  _QWORD *v11; // rbx
  __int64 v12; // rdx
  char *v13; // rbp
  int v14; // r8d
  volatile signed __int32 *v15; // rcx
  unsigned int v16; // ecx
  unsigned int v17; // ebp
  unsigned int v18; // ecx
  char v19; // cl
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // r13
  _QWORD *v23; // r15
  int v24; // r10d
  __int64 v25; // r10
  _QWORD *v26; // [rsp+30h] [rbp-68h]
  __int64 v27; // [rsp+38h] [rbp-60h]
  char v28; // [rsp+A0h] [rbp+8h]
  char v29; // [rsp+A8h] [rbp+10h] BYREF
  unsigned __int8 v30; // [rsp+B0h] [rbp+18h]
  int v31; // [rsp+B8h] [rbp+20h]

  v30 = a3;
  v4 = *(_QWORD *)(a1 + 23520);
  v5 = 1;
  if ( a2 > v4 )
    v5 = (a2 - 1 + (unsigned int)KiGenerationTicks - v4) / (unsigned int)KiGenerationTicks + 1;
  *(_QWORD *)(a1 + 23520) = KiGenerationEndTick;
  *(_QWORD *)(a1 + 22896) = 0LL;
  *(_QWORD *)(a1 + 22904) = 0LL;
  v6 = *(_QWORD *)(a1 + 16);
  v28 = 0;
  v27 = v6;
  if ( !v6 )
  {
    v6 = *(_QWORD *)(a1 + 8);
    v27 = v6;
  }
  v7 = *(_QWORD **)(v6 + 104);
  v26 = v7;
  if ( v7 )
  {
    v7 = (_QWORD *)((char *)v7 + *(unsigned int *)(a1 + 216));
    v26 = v7;
  }
  v8 = (_QWORD *)(a1 + 24408);
  v9 = *(_QWORD **)(a1 + 24408);
  if ( v9 == (_QWORD *)(a1 + 24408) )
  {
LABEL_25:
    if ( *(_BYTE *)(a1 + 23449) )
    {
      v20 = *(unsigned int *)(a1 + 36);
      *(_BYTE *)(a1 + 23449) = 0;
      _InterlockedAnd64(
        &qword_14033FEC8[(unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[v20] >> 6],
        ~(1LL << (KiProcessorIndexToNumberMappingTable[v20] & 0x3F)));
    }
    return;
  }
  v10 = v5;
  do
  {
    v11 = v9 - 9;
    if ( v5 >= 0x40 )
      v12 = 0LL;
    else
      v12 = v11[6] << v10;
    if ( (v11[14] & 4) != 0 )
      v12 |= 1uLL;
    v11[6] = v12;
    v13 = (char *)v11 - *(unsigned int *)(a1 + 216);
    KiChargeSchedulingGroupCycleTime(v13, v9 - 9);
    v14 = v30;
    if ( !v30 && *(_BYTE *)(a1 + 33) != v30 && (v11[14] & 0x10) == 0 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)v13 + 6, *((_QWORD *)v13 + 5));
    if ( v11[1] != v11[2] )
    {
      v18 = KiGroupSchedulingNumerator;
      *v11 >>= 10;
      v14 = v30;
      v11[4] = *v11 * v18 + ((v11[4] * (unsigned __int64)(1024 - v18)) >> 10);
    }
    v15 = (volatile signed __int32 *)v11[15];
    *v11 = 0LL;
    v11[5] = 0LL;
    if ( v15 )
      _InterlockedExchangeAdd(v15, ((v11[14] & 8) != 0) - *((_DWORD *)v11 + 29));
    v16 = *((unsigned __int8 *)v11 + 112);
    v11[3] = 0LL;
    *((_BYTE *)v11 + 112) = v16 & 0xFC;
    *((_DWORD *)v11 + 29) = (v16 >> 3) & 1;
    v11[11] = 0LL;
    v11[12] = 0LL;
    v11[13] = 0LL;
    v11[49] = 0LL;
    v11[50] = 0LL;
    if ( !*((_DWORD *)v11 + 29) )
    {
      *((_BYTE *)v11 + 112) &= ~4u;
      if ( v11 == v7 )
      {
        if ( (*(_BYTE *)(v6 + 2) & 4) != 0 )
        {
          if ( (unsigned __int8)KiIsThreadRankNonZero(v6, a1) )
            v19 = 1;
          else
            v19 = *(_BYTE *)(v6 + 195);
        }
        else
        {
          v19 = *(_BYTE *)(v6 + 195);
        }
        **(_BYTE **)(a1 + 56) = v19;
      }
LABEL_21:
      v17 = *((unsigned __int16 *)v11 + 57);
      if ( *((_WORD *)v11 + 57) )
      {
        do
        {
          _BitScanReverse((unsigned int *)&v21, v17);
          v17 ^= 1 << v21;
          v31 = v21;
          v22 = (__int64)&v11[2 * v21 + 17];
          v23 = *(_QWORD **)v22;
          do
          {
            *((_DWORD *)v23 - 25) &= ~0x2000u;
            v24 = (_DWORD)v23 - 216;
            v23[160] = 0LL;
            v23 = (_QWORD *)*v23;
            KiGetThreadEffectiveRankNonZero(v24, (_DWORD)v9 - 72, v14, 0, (__int64)&v29);
            KiAddThreadToPrcbQueue(a1, v25, *(char *)(v25 + 195), 0, v29);
          }
          while ( v23 != (_QWORD *)v22 );
          *(_QWORD *)(v22 + 8) = v22;
          *(_QWORD *)v22 = v22;
        }
        while ( v17 );
        v7 = v26;
        v8 = (_QWORD *)(a1 + 24408);
        v6 = v27;
      }
      *((_WORD *)v11 + 57) = 0;
      goto LABEL_23;
    }
    if ( (_BYTE)v14 )
      goto LABEL_21;
    if ( *((_WORD *)v11 + 57) )
    {
      KiInsertNonMaxOverQuotaScb(v9 - 9, a1, 0LL);
      v28 = 1;
    }
LABEL_23:
    v9 = (_QWORD *)*v9;
    v10 = v5;
  }
  while ( v9 != v8 );
  if ( !v28 )
    goto LABEL_25;
}
