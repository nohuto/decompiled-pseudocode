/*
 * XREFs of VidSchiUnwaitAllContexts @ 0x1C0028350
 * Callers:
 *     VidSchiReportHwHang @ 0x1C002AF80 (VidSchiReportHwHang.c)
 *     VidSchFlushAdapter @ 0x1C00AB9E0 (VidSchFlushAdapter.c)
 * Callees:
 *     ?VidSchiUnwaitAllContextsInList@@YAXPEAU_LIST_ENTRY@@@Z @ 0x1C0023B8C (-VidSchiUnwaitAllContextsInList@@YAXPEAU_LIST_ENTRY@@@Z.c)
 */

LONG __fastcall VidSchiUnwaitAllContexts(__int64 a1)
{
  __int64 i; // rsi
  __int64 v3; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1880), &LockHandle);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 60); i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)(a1 + 8 * i + 416);
    VidSchiUnwaitAllContextsInList((struct _LIST_ENTRY *)(v3 + 2520));
    VidSchiUnwaitAllContextsInList((struct _LIST_ENTRY *)(v3 + 2472));
    VidSchiUnwaitAllContextsInList((struct _LIST_ENTRY *)(v3 + 2504));
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  *(_QWORD *)(a1 + 1376) = MEMORY[0xFFFFF78000000320];
  return KeSetEvent((PRKEVENT)(a1 + 1344), 0, 0);
}
