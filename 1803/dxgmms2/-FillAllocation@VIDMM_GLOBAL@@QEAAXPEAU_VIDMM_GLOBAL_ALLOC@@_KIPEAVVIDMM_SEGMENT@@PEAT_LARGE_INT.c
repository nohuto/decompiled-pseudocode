/*
 * XREFs of ?FillAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C00621CC
 * Callers:
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1C00550FC (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 * Callees:
 *     ?FillAllocationInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C0061E6C (-FillAllocationInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_.c)
 */

void __fastcall VIDMM_GLOBAL::FillAllocation(
        ADAPTER_RENDER **this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        unsigned __int64 a3,
        __int64 a4,
        struct VIDMM_SEGMENT *a5,
        union _LARGE_INTEGER *a6)
{
  unsigned __int64 v6; // r9

  v6 = (unsigned __int64)a2;
  if ( a2 )
    LODWORD(a2) = *((_DWORD *)a2 + 19) & 0x3F;
  VIDMM_GLOBAL::FillAllocationInternal(
    this,
    (unsigned int)a2,
    (D3DGPU_VIRTUAL_ADDRESS *)(v6 & -(__int64)(v6 != 0)),
    a3,
    0,
    a5,
    a6);
}
