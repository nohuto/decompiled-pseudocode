/*
 * XREFs of KiSearchForNewThread @ 0x14006EA10
 * Callers:
 *     KiSwapThread @ 0x14006E1D0 (KiSwapThread.c)
 *     KiIdleSchedule @ 0x14008CB50 (KiIdleSchedule.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiSearchForNewThreadOnProcessor @ 0x14006EE10 (KiSearchForNewThreadOnProcessor.c)
 *     KiSelectReadyThread @ 0x14006F300 (KiSelectReadyThread.c)
 *     KiDeferredReadyThread @ 0x140072C60 (KiDeferredReadyThread.c)
 *     KiIsThreadRankNonZero @ 0x1400AB970 (KiIsThreadRankNonZero.c)
 *     KiSelectThreadFromSchedulingGroup @ 0x1400D2970 (KiSelectThreadFromSchedulingGroup.c)
 *     KiSetProcessorIdle @ 0x140128644 (KiSetProcessorIdle.c)
 */

__int64 __fastcall KiSearchForNewThread(__int64 a1, char a2)
{
  __int64 v2; // r8
  char v5; // si
  __int64 ready; // rdi
  unsigned __int64 i; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  unsigned __int64 v12; // rdx
  __int64 v13; // rdi
  char v14; // cl
  _DWORD *v15; // rdx
  BOOL v16; // ecx
  __int64 v17; // rsi
  int v18; // edx
  char v19; // r12
  unsigned __int64 v20; // rbp
  int v21; // r13d
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rdi
  unsigned __int64 v25; // rdi
  int v26; // r14d
  unsigned __int64 v27; // rcx
  __int64 result; // rax
  int v29; // r9d
  unsigned __int64 v30; // r8
  __int64 v31; // rax
  unsigned __int64 v32; // rdi
  int v33; // r14d
  unsigned __int64 v34; // rcx
  _DWORD *v35; // rcx
  unsigned __int64 v36; // r14
  char IsThreadRankNonZero; // al
  int v38; // [rsp+60h] [rbp+8h]
  int v39; // [rsp+70h] [rbp+18h]
  int v40; // [rsp+78h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
LABEL_51:
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 8) = v2;
    if ( *(_BYTE *)(v2 + 388) == 1 )
      *(_DWORD *)(v2 + 132) = *(_DWORD *)(v2 + 132) - *(_DWORD *)(v2 + 436) + MEMORY[0xFFFFF78000000320];
    *(_BYTE *)(v2 + 388) = 2;
    return v2;
  }
  else
  {
    v5 = 1;
    while ( 1 )
    {
      ready = KiSelectReadyThread(1LL, a1);
      if ( !ready )
      {
        ready = 0LL;
        for ( i = *(_QWORD *)(a1 + 22904) & 0xFFFFFFFFFFFFFFFEuLL; i; i = *(_QWORD *)(v36 + 400) & 0xFFFFFFFFFFFFFFFEuLL )
        {
          v36 = i - 88;
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
            v5 = *(_BYTE *)(ready + 195);
        }
        else
        {
          v5 = *(_BYTE *)(ready + 195);
        }
        **(_BYTE **)(a1 + 56) = v5;
        v35 = *(_DWORD **)(a1 + 25016);
        if ( v35 )
          *v35 = v5;
        *(_QWORD *)(a1 + 8) = ready;
        if ( *(_BYTE *)(ready + 388) == 1 )
          *(_DWORD *)(ready + 132) = *(_DWORD *)(ready + 132) - *(_DWORD *)(ready + 436) + MEMORY[0xFFFFF78000000320];
        *(_BYTE *)(ready + 388) = 2;
        if ( a2 )
          KiSetProcessorIdle(a1, 0LL, 0LL);
        return ready;
      }
      *(_BYTE *)(ready + 388) = 7;
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
      KiDeferredReadyThread(a1, ready);
      v40 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v40);
        while ( *(_QWORD *)(a1 + 48) );
      }
      if ( a2 && *(_QWORD *)(a1 + 16) == *(_QWORD *)(a1 + 24) )
        *(_QWORD *)(a1 + 16) = 0LL;
      v2 = *(_QWORD *)(a1 + 16);
      if ( v2 )
        goto LABEL_51;
    }
    if ( !a2 )
    {
      v8 = *(_QWORD *)(a1 + 25016);
      v9 = *(_QWORD *)(a1 + 192);
      v10 = *(unsigned __int8 *)(a1 + 35);
      if ( v8 )
        *(_BYTE *)(v8 + 8) = 1;
      *(_BYTE *)(a1 + 11883) = 0;
      if ( (v10 & 1) != 0 )
      {
        v11 = v10 - 1;
        *(_BYTE *)(a1 + 35) = v11;
        if ( !v11 )
          _interlockedbittestandset64((volatile signed __int32 *)v9, *(unsigned __int8 *)(a1 + 209));
        _interlockedbittestandset64((volatile signed __int32 *)(v9 + 16), *(unsigned __int8 *)(a1 + 209));
        v12 = *(_QWORD *)(a1 + 24920);
        if ( (*(_QWORD *)(v9 + 16) & v12) == v12 )
          _InterlockedOr64((volatile signed __int64 *)(v9 + 8), v12);
      }
      v13 = *(_QWORD *)(a1 + 24);
      if ( (*(_BYTE *)(v13 + 2) & 4) != 0 )
      {
        IsThreadRankNonZero = KiIsThreadRankNonZero(*(_QWORD *)(a1 + 24), a1);
        v14 = 1;
        if ( !IsThreadRankNonZero )
          v14 = *(_BYTE *)(v13 + 195);
      }
      else
      {
        v14 = *(_BYTE *)(v13 + 195);
      }
      **(_BYTE **)(a1 + 56) = v14;
      v15 = *(_DWORD **)(a1 + 25016);
      if ( v15 )
        *v15 = v14;
    }
    v16 = (*(_BYTE *)(a1 + 35) & 2) != 0;
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
    if ( v16 )
    {
      return 0LL;
    }
    else
    {
      v17 = *(_QWORD *)(a1 + 192);
      v18 = *(unsigned __int8 *)(a1 + 208);
      v19 = *(_BYTE *)(a1 + 209);
      LODWORD(v20) = *(_DWORD *)(v17 + 128);
      v21 = *(unsigned __int16 *)(v17 + 146);
      v39 = v18;
      v38 = 0;
LABEL_21:
      v22 = *(_QWORD *)(v17 + 152);
      if ( *(unsigned __int16 *)(v17 + 146) == v21 )
        v22 &= ~*(_QWORD *)(a1 + 24896);
      if ( v22 )
      {
        v32 = __ROR8__(v22, v19);
        v33 = v18 << 6;
        while ( 1 )
        {
          _BitScanForward64(&v34, v32);
          v32 ^= 1LL << v34;
          result = KiSearchForNewThreadOnProcessor(
                     a1,
                     0LL,
                     *(_QWORD *)(KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v33 + (((_BYTE)v34 + v19) & 0x3F)]]
                               + 24904));
          if ( result )
            break;
          if ( !v32 )
          {
            v18 = v39;
            goto LABEL_24;
          }
        }
      }
      else
      {
LABEL_24:
        v23 = *(_QWORD *)(v17 + 136);
        if ( *(unsigned __int16 *)(v17 + 146) == v21 )
          v23 ^= *(_QWORD *)(a1 + 200);
        v24 = ~*(_QWORD *)(v17 + 16) & v23;
        if ( v24 )
        {
          v25 = __ROR8__(v24, v19);
          v26 = v18 << 6;
          while ( 1 )
          {
            _BitScanForward64(&v27, v25);
            v25 ^= 1LL << v27;
            result = KiSearchForNewThreadOnProcessor(
                       a1,
                       KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v26 + (((_BYTE)v27 + v19) & 0x3F)]],
                       0LL);
            if ( result )
              break;
            if ( !v25 )
              goto LABEL_30;
          }
        }
        else
        {
LABEL_30:
          v20 = (unsigned int)v20 & (unsigned __int64)~(1LL << *(_WORD *)(v17 + 146));
          if ( (_DWORD)v20 )
          {
            v29 = v38;
            while ( 1 )
            {
              v38 = ++v29;
              if ( v29 == (unsigned __int16)KeNumberNodes )
                break;
              v30 = *((unsigned __int16 *)qword_140388508 + v29 + v21 * (unsigned int)(unsigned __int16)KeNumberNodes);
              v31 = (unsigned int)v20;
              if ( _bittest64(&v31, v30) )
              {
                v18 = v39;
                v17 = KeNodeBlock[v30];
                goto LABEL_21;
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
