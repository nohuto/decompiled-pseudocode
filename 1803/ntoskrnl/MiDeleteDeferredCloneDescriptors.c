/*
 * XREFs of MiDeleteDeferredCloneDescriptors @ 0x1400D2920
 * Callers:
 *     MiMakeHyperRangeAccessible @ 0x14000D2C0 (MiMakeHyperRangeAccessible.c)
 *     MiDeleteCloneZombies @ 0x1400C9564 (MiDeleteCloneZombies.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400E6200 (MiUnlockWorkingSetExclusive.c)
 *     MiFinishVadDeletion @ 0x1400F0F10 (MiFinishVadDeletion.c)
 *     MiDeleteVad @ 0x1400F1A40 (MiDeleteVad.c)
 *     MiGetVadWakeList @ 0x1400FD750 (MiGetVadWakeList.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x14002A570 (RtlAvlRemoveNode.c)
 *     RtlpInterlockedFlushSList @ 0x1401B2C50 (RtlpInterlockedFlushSList.c)
 */

_SLIST_ENTRY *__fastcall MiDeleteDeferredCloneDescriptors(__int64 a1)
{
  _SLIST_ENTRY *v2; // rsi
  PSLIST_ENTRY v3; // rdi
  unsigned __int64 *v4; // rbp
  _SLIST_ENTRY *v5; // rbx

  v2 = 0LL;
  v3 = RtlpInterlockedFlushSList((PSLIST_HEADER)(*(_QWORD *)(a1 + 1296) + 336LL));
  if ( v3 )
  {
    v4 = (unsigned __int64 *)(a1 + 912);
    do
    {
      v5 = v3 - 5;
      v3 = v3->Next;
      RtlAvlRemoveNode(v4, (__int64)v5);
      v5->Next = v2;
      v2 = v5;
    }
    while ( v3 );
  }
  return v2;
}
