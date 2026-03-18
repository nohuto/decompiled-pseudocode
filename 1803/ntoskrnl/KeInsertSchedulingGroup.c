/*
 * XREFs of KeInsertSchedulingGroup @ 0x1400A7684
 * Callers:
 *     PspEstablishJobHierarchy @ 0x140530FA8 (PspEstablishJobHierarchy.c)
 *     PspAddSchedulingGroupToJobChain @ 0x140552280 (PspAddSchedulingGroupToJobChain.c)
 *     MiSessionObjectCreate @ 0x14060A7FC (MiSessionObjectCreate.c)
 *     PspEstablishDfssHierarchy @ 0x14077B7B0 (PspEstablishDfssHierarchy.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiAssignSchedulingGroupWeights @ 0x1400A7AF4 (KiAssignSchedulingGroupWeights.c)
 *     KiUpdateCpuTargetByRate @ 0x1400A7E68 (KiUpdateCpuTargetByRate.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiEnableGroupScheduling @ 0x140184D0C (KiEnableGroupScheduling.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall KeInsertSchedulingGroup(__int64 a1, __int64 a2, __int64 a3)
{
  LARGE_INTEGER PerformanceCounter; // rax
  bool v7; // zf
  _QWORD *v8; // r14
  unsigned int v9; // ebp
  __int64 v10; // r15
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  char v14; // al
  __int64 v15; // rdx
  _QWORD *v16; // rax
  unsigned int v17; // r12d
  unsigned int v18; // r15d
  struct _KPRCB *CurrentPrcb; // r13
  __int64 v20; // rbp
  __int64 v21; // r14
  _QWORD *v22; // rdx
  _QWORD *v23; // rcx
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
  __int64 i; // [rsp+90h] [rbp+18h]

  v35 = a2;
  if ( !KiGroupSchedulingEnabled )
    KiEnableGroupScheduling();
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 12) = 0LL;
  *(_DWORD *)(a1 + 20) = 0;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v7 = KeMaximumProcessors == 0;
  v8 = (_QWORD *)(a1 + 56);
  *(LARGE_INTEGER *)(a1 + 24) = PerformanceCounter;
  v9 = 0;
  *(_QWORD *)(a1 + 88) = a1 + 80;
  *(_QWORD *)(a1 + 80) = a1 + 80;
  *(_QWORD *)(a1 + 64) = a1 + 56;
  *(_QWORD *)(a1 + 56) = a1 + 56;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  if ( !v7 )
  {
    v10 = a1 + 136;
    do
    {
      memset((void *)(v10 - 8), 0, 0x88uLL);
      v11 = (_QWORD *)(v10 + 128);
      v12 = 16LL;
      do
      {
        v11[1] = v11;
        *v11 = v11;
        v11 += 2;
        --v12;
      }
      while ( v12 );
      v13 = KiCycleDivisorShortTerm;
      *(_QWORD *)v10 = KiCycleDivisorShortTerm;
      *(_QWORD *)(v10 + 8) = v13;
      *(_QWORD *)(v10 + 384) = 0LL;
      *(_QWORD *)(v10 + 392) = 0LL;
      if ( a3 )
      {
        v27 = 424LL * v9 + a3 + 128;
        *(_QWORD *)(v10 + 400) = v27;
        *(_QWORD *)(v10 + 408) = *(_QWORD *)(v27 + 416);
        v14 = *(_BYTE *)(v27 + 113) + 1;
      }
      else
      {
        *(_QWORD *)(v10 + 400) = 0LL;
        v14 = 0;
        *(_QWORD *)(v10 + 408) = v10 - 8;
      }
      *(_BYTE *)(v10 + 105) = v14;
      ++v9;
      v10 += 424LL;
    }
    while ( v9 < KeMaximumProcessors );
  }
  KeAcquireInStackQueuedSpinLock(&KiSchedulingGroupLock, &LockHandle);
  if ( a3 )
  {
    *(_QWORD *)(a1 + 96) = a3;
    v28 = *(_QWORD **)(a3 + 88);
    if ( *v28 != a3 + 80 )
      __fastfail(3u);
    *v8 = a3 + 80;
    *(_QWORD *)(a1 + 64) = v28;
    *v28 = v8;
    *(_QWORD *)(a3 + 88) = v8;
  }
  else
  {
    v16 = (_QWORD *)qword_1403B4478;
    if ( *(__int64 **)qword_1403B4478 != &KiSchedulingGroupList )
      __fastfail(3u);
    *v8 = &KiSchedulingGroupList;
    *(_QWORD *)(a1 + 64) = v16;
    *v16 = v8;
    qword_1403B4478 = a1 + 56;
  }
  v17 = KeNumberProcessors_0;
  v18 = 0;
  for ( i = 0LL; v18 < v17; ++v18 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v20 = 424LL * v18;
    v21 = KiProcessorBlock[v18];
    v34 = 0;
    while ( 1 )
    {
      LOBYTE(v15) = 1;
      KiSetVpThreadSpinLockCount(CurrentPrcb, v15);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v21 + 48), 0LL) )
        break;
      KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
      do
        KeYieldProcessorEx(&v34);
      while ( *(_QWORD *)(v21 + 48) );
    }
    v22 = *(_QWORD **)(v21 + 24336);
    v23 = (_QWORD *)(v20 + a1 + 200);
    if ( *v22 != v21 + 24328 )
      __fastfail(3u);
    v7 = (v35 & 0x400000000LL) == 0;
    *v23 = v21 + 24328;
    v23[1] = v22;
    *v22 = v23;
    *(_QWORD *)(v21 + 24336) = v23;
    if ( !v7 )
    {
      *(_BYTE *)(a1 + v20 + 240) |= 0xCu;
      *(_DWORD *)(a1 + v20 + 244) = 1;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v21 + 48), 0LL);
    KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
    if ( *(_QWORD *)(v21 + 24896) )
    {
      if ( *(_BYTE *)(v21 + 209) == *(_BYTE *)(*(_QWORD *)(v21 + 24904) + 593LL) )
      {
        v24 = v20 + a1 + 256;
        *(_BYTE *)(a1 + v20 + 240) |= 0x20u;
        i = v24;
      }
      else
      {
        v24 = i;
      }
      *(_QWORD *)(a1 + v20 + 248) = v24;
    }
  }
  if ( (*(_DWORD *)(a1 + 4) & 1) != 0 )
  {
    if ( a3 )
    {
      v31 = *(_DWORD *)(a3 + 12);
      if ( !v31 || (v32 = (unsigned __int16)a2, (unsigned __int16)a2 < v31) )
      {
        *(_DWORD *)(a3 + 12) = (unsigned __int16)a2;
LABEL_55:
        KiAssignSchedulingGroupWeights(1LL, 0LL);
        goto LABEL_56;
      }
    }
    else
    {
      v31 = KiGroupSchedulingMinimumRate;
      if ( !KiGroupSchedulingMinimumRate
        || (v32 = (unsigned __int16)a2, (unsigned __int16)a2 < (unsigned int)KiGroupSchedulingMinimumRate) )
      {
        KiGroupSchedulingMinimumRate = (unsigned __int16)a2;
        goto LABEL_55;
      }
    }
    *(_DWORD *)(a1 + 8) = (v32 << 7) / v31;
LABEL_56:
    KiUpdateCpuTargetByRate(a1, 0LL);
    goto LABEL_30;
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
LABEL_30:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
