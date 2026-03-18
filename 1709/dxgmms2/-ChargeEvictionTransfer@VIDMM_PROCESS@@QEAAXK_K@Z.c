/*
 * XREFs of ?ChargeEvictionTransfer@VIDMM_PROCESS@@QEAAXK_K@Z @ 0x1C007CC60
 * Callers:
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@2131U_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C005DB1C (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMEN.c)
 *     ?MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C005E16C (-MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_.c)
 * Callees:
 *     McTemplateK0ppqqxqq @ 0x1C0022A68 (McTemplateK0ppqqxqq.c)
 *     ?IsActive@VIDMM_POLICY@@QEAAHXZ @ 0x1C0072B08 (-IsActive@VIDMM_POLICY@@QEAAHXZ.c)
 */

void __fastcall VIDMM_PROCESS::ChargeEvictionTransfer(VIDMM_PROCESS *this, unsigned int a2, __int64 a3)
{
  _QWORD *v3; // r9
  int v4; // edx
  VIDMM_POLICY *v5; // rcx
  BOOL v6; // edx
  bool v7; // zf
  __int64 IsActive; // rdx
  __int64 v9; // r8
  __int64 *v10; // r9
  __int64 v11; // r10

  v3 = *(_QWORD **)(*((_QWORD *)this + 2) + 8LL * a2);
  v4 = *(_DWORD *)(*v3 + 8LL);
  if ( v4 != 102 && v4 != 110 )
  {
    v3[61] += a3;
    if ( v3[61] >= (unsigned __int64)(unsigned int)dword_1C004022C )
    {
      v5 = (VIDMM_POLICY *)(v3 + 58);
      v6 = (v3[58] & 2) == 0;
      if ( ((*((_DWORD *)v3 + 116) >> 2) & 1) != v6 )
      {
        v7 = bTracingEnabled == 0;
        *(_DWORD *)v5 = v3[58] & 0xFFFFFFFB | (4 * v6);
        if ( !v7 )
        {
          IsActive = (int)VIDMM_POLICY::IsActive(v5);
          if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0ppqqxqq(*v10, IsActive, v9, *(_QWORD *)(v11 + 8), *(_QWORD *)(*v10 + 24));
        }
      }
    }
  }
}
