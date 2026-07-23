/*
 * XREFs of MiGetInPageSupportBlock @ 0x1400FBF70
 * Callers:
 *     MiMigratePfn @ 0x1400C3D80 (MiMigratePfn.c)
 *     MiAllocateInPageSupport @ 0x1401067C4 (MiAllocateInPageSupport.c)
 *     MiPfPutPagesInTransition @ 0x140108850 (MiPfPutPagesInTransition.c)
 *     MiPrivateFixup @ 0x140117AB4 (MiPrivateFixup.c)
 *     MiCreateRotateView @ 0x14045D458 (MiCreateRotateView.c)
 *     MiPfAllocateMdls @ 0x14053CAA0 (MiPfAllocateMdls.c)
 *     MiGetReadyInPageBlock @ 0x1406B6334 (MiGetReadyInPageBlock.c)
 * Callees:
 *     MiInitializeInPageSupport @ 0x1400FC010 (MiInitializeInPageSupport.c)
 *     RtlpInterlockedPopEntrySList @ 0x140189470 (RtlpInterlockedPopEntrySList.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

void *__fastcall MiGetInPageSupportBlock(char a1)
{
  int v2; // esi
  _SLIST_HEADER *v3; // rcx
  void *PoolWithTag; // rbx
  SIZE_T v6; // rdx

  v2 = a1 & 1;
  v3 = (_SLIST_HEADER *)((char *)&unk_14036CE80 + 16 * !(a1 & 1));
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
    v6 = 2352LL;
    if ( !v2 )
      v6 = 432LL;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v6, 0x6E496D4Du);
    if ( !PoolWithTag )
      return PoolWithTag;
    goto LABEL_3;
  }
  return 0LL;
}
