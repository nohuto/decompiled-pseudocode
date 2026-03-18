/*
 * XREFs of KiTransitionSchedulingGroupGeneration @ 0x14008AB70
 * Callers:
 *     KiGroupSchedulingGenerationEnd @ 0x14008AEE4 (KiGroupSchedulingGenerationEnd.c)
 * Callees:
 *     KiChargeSchedulingGroupCycleTime @ 0x14008AE7C (KiChargeSchedulingGroupCycleTime.c)
 *     KiIsThreadRankNonZero @ 0x1400AB970 (KiIsThreadRankNonZero.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1400ABA00 (KiGetThreadEffectiveRankNonZero.c)
 *     KiAddThreadToPrcbQueue @ 0x1400D2720 (KiAddThreadToPrcbQueue.c)
 *     KiInsertNonMaxOverQuotaScb @ 0x1400D2B88 (KiInsertNonMaxOverQuotaScb.c)
 */

void __fastcall KiTransitionSchedulingGroupGeneration(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  unsigned __int64 v4; // rcx
  unsigned int v5; // r15d
  __int64 v6; // rdx
  __int64 v7; // r14
  _QWORD *v8; // r13
  _QWORD *v9; // r12
  _QWORD *v10; // rsi
  char v11; // al
  _QWORD *v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rdi
  int v15; // r8d
  volatile signed __int32 *v16; // rcx
  unsigned int v17; // ecx
  unsigned int v18; // r14d
  char v19; // cl
  _DWORD *v20; // rdx
  unsigned int v21; // ecx
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // r12
  _QWORD *v28; // r13
  _QWORD *v29; // rdi
  int v30; // r9d
  int v31; // [rsp+30h] [rbp-68h]
  _QWORD *v32; // [rsp+38h] [rbp-60h]
  __int64 v33; // [rsp+40h] [rbp-58h]
  char v34; // [rsp+48h] [rbp-50h]
  char v35; // [rsp+A0h] [rbp+8h]
  char v36; // [rsp+A8h] [rbp+10h] BYREF
  unsigned __int8 v37; // [rsp+B0h] [rbp+18h]
  int v38; // [rsp+B8h] [rbp+20h]

  v37 = a3;
  v4 = *(_QWORD *)(a1 + 23520);
  v5 = 1;
  v31 = 1;
  if ( a2 > v4 )
  {
    v5 = (a2 - 1 + (unsigned int)KiGenerationTicks - v4) / (unsigned int)KiGenerationTicks + 1;
    v31 = v5;
  }
  v6 = 0LL;
  *(_QWORD *)(a1 + 23520) = KiGenerationEndTick;
  *(_QWORD *)(a1 + 22896) = 0LL;
  *(_QWORD *)(a1 + 22904) = 0LL;
  v7 = *(_QWORD *)(a1 + 16);
  v35 = 0;
  v33 = v7;
  if ( !v7 )
  {
    v7 = *(_QWORD *)(a1 + 8);
    v33 = v7;
  }
  v8 = *(_QWORD **)(v7 + 104);
  v32 = v8;
  if ( v8 )
  {
    v8 = (_QWORD *)((char *)v8 + *(unsigned int *)(a1 + 216));
    v32 = v8;
  }
  v9 = (_QWORD *)(a1 + 24328);
  v10 = *(_QWORD **)(a1 + 24328);
  if ( v10 == (_QWORD *)(a1 + 24328) )
  {
LABEL_25:
    if ( *(_BYTE *)(a1 + 23449) )
    {
      v22 = *(unsigned int *)(a1 + 36);
      *(_BYTE *)(a1 + 23449) = 0;
      _InterlockedAnd64(
        &qword_140358548[(unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[v22] >> 6],
        ~(1LL << (KiProcessorIndexToNumberMappingTable[v22] & 0x3F)));
    }
    return;
  }
  v11 = v5;
  v34 = v5;
  do
  {
    v12 = v10 - 9;
    if ( v5 < 0x40 )
      v6 = v12[6] << v11;
    v13 = v6 | 1;
    if ( (v12[14] & 4) == 0 )
      v13 = v6;
    v12[6] = v13;
    v14 = (__int64)v12 - *(unsigned int *)(a1 + 216);
    KiChargeSchedulingGroupCycleTime(v14, v10 - 9);
    v15 = v37;
    if ( !v37 && *(_BYTE *)(a1 + 33) != v37 && (v12[14] & 0x10) == 0 )
    {
      v23 = *(_QWORD *)(v14 + 40);
      v24 = v23 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 48), v23);
      v25 = *(_QWORD *)(v14 + 40);
      if ( v24 > v25 )
        _InterlockedExchange64((volatile __int64 *)(v14 + 48), v25);
    }
    if ( v12[1] != v12[2] )
    {
      v21 = KiGroupSchedulingNumerator;
      *v12 >>= 10;
      v15 = v37;
      v12[4] = *v12 * v21 + ((v12[4] * (unsigned __int64)(1024 - v21)) >> 10);
    }
    v16 = (volatile signed __int32 *)v12[15];
    v6 = 0LL;
    *v12 = 0LL;
    v12[5] = 0LL;
    if ( v16 )
      _InterlockedExchangeAdd(v16, ((*((unsigned __int8 *)v12 + 112) >> 3) & 1) - *((_DWORD *)v12 + 29));
    v17 = *((unsigned __int8 *)v12 + 112);
    v12[3] = 0LL;
    *((_BYTE *)v12 + 112) = v17 & 0xFC;
    *((_DWORD *)v12 + 29) = (v17 >> 3) & 1;
    v12[11] = 0LL;
    v12[12] = 0LL;
    v12[13] = 0LL;
    v12[49] = 0LL;
    v12[50] = 0LL;
    if ( !*((_DWORD *)v12 + 29) )
    {
      *((_BYTE *)v12 + 112) &= ~4u;
      if ( v12 == v8 )
      {
        if ( (*(_BYTE *)(v7 + 2) & 4) != 0 )
        {
          if ( (unsigned __int8)KiIsThreadRankNonZero(v7, a1) )
            v19 = 1;
          else
            v19 = *(_BYTE *)(v7 + 195);
        }
        else
        {
          v19 = *(_BYTE *)(v7 + 195);
        }
        **(_BYTE **)(a1 + 56) = v19;
        v20 = *(_DWORD **)(a1 + 25016);
        if ( v20 )
          *v20 = v19;
        v6 = 0LL;
      }
LABEL_21:
      v18 = *((unsigned __int16 *)v12 + 57);
      if ( *((_WORD *)v12 + 57) )
      {
        do
        {
          _BitScanReverse((unsigned int *)&v26, v18);
          v18 ^= 1 << v26;
          v38 = v26;
          v27 = (__int64)&v12[2 * v26 + 17];
          v28 = *(_QWORD **)v27;
          do
          {
            *((_DWORD *)v28 - 25) &= ~0x2000u;
            v29 = v28 - 27;
            v28[160] = 0LL;
            v28 = (_QWORD *)*v28;
            KiGetThreadEffectiveRankNonZero((_DWORD)v29, (_DWORD)v10 - 72, v15, 0, (__int64)&v36);
            KiAddThreadToPrcbQueue(a1, (_DWORD)v29, *((char *)v29 + 195), v30, v36);
          }
          while ( v28 != (_QWORD *)v27 );
          *(_QWORD *)(v27 + 8) = v27;
          *(_QWORD *)v27 = v27;
        }
        while ( v18 );
        v5 = v31;
        v9 = (_QWORD *)(a1 + 24328);
        v8 = v32;
        v6 = 0LL;
      }
      v7 = v33;
      *((_WORD *)v12 + 57) = 0;
      goto LABEL_23;
    }
    if ( (_BYTE)v15 )
      goto LABEL_21;
    if ( *((_WORD *)v12 + 57) )
    {
      KiInsertNonMaxOverQuotaScb(v10 - 9, a1, 0LL);
      v6 = 0LL;
      v35 = 1;
    }
LABEL_23:
    v10 = (_QWORD *)*v10;
    v11 = v34;
  }
  while ( v10 != v9 );
  if ( !v35 )
    goto LABEL_25;
}
