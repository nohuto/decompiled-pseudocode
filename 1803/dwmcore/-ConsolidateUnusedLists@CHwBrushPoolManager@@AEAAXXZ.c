/*
 * XREFs of ?ConsolidateUnusedLists@CHwBrushPoolManager@@AEAAXXZ @ 0x1800D99B8
 * Callers:
 *     ?ReleaseUnusedBrushes@CHwBrushPoolManager@@QEAAXXZ @ 0x1800D998C (-ReleaseUnusedBrushes@CHwBrushPoolManager@@QEAAXXZ.c)
 *     ?AllocateHwBrush@CHwBrushPoolManager@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@QEAPEAVCHwBrush@@@Z @ 0x1801F6B30 (-AllocateHwBrush@CHwBrushPoolManager@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@QEAPEAVCHwBrush@@.c)
 * Callees:
 *     <none>
 */

void __fastcall CHwBrushPoolManager::ConsolidateUnusedLists(union _SLIST_HEADER *this)
{
  PSLIST_ENTRY v2; // rax
  PSLIST_ENTRY v3; // r9
  PSLIST_ENTRY v4; // r8
  _QWORD *p_Next; // rcx
  PSLIST_ENTRY v6; // rdx
  ULONGLONG Alignment; // rax

  v2 = InterlockedFlushSList(this + 1);
  if ( v2 )
  {
    v3 = 0LL;
    v4 = v2 - 3;
    do
    {
      p_Next = &v2->Next;
      v6 = v2 - 3;
      v2 = v2->Next;
      *p_Next = v3;
      v3 = v6;
      ++LODWORD(this[3].Alignment);
    }
    while ( v2 );
    Alignment = this[4].Alignment;
    if ( Alignment )
      *(_QWORD *)(Alignment + 48) = v6;
    else
      this[3].Region = (ULONGLONG)v6;
    this[4].Alignment = (ULONGLONG)v4;
  }
}
