/*
 * XREFs of ExInterlockedInsertTailList @ 0x140115950
 * Callers:
 *     CcCanIWrite @ 0x1400F4620 (CcCanIWrite.c)
 *     IoWMIWriteEvent @ 0x1401157E0 (IoWMIWriteEvent.c)
 *     CcDeferWrite @ 0x1401E08A0 (CcDeferWrite.c)
 *     WheapWorkQueueAddItem @ 0x14028A2E4 (WheapWorkQueueAddItem.c)
 *     IoInitializeTimer @ 0x1406B7650 (IoInitializeTimer.c)
 *     VfAllocateAdapterChannel @ 0x1407AA640 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1407AA820 (VfAllocateAdapterChannelEx.c)
 * Callees:
 *     ExpAcquireSpinLockDisabled @ 0x1401159B8 (ExpAcquireSpinLockDisabled.c)
 */

PLIST_ENTRY __stdcall ExInterlockedInsertTailList(PLIST_ENTRY ListHead, PLIST_ENTRY ListEntry, PKSPIN_LOCK Lock)
{
  char v6; // cl
  PLIST_ENTRY result; // rax

  v6 = ExpAcquireSpinLockDisabled(Lock);
  result = ListHead->Blink;
  if ( result->Flink != ListHead )
    __fastfail(3u);
  ListEntry->Flink = ListHead;
  ListEntry->Blink = result;
  result->Flink = ListEntry;
  ListHead->Blink = ListEntry;
  _InterlockedAnd64((volatile signed __int64 *)Lock, 0LL);
  if ( v6 )
    _enable();
  if ( result == ListHead )
    return 0LL;
  return result;
}
