/*
 * XREFs of ?FillAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C005DAD4
 * Callers:
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1C004E2FC (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 * Callees:
 *     ?FillAllocationInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C005D770 (-FillAllocationInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_.c)
 */

void __fastcall VIDMM_GLOBAL::FillAllocation(
        ADAPTER_RENDER **this,
        D3DGPU_VIRTUAL_ADDRESS *a2,
        unsigned __int64 a3,
        __int64 a4,
        struct VIDMM_SEGMENT *a5,
        union _LARGE_INTEGER *a6)
{
  D3DGPU_VIRTUAL_ADDRESS *v7; // r8
  unsigned int v8; // edx

  v7 = a2;
  if ( a2 )
  {
    v8 = *((_DWORD *)a2 + 19) & 0x3F;
  }
  else
  {
    v7 = 0LL;
    v8 = 0;
  }
  VIDMM_GLOBAL::FillAllocationInternal(this, v8, v7, a3, 0, a5, a6);
}
