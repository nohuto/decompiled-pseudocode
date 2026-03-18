/*
 * XREFs of PiDmaGuardQueueInsertEntry @ 0x1406D463C
 * Callers:
 *     PiDmaGuardProcessPostRemove @ 0x14055DC84 (PiDmaGuardProcessPostRemove.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PipDgqInsertEntry @ 0x1406D46DC (PipDgqInsertEntry.c)
 */

__int64 __fastcall PiDmaGuardQueueInsertEntry(PVOID Object)
{
  unsigned int v2; // ebx
  _QWORD *PoolWithTag; // rdi

  v2 = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x64706E50u);
  if ( PoolWithTag )
  {
    ObfReferenceObjectWithTag(Object, 0x64706E50u);
    PoolWithTag[2] = Object;
    PipDgqInsertEntry(PoolWithTag);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
