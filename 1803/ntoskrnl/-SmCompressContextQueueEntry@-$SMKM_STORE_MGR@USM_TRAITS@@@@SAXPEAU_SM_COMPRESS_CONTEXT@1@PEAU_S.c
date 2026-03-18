/*
 * XREFs of ?SmCompressContextQueueEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x14008C980
 * Callers:
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14008C6C4 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressContextQueueEntry(struct _KEVENT *SpinLock, __int64 a2)
{
  struct _LIST_ENTRY *v3; // rbx
  KIRQL v4; // si
  __int64 result; // rax

  v3 = (struct _LIST_ENTRY *)(a2 + 72);
  v4 = ExAcquireSpinLockExclusive(&SpinLock->Header.Lock);
  v3->Flink = (struct _LIST_ENTRY *)((char *)&SpinLock->Header.WaitListHead.Blink->Flink->Flink + 1);
  SpinLock->Header.WaitListHead.Blink->Flink = v3;
  SpinLock->Header.WaitListHead.Blink = v3;
  if ( v3->Flink == (struct _LIST_ENTRY *)1 )
    KeSetEvent(SpinLock + 1, 0, 0);
  ExReleaseSpinLockExclusiveFromDpcLevel(&SpinLock->Header.Lock);
  result = v4;
  __writecr8(v4);
  return result;
}
