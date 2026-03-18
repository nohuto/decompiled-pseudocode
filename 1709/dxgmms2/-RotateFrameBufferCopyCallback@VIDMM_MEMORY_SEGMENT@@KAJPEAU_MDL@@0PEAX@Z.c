/*
 * XREFs of ?RotateFrameBufferCopyCallback@VIDMM_MEMORY_SEGMENT@@KAJPEAU_MDL@@0PEAX@Z @ 0x1C0073370
 * Callers:
 *     <none>
 * Callees:
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005C818 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C005E2B0 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 */

__int64 __fastcall VIDMM_MEMORY_SEGMENT::RotateFrameBufferCopyCallback(struct _MDL *a1, struct _MDL *a2, char *a3)
{
  VIDMM_GLOBAL **v3; // r9
  VIDMM_GLOBAL *v5; // rsi
  __int64 ByteCount; // rbx
  struct _VIDMM_GLOBAL_ALLOC *v7; // rdx

  v3 = (VIDMM_GLOBAL **)*((_QWORD *)a3 + 1);
  v5 = v3[1];
  if ( (*(_BYTE *)(1552LL * (*(_DWORD *)(*(_QWORD *)a3 + 76LL) & 0x3F) + *((_QWORD *)v5 + 5021) + 436) & 4) == 0 )
    return 3221225473LL;
  ByteCount = a2->ByteCount;
  VIDMM_GLOBAL::MemoryTransfer(
    v3[1],
    *(struct _VIDMM_GLOBAL_ALLOC **)a3,
    (unsigned int)ByteCount,
    *((_QWORD *)a3 + 4),
    0LL,
    0LL,
    a2,
    (struct VIDMM_SEGMENT *)v3,
    (union _LARGE_INTEGER *)a3 + 2,
    0LL,
    *(DXGK_TRANSFERFLAGS *)(a3 + 24));
  v7 = *(struct _VIDMM_GLOBAL_ALLOC **)a3;
  *((_QWORD *)a3 + 4) += ByteCount;
  VIDMM_GLOBAL::WaitForAllPagingEngines(v5, v7);
  return 0LL;
}
