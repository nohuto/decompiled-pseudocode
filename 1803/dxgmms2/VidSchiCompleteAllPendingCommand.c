/*
 * XREFs of VidSchiCompleteAllPendingCommand @ 0x1C0033E60
 * Callers:
 *     VidSchiReportHwHang @ 0x1C0034304 (VidSchiReportHwHang.c)
 *     VidSchFlushAdapter @ 0x1C00BCEF0 (VidSchFlushAdapter.c)
 * Callees:
 *     VidSchIsTDRPending @ 0x1C000B250 (VidSchIsTDRPending.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x1C0012E90 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0012F08 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     VidSchiCompletePendingFlip @ 0x1C0015804 (VidSchiCompletePendingFlip.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     VidSchiCompletePreemption @ 0x1C002A904 (VidSchiCompletePreemption.c)
 *     ?VidSchiRundownHardwareContext@@YAXPEAUVIDSCH_HW_CONTEXT@@@Z @ 0x1C0031084 (-VidSchiRundownHardwareContext@@YAXPEAUVIDSCH_HW_CONTEXT@@@Z.c)
 *     VidSchiCompletePendingCommandInNodeHwQueue @ 0x1C0034008 (VidSchiCompletePendingCommandInNodeHwQueue.c)
 */

__int64 __fastcall VidSchiCompleteAllPendingCommand(__int64 a1)
{
  unsigned int v1; // esi
  unsigned int i; // r14d
  __int64 v4; // rbp
  _QWORD **v5; // rbp
  _QWORD *j; // rbx
  LARGE_INTEGER *v7; // rbx
  bool IsTDRPending; // al
  __int64 v9; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE v12; // [rsp+48h] [rbp-20h] BYREF

  v1 = 0;
  for ( i = 0; i < *(_DWORD *)(a1 + 64); ++i )
  {
    v4 = *(_QWORD *)(a1 + 8LL * i + 440);
    if ( (*(_DWORD *)(v4 + 12) & 2) != 0 )
    {
      AcquireSpinLock::AcquireSpinLock(
        (AcquireSpinLock *)&LockHandle,
        (unsigned __int64 *)(*(_QWORD *)(v4 + 24) + 1904LL),
        1,
        0);
      v5 = (_QWORD **)(v4 + 1688);
      for ( j = *v5; j != v5; j = (_QWORD *)*j )
        VidSchiRundownHardwareContext((struct VIDSCH_HW_CONTEXT *)(j - 13));
      AcquireSpinLock::Release((AcquireSpinLock *)&LockHandle);
    }
    else
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1904), &LockHandle);
      v7 = (LARGE_INTEGER *)(*(_QWORD *)(v4 + 184) + 112LL * *(unsigned int *)(v4 + 196));
      memset(v7, 0, 0x70uLL);
      *(_DWORD *)(v4 + 196) = (*(_DWORD *)(v4 + 196) + 1) & (*(_DWORD *)(v4 + 192) - 1);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v7->LowPart = 7;
      v7[1] = KeQueryPerformanceCounter(0LL);
      v7[2] = *(LARGE_INTEGER *)(v4 + 152);
      LOBYTE(v7[3].LowPart) = *(_BYTE *)(a1 + 2884) & 1;
      IsTDRPending = VidSchIsTDRPending(a1);
      BYTE2(v7[3].u.LowPart) = 0;
      BYTE1(v7[3].LowPart) = IsTDRPending;
      VidSchiCompletePendingCommandInNodeHwQueue(v4, *(_QWORD *)(v4 + 152), 0LL);
      v9 = *(_QWORD *)(v4 + 168);
      *(_QWORD *)(v4 + 64) = v9;
      *(_QWORD *)(v4 + 72) = v9;
      VidSchiCompletePreemption(v4);
    }
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1904), &v12);
  if ( *(_DWORD *)(a1 + 40) )
  {
    do
      VidSchiCompletePendingFlip(a1, v1++, 9u);
    while ( v1 < *(_DWORD *)(a1 + 40) );
  }
  KeReleaseInStackQueuedSpinLock(&v12);
  return 0LL;
}
