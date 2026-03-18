/*
 * XREFs of ?RemoveQueueHead@BLTQUEUE@@AEAAPEAVBLTENTRY@@PEAU_LIST_ENTRY@@@Z @ 0x1C00A065C
 * Callers:
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x1C00A047C (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B51E8 (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 * Callees:
 *     Template_dt @ 0x1C003BB80 (Template_dt.c)
 */

struct _LIST_ENTRY **__fastcall BLTQUEUE::RemoveQueueHead(BLTQUEUE *this, struct _LIST_ENTRY *a2)
{
  __int64 v4; // r8
  struct _LIST_ENTRY *Flink; // rdi
  struct _LIST_ENTRY **p_Blink; // rdi
  struct _LIST_ENTRY *v8; // rax
  __int64 v9; // [rsp+20h] [rbp-18h]

  KeWaitForSingleObject((char *)this + 8, Executive, 0, 0, 0LL);
  Flink = a2->Flink;
  if ( a2->Flink == a2 )
  {
    p_Blink = 0LL;
  }
  else
  {
    v8 = Flink->Flink;
    if ( Flink->Blink != a2 || v8->Blink != Flink )
      __fastfail(3u);
    a2->Flink = v8;
    p_Blink = &Flink[-1].Blink;
    v8->Blink = a2;
  }
  if ( a2 == (struct _LIST_ENTRY *)((char *)this + 64) && p_Blink && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(v9) = 1;
    Template_dt(
      (unsigned int)Microsoft_Windows_DxgKrnlEnableBits,
      &EventBltQueueRemoveEntry,
      v4,
      *((_DWORD *)p_Blink + 15),
      v9);
  }
  KeReleaseMutex((PRKMUTEX)((char *)this + 8), 0);
  return p_Blink;
}
