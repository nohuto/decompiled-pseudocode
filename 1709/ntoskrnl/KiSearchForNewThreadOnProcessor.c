/*
 * XREFs of KiSearchForNewThreadOnProcessor @ 0x14006EE10
 * Callers:
 *     KiSearchForNewThread @ 0x14006EA10 (KiSearchForNewThread.c)
 * Callees:
 *     KiFindReadyThread @ 0x140006FD4 (KiFindReadyThread.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiGroupSchedulingMoveThread @ 0x14006BE40 (KiGroupSchedulingMoveThread.c)
 *     KiMayStealStandbyThread @ 0x14006F2C0 (KiMayStealStandbyThread.c)
 *     KiDeferredReadyThread @ 0x140072C60 (KiDeferredReadyThread.c)
 *     KiSelectNextThread @ 0x1400A89A0 (KiSelectNextThread.c)
 *     KiIsThreadRankNonZero @ 0x1400AB970 (KiIsThreadRankNonZero.c)
 *     KiCheckForMaxOverQuotaScb @ 0x140125400 (KiCheckForMaxOverQuotaScb.c)
 *     HvlNotifyLongSpinWait @ 0x140153060 (HvlNotifyLongSpinWait.c)
 *     KiConvertDynamicHeteroPolicy @ 0x14020A308 (KiConvertDynamicHeteroPolicy.c)
 */

__int64 __fastcall KiSearchForNewThreadOnProcessor(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rsi
  unsigned int v9; // r15d
  unsigned int v10; // esi
  __int64 ReadyThread; // rsi
  char v12; // bp
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // ebp
  __int64 v16; // r8
  __int64 v17; // rdx
  unsigned int v18; // eax
  _QWORD *v19; // r15
  _QWORD *v20; // r12
  unsigned int v21; // eax
  __int64 v22; // r13
  __int64 v23; // rax
  char v24; // cl
  char v25; // bl
  _DWORD *v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rcx
  _QWORD *v31; // rcx
  _QWORD *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rax
  int v37; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v38; // [rsp+24h] [rbp-44h]
  __int64 v39; // [rsp+28h] [rbp-40h]
  int v40; // [rsp+78h] [rbp+10h]
  int v41; // [rsp+88h] [rbp+20h] BYREF

  while ( 1 )
  {
    while ( 1 )
    {
      if ( a2 )
      {
        if ( !*(_DWORD *)(a2 + 22808) && !(unsigned __int8)KiMayStealStandbyThread(a2, a1) && !*(_QWORD *)(a2 + 22896) )
          return 0LL;
        v7 = a1;
        v8 = a2;
        v9 = 0;
        if ( a1 <= a2 )
        {
          v7 = a2;
          v8 = a1;
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 48), 0LL) )
        {
          do
          {
            if ( (++v9 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v9);
          }
          while ( *(_QWORD *)(v8 + 48) );
        }
        if ( v8 != v7 )
        {
          v10 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 48), 0LL) )
          {
            do
            {
              if ( (++v10 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v10);
            }
            while ( *(_QWORD *)(v7 + 48) );
          }
        }
      }
      else
      {
        if ( (*(_DWORD *)(a3 + 8) & 0xFFFFFFFE) == 0 )
          return 0LL;
        v41 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
        {
          do
            KeYieldProcessorEx(&v41);
          while ( *(_QWORD *)(a1 + 48) );
        }
        v37 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)a3, 0LL) )
        {
          do
            KeYieldProcessorEx(&v37);
          while ( *(_QWORD *)a3 );
        }
      }
      ReadyThread = *(_QWORD *)(a1 + 16);
      v12 = 0;
      if ( ReadyThread )
        break;
      if ( a3 )
      {
        if ( (*(_DWORD *)(a3 + 8) & 0xFFFFFFFE) != 0 )
          ReadyThread = (__int64)KiFindReadyThread(a1, 0LL, a3, *(_DWORD *)(a3 + 8) & 0xFFFFFFFE);
        _InterlockedAnd64((volatile signed __int64 *)a3, 0LL);
      }
      else
      {
        if ( !(unsigned __int8)KiMayStealStandbyThread(a2, a1)
          || (v33 = *(_QWORD *)(a2 + 16), *(_QWORD *)(v33 + 568) != KiCpuSetSequence)
          && (*(_DWORD *)(v33 + 116) & 8) == 0
          || (ReadyThread = *(_QWORD *)(a2 + 16), *(unsigned __int8 *)(a1 + 208) != *(_WORD *)(ReadyThread + 584))
          || (*(_QWORD *)(a1 + 200) & *(_QWORD *)(ReadyThread + 576)) == 0LL
          || (KiSelectNextThread(a2, 0LL, v13, v14), *(_DWORD *)(ReadyThread + 536) = *(_DWORD *)(a1 + 36), !ReadyThread) )
        {
          v15 = *(_DWORD *)(a2 + 22808);
          if ( v15 )
          {
            v16 = *(_QWORD *)(a1 + 200);
            v17 = 64LL;
            v40 = 64;
            v39 = v16;
            while ( 2 )
            {
              _BitScanReverse(&v18, v15);
              v15 ^= 1 << v18;
              v38 = v18;
              v19 = (_QWORD *)(a2 + 16 * (v18 + 1432LL));
              v20 = (_QWORD *)*v19;
              do
              {
                v21 = *((unsigned __int8 *)v20 - 91);
                ReadyThread = (__int64)(v20 - 27);
                v22 = v20[45];
                if ( v21 >= 5 )
                {
                  v21 = KiConvertDynamicHeteroPolicy(v20 - 27, v17, a1);
                  v16 = v39;
                  LODWORD(v17) = v40;
                }
                if ( v21 )
                {
                  v35 = *(_QWORD *)(a1 + 192);
                  v36 = 3 * ((int)v21 + 8LL);
                  if ( (v22 & *(_QWORD *)(v35 + 8 * v36)) != 0 )
                    v22 &= *(_QWORD *)(v35 + 8 * v36);
                  LODWORD(v17) = v40;
                }
                if ( (v22 & v16) != 0 )
                {
                  v30 = *(_QWORD *)(ReadyThread + 104);
                  if ( !v30
                    || (v34 = *(unsigned int *)(a1 + 216) + v30) == 0
                    || !(unsigned __int8)KiCheckForMaxOverQuotaScb(v34) )
                  {
                    v31 = (_QWORD *)*v20;
                    v32 = (_QWORD *)v20[1];
                    if ( *(_QWORD **)(*v20 + 8LL) != v20 || (_QWORD *)*v32 != v20 )
                      __fastfail(3u);
                    *v32 = v31;
                    v31[1] = v32;
                    if ( v32 == v31 )
                      *(_DWORD *)(a2 + 22808) ^= 1 << v38;
                    --*(_DWORD *)(a2 + 23476);
                    *(_QWORD *)(a2 + 23480) -= *((unsigned int *)v20 + 452);
                    *(_DWORD *)(ReadyThread + 536) = *(_DWORD *)(a1 + 36);
                    goto LABEL_32;
                  }
                }
                v20 = (_QWORD *)*v20;
                v17 = (unsigned int)(v17 - 1);
                v40 = v17;
              }
              while ( v20 != v19 && (_DWORD)v17 );
              if ( v15 && (_DWORD)v17 )
                continue;
              break;
            }
          }
          ReadyThread = KiGroupSchedulingMoveThread(a1, a2, a2 + 22896);
LABEL_32:
          v12 = 0;
        }
        _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
      }
      if ( !ReadyThread )
      {
        v23 = *(_QWORD *)(a1 + 25016);
        if ( v23 )
          *(_BYTE *)(v23 + 8) = 1;
        _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
        return ReadyThread;
      }
      if ( *(_QWORD *)(ReadyThread + 568) == KiCpuSetSequence || (*(_DWORD *)(ReadyThread + 116) & 8) != 0 )
      {
        v24 = 3;
        v25 = 1;
        goto LABEL_41;
      }
      *(_BYTE *)(ReadyThread + 388) = 7;
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
      _interlockedbittestandreset((volatile signed __int32 *)(ReadyThread + 120), 0xCu);
      KiDeferredReadyThread(a1, ReadyThread);
    }
    if ( a3 )
      _InterlockedAnd64((volatile signed __int64 *)a3, 0LL);
    else
      _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
    *(_QWORD *)(a1 + 16) = 0LL;
    if ( ReadyThread != *(_QWORD *)(a1 + 24) )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
  }
  v25 = 1;
  v12 = 1;
  v24 = 1;
LABEL_41:
  if ( (v24 & 2) != 0 )
  {
    if ( (*(_BYTE *)(ReadyThread + 2) & 4) != 0 )
    {
      if ( !(unsigned __int8)KiIsThreadRankNonZero(ReadyThread, a1) )
        v25 = *(_BYTE *)(ReadyThread + 195);
    }
    else
    {
      v25 = *(_BYTE *)(ReadyThread + 195);
    }
    **(_BYTE **)(a1 + 56) = v25;
    v26 = *(_DWORD **)(a1 + 25016);
    if ( v26 )
      *v26 = v25;
  }
  *(_QWORD *)(a1 + 8) = ReadyThread;
  if ( *(_BYTE *)(ReadyThread + 388) == 1 )
    *(_DWORD *)(ReadyThread + 132) = *(_DWORD *)(ReadyThread + 132)
                                   - *(_DWORD *)(ReadyThread + 436)
                                   + MEMORY[0xFFFFF78000000320];
  *(_BYTE *)(ReadyThread + 388) = 2;
  if ( !v12 )
  {
    v27 = *(unsigned __int8 *)(a1 + 35);
    v28 = *(_QWORD *)(a1 + 192);
    *(_BYTE *)(a1 + 11883) = 0;
    if ( (v27 & 1) != 0 )
      __fastfail(0x21u);
    v29 = v27 + 1;
    *(_BYTE *)(a1 + 35) = v29;
    if ( v29 == 1 )
      _interlockedbittestandreset64((volatile signed __int32 *)v28, *(unsigned __int8 *)(a1 + 209));
    _interlockedbittestandreset64((volatile signed __int32 *)(v28 + 16), *(unsigned __int8 *)(a1 + 209));
    _InterlockedAnd64((volatile signed __int64 *)(v28 + 8), ~*(_QWORD *)(a1 + 24920));
  }
  return ReadyThread;
}
