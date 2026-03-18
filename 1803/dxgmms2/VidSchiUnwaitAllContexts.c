/*
 * XREFs of VidSchiUnwaitAllContexts @ 0x1C002D4E4
 * Callers:
 *     VidSchiReportHwHang @ 0x1C0034304 (VidSchiReportHwHang.c)
 *     VidSchFlushAdapter @ 0x1C00BCEF0 (VidSchFlushAdapter.c)
 * Callees:
 *     ?VidSchiUnwaitAllContextsInList@@YAXPEAU_LIST_ENTRY@@@Z @ 0x1C00287D0 (-VidSchiUnwaitAllContextsInList@@YAXPEAU_LIST_ENTRY@@@Z.c)
 */

LONG __fastcall VidSchiUnwaitAllContexts(__int64 a1)
{
  __int64 i; // rsi
  __int64 v3; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1904), &LockHandle);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 64); i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)(a1 + 8 * i + 440);
    VidSchiUnwaitAllContextsInList((struct _LIST_ENTRY *)(v3 + 2568));
    VidSchiUnwaitAllContextsInList((struct _LIST_ENTRY *)(v3 + 2520));
    VidSchiUnwaitAllContextsInList((struct _LIST_ENTRY *)(v3 + 2552));
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  *(_QWORD *)(a1 + 1400) = MEMORY[0xFFFFF78000000320];
  return KeSetEvent((PRKEVENT)(a1 + 1368), 0, 0);
}
