/*
 * XREFs of KeDeregisterBugCheckReasonCallback @ 0x140157850
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140061000 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 */

BOOLEAN __stdcall KeDeregisterBugCheckReasonCallback(PKBUGCHECK_REASON_CALLBACK_RECORD CallbackRecord)
{
  unsigned __int8 CurrentIrql; // si
  BOOLEAN v3; // di
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  KxAcquireSpinLock(&KeBugCheckCallbackLock);
  v3 = 0;
  if ( CallbackRecord->State == 1 )
  {
    CallbackRecord->State = 0;
    Flink = CallbackRecord->Entry.Flink;
    if ( (PKBUGCHECK_REASON_CALLBACK_RECORD)CallbackRecord->Entry.Flink->Blink != CallbackRecord
      || (Blink = CallbackRecord->Entry.Blink, (PKBUGCHECK_REASON_CALLBACK_RECORD)Blink->Flink != CallbackRecord) )
    {
      __fastfail(3u);
    }
    Blink->Flink = Flink;
    v3 = 1;
    Flink->Blink = Blink;
  }
  KxReleaseSpinLock(&KeBugCheckCallbackLock);
  __writecr8(CurrentIrql);
  return v3;
}
