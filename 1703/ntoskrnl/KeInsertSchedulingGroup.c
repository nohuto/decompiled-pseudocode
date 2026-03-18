/*
 * XREFs of KeInsertSchedulingGroup @ 0x14001C9F8
 * Callers:
 *     PspAddSchedulingGroupToJobChain @ 0x1404372D4 (PspAddSchedulingGroupToJobChain.c)
 *     PspEstablishJobHierarchy @ 0x14054BD84 (PspEstablishJobHierarchy.c)
 *     MiSessionObjectCreate @ 0x14057E230 (MiSessionObjectCreate.c)
 *     PspEstablishDfssHierarchy @ 0x1406E14C8 (PspEstablishDfssHierarchy.c)
 * Callees:
 *     KiAssignSchedulingGroupWeights @ 0x14001CE38 (KiAssignSchedulingGroupWeights.c)
 *     KiUpdateCpuTargetByRate @ 0x14001D164 (KiUpdateCpuTargetByRate.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     KiEnableGroupScheduling @ 0x140165384 (KiEnableGroupScheduling.c)
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall KeInsertSchedulingGroup(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // r14
  unsigned int v7; // ebp
  int v8; // eax
  __int64 v9; // r12
  __int64 v10; // r15
  unsigned int v11; // r14d
  _QWORD *v12; // rax
  __int64 v13; // rcx
  char v14; // al
  _QWORD *v15; // rax
  unsigned int v16; // r13d
  unsigned int v17; // r15d
  __int64 *v18; // r12
  __int64 v19; // rbp
  __int64 v20; // r14
  _QWORD *v21; // rdx
  _QWORD *v22; // rcx
  bool v23; // zf
  __int64 v24; // rax
  int v25; // eax
  __int64 result; // rax
  __int64 v27; // rdx
  _QWORD *v28; // rcx
  unsigned int v29; // ecx
  int v30; // eax
  unsigned int v31; // ecx
  int v32; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  int v34; // [rsp+80h] [rbp+8h] BYREF
  __int64 v35; // [rsp+88h] [rbp+10h]
  __int64 v36; // [rsp+90h] [rbp+18h]

  v35 = a2;
  if ( !KiGroupSchedulingEnabled )
    KiEnableGroupScheduling();
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 12) = 0LL;
  *(_DWORD *)(a1 + 20) = 0;
  *(LARGE_INTEGER *)(a1 + 24) = KeQueryPerformanceCounter(0LL);
  v6 = (_QWORD *)(a1 + 56);
  v7 = 0;
  *(_QWORD *)(a1 + 88) = a1 + 80;
  *(_QWORD *)(a1 + 80) = a1 + 80;
  v8 = KeMaximumProcessors;
  *(_QWORD *)(a1 + 64) = a1 + 56;
  *(_QWORD *)(a1 + 56) = a1 + 56;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  if ( v8 )
  {
    v9 = KiCycleDivisorShortTerm;
    v10 = a1 + 136;
    v11 = v8;
    do
    {
      memset((void *)(v10 - 8), 0, 0x88uLL);
      v12 = (_QWORD *)(v10 + 128);
      v13 = 16LL;
      do
      {
        v12[1] = v12;
        *v12 = v12;
        v12 += 2;
        --v13;
      }
      while ( v13 );
      v14 = 0;
      *(_QWORD *)v10 = v9;
      *(_QWORD *)(v10 + 8) = v9;
      *(_QWORD *)(v10 + 384) = 0LL;
      *(_QWORD *)(v10 + 392) = 0LL;
      if ( a3 )
      {
        v27 = 424LL * v7 + a3 + 128;
        *(_QWORD *)(v10 + 400) = v27;
        *(_QWORD *)(v10 + 408) = *(_QWORD *)(v27 + 416);
        v14 = *(_BYTE *)(v27 + 113) + 1;
      }
      else
      {
        *(_QWORD *)(v10 + 400) = 0LL;
        *(_QWORD *)(v10 + 408) = v10 - 8;
      }
      *(_BYTE *)(v10 + 105) = v14;
      ++v7;
      v10 += 424LL;
    }
    while ( v7 < v11 );
    v6 = (_QWORD *)(a1 + 56);
  }
  KeAcquireInStackQueuedSpinLock(&KiSchedulingGroupLock, &LockHandle);
  if ( a3 )
  {
    *(_QWORD *)(a1 + 96) = a3;
    v28 = *(_QWORD **)(a3 + 88);
    if ( *v28 != a3 + 80 )
      __fastfail(3u);
    *v6 = a3 + 80;
    v6[1] = v28;
    *v28 = v6;
    *(_QWORD *)(a3 + 88) = v6;
  }
  else
  {
    v15 = (_QWORD *)qword_140356708;
    if ( *(__int64 **)qword_140356708 != &KiSchedulingGroupList )
      __fastfail(3u);
    *v6 = &KiSchedulingGroupList;
    v6[1] = v15;
    *v15 = v6;
    qword_140356708 = (__int64)v6;
  }
  v16 = KeNumberProcessors_0;
  v17 = 0;
  v36 = 0LL;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    v18 = KiProcessorBlock;
    v19 = a1 + 128;
    do
    {
      v20 = *v18;
      v34 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v34);
        while ( *(_QWORD *)(v20 + 48) );
      }
      v21 = *(_QWORD **)(v20 + 24416);
      v22 = (_QWORD *)(v19 + 72);
      if ( *v21 != v20 + 24408 )
        __fastfail(3u);
      v23 = (v35 & 0x400000000LL) == 0;
      *v22 = v20 + 24408;
      *(_QWORD *)(v19 + 80) = v21;
      *v21 = v22;
      *(_QWORD *)(v20 + 24416) = v22;
      if ( !v23 )
      {
        *(_BYTE *)(v19 + 112) |= 0xCu;
        *(_DWORD *)(v19 + 116) = 1;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v20 + 48), 0LL);
      if ( *(_QWORD *)(v20 + 25152) )
      {
        if ( *(_BYTE *)(v20 + 209) == *(_BYTE *)(*(_QWORD *)(v20 + 25160) + 593LL) )
        {
          *(_BYTE *)(v19 + 112) |= 0x20u;
          v24 = v19 + 128;
          v36 = v19 + 128;
        }
        else
        {
          v24 = v36;
        }
        *(_QWORD *)(v19 + 120) = v24;
      }
      ++v17;
      ++v18;
      v19 += 424LL;
    }
    while ( v17 < v16 );
  }
  if ( (*(_DWORD *)(a1 + 4) & 1) != 0 )
  {
    if ( a3 )
    {
      v31 = *(_DWORD *)(a3 + 12);
      if ( !v31 || (v32 = (unsigned __int16)a2, (unsigned __int16)a2 < v31) )
      {
        *(_DWORD *)(a3 + 12) = (unsigned __int16)a2;
LABEL_56:
        KiAssignSchedulingGroupWeights(1LL, 0LL);
        goto LABEL_57;
      }
    }
    else
    {
      v31 = KiGroupSchedulingMinimumRate;
      if ( !KiGroupSchedulingMinimumRate
        || (v32 = (unsigned __int16)a2, (unsigned __int16)a2 < (unsigned int)KiGroupSchedulingMinimumRate) )
      {
        KiGroupSchedulingMinimumRate = (unsigned __int16)a2;
        goto LABEL_56;
      }
    }
    *(_DWORD *)(a1 + 8) = (v32 << 7) / v31;
LABEL_57:
    KiUpdateCpuTargetByRate(a1, 0LL);
    goto LABEL_32;
  }
  if ( a3 )
  {
    v29 = *(_DWORD *)(a3 + 16);
    if ( !v29 || (v30 = (unsigned __int16)a2, (unsigned __int16)a2 < v29) )
    {
      v30 = (unsigned __int16)a2;
      *(_DWORD *)(a3 + 16) = (unsigned __int16)a2;
    }
    *(_DWORD *)(a3 + 20) += v30;
  }
  else
  {
    if ( !KiGroupSchedulingMinimumWeight
      || (v25 = (unsigned __int16)a2, (unsigned __int16)a2 < (unsigned int)KiGroupSchedulingMinimumWeight) )
    {
      v25 = (unsigned __int16)a2;
      KiGroupSchedulingMinimumWeight = (unsigned __int16)a2;
    }
    KiGroupSchedulingTotalWeight += v25;
  }
  KiAssignSchedulingGroupWeights(0LL, 0LL);
LABEL_32:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
