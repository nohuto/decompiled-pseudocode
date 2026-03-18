/*
 * XREFs of KiSearchForNewThread @ 0x1400F7480
 * Callers:
 *     KiIdleSchedule @ 0x1400605A0 (KiIdleSchedule.c)
 *     KiSwapThread @ 0x1400F6B40 (KiSwapThread.c)
 * Callees:
 *     KiIsThreadRankNonZero @ 0x14003A860 (KiIsThreadRankNonZero.c)
 *     KiSelectThreadFromSchedulingGroup @ 0x1400A9160 (KiSelectThreadFromSchedulingGroup.c)
 *     KiSetProcessorIdle @ 0x1400A9678 (KiSetProcessorIdle.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSearchForNewThreadOnProcessor @ 0x1400F7A90 (KiSearchForNewThreadOnProcessor.c)
 *     KiSelectReadyThread @ 0x1400F8040 (KiSelectReadyThread.c)
 *     KiDeferredReadyThread @ 0x1400FBA30 (KiDeferredReadyThread.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 */

__int64 __fastcall KiSearchForNewThread(__int64 a1, char a2)
{
  __int64 v2; // r8
  int v3; // esi
  char v6; // r14
  __int64 ready; // rdi
  unsigned __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rbp
  __int64 v17; // rcx
  __int64 v18; // r8
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 result; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  int v23; // edx
  unsigned __int64 v24; // rdx
  __int64 v25; // rdi
  int *v26; // rcx
  int v27; // eax
  char v28; // r10
  struct _KPRCB *v29; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v31; // eax
  __int64 v32; // r14
  unsigned __int64 v33; // r9
  int v34; // edx
  char v35; // r13
  int v36; // r12d
  unsigned __int64 v37; // rbp
  __int64 v38; // rdi
  unsigned __int64 v39; // rdi
  int v40; // r15d
  unsigned __int64 v41; // rcx
  __int64 v42; // rdi
  __int64 v43; // rdi
  unsigned __int64 v44; // rdi
  int v45; // r15d
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // r8
  __int64 v48; // rax
  int *v49; // rcx
  int v50; // eax
  int v51; // [rsp+20h] [rbp-48h]
  int v52; // [rsp+70h] [rbp+8h]
  int v53; // [rsp+80h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  if ( v2 )
  {
LABEL_33:
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 8) = v2;
    if ( *(_BYTE *)(v2 + 388) == 1 )
      *(_DWORD *)(v2 + 132) = *(_DWORD *)(v2 + 132) - *(_DWORD *)(v2 + 436) + MEMORY[0xFFFFF78000000320];
    *(_BYTE *)(v2 + 388) = 2;
    return v2;
  }
  v6 = 1;
  while ( 1 )
  {
    ready = KiSelectReadyThread(1LL, a1);
    if ( !ready )
    {
      if ( KiPerfIsoEnabled )
      {
        v8 = **(_QWORD **)(a1 + 192) - ((**(_QWORD **)(a1 + 192) >> 1) & 0x5555555555555555LL);
        if ( (unsigned int)((0x101010101010101LL
                           * (((v8 & 0x3333333333333333LL)
                             + ((v8 >> 2) & 0x3333333333333333LL)
                             + (((v8 & 0x3333333333333333LL) + ((v8 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 < KiPerfIsoEnabled )
          break;
        v9 = *(_QWORD *)(a1 + 200);
        v10 = *(_QWORD *)(a1 + 24920);
        if ( v9 != v10 )
        {
          v11 = v10 & ~v9;
          if ( (*(_QWORD *)(*(_QWORD *)(a1 + 192) + 16LL) & v11) == 0 )
          {
            _BitScanForward64(&v12, v11);
            v13 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(a1 + 208)
                                                                   + (unsigned int)v12];
            v51 = v13;
            if ( (*(_DWORD *)(KiProcessorBlock[v13] + 236) & 0x10) == 0 )
              break;
          }
        }
      }
      ready = 0LL;
      v14 = *(_QWORD *)(a1 + 22904);
      if ( (v14 & 1) != 0 )
      {
        if ( v14 == 1 )
          break;
        v15 = v14 ^ ((a1 + 22896) | 1);
      }
      else
      {
        v15 = *(_QWORD *)(a1 + 22904);
      }
      while ( v15 )
      {
        v16 = v15 - 88;
        ready = KiSelectThreadFromSchedulingGroup(a1, v15 - 88, 0);
        if ( ready )
          break;
        v17 = *(_QWORD *)(v16 + 400);
        if ( (v17 & 1) != 0 )
        {
          if ( v17 == 1 )
            goto LABEL_21;
          v15 = v17 ^ ((v16 + 392) | 1);
        }
        else
        {
          v15 = *(_QWORD *)(v16 + 400);
        }
      }
      if ( !ready )
        break;
    }
LABEL_22:
    if ( *(_QWORD *)(ready + 568) == KiCpuSetSequence || (*(_DWORD *)(ready + 116) & 8) != 0 )
    {
      if ( (*(_BYTE *)(ready + 2) & 4) != 0 )
      {
        if ( !KiIsThreadRankNonZero(ready, (struct _KPRCB *)a1) )
          v6 = *(_BYTE *)(ready + 195);
      }
      else
      {
        v6 = *(_BYTE *)(ready + 195);
      }
      **(_BYTE **)(a1 + 56) = v6;
      v49 = *(int **)(a1 + 25016);
      if ( v49 )
      {
        v50 = KiVpThreadSystemWorkPriority;
        if ( ready != *(_QWORD *)(a1 + 24) )
          v50 = v6;
        *v49 = v50;
      }
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
    KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
    KiDeferredReadyThread(a1, ready, v18);
    CurrentPrcb = KeGetCurrentPrcb();
    v53 = 0;
    while ( 1 )
    {
      KiSetVpThreadSpinLockCount(CurrentPrcb, 1LL);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
        break;
      KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
      do
        KeYieldProcessorEx(&v53);
      while ( *(_QWORD *)(a1 + 48) );
    }
    if ( a2 && *(_QWORD *)(a1 + 16) == *(_QWORD *)(a1 + 24) )
      *(_QWORD *)(a1 + 16) = 0LL;
    v2 = *(_QWORD *)(a1 + 16);
    if ( v2 )
      goto LABEL_33;
  }
LABEL_21:
  ready = KiSelectReadyThread(0LL, a1);
  if ( ready )
    goto LABEL_22;
  if ( !a2 )
  {
    v21 = *(_QWORD *)(a1 + 25016);
    v22 = *(_QWORD *)(a1 + 192);
    v23 = *(unsigned __int8 *)(a1 + 35);
    if ( v21 )
      *(_BYTE *)(v21 + 24) = 1;
    *(_BYTE *)(a1 + 11883) = 0;
    if ( (v23 & 1) != 0 )
    {
      *(_BYTE *)(a1 + 35) = v23 - 1;
      if ( v23 == 1 )
        _interlockedbittestandset64((volatile signed __int32 *)v22, *(unsigned __int8 *)(a1 + 209));
      _interlockedbittestandset64((volatile signed __int32 *)(v22 + 16), *(unsigned __int8 *)(a1 + 209));
      v24 = *(_QWORD *)(a1 + 24920);
      if ( (*(_QWORD *)(v22 + 16) & v24) == v24 )
        _InterlockedOr64((volatile signed __int64 *)(v22 + 8), v24);
    }
    v25 = *(_QWORD *)(a1 + 24);
    if ( (*(_BYTE *)(v25 + 2) & 4) != 0 )
    {
      if ( !KiIsThreadRankNonZero(*(_QWORD *)(a1 + 24), (struct _KPRCB *)a1) )
        v6 = *(_BYTE *)(v25 + 195);
    }
    else
    {
      v6 = *(_BYTE *)(v25 + 195);
    }
    **(_BYTE **)(a1 + 56) = v6;
    v26 = *(int **)(a1 + 25016);
    if ( v26 )
    {
      v27 = KiVpThreadSystemWorkPriority;
      if ( v25 != *(_QWORD *)(a1 + 24) )
        v27 = v6;
      *v26 = v27;
    }
  }
  v28 = *(_BYTE *)(a1 + 35) & 2;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
  v29 = KeGetCurrentPrcb();
  SchedulerAssist = v29->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( v29->NestingLevel <= 1u )
    {
      v31 = SchedulerAssist[5] - 1;
      SchedulerAssist[5] = v31;
      if ( !v31 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
        KiPerformUnboostKick(v29);
    }
  }
  if ( v28 )
    return 0LL;
  v32 = *(_QWORD *)(a1 + 192);
  v33 = 0x140000000uLL;
  v34 = *(unsigned __int8 *)(a1 + 208);
  v35 = *(_BYTE *)(a1 + 209);
  v52 = v34;
  v36 = *(unsigned __int16 *)(v32 + 146);
  LODWORD(v37) = *(_DWORD *)(v32 + 128);
LABEL_62:
  v38 = *(_QWORD *)(v32 + 152);
  if ( *(unsigned __int16 *)(v32 + 146) == v36 )
    v38 &= ~*(_QWORD *)(a1 + 24896);
  if ( v38 )
  {
    v39 = __ROR8__(v38, v35);
    v40 = v34 << 6;
    while ( 1 )
    {
      _BitScanForward64(&v41, v39);
      v39 ^= 1LL << v41;
      result = KiSearchForNewThreadOnProcessor(
                 a1,
                 0LL,
                 *(_QWORD *)(KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v40 + (((_BYTE)v41 + v35) & 0x3F)]]
                           + 24904),
                 v33,
                 v51);
      if ( result )
        break;
      if ( !v39 )
      {
        v34 = v52;
        v33 = 0x140000000uLL;
        goto LABEL_69;
      }
    }
  }
  else
  {
LABEL_69:
    v42 = *(_QWORD *)(v32 + 136);
    if ( *(unsigned __int16 *)(v32 + 146) == v36 )
      v42 ^= *(_QWORD *)(a1 + 200);
    v43 = ~*(_QWORD *)(v32 + 16) & v42;
    if ( !v43 )
    {
LABEL_76:
      v37 = (unsigned int)v37 & (unsigned __int64)~(1LL << *(_WORD *)(v32 + 146));
      if ( (_DWORD)v37 )
      {
        while ( ++v3 != (unsigned __int16)KeNumberNodes )
        {
          v47 = *((unsigned __int16 *)qword_1403CB6A0 + v3 + v36 * (unsigned int)(unsigned __int16)KeNumberNodes);
          v48 = (unsigned int)v37;
          if ( _bittest64(&v48, v47) )
          {
            v32 = KeNodeBlock[v47];
            v34 = v52;
            goto LABEL_62;
          }
        }
      }
      return 0LL;
    }
    v44 = __ROR8__(v43, v35);
    v45 = v34 << 6;
    while ( 1 )
    {
      _BitScanForward64(&v46, v44);
      v44 ^= 1LL << v46;
      result = KiSearchForNewThreadOnProcessor(
                 a1,
                 KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v45 + (((_BYTE)v46 + v35) & 0x3F)]],
                 0LL,
                 v33,
                 v51);
      if ( result )
        break;
      if ( !v44 )
      {
        v33 = 0x140000000uLL;
        goto LABEL_76;
      }
    }
  }
  return result;
}
