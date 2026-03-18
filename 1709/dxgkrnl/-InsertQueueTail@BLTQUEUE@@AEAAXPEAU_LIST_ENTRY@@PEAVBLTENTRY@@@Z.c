/*
 * XREFs of ?InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z @ 0x1C007F81C
 * Callers:
 *     ?DiscardPendingPresent@BLTQUEUE@@AEAAXXZ @ 0x1C007EB84 (-DiscardPendingPresent@BLTQUEUE@@AEAAXXZ.c)
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x1C007EDD8 (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C007F8B4 (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 *     ?SetQueuedPresentLimit@BLTQUEUE@@QEAAXI@Z @ 0x1C01CEAB0 (-SetQueuedPresentLimit@BLTQUEUE@@QEAAXI@Z.c)
 * Callees:
 *     McTemplateK0dt @ 0x1C002BED8 (McTemplateK0dt.c)
 */

void __fastcall BLTQUEUE::InsertQueueTail(BLTQUEUE *this, struct _LIST_ENTRY *a2, struct BLTENTRY *a3)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v9; // rax
  __int64 v10; // [rsp+20h] [rbp-18h]

  KeWaitForSingleObject((char *)this + 8, Executive, 0, 0, 0LL);
  if ( a2 == (struct _LIST_ENTRY *)((char *)this + 64) && a3 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(v10) = 0;
    McTemplateK0dt(v6, &EventBltQueueAddEntry, v7, *((_DWORD *)a3 + 15), v10);
  }
  Blink = a2->Blink;
  v9 = (struct _LIST_ENTRY *)((char *)a3 + 8);
  if ( Blink->Flink != a2 )
    __fastfail(3u);
  *((_QWORD *)a3 + 2) = Blink;
  v9->Flink = a2;
  Blink->Flink = v9;
  a2->Blink = v9;
  KeReleaseMutex((PRKMUTEX)((char *)this + 8), 0);
}
