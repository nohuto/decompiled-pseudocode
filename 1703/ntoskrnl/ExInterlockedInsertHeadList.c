/*
 * XREFs of ExInterlockedInsertHeadList @ 0x140022570
 * Callers:
 *     CcCanIWrite @ 0x14000D980 (CcCanIWrite.c)
 *     CcDeferWrite @ 0x1401DD930 (CcDeferWrite.c)
 *     ViAllocateMapRegisterFile @ 0x14076B29C (ViAllocateMapRegisterFile.c)
 *     ViHookDmaAdapter @ 0x14076C7EC (ViHookDmaAdapter.c)
 *     ViScatterGatherCallback @ 0x14076CEF0 (ViScatterGatherCallback.c)
 *     ViSpecialAllocateCommonBuffer @ 0x14076CF8C (ViSpecialAllocateCommonBuffer.c)
 * Callees:
 *     ExpAcquireSpinLockDisabled @ 0x140022648 (ExpAcquireSpinLockDisabled.c)
 */

PLIST_ENTRY __stdcall ExInterlockedInsertHeadList(PLIST_ENTRY ListHead, PLIST_ENTRY ListEntry, PKSPIN_LOCK Lock)
{
  char v6; // cl
  PLIST_ENTRY result; // rax

  v6 = ExpAcquireSpinLockDisabled(Lock);
  result = ListHead->Flink;
  if ( ListHead->Flink->Blink != ListHead )
    __fastfail(3u);
  ListEntry->Flink = result;
  ListEntry->Blink = ListHead;
  result->Blink = ListEntry;
  ListHead->Flink = ListEntry;
  _InterlockedAnd64((volatile signed __int64 *)Lock, 0LL);
  if ( v6 )
    _enable();
  if ( result == ListHead )
    return 0LL;
  return result;
}
