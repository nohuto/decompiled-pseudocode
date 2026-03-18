/*
 * XREFs of ExInterlockedInsertTailList @ 0x1400225E0
 * Callers:
 *     CcCanIWrite @ 0x14000D980 (CcCanIWrite.c)
 *     IoWMIWriteEvent @ 0x140148670 (IoWMIWriteEvent.c)
 *     CcDeferWrite @ 0x1401DD930 (CcDeferWrite.c)
 *     WheapWorkQueueAddItem @ 0x140260714 (WheapWorkQueueAddItem.c)
 *     IoInitializeTimer @ 0x1405DA990 (IoInitializeTimer.c)
 *     VfAllocateAdapterChannel @ 0x1407689C0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140768BA0 (VfAllocateAdapterChannelEx.c)
 * Callees:
 *     ExpAcquireSpinLockDisabled @ 0x140022648 (ExpAcquireSpinLockDisabled.c)
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
