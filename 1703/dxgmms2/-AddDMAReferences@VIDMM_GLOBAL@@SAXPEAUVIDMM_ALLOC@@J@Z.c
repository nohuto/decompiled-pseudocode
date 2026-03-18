/*
 * XREFs of ?AddDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z @ 0x1C0092338
 * Callers:
 *     ?ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAKPEAT_LARGE_INTEGER@@PEA_KPEAVDXGPROCESSVIDMMLOCK@@PEAPEAUVIDMM_ALLOC@@PEAU_VIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C0061CF0 (-ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEA.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::AddDMAReferences(struct VIDMM_ALLOC *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  __int64 v5; // rbx
  _QWORD *v6; // rax

  v3 = a2;
  if ( (_DWORD)a2 + *((_DWORD *)a1 + 39) == 0x7FFFFFFF )
  {
    v5 = *((int *)a1 + 39);
    v6 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2, a3);
    v6[7] = 0LL;
    v6[3] = 270LL;
    v6[4] = 41LL;
    v6[5] = a1;
    v6[6] = v5;
    WdLogEvent5_WdCriticalError(v6);
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 39, v3);
}
