/*
 * XREFs of MouseClassCancel @ 0x1C00024C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MouseClassCancel(__int64 a1, IRP *a2)
{
  __int64 v2; // rdi
  KIRQL v4; // al
  struct _LIST_ENTRY *Flink; // r9
  struct _LIST_ENTRY *Blink; // rdx

  v2 = *(_QWORD *)(a1 + 64);
  IoReleaseCancelSpinLock(a2->CancelIrql);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 144));
  Flink = a2->Tail.Overlay.ListEntry.Flink;
  if ( (PVOID *)Flink->Blink != &a2->Tail.CompletionKey + 6
    || (Blink = a2->Tail.Overlay.ListEntry.Blink, (PVOID *)Blink->Flink != &a2->Tail.CompletionKey + 6) )
  {
    __fastfail(3u);
  }
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 144), v4);
  a2->IoStatus.Status = -1073741536;
  IofCompleteRequest(a2, 0);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v2 + 32), a2, 0x20u);
}
