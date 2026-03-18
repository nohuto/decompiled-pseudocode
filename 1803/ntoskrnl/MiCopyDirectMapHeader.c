/*
 * XREFs of MiCopyDirectMapHeader @ 0x14074E4AC
 * Callers:
 *     MiCreateImageFileMap @ 0x1404BF468 (MiCreateImageFileMap.c)
 * Callees:
 *     MiGetPteFromCopyList @ 0x140002458 (MiGetPteFromCopyList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiDeleteSegmentPages @ 0x14004B184 (MiDeleteSegmentPages.c)
 *     MiUpdateSystemProtoPtesTree @ 0x14004B350 (MiUpdateSystemProtoPtesTree.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiCreatePteCopyList @ 0x1400C613C (MiCreatePteCopyList.c)
 *     MiPartitionIdToPointer @ 0x1401404D0 (MiPartitionIdToPointer.c)
 *     MiReturnPteMappingPair @ 0x1401407C4 (MiReturnPteMappingPair.c)
 *     KeCopyPage @ 0x1401AEA50 (KeCopyPage.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x140264B7C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     MiInitializePrototypePtes @ 0x1404BD1E0 (MiInitializePrototypePtes.c)
 *     MiAllocateFileExtents @ 0x14074DC04 (MiAllocateFileExtents.c)
 */

__int64 __fastcall MiCopyDirectMapHeader(__int64 a1, __int64 a2)
{
  char *PoolWithTag; // rax
  char *v6; // rdi
  int FileExtents; // ebx
  unsigned __int64 v8; // rax
  _WORD *v9; // rax
  __int16 v10; // r9
  __int64 v11; // r8
  unsigned __int64 PteFromCopyList; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned int v19[6]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v20[7]; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v21[30]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v22[80]; // [rsp+170h] [rbp+70h] BYREF
  __int64 v23; // [rsp+1F0h] [rbp+F0h] BYREF

  memset(v20, 0, 0x30uLL);
  memset(v22, 0, 0x48uLL);
  memset(v21, 0, sizeof(v21));
  MiCreatePteCopyList(2uLL, 2uLL, (__int64)v19);
  if ( !v19[1] )
    return 3221225626LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)-2147483647, 8uLL, 0x74536D4Du);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    LODWORD(v21[7]) |= 0x400000A2u;
    v21[21] = 0x100000008LL;
    v21[26] = v21[26] & 0xFFFFFFFFFFFFFFF8uLL | 2;
    v21[8] = a1;
    LOWORD(v21[20]) = v21[20] & 0xFFC1 | 0xC;
    v21[16] = v21;
    v21[0] = v22;
    MiInitializePrototypePtes(PoolWithTag, 1LL, (unsigned __int16 *)&v21[16], 0);
    v20[5] = 1LL;
    v20[4] = v6;
    v20[3] = v20[3] & 0xFFFFFFFFFFFFFFF8uLL | 4;
    MiUpdateSystemProtoPtesTree((__int64)v20, 1);
    FileExtents = MiAllocateFileExtents((ULONG_PTR)&v21[16], 0, (unsigned __int64)v6, 1, 1);
    if ( FileExtents >= 0 )
    {
      v23 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v6);
      v8 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v23);
      v9 = (_WORD *)MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(48 * v8 - 0x57FFFFFFFD8LL)) >> 8) & 0x3FF);
      WORD2(v21[7]) ^= v10 & (WORD2(v21[7]) ^ *v9);
      PteFromCopyList = (unsigned __int64)MiGetPteFromCopyList(v19, a2, v11);
      KeCopyPage((__int64)(PteFromCopyList << 25) >> 16, ((__int64)(PteFromCopyList << 25) >> 16) + 4096);
      *(_QWORD *)PteFromCopyList = ZeroPte;
      if ( MiPteInShadowRange(PteFromCopyList) )
      {
        MiWritePteShadow(v14, v13, v15);
        v13 = ZeroPte;
      }
      *(_QWORD *)(PteFromCopyList + 8) = v13;
      if ( MiPteInShadowRange(PteFromCopyList + 8) )
        MiWritePteShadow(v17, v16, v18);
      MiDeleteSegmentPages((__int64)v21);
    }
    MiUpdateSystemProtoPtesTree((__int64)v20, 0);
    ExFreePoolWithTag(v6, 0);
  }
  else
  {
    FileExtents = -1073741670;
  }
  MiReturnPteMappingPair((__int64)v19);
  return (unsigned int)FileExtents;
}
