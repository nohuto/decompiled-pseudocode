/*
 * XREFs of SmpRecordControlBlock @ 0x140001CD4
 * Callers:
 *     SmpStartCsr @ 0x140001D90 (SmpStartCsr.c)
 * Callees:
 *     SmpInsertControlBlock @ 0x140001D40 (SmpInsertControlBlock.c)
 */

__int64 __fastcall SmpRecordControlBlock(__int64 a1)
{
  struct _RTL_SPLAY_LINKS *v1; // rdi
  int inserted; // eax
  struct _RTL_SPLAY_LINKS *v4; // rdx

  v1 = (struct _RTL_SPLAY_LINKS *)(a1 + 104);
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 104) = a1 + 104;
  ++*(_DWORD *)(a1 + 4);
  RtlAcquireSRWLockExclusive(&SmpControlLock);
  inserted = SmpInsertControlBlock(SmpControlBlockRoot, a1);
  v4 = SmpControlBlockRoot;
  if ( inserted )
    v4 = v1;
  SmpControlBlockRoot = v4;
  return RtlReleaseSRWLockExclusive(&SmpControlLock);
}
