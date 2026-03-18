/*
 * XREFs of MiCopyDirectMapHeader @ 0x1406B74BC
 * Callers:
 *     MiCreateImageFileMap @ 0x1404921D4 (MiCreateImageFileMap.c)
 * Callees:
 *     MiCreatePteCopyList @ 0x14002A77C (MiCreatePteCopyList.c)
 *     MiGetPteFromCopyList @ 0x14002C478 (MiGetPteFromCopyList.c)
 *     MiPartitionIdToPointer @ 0x140031BC0 (MiPartitionIdToPointer.c)
 *     MiDeleteSegmentPages @ 0x1401190A4 (MiDeleteSegmentPages.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     KeCopyPage @ 0x140185390 (KeCopyPage.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14021EE14 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReturnPteMappingPair @ 0x140225E00 (MiReturnPteMappingPair.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MiInitializePrototypePtes @ 0x14054AFA8 (MiInitializePrototypePtes.c)
 *     MiAllocateFileExtents @ 0x1406B6DDC (MiAllocateFileExtents.c)
 */

__int64 __fastcall MiCopyDirectMapHeader(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  char *PoolWithTag; // rdi
  unsigned __int64 v7; // rax
  _WORD *v8; // rax
  __int16 v9; // r9
  __int64 v10; // r8
  unsigned __int64 PteFromCopyList; // rsi
  unsigned int v12[8]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v13[24]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v14[80]; // [rsp+118h] [rbp+10h] BYREF
  __int64 v15; // [rsp+198h] [rbp+90h] BYREF

  memset(v14, 0, 0x48uLL);
  memset(v13, 0, 0xB8uLL);
  MiCreatePteCopyList(2uLL, 2uLL, (__int64)v12);
  v4 = 0;
  if ( !v12[1] )
    return 0LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)-2147483647, 8uLL, 0x74536D4Du);
  if ( !PoolWithTag )
  {
    MiReturnPteMappingPair((__int64)v12);
    return 0LL;
  }
  LODWORD(v13[7]) |= 0x400000A0u;
  v13[21] = 0x100000008LL;
  v13[8] = a1;
  LOWORD(v13[20]) = v13[20] & 0xFFC1 | 0xC;
  v13[16] = v13;
  v13[0] = v14;
  MiInitializePrototypePtes(PoolWithTag, 1LL, (unsigned __int16 *)&v13[16], 0);
  if ( (int)MiAllocateFileExtents((ULONG_PTR)&v13[16], 0, (unsigned __int64)PoolWithTag, 1, 1) >= 0 )
  {
    v15 = MI_READ_PTE_LOCK_FREE((unsigned __int64)PoolWithTag);
    v7 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v15);
    v8 = (_WORD *)MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(48 * v7 - 0x57FFFFFFFD8LL)) >> 8) & 0x3FF);
    WORD2(v13[7]) ^= v9 & (WORD2(v13[7]) ^ *v8);
    PteFromCopyList = (unsigned __int64)MiGetPteFromCopyList(v12, a2, v10);
    KeCopyPage((__int64)(PteFromCopyList << 25) >> 16, ((__int64)(PteFromCopyList << 25) >> 16) + 4096);
    *(_QWORD *)PteFromCopyList = 0LL;
    if ( MiPteInShadowRange(PteFromCopyList) )
      MiWritePteShadow();
    *(_QWORD *)(PteFromCopyList + 8) = 0LL;
    if ( MiPteInShadowRange(PteFromCopyList + 8) )
      MiWritePteShadow();
    MiDeleteSegmentPages(v13);
    v4 = 1;
  }
  ExFreePoolWithTag(PoolWithTag, 0);
  MiReturnPteMappingPair((__int64)v12);
  return v4;
}
