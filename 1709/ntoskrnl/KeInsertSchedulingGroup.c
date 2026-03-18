/*
 * XREFs of KeInsertSchedulingGroup @ 0x1400D17B8
 * Callers:
 *     PspAddSchedulingGroupToJobChain @ 0x14050A0DC (PspAddSchedulingGroupToJobChain.c)
 *     PspEstablishJobHierarchy @ 0x14050C5C4 (PspEstablishJobHierarchy.c)
 *     MiSessionObjectCreate @ 0x1405B4ABC (MiSessionObjectCreate.c)
 *     PspEstablishDfssHierarchy @ 0x1407177A0 (PspEstablishDfssHierarchy.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAssignSchedulingGroupWeights @ 0x1400D1BDC (KiAssignSchedulingGroupWeights.c)
 *     KiUpdateCpuTargetByRate @ 0x1400D1F04 (KiUpdateCpuTargetByRate.c)
 *     KiEnableGroupScheduling @ 0x140157434 (KiEnableGroupScheduling.c)
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 __fastcall KeInsertSchedulingGroup(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // r15
  unsigned int v7; // ebp
  int v8; // eax
  __int64 v9; // r14
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  char v13; // al
  _QWORD *v14; // rax
  unsigned int v15; // r12d
  __int64 v16; // r13
  unsigned int i; // r15d
  __int64 v18; // rbp
  __int64 v19; // r14
  _QWORD *v20; // rdx
  _QWORD *v21; // rcx
  bool v22; // zf
  int v23; // eax
  __int64 result; // rax
  __int64 v25; // rdx
  _QWORD *v26; // rcx
  unsigned int v27; // ecx
  int v28; // eax
  unsigned int v29; // ecx
  int v30; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  int v32; // [rsp+80h] [rbp+8h] BYREF
  __int64 v33; // [rsp+88h] [rbp+10h]

  v33 = a2;
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
    v9 = a1 + 136;
    do
    {
      memset((void *)(v9 - 8), 0, 0x88uLL);
      v10 = (_QWORD *)(v9 + 128);
      v11 = 16LL;
      do
      {
        v10[1] = v10;
        *v10 = v10;
        v10 += 2;
        --v11;
      }
      while ( v11 );
      v12 = KiCycleDivisorShortTerm;
      *(_QWORD *)v9 = KiCycleDivisorShortTerm;
      *(_QWORD *)(v9 + 8) = v12;
      v13 = 0;
      *(_QWORD *)(v9 + 384) = 0LL;
      *(_QWORD *)(v9 + 392) = 0LL;
      if ( a3 )
      {
        v25 = 424LL * v7 + a3 + 128;
        *(_QWORD *)(v9 + 400) = v25;
        *(_QWORD *)(v9 + 408) = *(_QWORD *)(v25 + 416);
        v13 = *(_BYTE *)(v25 + 113) + 1;
      }
      else
      {
        *(_QWORD *)(v9 + 400) = 0LL;
        *(_QWORD *)(v9 + 408) = v9 - 8;
      }
      *(_BYTE *)(v9 + 105) = v13;
      ++v7;
      v9 += 424LL;
    }
    while ( v7 < KeMaximumProcessors );
  }
  KeAcquireInStackQueuedSpinLock(&KiSchedulingGroupLock, &LockHandle);
  if ( a3 )
  {
    *(_QWORD *)(a1 + 96) = a3;
    v26 = *(_QWORD **)(a3 + 88);
    if ( *v26 != a3 + 80 )
      __fastfail(3u);
    *v6 = a3 + 80;
    *(_QWORD *)(a1 + 64) = v26;
    *v26 = v6;
    *(_QWORD *)(a3 + 88) = v6;
  }
  else
  {
    v14 = (_QWORD *)qword_140371218;
    if ( *(__int64 **)qword_140371218 != &KiSchedulingGroupList )
      __fastfail(3u);
    *v6 = &KiSchedulingGroupList;
    *(_QWORD *)(a1 + 64) = v14;
    *v14 = v6;
    qword_140371218 = a1 + 56;
  }
  v15 = KeNumberProcessors_0;
  v16 = 0LL;
  for ( i = 0; i < v15; ++i )
  {
    v18 = 424LL * i;
    v19 = KiProcessorBlock[i];
    v32 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 48), 0LL) )
    {
      do
        KeYieldProcessorEx(&v32);
      while ( *(_QWORD *)(v19 + 48) );
    }
    v20 = *(_QWORD **)(v19 + 24336);
    v21 = (_QWORD *)(v18 + a1 + 200);
    if ( *v20 != v19 + 24328 )
      __fastfail(3u);
    v22 = (v33 & 0x400000000LL) == 0;
    *v21 = v19 + 24328;
    v21[1] = v20;
    *v20 = v21;
    *(_QWORD *)(v19 + 24336) = v21;
    if ( !v22 )
    {
      *(_BYTE *)(a1 + v18 + 240) |= 0xCu;
      *(_DWORD *)(a1 + v18 + 244) = 1;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v19 + 48), 0LL);
    if ( *(_QWORD *)(v19 + 24896) )
    {
      if ( *(_BYTE *)(v19 + 209) == *(_BYTE *)(*(_QWORD *)(v19 + 24904) + 593LL) )
      {
        v16 = v18 + a1 + 256;
        *(_BYTE *)(a1 + v18 + 240) |= 0x20u;
      }
      *(_QWORD *)(a1 + v18 + 248) = v16;
    }
  }
  if ( (*(_DWORD *)(a1 + 4) & 1) != 0 )
  {
    if ( a3 )
    {
      v29 = *(_DWORD *)(a3 + 12);
      if ( !v29 || (v30 = (unsigned __int16)a2, (unsigned __int16)a2 < v29) )
      {
        *(_DWORD *)(a3 + 12) = (unsigned __int16)a2;
LABEL_53:
        KiAssignSchedulingGroupWeights(1LL, 0LL);
        goto LABEL_54;
      }
    }
    else
    {
      v29 = KiGroupSchedulingMinimumRate;
      if ( !KiGroupSchedulingMinimumRate
        || (v30 = (unsigned __int16)a2, (unsigned __int16)a2 < (unsigned int)KiGroupSchedulingMinimumRate) )
      {
        KiGroupSchedulingMinimumRate = (unsigned __int16)a2;
        goto LABEL_53;
      }
    }
    *(_DWORD *)(a1 + 8) = (v30 << 7) / v29;
LABEL_54:
    KiUpdateCpuTargetByRate(a1, 0LL);
    goto LABEL_27;
  }
  if ( a3 )
  {
    v27 = *(_DWORD *)(a3 + 16);
    if ( !v27 || (v28 = (unsigned __int16)a2, (unsigned __int16)a2 < v27) )
    {
      v28 = (unsigned __int16)a2;
      *(_DWORD *)(a3 + 16) = (unsigned __int16)a2;
    }
    *(_DWORD *)(a3 + 20) += v28;
  }
  else
  {
    if ( !KiGroupSchedulingMinimumWeight
      || (v23 = (unsigned __int16)a2, (unsigned __int16)a2 < (unsigned int)KiGroupSchedulingMinimumWeight) )
    {
      v23 = (unsigned __int16)a2;
      KiGroupSchedulingMinimumWeight = (unsigned __int16)a2;
    }
    KiGroupSchedulingTotalWeight += v23;
  }
  KiAssignSchedulingGroupWeights(0LL, 0LL);
LABEL_27:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
