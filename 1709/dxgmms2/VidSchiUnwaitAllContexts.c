/*
 * XREFs of VidSchiUnwaitAllContexts @ 0x1C002A4FC
 * Callers:
 *     VidSchiReportHwHang @ 0x1C002CA7C (VidSchiReportHwHang.c)
 *     VidSchFlushAdapter @ 0x1C00B4320 (VidSchFlushAdapter.c)
 * Callees:
 *     ?VidSchiUnwaitAllContextsInList@@YAXPEAU_LIST_ENTRY@@@Z @ 0x1C0025C1C (-VidSchiUnwaitAllContextsInList@@YAXPEAU_LIST_ENTRY@@@Z.c)
 */

LONG __fastcall VidSchiUnwaitAllContexts(__int64 a1)
{
  __int64 i; // rsi
  __int64 v3; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1888), &LockHandle);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 60); i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)(a1 + 8 * i + 424);
    VidSchiUnwaitAllContextsInList((struct _LIST_ENTRY *)(v3 + 2536));
    VidSchiUnwaitAllContextsInList((struct _LIST_ENTRY *)(v3 + 2488));
    VidSchiUnwaitAllContextsInList((struct _LIST_ENTRY *)(v3 + 2520));
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  *(_QWORD *)(a1 + 1384) = MEMORY[0xFFFFF78000000320];
  return KeSetEvent((PRKEVENT)(a1 + 1352), 0, 0);
}
