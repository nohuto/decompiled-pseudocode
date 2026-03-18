/*
 * XREFs of MiCopyDirectMapHeader @ 0x1406E40C0
 * Callers:
 *     MiCreateImageFileMap @ 0x1404F8B90 (MiCreateImageFileMap.c)
 * Callees:
 *     MiDeleteSegmentPages @ 0x14001F644 (MiDeleteSegmentPages.c)
 *     MiGetPteFromCopyList @ 0x1400CEEDC (MiGetPteFromCopyList.c)
 *     MiCreatePteCopyList @ 0x140123E80 (MiCreatePteCopyList.c)
 *     MiPartitionIdToPointer @ 0x14012862C (MiPartitionIdToPointer.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     KeCopyPage @ 0x140184E30 (KeCopyPage.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14022A1D0 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MiReturnPteMappingPair @ 0x140234C68 (MiReturnPteMappingPair.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     MiInitializePrototypePtes @ 0x14048DF98 (MiInitializePrototypePtes.c)
 *     MiAllocateFileExtents @ 0x1406E3904 (MiAllocateFileExtents.c)
 */

__int64 __fastcall MiCopyDirectMapHeader(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  __int64 v6; // rdx
  char *PoolWithTag; // rdi
  __int64 v8; // r8
  unsigned __int64 v9; // r9
  __int64 PteShadow; // rax
  unsigned __int64 v11; // rax
  _WORD *v12; // rax
  __int16 v13; // r9
  __int64 v14; // r8
  unsigned __int64 PteFromCopyList; // rsi
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned __int64 v18; // r9
  unsigned int v19[8]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v20[24]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v21[80]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v22; // [rsp+1A0h] [rbp+A0h] BYREF

  memset(v21, 0, 0x48uLL);
  memset(v20, 0, 0xB8uLL);
  MiCreatePteCopyList(2uLL, 2uLL, (__int64)v19);
  v4 = 0;
  if ( !v19[1] )
    return 0LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)-2147483647, 8uLL, 0x74536D4Du);
  if ( !PoolWithTag )
  {
    MiReturnPteMappingPair((__int64)v19, v6, v8, v9);
    return 0LL;
  }
  LODWORD(v20[7]) |= 0x400000A2u;
  v20[21] = 0x100000008LL;
  v20[8] = a1;
  LOWORD(v20[20]) = v20[20] & 0xFFC1 | 0xC;
  v20[16] = v20;
  v20[0] = v21;
  MiInitializePrototypePtes(PoolWithTag, 1LL, (unsigned __int16 *)&v20[16], 0);
  if ( (int)MiAllocateFileExtents((ULONG_PTR)&v20[16], 0, (ULONG_PTR)PoolWithTag, 1, 1) >= 0 )
  {
    PteShadow = *(_QWORD *)PoolWithTag;
    if ( (unsigned __int64)PoolWithTag >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)PoolWithTag <= 0xFFFFF6FB7DBED7F8uLL )
    {
      PteShadow = MiReadPteShadow();
    }
    v22 = PteShadow;
    v11 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v22);
    v12 = (_WORD *)MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(48 * v11 - 0x57FFFFFFFD8LL)) >> 8) & 0x3FF);
    WORD2(v20[7]) ^= v13 & (WORD2(v20[7]) ^ *v12);
    PteFromCopyList = (unsigned __int64)MiGetPteFromCopyList(v19, a2, v14);
    KeCopyPage((__int64)(PteFromCopyList << 25) >> 16, ((__int64)(PteFromCopyList << 25) >> 16) + 4096);
    *(_QWORD *)PteFromCopyList = 0LL;
    if ( PteFromCopyList >= 0xFFFFF6FB7DBED000uLL && PteFromCopyList <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow();
    *(_QWORD *)(PteFromCopyList + 8) = 0LL;
    if ( PteFromCopyList + 8 >= 0xFFFFF6FB7DBED000uLL && PteFromCopyList + 8 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow();
    MiDeleteSegmentPages((__int64)v20);
    v4 = 1;
  }
  ExFreePoolWithTag(PoolWithTag, 0);
  MiReturnPteMappingPair((__int64)v19, v16, v17, v18);
  return v4;
}
