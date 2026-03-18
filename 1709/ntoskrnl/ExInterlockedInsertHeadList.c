/*
 * XREFs of ExInterlockedInsertHeadList @ 0x1401158E0
 * Callers:
 *     CcCanIWrite @ 0x1400F4620 (CcCanIWrite.c)
 *     CcDeferWrite @ 0x1401E08A0 (CcDeferWrite.c)
 *     ViAllocateMapRegisterFile @ 0x1407ACF6C (ViAllocateMapRegisterFile.c)
 *     ViHookDmaAdapter @ 0x1407AE4B8 (ViHookDmaAdapter.c)
 *     ViScatterGatherCallback @ 0x1407AEBB0 (ViScatterGatherCallback.c)
 *     ViSpecialAllocateCommonBuffer @ 0x1407AEC4C (ViSpecialAllocateCommonBuffer.c)
 * Callees:
 *     ExpAcquireSpinLockDisabled @ 0x1401159B8 (ExpAcquireSpinLockDisabled.c)
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
