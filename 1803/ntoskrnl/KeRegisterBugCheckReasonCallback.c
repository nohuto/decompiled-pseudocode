/*
 * XREFs of KeRegisterBugCheckReasonCallback @ 0x140169850
 * Callers:
 *     HvlpInitializeHvCrashdump @ 0x14022D040 (HvlpInitializeHvCrashdump.c)
 *     SmPrepareForFatalHeapCorruption @ 0x1402A8F98 (SmPrepareForFatalHeapCorruption.c)
 *     SmPrepareForFatalPageError @ 0x1402A90EC (SmPrepareForFatalPageError.c)
 *     PspInitPhase0 @ 0x1408A0D54 (PspInitPhase0.c)
 *     EtwpInitialize @ 0x1408A3474 (EtwpInitialize.c)
 *     InitBootProcessor @ 0x1408A6138 (InitBootProcessor.c)
 *     PopRecorderInit @ 0x1408C5424 (PopRecorderInit.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x1400347F0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KiCheckForDuplicateBugCheckCallback @ 0x140169940 (KiCheckForDuplicateBugCheckCallback.c)
 */

BOOLEAN __stdcall KeRegisterBugCheckReasonCallback(
        PKBUGCHECK_REASON_CALLBACK_RECORD CallbackRecord,
        PKBUGCHECK_REASON_CALLBACK_ROUTINE CallbackRoutine,
        KBUGCHECK_CALLBACK_REASON Reason,
        PUCHAR Component)
{
  __int64 v5; // rsi
  BOOLEAN v8; // di
  unsigned __int8 CurrentIrql; // r15
  __int64 *v10; // rcx
  struct _LIST_ENTRY *v11; // rcx
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *Blink; // rax

  v5 = Reason;
  v8 = 1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  KxAcquireSpinLock(&KeBugCheckCallbackLock);
  if ( CallbackRecord->State )
    goto LABEL_10;
  if ( (_DWORD)v5 == 4 || (v10 = (__int64 *)&KeBugCheckReasonCallbackListHead, (_DWORD)v5 == 6) )
    v10 = &KeBugCheckAddRemovePagesCallbackListHead;
  if ( (unsigned __int8)KiCheckForDuplicateBugCheckCallback(v10, CallbackRecord) )
  {
LABEL_10:
    v8 = 0;
  }
  else
  {
    CallbackRecord->CallbackRoutine = CallbackRoutine;
    CallbackRecord->Reason = v5;
    CallbackRecord->Component = Component;
    CallbackRecord->Checksum = (ULONG_PTR)CallbackRoutine + v5 + (_QWORD)Component;
    CallbackRecord->State = 1;
    if ( (_DWORD)v5 == 7 )
    {
      Blink = v11->Blink;
      if ( Blink->Flink != v11 )
        __fastfail(3u);
      CallbackRecord->Entry.Flink = v11;
      CallbackRecord->Entry.Blink = Blink;
      Blink->Flink = &CallbackRecord->Entry;
      v11->Blink = &CallbackRecord->Entry;
    }
    else
    {
      Flink = v11->Flink;
      if ( v11->Flink->Blink != v11 )
        __fastfail(3u);
      CallbackRecord->Entry.Flink = Flink;
      CallbackRecord->Entry.Blink = v11;
      Flink->Blink = &CallbackRecord->Entry;
      v11->Flink = &CallbackRecord->Entry;
    }
  }
  KxReleaseSpinLock(&KeBugCheckCallbackLock);
  __writecr8(CurrentIrql);
  return v8;
}
