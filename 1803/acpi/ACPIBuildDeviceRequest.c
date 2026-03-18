/*
 * XREFs of ACPIBuildDeviceRequest @ 0x1C000AA00
 * Callers:
 *     OSNotifyCreateDevice @ 0x1C002E708 (OSNotifyCreateDevice.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1C0002FF4 (ExFreeToNPagedLookasideList.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1C0003CBC (ExAllocateFromNPagedLookasideList.c)
 *     memset @ 0x1C0004540 (memset.c)
 */

__int64 __fastcall ACPIBuildDeviceRequest(__int64 a1)
{
  PVOID v2; // rax
  __int64 v3; // rbx
  __int64 *v5; // rax

  v2 = ExAllocateFromNPagedLookasideList(&BuildRequestLookAsideList);
  v3 = (__int64)v2;
  if ( !v2 )
    return 3221225626LL;
  if ( *(_DWORD *)(a1 + 684) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 684));
    memset(v2, 0, 0x88uLL);
    *(_DWORD *)(v3 + 48) = 0;
    *(_QWORD *)(v3 + 64) = 0LL;
    *(_QWORD *)(v3 + 72) = 0LL;
    *(_QWORD *)(v3 + 128) = &AcpiBuildDeviceList;
    *(_DWORD *)(v3 + 16) = 1599293264;
    *(_DWORD *)(v3 + 24) = 3;
    *(_QWORD *)(v3 + 40) = a1;
    *(_DWORD *)(v3 + 20) = 4105;
    KeAcquireSpinLockAtDpcLevel(&AcpiBuildQueueLock);
    if ( AcpiTableLoadDelta )
      *(_DWORD *)(v3 + 20) |= 0x40u;
    v5 = (__int64 *)qword_1C00673D8;
    if ( *(__int64 **)qword_1C00673D8 != &AcpiBuildQueueList )
      __fastfail(3u);
    *(_QWORD *)v3 = &AcpiBuildQueueList;
    *(_QWORD *)(v3 + 8) = v5;
    *v5 = v3;
    qword_1C00673D8 = v3;
    KeReleaseSpinLockFromDpcLevel(&AcpiBuildQueueLock);
    return 259LL;
  }
  else
  {
    ExFreeToNPagedLookasideList(&BuildRequestLookAsideList, v2);
    return 3221226166LL;
  }
}
