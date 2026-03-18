/*
 * XREFs of VidSchiCompleteAllPendingCommand @ 0x1C002AAF8
 * Callers:
 *     VidSchiReportHwHang @ 0x1C002AF80 (VidSchiReportHwHang.c)
 *     VidSchFlushAdapter @ 0x1C00AB9E0 (VidSchFlushAdapter.c)
 * Callees:
 *     VidSchIsTDRPending @ 0x1C00096C0 (VidSchIsTDRPending.c)
 *     VidSchiCompletePendingFlip @ 0x1C0013B4C (VidSchiCompletePendingFlip.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     VidSchiCompletePreemption @ 0x1C0025B64 (VidSchiCompletePreemption.c)
 *     VidSchiCompletePendingCommandInNodeHwQueue @ 0x1C002AC84 (VidSchiCompletePendingCommandInNodeHwQueue.c)
 */

__int64 __fastcall VidSchiCompleteAllPendingCommand(__int64 a1)
{
  unsigned int v1; // ebp
  unsigned int i; // r15d
  __int64 v4; // rbx
  LARGE_INTEGER *v5; // rdi
  bool IsTDRPending; // al
  __int64 v7; // rcx
  __int64 v8; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE v11; // [rsp+38h] [rbp-30h] BYREF

  v1 = 0;
  for ( i = 0; i < *(_DWORD *)(a1 + 60); ++i )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1880), &LockHandle);
    v4 = *(_QWORD *)(a1 + 8LL * i + 416);
    v5 = (LARGE_INTEGER *)(*(_QWORD *)(v4 + 184) + 112LL * *(unsigned int *)(v4 + 196));
    memset(v5, 0, 0x70uLL);
    *(_DWORD *)(v4 + 196) = (*(_DWORD *)(v4 + 196) + 1) & (*(_DWORD *)(v4 + 192) - 1);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v5->LowPart = 7;
    v5[1] = KeQueryPerformanceCounter(0LL);
    v5[2] = *(LARGE_INTEGER *)(*(_QWORD *)(a1 + 8LL * i + 416) + 152LL);
    LOBYTE(v5[3].LowPart) = *(_BYTE *)(a1 + 2844) & 1;
    IsTDRPending = VidSchIsTDRPending(a1);
    BYTE2(v5[3].u.LowPart) = 0;
    BYTE1(v5[3].LowPart) = IsTDRPending;
    v7 = *(_QWORD *)(a1 + 8LL * i + 416);
    VidSchiCompletePendingCommandInNodeHwQueue(v7, *(_QWORD *)(v7 + 152), 0LL);
    *(_QWORD *)(*(_QWORD *)(a1 + 8LL * i + 416) + 64LL) = *(_QWORD *)(*(_QWORD *)(a1 + 8LL * i + 416) + 168LL);
    v8 = *(_QWORD *)(a1 + 8LL * i + 416);
    *(_QWORD *)(v8 + 72) = *(_QWORD *)(v8 + 64);
    VidSchiCompletePreemption(*(_QWORD *)(a1 + 8LL * i + 416));
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1880), &v11);
  if ( *(_DWORD *)(a1 + 40) )
  {
    do
      VidSchiCompletePendingFlip(a1, v1++, 9);
    while ( v1 < *(_DWORD *)(a1 + 40) );
  }
  KeReleaseInStackQueuedSpinLock(&v11);
  return 0LL;
}
