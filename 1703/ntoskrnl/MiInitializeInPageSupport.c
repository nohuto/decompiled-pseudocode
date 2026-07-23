/*
 * XREFs of MiInitializeInPageSupport @ 0x1400FC010
 * Callers:
 *     MiGetInPageSupportBlock @ 0x1400FBF70 (MiGetInPageSupportBlock.c)
 *     MiMakeOutswappedPageResident @ 0x14020B6DC (MiMakeOutswappedPageResident.c)
 *     MiPfIssueCoalescedSupport @ 0x140213D20 (MiPfIssueCoalescedSupport.c)
 *     MiGetReadyInPageBlock @ 0x1406B6334 (MiGetReadyInPageBlock.c)
 * Callees:
 *     PsGetPagePriorityThread @ 0x1400FBE90 (PsGetPagePriorityThread.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 */

char __fastcall MiInitializeInPageSupport(ULONG_PTR BugCheckParameter2, char a2)
{
  __int64 v2; // r9
  char v3; // r8
  struct _KTHREAD *CurrentThread; // rax
  unsigned int Queue; // ecx
  unsigned int PagePriorityThread; // ecx
  char v8; // dl
  __int64 v9; // rax

  *(_WORD *)(BugCheckParameter2 + 32) = 0;
  *(_BYTE *)(BugCheckParameter2 + 34) = 6;
  v2 = 0LL;
  *(_DWORD *)(BugCheckParameter2 + 36) = 0;
  v3 = a2;
  *(_QWORD *)(BugCheckParameter2 + 48) = BugCheckParameter2 + 40;
  *(_QWORD *)(BugCheckParameter2 + 40) = BugCheckParameter2 + 40;
  *(_WORD *)(BugCheckParameter2 + 56) = 0;
  *(_BYTE *)(BugCheckParameter2 + 58) = 6;
  *(_DWORD *)(BugCheckParameter2 + 60) = 0;
  *(_QWORD *)(BugCheckParameter2 + 72) = BugCheckParameter2 + 64;
  *(_QWORD *)(BugCheckParameter2 + 64) = BugCheckParameter2 + 64;
  *(_DWORD *)(BugCheckParameter2 + 188) = 0;
  if ( (a2 & 1) != 0 )
    *(_BYTE *)(BugCheckParameter2 + 189) |= 0x20u;
  *(_DWORD *)(BugCheckParameter2 + 176) = 1;
  *(_QWORD *)(BugCheckParameter2 + 248) = 0LL;
  *(_QWORD *)(BugCheckParameter2 + 200) = 0LL;
  *(_QWORD *)(BugCheckParameter2 + 192) = 0LL;
  *(_QWORD *)(BugCheckParameter2 + 24) = BugCheckParameter2 + 16;
  *(_QWORD *)(BugCheckParameter2 + 16) = BugCheckParameter2 + 16;
  *(_QWORD *)(BugCheckParameter2 + 160) = 0LL;
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(BugCheckParameter2 + 152) = CurrentThread;
  Queue = (unsigned int)CurrentThread[1].Queue;
  if ( (Queue & 0x100) != 0 )
    PagePriorityThread = (Queue >> 9) & 7;
  else
    PagePriorityThread = PsGetPagePriorityThread((__int64)CurrentThread);
  if ( PagePriorityThread > 5 )
  {
    LOBYTE(PagePriorityThread) = 5;
    v8 = 5;
  }
  else
  {
    *(_BYTE *)(BugCheckParameter2 + 191) |= 4u;
    if ( PagePriorityThread )
      v8 = PagePriorityThread - 1;
    else
      v8 = v2;
  }
  LOBYTE(v9) = *(_BYTE *)(BugCheckParameter2 + 190) & 0x88;
  *(_QWORD *)(BugCheckParameter2 + 208) = v2;
  *(_BYTE *)(BugCheckParameter2 + 190) = PagePriorityThread & 7 | v9 | (16 * (v8 & 7));
  if ( (v3 & 2) != 0 )
  {
    v9 = KeAbPreAcquire(BugCheckParameter2, 0LL);
    *(_QWORD *)(BugCheckParameter2 + 208) = v9;
    if ( v9 )
      *(_BYTE *)(v9 + 26) |= 1u;
  }
  return v9;
}
