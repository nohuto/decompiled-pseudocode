/*
 * XREFs of KiSearchForNewThread @ 0x1400EB7B0
 * Callers:
 *     KiIdleSchedule @ 0x140042E90 (KiIdleSchedule.c)
 *     KiSwapThread @ 0x1400EB0F0 (KiSwapThread.c)
 * Callees:
 *     KiSetProcessorIdle @ 0x140034028 (KiSetProcessorIdle.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiDeferredReadyThread @ 0x1400E05F0 (KiDeferredReadyThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x1400EBB90 (KiSearchForNewThreadOnProcessor.c)
 *     KiSelectReadyThread @ 0x1400EC0C0 (KiSelectReadyThread.c)
 *     KiIsThreadRankNonZero @ 0x1401138D0 (KiIsThreadRankNonZero.c)
 *     KiSelectThreadFromSchedulingGroup @ 0x140114C1C (KiSelectThreadFromSchedulingGroup.c)
 */

__int64 __fastcall KiSearchForNewThread(__int64 a1, char a2)
{
  __int64 v2; // r8
  int v3; // r13d
  char v6; // si
  __int64 ready; // rdi
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 i; // rax
  int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  unsigned __int64 v14; // rcx
  __int64 v15; // rdi
  char v16; // cl
  BOOL v17; // ecx
  __int64 v18; // rsi
  int v19; // edx
  char v20; // r12
  int v21; // r15d
  unsigned __int64 v22; // r14
  __int64 v23; // rdi
  unsigned __int64 v24; // rdi
  int v25; // edx
  unsigned __int64 v26; // rcx
  __int64 result; // rax
  __int64 v28; // rdi
  __int64 v29; // rdi
  unsigned __int64 v30; // rdi
  int v31; // r15d
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  __int64 v34; // rax
  unsigned __int64 v35; // r15
  char IsThreadRankNonZero; // al
  int v37; // [rsp+60h] [rbp+8h]
  int v38; // [rsp+70h] [rbp+18h] BYREF
  int v39; // [rsp+78h] [rbp+20h]

  v2 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  if ( v2 )
  {
LABEL_38:
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 8) = v2;
    if ( *(_BYTE *)(v2 + 388) == 1 )
      *(_DWORD *)(v2 + 132) = *(_DWORD *)(v2 + 132) - *(_DWORD *)(v2 + 436) + MEMORY[0xFFFFF78000000320];
    *(_BYTE *)(v2 + 388) = 2;
    return v2;
  }
  else
  {
    v6 = 1;
    while ( 1 )
    {
      ready = KiSelectReadyThread(1LL, a1);
      if ( !ready )
      {
        ready = 0LL;
        for ( i = *(_QWORD *)(a1 + 22904) & 0xFFFFFFFFFFFFFFFEuLL; i; i = *(_QWORD *)(v35 + 400) & 0xFFFFFFFFFFFFFFFEuLL )
        {
          v35 = i - 88;
          ready = KiSelectThreadFromSchedulingGroup(a1, i - 88, 0LL);
          if ( ready )
            break;
        }
        if ( !ready )
        {
          ready = KiSelectReadyThread(0LL, a1);
          if ( !ready )
            break;
        }
      }
      if ( *(_QWORD *)(ready + 568) == KiCpuSetSequence || (*(_DWORD *)(ready + 116) & 8) != 0 )
      {
        if ( (*(_BYTE *)(ready + 2) & 4) != 0 )
        {
          if ( !(unsigned __int8)KiIsThreadRankNonZero(ready, a1) )
            v6 = *(_BYTE *)(ready + 195);
        }
        else
        {
          v6 = *(_BYTE *)(ready + 195);
        }
        **(_BYTE **)(a1 + 56) = v6;
        *(_QWORD *)(a1 + 8) = ready;
        if ( *(_BYTE *)(ready + 388) == 1 )
          *(_DWORD *)(ready + 132) = *(_DWORD *)(ready + 132) - *(_DWORD *)(ready + 436) + MEMORY[0xFFFFF78000000320];
        *(_BYTE *)(ready + 388) = 2;
        if ( a2 )
          KiSetProcessorIdle(a1, 0, 0);
        return ready;
      }
      *(_BYTE *)(ready + 388) = 7;
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
      KiDeferredReadyThread(a1, ready, v8, v9);
      v38 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v38);
        while ( *(_QWORD *)(a1 + 48) );
      }
      if ( a2 && *(_QWORD *)(a1 + 16) == *(_QWORD *)(a1 + 24) )
        *(_QWORD *)(a1 + 16) = 0LL;
      v2 = *(_QWORD *)(a1 + 16);
      if ( v2 )
        goto LABEL_38;
    }
    if ( !a2 )
    {
      v11 = *(unsigned __int8 *)(a1 + 35);
      v12 = *(_QWORD *)(a1 + 192);
      *(_BYTE *)(a1 + 11883) = 0;
      if ( (v11 & 1) != 0 )
      {
        v13 = v11 - 1;
        *(_BYTE *)(a1 + 35) = v13;
        if ( !v13 )
          _interlockedbittestandset64((volatile signed __int32 *)v12, *(unsigned __int8 *)(a1 + 209));
        _interlockedbittestandset64((volatile signed __int32 *)(v12 + 16), *(unsigned __int8 *)(a1 + 209));
        v14 = *(_QWORD *)(a1 + 25176);
        if ( (*(_QWORD *)(v12 + 16) & v14) == v14 )
          _InterlockedOr64((volatile signed __int64 *)(v12 + 8), v14);
      }
      v15 = *(_QWORD *)(a1 + 24);
      if ( (*(_BYTE *)(v15 + 2) & 4) != 0 )
      {
        IsThreadRankNonZero = KiIsThreadRankNonZero(*(_QWORD *)(a1 + 24), a1);
        v16 = 1;
        if ( !IsThreadRankNonZero )
          v16 = *(_BYTE *)(v15 + 195);
      }
      else
      {
        v16 = *(_BYTE *)(v15 + 195);
      }
      **(_BYTE **)(a1 + 56) = v16;
    }
    v17 = (*(_BYTE *)(a1 + 35) & 2) != 0;
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
    if ( v17 )
    {
      return 0LL;
    }
    else
    {
      v18 = *(_QWORD *)(a1 + 192);
      v19 = *(unsigned __int8 *)(a1 + 208);
      v20 = *(_BYTE *)(a1 + 209);
      v21 = *(unsigned __int16 *)(v18 + 146);
      LODWORD(v22) = *(_DWORD *)(v18 + 128);
      v39 = v21;
      v37 = v19;
LABEL_18:
      v23 = *(_QWORD *)(v18 + 152);
      if ( *(unsigned __int16 *)(v18 + 146) == v21 )
        v23 &= ~*(_QWORD *)(a1 + 25152);
      if ( v23 )
      {
        v24 = __ROR8__(v23, v20);
        v25 = v19 << 6;
        v38 = v25;
        while ( 1 )
        {
          _BitScanForward64(&v26, v24);
          v24 ^= 1LL << v26;
          result = KiSearchForNewThreadOnProcessor(
                     a1,
                     0LL,
                     *(_QWORD *)(KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v25 + (((_BYTE)v26 + v20) & 0x3F)]]
                               + 25160));
          if ( result )
            break;
          v25 = v38;
          if ( !v24 )
          {
            v19 = v37;
            goto LABEL_25;
          }
        }
      }
      else
      {
LABEL_25:
        v28 = *(_QWORD *)(v18 + 136);
        if ( *(unsigned __int16 *)(v18 + 146) == v21 )
          v28 ^= *(_QWORD *)(a1 + 200);
        v29 = ~*(_QWORD *)(v18 + 16) & v28;
        if ( v29 )
        {
          v30 = __ROR8__(v29, v20);
          v31 = v19 << 6;
          while ( 1 )
          {
            _BitScanForward64(&v32, v30);
            v30 ^= 1LL << v32;
            result = KiSearchForNewThreadOnProcessor(
                       a1,
                       KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v31 + (((_BYTE)v32 + v20) & 0x3F)]],
                       0LL);
            if ( result )
              break;
            if ( !v30 )
            {
              v21 = v39;
              goto LABEL_32;
            }
          }
        }
        else
        {
LABEL_32:
          v22 = (unsigned int)v22 & (unsigned __int64)~(1LL << *(_WORD *)(v18 + 146));
          if ( (_DWORD)v22 )
          {
            while ( ++v3 != (unsigned __int16)KeNumberNodes )
            {
              v33 = *((unsigned __int16 *)qword_14036C1C0 + v3 + v21 * (unsigned int)(unsigned __int16)KeNumberNodes);
              v34 = (unsigned int)v22;
              if ( _bittest64(&v34, v33) )
              {
                v18 = KeNodeBlock[v33];
                v19 = v37;
                goto LABEL_18;
              }
            }
          }
          return 0LL;
        }
      }
    }
  }
  return result;
}
