/*
 * XREFs of ?ChargeEvictionTransfer@VIDMM_PROCESS@@QEAAXK_K@Z @ 0x1C006DCE0
 * Callers:
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@2131U_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C005A814 (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMEN.c)
 *     ?MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C005AE04 (-MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_.c)
 * Callees:
 *     Template_ppqqxqq @ 0x1C00209A8 (Template_ppqqxqq.c)
 *     ?IsActive@VIDMM_POLICY@@QEAAHXZ @ 0x1C006D3C8 (-IsActive@VIDMM_POLICY@@QEAAHXZ.c)
 */

void __fastcall VIDMM_PROCESS::ChargeEvictionTransfer(VIDMM_PROCESS *this, unsigned int a2, __int64 a3)
{
  _QWORD *v3; // r9
  int v4; // edx
  bool v5; // zf
  int IsActive; // eax
  __int64 *v7; // r9
  __int64 v8; // r10
  __int64 v9; // r8

  v3 = *(_QWORD **)(*((_QWORD *)this + 2) + 8LL * a2);
  v4 = *(_DWORD *)(*v3 + 8LL);
  if ( v4 != 102 && v4 != 110 )
  {
    v3[57] += a3;
    if ( v3[57] >= (unsigned __int64)(unsigned int)dword_1C003C1F4
      && (((unsigned __int8)(*((_DWORD *)v3 + 108) >> 2) ^ (unsigned __int8)~(*((_DWORD *)v3 + 108) >> 1)) & 1) != 0 )
    {
      v5 = bTracingEnabled == 0;
      *((_DWORD *)v3 + 108) ^= ((unsigned __int8)*((_DWORD *)v3 + 108) ^ (unsigned __int8)~(2 * *((_DWORD *)v3 + 108))) & 4;
      if ( !v5 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        IsActive = VIDMM_POLICY::IsActive((VIDMM_POLICY *)(v3 + 54));
        Template_ppqqxqq(IsActive, *v7, v9, *(_QWORD *)(v8 + 8), *(_QWORD *)(*v7 + 24));
      }
    }
  }
}
