/*
 * XREFs of VidSchiNeedToForcePreemptNode @ 0x1C0010794
 * Callers:
 *     VidSchiCheckHwProgress @ 0x1C006B650 (VidSchiCheckHwProgress.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1C00093B0 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUpdateLastCompletedPresentTimestamp @ 0x1C000A670 (VidSchiUpdateLastCompletedPresentTimestamp.c)
 *     VidSchiIncrementContextReference @ 0x1C00100A0 (VidSchiIncrementContextReference.c)
 */

char __fastcall VidSchiNeedToForcePreemptNode(__int64 a1)
{
  __int64 v1; // rbp
  char v3; // si
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // r9
  __int64 v10; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 24);
  v3 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 1880), &LockHandle);
  if ( *(_DWORD *)(a1 + 2768) && !*(_DWORD *)(a1 + 2776) )
  {
    v7 = *(_QWORD *)(a1 + 96);
    if ( v7 == *(_QWORD *)(a1 + 136) )
    {
      v8 = *(_QWORD *)(a1 + 8LL * *(unsigned int *)(a1 + 1552) + 1560);
      *(_QWORD *)(a1 + 232) = v8;
      VidSchiIncrementContextReference(v8, v4, v5);
      v3 = 1;
      VidSchiProfilePerformanceTick(1LL, v1, a1, v9, v8, 0LL, 0LL, -18LL);
    }
    else if ( v7 == *(_QWORD *)(a1 + 144) )
    {
      v10 = *(_QWORD *)(a1 + 8LL * *(unsigned int *)(a1 + 1552) + 1560);
      if ( v10 )
        VidSchiUpdateLastCompletedPresentTimestamp(v10, 0, 1);
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v3;
}
