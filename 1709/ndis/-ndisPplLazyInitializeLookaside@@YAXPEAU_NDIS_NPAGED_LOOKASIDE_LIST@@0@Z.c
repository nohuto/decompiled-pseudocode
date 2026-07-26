/*
 * XREFs of ?ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z @ 0x1C0018908
 * Callers:
 *     NdisFreeCloneNetBufferList @ 0x1C00140C0 (NdisFreeCloneNetBufferList.c)
 *     NdisFreeNetBufferList @ 0x1C0014360 (NdisFreeNetBufferList.c)
 *     NdisAllocateNetBufferMdlAndData @ 0x1C0017FF0 (NdisAllocateNetBufferMdlAndData.c)
 *     NdisAllocateCloneNetBufferList @ 0x1C0018230 (NdisAllocateCloneNetBufferList.c)
 *     NdisAllocateNetBuffer @ 0x1C0018700 (NdisAllocateNetBuffer.c)
 *     NdisFreeNetBuffer @ 0x1C0019770 (NdisFreeNetBuffer.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisPplLazyInitializeLookaside(PLOOKASIDE_LIST_EX Lookaside, struct _NDIS_NPAGED_LOOKASIDE_LIST *a2)
{
  KSPIN_LOCK *p_Depth; // rdi
  KIRQL v5; // bp

  p_Depth = (KSPIN_LOCK *)&Lookaside[2].L.Depth;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&Lookaside[2].L.Depth);
  if ( !LOBYTE(Lookaside[2].L.AllocateMisses) )
  {
    ExInitializeLookasideListEx(
      Lookaside,
      ndisAllocateFromNPagedPool,
      (PFREE_FUNCTION_EX)a2->List.L.FreeEx,
      NonPagedPoolNx,
      0,
      a2->List.L.Size,
      a2->List.L.Tag,
      0x400u);
    LOBYTE(Lookaside[2].L.AllocateMisses) = 1;
  }
  KeReleaseSpinLock(p_Depth, v5);
}
