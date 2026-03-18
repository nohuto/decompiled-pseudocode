/*
 * XREFs of ?VidMmiMoveAndFlipDisplayingAllocation@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2@Z @ 0x1C00B17C0
 * Callers:
 *     ?MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z @ 0x1C00B0C0C (-MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z.c)
 * Callees:
 *     VidSchiUpdateFlipQueueEntriesForMove @ 0x1C002D5C4 (VidSchiUpdateFlipQueueEntriesForMove.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0060F70 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0061D04 (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C0062910 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 */

void __fastcall VidMmiMoveAndFlipDisplayingAllocation(
        struct VIDMM_GLOBAL *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        union _LARGE_INTEGER a3,
        union _LARGE_INTEGER a4)
{
  struct _VIDMM_GLOBAL_ALLOC *v6; // r8
  union _LARGE_INTEGER v7; // [rsp+80h] [rbp+18h] BYREF
  union _LARGE_INTEGER v8; // [rsp+88h] [rbp+20h] BYREF

  v8 = a4;
  v7 = a3;
  VIDMM_GLOBAL::MemoryTransfer(
    this,
    a2,
    *((_QWORD *)a2 + 2),
    0LL,
    *((struct VIDMM_SEGMENT **)a2 + 17),
    &v7,
    0LL,
    *((struct VIDMM_SEGMENT **)a2 + 17),
    &v8,
    0LL,
    0);
  VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, *((_DWORD *)a2 + 19) & 0x3F);
  *((union _LARGE_INTEGER *)a2 + 18) = v8;
  if ( (**((_DWORD **)a2 + 63) & 0x10000) != 0 )
  {
    LOBYTE(v6) = 1;
    VIDMM_GLOBAL::NotifyResidency((ADAPTER_RENDER **)this, a2, v6);
  }
  VidSchiUpdateFlipQueueEntriesForMove(*(_QWORD *)(*((_QWORD *)this + 2) + 528LL), a2);
}
