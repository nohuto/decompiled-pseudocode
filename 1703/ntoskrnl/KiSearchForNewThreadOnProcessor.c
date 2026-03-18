/*
 * XREFs of KiSearchForNewThreadOnProcessor @ 0x1400EBB90
 * Callers:
 *     KiSearchForNewThread @ 0x1400EB7B0 (KiSearchForNewThread.c)
 * Callees:
 *     KiFindReadyThread @ 0x14001ADF4 (KiFindReadyThread.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiDeferredReadyThread @ 0x1400E05F0 (KiDeferredReadyThread.c)
 *     KiMayStealStandbyThread @ 0x1400EC080 (KiMayStealStandbyThread.c)
 *     KiCheckForMaxOverQuotaScb @ 0x14010EEB4 (KiCheckForMaxOverQuotaScb.c)
 *     KiIsThreadRankNonZero @ 0x1401138D0 (KiIsThreadRankNonZero.c)
 *     KiSelectNextThread @ 0x140113E30 (KiSelectNextThread.c)
 *     KiGroupSchedulingMoveThread @ 0x140114B7C (KiGroupSchedulingMoveThread.c)
 *     HvlNotifyLongSpinWait @ 0x1401E5050 (HvlNotifyLongSpinWait.c)
 *     KiCheckImportantThread @ 0x140203E00 (KiCheckImportantThread.c)
 *     KiConvertDynamicHeteroPolicy @ 0x140203EA8 (KiConvertDynamicHeteroPolicy.c)
 */

_QWORD *__fastcall KiSearchForNewThreadOnProcessor(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // r14
  unsigned int v9; // r15d
  unsigned int v10; // ebp
  _QWORD *ReadyThread; // rbp
  char v12; // r14
  char v13; // r13
  unsigned int v14; // r15d
  __int64 v15; // r10
  unsigned int v16; // eax
  _QWORD *v17; // r12
  _QWORD *v18; // r14
  __int64 v19; // r9
  __int64 v20; // rdx
  char v21; // bl
  int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  _QWORD *v26; // rcx
  _QWORD *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  _QWORD *v30; // rcx
  char v31; // al
  __int64 v32; // rdx
  int v33; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v34; // [rsp+24h] [rbp-54h]
  __int64 v35; // [rsp+28h] [rbp-50h]
  __int64 v36; // [rsp+30h] [rbp-48h]
  unsigned int v37; // [rsp+88h] [rbp+10h]
  int v38; // [rsp+98h] [rbp+20h] BYREF

  v3 = a3;
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
        if ( a1 > a2 )
        {
          v7 = a2;
          v8 = a1;
        }
        v9 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 48), 0LL) )
        {
          do
          {
            if ( (++v9 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v9);
          }
          while ( *(_QWORD *)(v7 + 48) );
        }
        if ( v7 != v8 )
        {
          v10 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 48), 0LL) )
          {
            do
            {
              if ( (++v10 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v10);
            }
            while ( *(_QWORD *)(v8 + 48) );
          }
        }
      }
      else
      {
        if ( (*(_DWORD *)(v3 + 8) & 0xFFFFFFFE) == 0 )
          return 0LL;
        v38 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
        {
          do
            KeYieldProcessorEx(&v38);
          while ( *(_QWORD *)(a1 + 48) );
        }
        v33 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
        {
          do
            KeYieldProcessorEx(&v33);
          while ( *(_QWORD *)v3 );
        }
      }
      ReadyThread = *(_QWORD **)(a1 + 16);
      v12 = 0;
      v13 = 1;
      if ( ReadyThread )
        break;
      if ( v3 )
      {
        v19 = *(_DWORD *)(v3 + 8) & 0xFFFFFFFE;
        if ( (*(_DWORD *)(v3 + 8) & 0xFFFFFFFE) != 0 )
          ReadyThread = KiFindReadyThread(a1, 0LL, v3, v19);
        _InterlockedAnd64((volatile signed __int64 *)v3, 0LL);
      }
      else
      {
        if ( !(unsigned __int8)KiMayStealStandbyThread(a2, a1)
          || (v28 = *(_QWORD *)(a2 + 16), *(_QWORD *)(v28 + 568) != KiCpuSetSequence)
          && (*(_DWORD *)(v28 + 116) & 8) == 0
          || (ReadyThread = *(_QWORD **)(a2 + 16), *(unsigned __int8 *)(a1 + 208) != *((_WORD *)ReadyThread + 292))
          || (*(_QWORD *)(a1 + 200) & ReadyThread[72]) == 0LL
          || (KiSelectNextThread(a2, 0LL), *((_DWORD *)ReadyThread + 134) = *(_DWORD *)(a1 + 36), !ReadyThread) )
        {
          v14 = *(_DWORD *)(a2 + 22808);
          if ( v14 )
          {
            v15 = *(_QWORD *)(a1 + 200);
            a3 = 64LL;
            v37 = 64;
            v36 = v15;
            while ( 2 )
            {
              _BitScanReverse(&v16, v14);
              v14 ^= 1 << v16;
              v17 = (_QWORD *)(a2 + 22912 + 16LL * v16);
              v34 = v16;
              v18 = (_QWORD *)*v17;
              do
              {
                ReadyThread = v18 - 27;
                v19 = v18[45];
                v35 = v19;
                if ( KeHeteroSystem == 1 )
                {
                  LODWORD(v20) = 0;
                }
                else
                {
                  v20 = *((unsigned __int8 *)ReadyThread + 125);
                  if ( *((unsigned __int8 *)ReadyThread + 125) >= 5u )
                  {
                    v30 = v18 - 27;
                    if ( KeHeteroSystem == 2 )
                    {
                      v31 = KiCheckImportantThread(v30, a1);
                      LODWORD(v20) = KiDefaultDynamicHeteroCpuPolicy;
                      if ( v31 )
                        LODWORD(v20) = KiDynamicHeteroCpuPolicyImportant;
                    }
                    else
                    {
                      LODWORD(v20) = KiConvertDynamicHeteroPolicy(v30, v20, a1);
                    }
                    v15 = v36;
                    v19 = v35;
                    a3 = v37;
                  }
                }
                if ( (_DWORD)v20 )
                {
                  v32 = v19 & *(_QWORD *)(*(_QWORD *)(a1 + 192) + 24 * ((int)v20 + 8LL));
                  if ( v32 )
                    v19 = v32;
                }
                if ( (v19 & v15) != 0 )
                {
                  v25 = ReadyThread[13];
                  if ( !v25
                    || (v29 = *(unsigned int *)(a1 + 216) + v25) == 0
                    || !(unsigned __int8)KiCheckForMaxOverQuotaScb(v29) )
                  {
                    v26 = (_QWORD *)*v18;
                    v27 = (_QWORD *)v18[1];
                    if ( *(_QWORD **)(*v18 + 8LL) != v18 || (_QWORD *)*v27 != v18 )
                      __fastfail(3u);
                    *v27 = v26;
                    v26[1] = v27;
                    if ( v27 == v26 )
                      *(_DWORD *)(a2 + 22808) ^= 1 << v34;
                    --*(_DWORD *)(a2 + 23480);
                    *(_QWORD *)(a2 + 23552) -= *((unsigned int *)v18 + 450);
                    *((_DWORD *)ReadyThread + 134) = *(_DWORD *)(a1 + 36);
                    goto LABEL_34;
                  }
                }
                v18 = (_QWORD *)*v18;
                a3 = (unsigned int)(a3 - 1);
                v37 = a3;
              }
              while ( v18 != v17 && (_DWORD)a3 );
              if ( v14 && (_DWORD)a3 )
                continue;
              break;
            }
          }
          ReadyThread = (_QWORD *)KiGroupSchedulingMoveThread(a1, a2, a2 + 22896);
        }
LABEL_34:
        _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
        v12 = 0;
      }
      if ( !ReadyThread )
      {
        _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
        return 0LL;
      }
      if ( ReadyThread[71] == KiCpuSetSequence || (*((_DWORD *)ReadyThread + 29) & 8) != 0 )
      {
        v21 = 3;
        goto LABEL_38;
      }
      *((_BYTE *)ReadyThread + 388) = 7;
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
      KiDeferredReadyThread(a1, (__int64)ReadyThread, a3, v19);
    }
    if ( v3 )
      _InterlockedAnd64((volatile signed __int64 *)v3, 0LL);
    else
      _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
    *(_QWORD *)(a1 + 16) = 0LL;
    if ( ReadyThread != *(_QWORD **)(a1 + 24) )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
  }
  v12 = 1;
  v21 = 1;
LABEL_38:
  if ( (v21 & 2) != 0 )
  {
    if ( (*((_BYTE *)ReadyThread + 2) & 4) != 0 )
    {
      if ( !(unsigned __int8)KiIsThreadRankNonZero(ReadyThread, a1) )
        v13 = *((_BYTE *)ReadyThread + 195);
    }
    else
    {
      v13 = *((_BYTE *)ReadyThread + 195);
    }
    **(_BYTE **)(a1 + 56) = v13;
  }
  *(_QWORD *)(a1 + 8) = ReadyThread;
  if ( *((_BYTE *)ReadyThread + 388) == 1 )
    *((_DWORD *)ReadyThread + 33) = *((_DWORD *)ReadyThread + 33)
                                  - *((_DWORD *)ReadyThread + 109)
                                  + MEMORY[0xFFFFF78000000320];
  *((_BYTE *)ReadyThread + 388) = 2;
  if ( !v12 )
  {
    v22 = *(unsigned __int8 *)(a1 + 35);
    v23 = *(_QWORD *)(a1 + 192);
    *(_BYTE *)(a1 + 11883) = 0;
    if ( (v22 & 1) != 0 )
      __fastfail(0x21u);
    v24 = v22 + 1;
    *(_BYTE *)(a1 + 35) = v24;
    if ( v24 == 1 )
      _interlockedbittestandreset64((volatile signed __int32 *)v23, *(unsigned __int8 *)(a1 + 209));
    _interlockedbittestandreset64((volatile signed __int32 *)(v23 + 16), *(unsigned __int8 *)(a1 + 209));
    _InterlockedAnd64((volatile signed __int64 *)(v23 + 8), ~*(_QWORD *)(a1 + 25176));
  }
  return ReadyThread;
}
