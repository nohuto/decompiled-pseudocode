/*
 * XREFs of VidSchiSetTransferContextRunningTime @ 0x1C00106F0
 * Callers:
 *     VidSchiIsQuantumLeft @ 0x1C000D300 (VidSchiIsQuantumLeft.c)
 *     VidSchiDrainContextFromWorkerThread @ 0x1C0025BD0 (VidSchiDrainContextFromWorkerThread.c)
 *     VidSchiRun_PriorityTable @ 0x1C00766C0 (VidSchiRun_PriorityTable.c)
 * Callees:
 *     VidSchiIncrementContextReference @ 0x1C00100A0 (VidSchiIncrementContextReference.c)
 *     VidSchiDecrementContextReference @ 0x1C0010100 (VidSchiDecrementContextReference.c)
 */

void __fastcall VidSchiSetTransferContextRunningTime(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bl
  struct _VIDSCH_CONTEXT *v6; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = a3;
  if ( !(_BYTE)a3 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) + 1880LL), &LockHandle);
  if ( (*(_DWORD *)(a1 + 176) & 2) == 0 )
  {
    if ( a2 )
      VidSchiIncrementContextReference(a2, a2, a3);
    v6 = *(struct _VIDSCH_CONTEXT **)(a1 + 504);
    if ( v6 )
    {
      VidSchiDecrementContextReference(v6, 1);
      *(_QWORD *)(a1 + 504) = 0LL;
    }
    *(_QWORD *)(a1 + 504) = a2;
  }
  if ( !v3 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
}
