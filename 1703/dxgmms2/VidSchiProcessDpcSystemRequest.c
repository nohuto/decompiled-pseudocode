/*
 * XREFs of VidSchiProcessDpcSystemRequest @ 0x1C000E3A0
 * Callers:
 *     VidSchDdiNotifyDpc @ 0x1C0005B10 (VidSchDdiNotifyDpc.c)
 *     VidSchiProcessDpcDmaPacket @ 0x1C002657C (VidSchiProcessDpcDmaPacket.c)
 * Callees:
 *     ?VidSchiStartExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K@Z @ 0x1C00010A0 (-VidSchiStartExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K@Z.c)
 *     VidSchiProfilePerformanceTick @ 0x1C00093B0 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUpdateContextStatus @ 0x1C000A0C0 (VidSchiUpdateContextStatus.c)
 *     ?VidSchiStopExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K1@Z @ 0x1C000D7A8 (-VidSchiStopExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K1@Z.c)
 *     VidSchiSignalRegisteredEvent @ 0x1C000E814 (VidSchiSignalRegisteredEvent.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1C000E8C8 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiDecrementContextReference @ 0x1C0010100 (VidSchiDecrementContextReference.c)
 */

__int64 __fastcall VidSchiProcessDpcSystemRequest(__int64 a1)
{
  signed __int64 v1; // rdi
  __int64 v3; // rbx
  __int64 v4; // r13
  __int64 v5; // rbp
  LARGE_INTEGER v6; // rax
  LARGE_INTEGER v7; // rdx
  LARGE_INTEGER v8; // rcx
  __int64 v9; // r15
  __int64 QuadPart; // r14
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r9
  struct _KEVENT *v15; // rcx
  __int64 v16; // rcx
  __int64 result; // rax
  __int64 *v18; // rdx
  __int64 *v19; // r8
  __int64 **v20; // rax
  __int64 v21; // r8
  __int64 **v22; // rax
  __int64 v23; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-48h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+90h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  v3 = *(_QWORD *)(v1 + 96);
  v4 = *(_QWORD *)(v1 + 104);
  v5 = *(_QWORD *)(v3 + 24);
  *(_QWORD *)(a1 + 80) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(a1 + 72) = 13;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v5 + 1880), &LockHandle);
  v6 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v9 = *(unsigned int *)(v3 + 1552);
  QuadPart = v6.QuadPart;
  if ( v1 != _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 8 * v9 + 1560), 0LL, v1) )
  {
    v23 = ((__int64 (__fastcall *)(_QWORD, _QWORD))WdLogNewEntry5_WdAssertion)(
            (LARGE_INTEGER)v8.QuadPart,
            (LARGE_INTEGER)v7.QuadPart);
    *(_QWORD *)(v23 + 24) = v5;
    *(_QWORD *)(v23 + 32) = v1;
    WdLogEvent5_WdAssertion(v23);
  }
  if ( *(_DWORD *)(a1 + 88) != 3 )
    *(_QWORD *)(v3 + 224) = v1;
  *(_DWORD *)(v3 + 1552) = ((_BYTE)v9 + 1) & 0xF;
  _InterlockedAdd((volatile signed __int32 *)(v5 + 952), 0xFFFFFFFF);
  _InterlockedAdd((volatile signed __int32 *)(v3 + 2768), 0xFFFFFFFF);
  VidSchiStopExecutionTimeAtThisPriority(
    (struct _VIDSCH_NODE *)v3,
    *(_DWORD *)(v1 + 396),
    QuadPart,
    PerformanceFrequency.QuadPart);
  v11 = *(_QWORD *)(v3 + 8LL * *(unsigned int *)(v3 + 1552) + 1560);
  if ( v11 )
    VidSchiStartExecutionTimeAtThisPriority((struct _VIDSCH_NODE *)v3, *(_DWORD *)(v11 + 396), QuadPart);
  if ( *(int *)(v3 + 2752) > 0 )
  {
    v12 = *(_QWORD *)(v5 + 400);
    _bittestandset64(&v12, *(unsigned __int16 *)(v3 + 4));
    *(_QWORD *)(v5 + 400) = v12;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 796), 0xFFFFFFFF) == 1 )
  {
    if ( (*(_DWORD *)(v1 + 176) & 1) != 0 )
      *(_DWORD *)(v1 + 176) &= ~2u;
    else
      VidSchiUpdateContextStatus(v1, 0LL, 10837LL);
    --*(_DWORD *)(v3 + 4LL * *(unsigned int *)(v1 + 396) + 1696);
    v13 = *(unsigned int *)(v1 + 396);
    if ( !*(_DWORD *)(v3 + 4 * v13 + 1696) )
      *(_DWORD *)(v3 + 1692) &= ~(1 << v13);
  }
  if ( *(_DWORD *)(a1 + 88) == 3 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v3 + 2780), 0xFFFFFFFF);
    _InterlockedAdd((volatile signed __int32 *)(v3 + 2776), 0xFFFFFFFF);
    _InterlockedAdd((volatile signed __int32 *)(v5 + 956), 0xFFFFFFFF);
    _m_prefetchw((const void *)(v3 + 120));
    while ( _InterlockedCompareExchange64(
              (volatile signed __int64 *)(v3 + 120),
              *(_QWORD *)(a1 + 104),
              *(_QWORD *)(v3 + 120)) != *(_QWORD *)(a1 + 104) )
      ;
  }
  _InterlockedAdd((volatile signed __int32 *)(v5 + 948), 0xFFFFFFFF);
  _InterlockedAdd((volatile signed __int32 *)(v3 + 2764), 0xFFFFFFFF);
  _InterlockedAdd((volatile signed __int32 *)(v4 + 1196), 0xFFFFFFFF);
  _InterlockedAdd((volatile signed __int32 *)(v1 + 792), 0xFFFFFFFF);
  VidSchiCheckPendingDeviceCommand(v4);
  VidSchiProfilePerformanceTick(9LL, v5, v3, v14, 0LL, 0LL, a1, 0LL);
  VidSchiSignalRegisteredEvent(v5, v1 + 368);
  VidSchiSignalRegisteredEvent(v5, v3 + 408);
  VidSchiSignalRegisteredEvent(v5, v5 + 1792);
  *(_QWORD *)(v1 + 344) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v1 + 312), 0, 0);
  *(_QWORD *)(v3 + 272) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v3 + 240), 0, 0);
  *(_QWORD *)(v5 + 1600) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v5 + 1568), 0, 0);
  VidSchiSignalRegisteredEvent(v5, v3 + 424);
  VidSchiSignalRegisteredEvent(v5, v5 + 1808);
  *(_QWORD *)(v3 + 328) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v3 + 296), 0, 0);
  *(_QWORD *)(v5 + 1656) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v5 + 1624), 0, 0);
  v15 = *(struct _KEVENT **)(a1 + 200);
  if ( v15 )
    KeSetEvent(v15, 0, 0);
  if ( *(_DWORD *)(a1 + 88) == 3 )
  {
    v16 = *(_QWORD *)(v3 + 232);
    if ( v16 )
    {
      if ( (*(_DWORD *)(v16 + 176) & 1) != 0 )
      {
        v18 = (__int64 *)(v16 + 8);
        v19 = *(__int64 **)(v16 + 8);
        v20 = *(__int64 ***)(v16 + 16);
        if ( v19[1] != v16 + 8 || *v20 != v18 )
          __fastfail(3u);
        *v20 = v19;
        v19[1] = (__int64)v20;
        v21 = 16LL * *(unsigned int *)(v16 + 396) + v3 + 1960;
        v22 = *(__int64 ***)(v21 + 8);
        if ( *v22 != (__int64 *)v21 )
          __fastfail(3u);
        *v18 = v21;
        *(_QWORD *)(v16 + 16) = v22;
        *v22 = v18;
        *(_QWORD *)(v21 + 8) = v18;
      }
      VidSchiDecrementContextReference((struct _VIDSCH_CONTEXT *)v16);
      *(_QWORD *)(v3 + 232) = 0LL;
    }
    *(_QWORD *)(v3 + 384) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v3 + 352), 0, 0);
    if ( *(_DWORD *)(v5 + 948) )
    {
      *(_QWORD *)(*(_QWORD *)(v4 + 32) + 1376LL) = MEMORY[0xFFFFF78000000320];
      KeSetEvent((PRKEVENT)(*(_QWORD *)(v4 + 32) + 1344LL), 0, 0);
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = MEMORY[0xFFFFF78000000320];
  *(_QWORD *)(a1 + 80) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(a1 + 72) = 16;
  return result;
}
