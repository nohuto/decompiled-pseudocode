/*
 * XREFs of VidSchiProcessDpcPreemptedPacket @ 0x1C000D944
 * Callers:
 *     VidSchDdiNotifyDpc @ 0x1C00065B0 (VidSchDdiNotifyDpc.c)
 *     VidSchiProcessDpcDmaPacket @ 0x1C002863C (VidSchiProcessDpcDmaPacket.c)
 * Callees:
 *     VidSchiSignalRegisteredEvent @ 0x1C0005F30 (VidSchiSignalRegisteredEvent.c)
 *     VidSchiProfilePerformanceTick @ 0x1C000A200 (VidSchiProfilePerformanceTick.c)
 *     VidSchiCompleteRewindPacket @ 0x1C000D414 (VidSchiCompleteRewindPacket.c)
 *     ?VidSchiAddGpuWorkEntry@@YAXPEAU_VIDSCH_CONTEXT@@_N@Z @ 0x1C000DD78 (-VidSchiAddGpuWorkEntry@@YAXPEAU_VIDSCH_CONTEXT@@_N@Z.c)
 *     ?VidSchiStopExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K1@Z @ 0x1C000DDEC (-VidSchiStopExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K1@Z.c)
 *     VidSchiFinishMeasuringPreemptionTime @ 0x1C000DF5C (VidSchiFinishMeasuringPreemptionTime.c)
 *     VidSchiDecrementContextReference @ 0x1C000E770 (VidSchiDecrementContextReference.c)
 *     memset @ 0x1C0018400 (memset.c)
 */

LONG __fastcall VidSchiProcessDpcPreemptedPacket(__int64 a1)
{
  signed __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rbp
  LARGE_INTEGER *v5; // r13
  LARGE_INTEGER v6; // rax
  LARGE_INTEGER v7; // rcx
  unsigned __int64 QuadPart; // r12
  __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // r15
  __int64 v12; // rcx
  __int64 v13; // r13
  __int64 v14; // r12
  _QWORD *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  unsigned __int64 *v19; // rax
  __int64 v20; // rcx
  int v21; // r15d
  struct _VIDSCH_CONTEXT *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r9
  struct _KEVENT *v25; // rcx
  LONG result; // eax
  __int64 v27; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-68h] BYREF
  LARGE_INTEGER v29; // [rsp+B8h] [rbp+10h]
  LARGE_INTEGER *v30; // [rsp+C0h] [rbp+18h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+C8h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  v3 = *(_QWORD *)(v2 + 96);
  v4 = *(_QWORD *)(v3 + 24);
  *(_QWORD *)(a1 + 80) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(a1 + 72) = 14;
  if ( *(_QWORD *)(a1 + 56) )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 56LL) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 52LL) = 14;
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 1888), &LockHandle);
  v5 = (LARGE_INTEGER *)(*(_QWORD *)(v3 + 184) + 112LL * *(unsigned int *)(v3 + 196));
  v30 = v5;
  memset(v5, 0, 0x70uLL);
  *(_DWORD *)(v3 + 196) = (*(_DWORD *)(v3 + 196) + 1) & (*(_DWORD *)(v3 + 192) - 1);
  v5->LowPart = 5;
  v6 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v5[1] = v6;
  QuadPart = v6.QuadPart;
  v9 = *(unsigned int *)(v3 + 1552);
  v10 = 0LL;
  v29 = v6;
  if ( v2 != _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 8 * v9 + 1560), 0LL, v2) )
  {
    v27 = ((__int64 (__fastcall *)(_QWORD, _QWORD))WdLogNewEntry5_WdAssertion)((LARGE_INTEGER)v7.QuadPart, 0LL);
    *(_QWORD *)(v27 + 24) = v4;
    *(_QWORD *)(v27 + 32) = v2;
    WdLogEvent5_WdAssertion(v27);
  }
  *(_QWORD *)(v3 + 224) = v2;
  *(_DWORD *)(v3 + 1552) = ((_BYTE)v9 + 1) & 0xF;
  v11 = *(_QWORD *)(a1 + 56);
  if ( v11 )
  {
    v12 = *(_QWORD *)(v11 + 88);
    *(_QWORD *)(v12 + 160) = *(_QWORD *)(v11 + 112);
    v5[3] = *(LARGE_INTEGER *)(v11 + 112);
    _InterlockedAdd((volatile signed __int32 *)(v11 + 128), 1u);
    v13 = *(_QWORD *)(v11 + 88);
    v14 = *(_QWORD *)(*(_QWORD *)(v13 + 96) + 24LL);
    if ( (*(_DWORD *)(v13 + 176) & 4) == 0 )
    {
      v15 = (_QWORD *)WdLogNewEntry5_WdEvent(v12, v10);
      v15[3] = v14;
      v15[4] = v13;
      v15[5] = *(unsigned int *)(v11 + 112);
      WdLogEvent5_WdEvent(v15);
      *(_DWORD *)(v13 + 176) |= 4u;
      *(_QWORD *)(v13 + 640) = v11;
    }
    v5 = v30;
    QuadPart = v29.QuadPart;
  }
  if ( (*(_DWORD *)(a1 + 92) & 0x200) != 0 )
    _InterlockedAdd((volatile signed __int32 *)(v4 + 972), 0xFFFFFFFF);
  _InterlockedAdd((volatile signed __int32 *)(v4 + 952), 0xFFFFFFFF);
  _InterlockedAdd((volatile signed __int32 *)(v3 + 2792), 0xFFFFFFFF);
  VidSchiStopExecutionTimeAtThisPriority(
    (struct _VIDSCH_NODE *)v3,
    *(_DWORD *)(v2 + 396),
    QuadPart,
    PerformanceFrequency.QuadPart);
  v16 = *(_QWORD *)(v3 + 8LL * *(unsigned int *)(v3 + 1552) + 1560);
  if ( v16 )
  {
    v17 = *(unsigned int *)(v16 + 396);
    v18 = gulPriorityToYieldPriorityBand[v17];
    if ( gulPriorityToYieldPriorityBand[v17] )
    {
      v19 = (unsigned __int64 *)(v3 + 1872 + 8 * v18);
      do
      {
        if ( *(v19 - 4) )
          *v19 = QuadPart;
        --v19;
        --v18;
      }
      while ( v18 );
    }
  }
  if ( *(int *)(v3 + 2776) > 0 )
  {
    v20 = *(_QWORD *)(v4 + 408);
    _bittestandset64(&v20, *(unsigned __int16 *)(v3 + 4));
    *(_QWORD *)(v4 + 408) = v20;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 772), 0xFFFFFFFF) == 1 )
  {
    *(_DWORD *)(v2 + 176) &= ~8u;
    if ( (*(_DWORD *)(v2 + 176) & 0x20) != 0 )
      *(_DWORD *)(v2 + 176) &= ~0x20u;
    if ( (*(_DWORD *)(v2 + 176) & 0x10) != 0 )
      *(_DWORD *)(v2 + 176) &= ~0x10u;
    if ( (*(_DWORD *)(v2 + 176) & 0x40) != 0 )
      *(_DWORD *)(v2 + 176) &= ~0x40u;
    *(_DWORD *)(v2 + 176) &= ~2u;
    v21 = VidSchiCompleteRewindPacket(v2, 1);
    if ( (*(_DWORD *)(v2 + 176) & 2) == 0 )
    {
      v22 = *(struct _VIDSCH_CONTEXT **)(v2 + 480);
      if ( v22 )
      {
        VidSchiDecrementContextReference(v22);
        *(_QWORD *)(v2 + 480) = 0LL;
      }
      *(_QWORD *)(v2 + 480) = 0LL;
    }
    --*(_DWORD *)(v3 + 4LL * *(unsigned int *)(v2 + 396) + 1712);
    v23 = *(unsigned int *)(v2 + 396);
    if ( !*(_DWORD *)(v3 + 4 * v23 + 1712) )
      *(_DWORD *)(v3 + 1708) &= ~(1 << v23);
    VidSchiFinishMeasuringPreemptionTime(v2);
  }
  else
  {
    v21 = 0;
  }
  v5[2] = *(LARGE_INTEGER *)(a1 + 104);
  _m_prefetchw((const void *)(v3 + 96));
  while ( _InterlockedCompareExchange64(
            (volatile signed __int64 *)(v3 + 96),
            *(_QWORD *)(a1 + 104),
            *(_QWORD *)(v3 + 96)) != *(_QWORD *)(a1 + 104) )
    ;
  if ( bTracingEnabled )
    VidSchiAddGpuWorkEntry(*(struct _VIDSCH_CONTEXT **)(a1 + 48), 0);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  VidSchiProfilePerformanceTick(11LL, v4, v3, v24, 0LL, 0LL, a1, 0LL);
  v25 = *(struct _KEVENT **)(a1 + 200);
  if ( v25 )
    KeSetEvent(v25, 0, 0);
  VidSchiSignalRegisteredEvent(v4, (struct _KEVENT **)(v2 + 368));
  VidSchiSignalRegisteredEvent(v4, (struct _KEVENT **)(v3 + 408));
  VidSchiSignalRegisteredEvent(v4, (struct _KEVENT **)(v4 + 1800));
  *(_QWORD *)(v2 + 344) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v2 + 312), 0, 0);
  *(_QWORD *)(v3 + 272) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v3 + 240), 0, 0);
  *(_QWORD *)(v4 + 1608) = MEMORY[0xFFFFF78000000320];
  result = KeSetEvent((PRKEVENT)(v4 + 1576), 0, 0);
  if ( v21 )
  {
    *(_QWORD *)(v4 + 1384) = MEMORY[0xFFFFF78000000320];
    return KeSetEvent((PRKEVENT)(v4 + 1352), 0, 0);
  }
  return result;
}
