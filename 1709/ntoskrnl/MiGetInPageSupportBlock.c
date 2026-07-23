/*
 * XREFs of MiGetInPageSupportBlock @ 0x14002A960
 * Callers:
 *     MiPfPutPagesInTransition @ 0x140025FD0 (MiPfPutPagesInTransition.c)
 *     MiAllocateInPageSupport @ 0x14002A89C (MiAllocateInPageSupport.c)
 *     MiPrivateFixup @ 0x1400CD7E0 (MiPrivateFixup.c)
 *     MiCreateRotateView @ 0x14044DE28 (MiCreateRotateView.c)
 *     MiPfAllocateMdls @ 0x140493FB0 (MiPfAllocateMdls.c)
 *     MiGetReadyInPageBlock @ 0x1406E2624 (MiGetReadyInPageBlock.c)
 * Callees:
 *     MiInitializeInPageSupport @ 0x14002AA00 (MiInitializeInPageSupport.c)
 *     RtlpInterlockedPopEntrySList @ 0x140188F70 (RtlpInterlockedPopEntrySList.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

void *__fastcall MiGetInPageSupportBlock(char a1)
{
  int v2; // esi
  _SLIST_HEADER *v3; // rcx
  void *PoolWithTag; // rdi

  v2 = a1 & 1;
  v3 = (_SLIST_HEADER *)((char *)&unk_140389140 + 16 * !(a1 & 1));
  if ( LOWORD(v3->Alignment) )
  {
    PoolWithTag = RtlpInterlockedPopEntrySList(v3);
    if ( PoolWithTag )
    {
LABEL_3:
      MiInitializeInPageSupport((ULONG_PTR)PoolWithTag);
      return PoolWithTag;
    }
  }
  if ( (a1 & 4) == 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v2 != 0 ? 2352LL : 432LL, 0x6E496D4Du);
    if ( !PoolWithTag )
      return PoolWithTag;
    goto LABEL_3;
  }
  return 0LL;
}
