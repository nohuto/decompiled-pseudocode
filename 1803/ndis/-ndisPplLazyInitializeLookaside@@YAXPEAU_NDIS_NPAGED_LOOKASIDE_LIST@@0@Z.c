/*
 * XREFs of ?ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z @ 0x1C0005010
 * Callers:
 *     NdisAllocateNetBufferMdlAndData @ 0x1C0004360 (NdisAllocateNetBufferMdlAndData.c)
 *     ndisPplAllocate @ 0x1C0004694 (ndisPplAllocate.c)
 *     NdisAllocateCloneNetBufferList @ 0x1C0004860 (NdisAllocateCloneNetBufferList.c)
 *     NdisAllocateNetBufferAndNetBufferList @ 0x1C0004D20 (NdisAllocateNetBufferAndNetBufferList.c)
 *     NdisFreeCloneNetBufferList @ 0x1C0005410 (NdisFreeCloneNetBufferList.c)
 *     NdisFreeNetBufferList @ 0x1C00056B0 (NdisFreeNetBufferList.c)
 *     NdisFreeNetBuffer @ 0x1C0008B30 (NdisFreeNetBuffer.c)
 *     NdisAllocateFragmentNetBufferList @ 0x1C0010990 (NdisAllocateFragmentNetBufferList.c)
 *     NdisFreeFragmentNetBufferList @ 0x1C0011140 (NdisFreeFragmentNetBufferList.c)
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
      (PALLOCATE_FUNCTION_EX)ndisAllocateFromNPagedPool,
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
