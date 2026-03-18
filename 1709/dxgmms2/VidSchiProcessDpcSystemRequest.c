/*
 * XREFs of VidSchiProcessDpcSystemRequest @ 0x1C00025C0
 * Callers:
 *     VidSchDdiNotifyDpc @ 0x1C00065B0 (VidSchDdiNotifyDpc.c)
 *     VidSchiProcessDpcDmaPacket @ 0x1C002863C (VidSchiProcessDpcDmaPacket.c)
 * Callees:
 *     ?VidSchiStartExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K@Z @ 0x1C00010DC (-VidSchiStartExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K@Z.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1C0004764 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiSignalRegisteredEvent @ 0x1C0005F30 (VidSchiSignalRegisteredEvent.c)
 *     VidSchiProfilePerformanceTick @ 0x1C000A200 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUpdateContextStatus @ 0x1C000B5B0 (VidSchiUpdateContextStatus.c)
 *     ?VidSchiStopExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K1@Z @ 0x1C000DDEC (-VidSchiStopExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K1@Z.c)
 *     VidSchiDecrementContextReference @ 0x1C000E770 (VidSchiDecrementContextReference.c)
 */

__int64 __fastcall VidSchiProcessDpcSystemRequest(__int64 a1)
{
  signed __int64 v1; // rdi
  __int64 v3; // rbx
  __int64 v4; // r13
  __int64 v5; // rbp
  LARGE_INTEGER v6; // rax
  __int64 v7; // r15
  LARGE_INTEGER v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // r9d
  struct _KEVENT *v13; // rcx
  __int64 v14; // rcx
  __int64 result; // rax
  __int64 *v16; // rdx
  __int64 *v17; // rax
  __int64 **v18; // r8
  __int64 v19; // r8
  __int64 **v20; // rax
  __int64 v21; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-48h] BYREF
  _LARGE_INTEGER PerformanceFrequency; // [rsp+90h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  v3 = *(_QWORD *)(v1 + 96);
  v4 = *(_QWORD *)(v1 + 104);
  v5 = *(_QWORD *)(v3 + 24);
  *(_QWORD *)(a1 + 80) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(a1 + 72) = 13;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v5 + 1888), &LockHandle);
  v6 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v7 = *(unsigned int *)(v3 + 1552);
  v8 = v6;
  if ( v1 != _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 8 * v7 + 1560), 0LL, v1) )
  {
    v21 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v21 + 24) = v5;
    *(_QWORD *)(v21 + 32) = v1;
    WdLogEvent5_WdAssertion(v21);
  }
  if ( *(_DWORD *)(a1 + 88) != 3 )
    *(_QWORD *)(v3 + 224) = v1;
  *(_DWORD *)(v3 + 1552) = ((_BYTE)v7 + 1) & 0xF;
  _InterlockedAdd((volatile signed __int32 *)(v5 + 952), 0xFFFFFFFF);
  _InterlockedAdd((volatile signed __int32 *)(v3 + 2792), 0xFFFFFFFF);
  VidSchiStopExecutionTimeAtThisPriority(
    (struct _VIDSCH_NODE *)v3,
    *(_DWORD *)(v1 + 396),
    v8.QuadPart,
    PerformanceFrequency.QuadPart);
  v9 = *(_QWORD *)(v3 + 8LL * *(unsigned int *)(v3 + 1552) + 1560);
  if ( v9 )
    VidSchiStartExecutionTimeAtThisPriority((struct _VIDSCH_NODE *)v3, *(_DWORD *)(v9 + 396), v8.QuadPart);
  if ( *(int *)(v3 + 2776) > 0 )
  {
    v10 = *(_QWORD *)(v5 + 408);
    _bittestandset64(&v10, *(unsigned __int16 *)(v3 + 4));
    *(_QWORD *)(v5 + 408) = v10;
  }
  if ( !_InterlockedDecrement((volatile signed __int32 *)(v1 + 772)) )
  {
    if ( (*(_DWORD *)(v1 + 176) & 1) != 0 )
      *(_DWORD *)(v1 + 176) &= ~2u;
    else
      VidSchiUpdateContextStatus(v1, 0LL, 10977LL);
    --*(_DWORD *)(v3 + 4LL * *(unsigned int *)(v1 + 396) + 1712);
    v11 = *(unsigned int *)(v1 + 396);
    if ( !*(_DWORD *)(v3 + 4 * v11 + 1712) )
      *(_DWORD *)(v3 + 1708) &= ~(1 << v11);
  }
  if ( *(_DWORD *)(a1 + 88) == 3 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v3 + 2804), 0xFFFFFFFF);
    _InterlockedAdd((volatile signed __int32 *)(v3 + 2800), 0xFFFFFFFF);
    _InterlockedAdd((volatile signed __int32 *)(v5 + 956), 0xFFFFFFFF);
    _m_prefetchw((const void *)(v3 + 120));
    while ( _InterlockedCompareExchange64(
              (volatile signed __int64 *)(v3 + 120),
              *(_QWORD *)(a1 + 104),
              *(_QWORD *)(v3 + 120)) != *(_QWORD *)(a1 + 104) )
      ;
  }
  _InterlockedAdd((volatile signed __int32 *)(v5 + 948), 0xFFFFFFFF);
  _InterlockedAdd((volatile signed __int32 *)(v3 + 2788), 0xFFFFFFFF);
  _InterlockedAdd((volatile signed __int32 *)(v4 + 1196), 0xFFFFFFFF);
  _InterlockedAdd((volatile signed __int32 *)(v1 + 768), 0xFFFFFFFF);
  VidSchiCheckPendingDeviceCommand(v4);
  VidSchiProfilePerformanceTick(9, v5, v3, v12, 0LL, 0LL, a1, 0LL);
  VidSchiSignalRegisteredEvent(v5, v1 + 368);
  VidSchiSignalRegisteredEvent(v5, v3 + 408);
  VidSchiSignalRegisteredEvent(v5, v5 + 1800);
  *(_QWORD *)(v1 + 344) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v1 + 312), 0, 0);
  *(_QWORD *)(v3 + 272) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v3 + 240), 0, 0);
  *(_QWORD *)(v5 + 1608) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v5 + 1576), 0, 0);
  VidSchiSignalRegisteredEvent(v5, v3 + 424);
  VidSchiSignalRegisteredEvent(v5, v5 + 1816);
  *(_QWORD *)(v3 + 328) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v3 + 296), 0, 0);
  *(_QWORD *)(v5 + 1664) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v5 + 1632), 0, 0);
  v13 = *(struct _KEVENT **)(a1 + 200);
  if ( v13 )
    KeSetEvent(v13, 0, 0);
  if ( *(_DWORD *)(a1 + 88) == 3 )
  {
    v14 = *(_QWORD *)(v3 + 232);
    if ( v14 )
    {
      if ( (*(_DWORD *)(v14 + 176) & 1) != 0 )
      {
        v16 = (__int64 *)(v14 + 8);
        v17 = *(__int64 **)(v14 + 8);
        if ( v17[1] != v14 + 8 || (v18 = *(__int64 ***)(v14 + 16), *v18 != v16) )
          __fastfail(3u);
        *v18 = v17;
        v17[1] = (__int64)v18;
        v19 = 16LL * *(unsigned int *)(v14 + 396) + v3 + 1976;
        v20 = *(__int64 ***)(v19 + 8);
        if ( *v20 != (__int64 *)v19 )
          __fastfail(3u);
        *v16 = v19;
        *(_QWORD *)(v14 + 16) = v20;
        *v20 = v16;
        *(_QWORD *)(v19 + 8) = v16;
      }
      VidSchiDecrementContextReference((struct _VIDSCH_CONTEXT *)v14);
      *(_QWORD *)(v3 + 232) = 0LL;
    }
    *(_QWORD *)(v3 + 384) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v3 + 352), 0, 0);
    if ( *(_DWORD *)(v5 + 948) )
    {
      *(_QWORD *)(*(_QWORD *)(v4 + 32) + 1384LL) = MEMORY[0xFFFFF78000000320];
      KeSetEvent((PRKEVENT)(*(_QWORD *)(v4 + 32) + 1352LL), 0, 0);
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = MEMORY[0xFFFFF78000000320];
  *(_QWORD *)(a1 + 80) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(a1 + 72) = 16;
  return result;
}
