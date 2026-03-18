/*
 * XREFs of KiApplyForegroundBoostThread @ 0x14006515C
 * Callers:
 *     KeSetPriorityAndQuantumProcess @ 0x140064A98 (KeSetPriorityAndQuantumProcess.c)
 *     KiProcessPendingForegroundBoosts @ 0x140064FB0 (KiProcessPendingForegroundBoosts.c)
 * Callees:
 *     KiPrepareReadyThreadForRescheduling @ 0x14001AD38 (KiPrepareReadyThreadForRescheduling.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x14001ADA8 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x1400433E4 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiAcquireThreadStateLock @ 0x140043AC0 (KiAcquireThreadStateLock.c)
 *     KiSelectReadyThreadEx @ 0x1400ECE00 (KiSelectReadyThreadEx.c)
 *     KiIsThreadRankNonZero @ 0x1401138D0 (KiIsThreadRankNonZero.c)
 *     KiUpdateThreadPriority @ 0x1401147E0 (KiUpdateThreadPriority.c)
 */

char __fastcall KiApplyForegroundBoostThread(__int64 a1, __int64 *a2)
{
  char v3; // si
  char v5; // al
  __int64 v6; // r9
  __int64 v7; // rbx
  char v9; // cl
  char v10; // dl
  int v11; // r15d
  int v12; // esi
  char v13; // r13
  __int64 *v14; // r12
  bool v15; // r14
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rsi
  char v21; // cl
  __int64 ready; // rax
  __int64 v23; // rsi
  char v24; // cl
  __int64 v25; // rcx
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v27; // [rsp+70h] [rbp+50h] BYREF
  volatile signed __int64 *v28; // [rsp+78h] [rbp+58h] BYREF

  v3 = 0;
  v5 = KiAcquireThreadStateLock(a1, &v27, (volatile signed __int32 **)&v28);
  v6 = 1LL;
  if ( (unsigned __int8)(v5 - 1) > 2u && v5 != 7 || (v3 = 0, *(_BYTE *)(*(_QWORD *)(a1 + 544) + 1474LL) != 2) )
  {
    v7 = v27;
LABEL_4:
    if ( v7 )
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 48), 0LL);
    if ( v28 )
      _InterlockedAnd64(v28, 0LL);
    return v3;
  }
  if ( *(_BYTE *)(a1 + 564) )
    goto LABEL_25;
  if ( (*(_DWORD *)(a1 + 120) & 2) != 0 )
    goto LABEL_25;
  v9 = *(_BYTE *)(a1 + 195);
  if ( v9 <= 0 )
    goto LABEL_25;
  v10 = PsPrioritySeparation + *(_BYTE *)(a1 + 563);
  if ( v10 >= 16 )
    v10 = 15;
  if ( v10 <= v9 )
  {
LABEL_25:
    v7 = v27;
  }
  else
  {
    v11 = v9;
    v12 = v10;
    *(_BYTE *)(a1 + 564) = (v10 - v9) & 0xF;
    v13 = 0;
    switch ( v5 )
    {
      case 1:
        v7 = v27;
        KiRemoveThreadFromAnyReadyQueue(v27, (__int64)v28, a1, v9);
        KiUpdateThreadPriority(0LL, a1, (unsigned int)v12, 0LL);
        KiPrepareReadyThreadForRescheduling(a1, v12, a2);
        break;
      case 2:
        v7 = v27;
        v14 = (__int64 *)(v27 + 16);
        v15 = *(_QWORD *)(v27 + 16) == 0LL;
        LOBYTE(v6) = v15;
        KiUpdateThreadPriority(v27, a1, (unsigned int)v10, v6);
        if ( v12 < v11 && v15 )
        {
          v7 = v27;
          if ( *(_BYTE *)(a1 + 388) == 2 )
          {
            ready = KiSelectReadyThreadEx(v27, a1, 0LL);
            v23 = ready;
            if ( ready )
            {
              if ( (*(_BYTE *)(ready + 2) & 4) != 0 )
              {
                if ( (unsigned __int8)KiIsThreadRankNonZero(ready, v7) )
                  v24 = 1;
                else
                  v24 = *(_BYTE *)(v23 + 195);
              }
              else
              {
                v24 = *(_BYTE *)(ready + 195);
              }
              **(_BYTE **)(v7 + 56) = v24;
              *v14 = v23;
              if ( *(_BYTE *)(v23 + 388) == 1 )
                *(_DWORD *)(v23 + 132) = *(_DWORD *)(v23 + 132) - *(_DWORD *)(v23 + 436) + MEMORY[0xFFFFF78000000320];
              v7 = v27;
              v13 = 1;
              *(_BYTE *)(v23 + 388) = 3;
            }
          }
          else if ( *(_DWORD *)(v27 + 22808) >> (v12 + 1) )
          {
            *(_BYTE *)(a1 + 112) |= 0x10u;
          }
        }
        break;
      case 3:
        v7 = v27;
        KiUpdateThreadPriority(v27, a1, (unsigned int)v10, 1LL);
        if ( v12 < v11 )
        {
          v19 = KiSelectReadyThreadEx(v7, a1, 0LL);
          v20 = v19;
          if ( v19 )
          {
            if ( (*(_BYTE *)(v19 + 2) & 4) != 0 )
            {
              if ( (unsigned __int8)KiIsThreadRankNonZero(v19, v7) )
                v21 = 1;
              else
                v21 = *(_BYTE *)(v20 + 195);
            }
            else
            {
              v21 = *(_BYTE *)(v19 + 195);
            }
            **(_BYTE **)(v7 + 56) = v21;
            *(_QWORD *)(v7 + 16) = v20;
            if ( *(_BYTE *)(v20 + 388) == 1 )
              *(_DWORD *)(v20 + 132) = *(_DWORD *)(v20 + 132) - *(_DWORD *)(v20 + 436) + MEMORY[0xFFFFF78000000320];
            *(_BYTE *)(v20 + 388) = 3;
            _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0xBu);
            v7 = v27;
            *(_BYTE *)(a1 + 388) = 7;
            *(_QWORD *)(a1 + 216) = *a2;
            *a2 = a1 + 216;
          }
        }
        break;
      default:
        KiUpdateThreadPriority(0LL, a1, (unsigned int)v10, 0LL);
        v7 = v27;
        break;
    }
    KiUpdateSharedReadyQueueAffinityThread(0LL, a1);
    if ( v7 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 48), 0LL);
      v7 = v27;
    }
    if ( v28 )
    {
      _InterlockedAnd64(v28, 0LL);
      v7 = v27;
    }
    if ( v13 )
    {
      v7 = v27;
      v25 = *(unsigned int *)(v27 + 36);
      if ( KeGetPcr()->Prcb.Number != (_DWORD)v25 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        LOBYTE(v16) = 2;
        ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
        HalSendSoftwareInterrupt(v25, v16, v17, v18);
        v7 = v27;
      }
    }
    v3 = 1;
  }
  if ( !v3 )
    goto LABEL_4;
  return v3;
}
