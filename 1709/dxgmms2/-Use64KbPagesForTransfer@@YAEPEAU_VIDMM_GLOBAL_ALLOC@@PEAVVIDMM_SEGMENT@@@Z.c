/*
 * XREFs of ?Use64KbPagesForTransfer@@YAEPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C00A9510
 * Callers:
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C004DD80 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1C004E2FC (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Use64KbPagesForTransfer(struct _VIDMM_GLOBAL_ALLOC *a1, struct VIDMM_SEGMENT *a2)
{
  char v2; // r9

  v2 = 0;
  if ( !(unsigned __int16)*((_DWORD *)a1 + 8) && !(unsigned __int16)*((_DWORD *)a1 + 4) )
    return *((_DWORD *)a2 + 94) == 0x10000;
  return v2;
}
