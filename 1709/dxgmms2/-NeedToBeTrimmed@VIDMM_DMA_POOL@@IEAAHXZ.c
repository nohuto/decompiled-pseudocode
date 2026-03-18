/*
 * XREFs of ?NeedToBeTrimmed@VIDMM_DMA_POOL@@IEAAHXZ @ 0x1C00A2400
 * Callers:
 *     ?GetNextBuffersContractedSize@VIDMM_DMA_POOL@@QEAAXPEA_KPEAI1@Z @ 0x1C00A2388 (-GetNextBuffersContractedSize@VIDMM_DMA_POOL@@QEAAXPEA_KPEAI1@Z.c)
 *     ?TrimPool@VIDMM_DMA_POOL@@QEAAXE@Z @ 0x1C00A2AC0 (-TrimPool@VIDMM_DMA_POOL@@QEAAXE@Z.c)
 * Callees:
 *     McTemplateK0pq @ 0x1C0021ADC (McTemplateK0pq.c)
 */

__int64 __fastcall VIDMM_DMA_POOL::NeedToBeTrimmed(VIDMM_DMA_POOL *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  int v7; // [rsp+20h] [rbp-18h]

  if ( (*((_DWORD *)this + 8) & 8) == 0 )
  {
    if ( *((int *)this + 32) <= VIDMM_DMA_POOL::_FairDmaBufferBytes )
      v3 = VIDMM_DMA_POOL::_CriticalDmaBufferBytes;
    else
      v3 = VIDMM_DMA_POOL::_HighDmaBufferBytes;
    if ( VIDMM_DMA_POOL::_TotalDmaBufferBytes > v3 )
    {
      if ( !bTracingEnabled || ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
        return 1LL;
      v7 = 0;
LABEL_8:
      McTemplateK0pq((__int64)this, &EventDmaPoolTrimmingPolicy, a3, *(_QWORD *)(*((_QWORD *)this + 2) + 24LL), v7);
      return 1LL;
    }
    if ( *((int *)this + 33) <= VIDMM_DMA_POOL::_FairAllocationListBytes )
      v5 = VIDMM_DMA_POOL::_CriticalAllocationListBytes;
    else
      v5 = VIDMM_DMA_POOL::_HighAllocationListBytes;
    if ( VIDMM_DMA_POOL::_TotalAllocationListBytes > v5 )
    {
      if ( !bTracingEnabled || ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
        return 1LL;
      v7 = 1;
      goto LABEL_8;
    }
    if ( *((int *)this + 34) <= VIDMM_DMA_POOL::_FairPatchLocationListBytes )
      v6 = VIDMM_DMA_POOL::_CriticalPatchLocationListBytes;
    else
      v6 = VIDMM_DMA_POOL::_HighPatchLocationListBytes;
    if ( VIDMM_DMA_POOL::_TotalPatchLocationListBytes > v6 )
    {
      if ( !bTracingEnabled || ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
        return 1LL;
      v7 = 2;
      goto LABEL_8;
    }
  }
  return 0LL;
}
