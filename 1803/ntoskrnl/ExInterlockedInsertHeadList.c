/*
 * XREFs of ExInterlockedInsertHeadList @ 0x1400B1F00
 * Callers:
 *     CcCanIWrite @ 0x140089AA0 (CcCanIWrite.c)
 *     CcDeferWrite @ 0x14021FEA0 (CcDeferWrite.c)
 *     ViAllocateMapRegisterFile @ 0x14081A0D8 (ViAllocateMapRegisterFile.c)
 *     ViHookDmaAdapter @ 0x14081B61C (ViHookDmaAdapter.c)
 *     ViScatterGatherCallback @ 0x14081BD20 (ViScatterGatherCallback.c)
 *     ViSpecialAllocateCommonBuffer @ 0x14081BDBC (ViSpecialAllocateCommonBuffer.c)
 * Callees:
 *     ExpReleaseSpinLockDisabled @ 0x1400B206C (ExpReleaseSpinLockDisabled.c)
 *     ExpAcquireSpinLockDisabled @ 0x1400B209C (ExpAcquireSpinLockDisabled.c)
 */

PLIST_ENTRY __stdcall ExInterlockedInsertHeadList(PLIST_ENTRY ListHead, PLIST_ENTRY ListEntry, PKSPIN_LOCK Lock)
{
  char v6; // al
  __int64 v7; // rdx
  struct _LIST_ENTRY *Flink; // rbx

  v6 = ExpAcquireSpinLockDisabled(Lock);
  Flink = ListHead->Flink;
  if ( ListHead->Flink->Blink != ListHead )
    __fastfail(3u);
  ListEntry->Flink = Flink;
  LOBYTE(v7) = v6;
  ListEntry->Blink = ListHead;
  Flink->Blink = ListEntry;
  ListHead->Flink = ListEntry;
  ExpReleaseSpinLockDisabled(Lock, v7);
  if ( Flink == ListHead )
    return 0LL;
  return Flink;
}
