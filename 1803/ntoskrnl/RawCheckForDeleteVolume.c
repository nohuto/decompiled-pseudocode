/*
 * XREFs of RawCheckForDeleteVolume @ 0x14014D70C
 * Callers:
 *     RawScanDeletedList @ 0x1404953E0 (RawScanDeletedList.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     KeReleaseQueuedSpinLock @ 0x140068140 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400DF7F0 (KeAcquireQueuedSpinLock.c)
 *     RawCleanupVcb @ 0x1404942A0 (RawCleanupVcb.c)
 *     RawDeleteVcb @ 0x14053FEDC (RawDeleteVcb.c)
 */

char __fastcall RawCheckForDeleteVolume(PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader)
{
  char v1; // si
  KIRQL v3; // al
  int v4; // ebx
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rdx

  v1 = 0;
  if ( !LODWORD(AdvancedHeader[1].Resource) )
  {
    v3 = KeAcquireQueuedSpinLock(9uLL);
    v4 = *((_DWORD *)AdvancedHeader[1].FileContextSupportPointer + 7);
    KeReleaseQueuedSpinLock(9uLL, v3);
    if ( !v4 )
    {
      Flink = AdvancedHeader[1].FilterContexts.Flink;
      if ( Flink->Blink != &AdvancedHeader[1].FilterContexts
        || (Blink = AdvancedHeader[1].FilterContexts.Blink, Blink->Flink != &AdvancedHeader[1].FilterContexts) )
      {
        __fastfail(3u);
      }
      Blink->Flink = Flink;
      Flink->Blink = Blink;
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)&AdvancedHeader[2].PagingIoResource);
      RawCleanupVcb(AdvancedHeader);
      RawDeleteVcb(AdvancedHeader);
      return 1;
    }
  }
  return v1;
}
