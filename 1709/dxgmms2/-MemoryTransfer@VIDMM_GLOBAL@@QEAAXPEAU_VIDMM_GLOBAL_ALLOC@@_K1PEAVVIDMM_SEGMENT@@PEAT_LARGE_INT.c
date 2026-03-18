/*
 * XREFs of ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C005E2B0
 * Callers:
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C004DD80 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1C004E2FC (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 *     ?RotateFrameBufferCopyCallback@VIDMM_MEMORY_SEGMENT@@KAJPEAU_MDL@@0PEAX@Z @ 0x1C0073370 (-RotateFrameBufferCopyCallback@VIDMM_MEMORY_SEGMENT@@KAJPEAU_MDL@@0PEAX@Z.c)
 *     ?RotateCopyCallback@VIDMM_MEMORY_SEGMENT@@KAJPEAU_MDL@@0PEAX@Z @ 0x1C00A9340 (-RotateCopyCallback@VIDMM_MEMORY_SEGMENT@@KAJPEAU_MDL@@0PEAX@Z.c)
 *     ?VidMmiMoveAndFlipDisplayingAllocation@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2@Z @ 0x1C00A96A0 (-VidMmiMoveAndFlipDisplayingAllocation@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2@Z.c)
 *     ?MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C00AAB00 (-MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z.c)
 * Callees:
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C005C8C0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C005E16C (-MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_.c)
 */

void __fastcall VIDMM_GLOBAL::MemoryTransfer(
        VIDMM_GLOBAL *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        SIZE_T a3,
        unsigned __int64 a4,
        struct VIDMM_SEGMENT *a5,
        union _LARGE_INTEGER *a6,
        struct _MDL *a7,
        struct VIDMM_SEGMENT *a8,
        union _LARGE_INTEGER *a9,
        struct _MDL *a10,
        DXGK_TRANSFERFLAGS a11)
{
  int v13; // ecx
  __int64 v14; // rdi

  if ( a2 )
  {
    VIDMM_GLOBAL::MemoryTransferInternal(
      this,
      *((_DWORD *)a2 + 19) & 0x3F,
      (D3DGPU_VIRTUAL_ADDRESS *)a2,
      a3,
      a4,
      a5,
      a6,
      a7,
      a8,
      a9,
      a10,
      a11);
    v13 = *((_DWORD *)a2 + 19);
    v14 = *((_QWORD *)this + 5021) + 1552LL * (v13 & 0x3F);
    if ( *((_QWORD *)a2 + 1) > (unsigned __int64)(qword_1C0040418 - *(_QWORD *)(v14 + 448)) )
      VIDMM_GLOBAL::FlushPagingBufferInternal(this, v13 & 0x3F, 0, 0LL, 0LL, 0, 0);
    *(_QWORD *)(v14 + 448) += *((_QWORD *)a2 + 1);
  }
  else
  {
    VIDMM_GLOBAL::MemoryTransferInternal(this, 0, 0LL, a3, a4, a5, a6, a7, a8, a9, a10, a11);
  }
}
