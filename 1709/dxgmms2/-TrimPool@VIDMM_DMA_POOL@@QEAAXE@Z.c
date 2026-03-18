/*
 * XREFs of ?TrimPool@VIDMM_DMA_POOL@@QEAAXE@Z @ 0x1C00A2AC0
 * Callers:
 *     VidMmTrimDmaPoolToMinimum @ 0x1C0020E70 (VidMmTrimDmaPoolToMinimum.c)
 *     ?GetNextBuffersContractedSize@VIDMM_DMA_POOL@@QEAAXPEA_KPEAI1@Z @ 0x1C00A2388 (-GetNextBuffersContractedSize@VIDMM_DMA_POOL@@QEAAXPEA_KPEAI1@Z.c)
 * Callees:
 *     ?WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z @ 0x1C006769C (-WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z.c)
 *     ?RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C0073F10 (-RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 *     ?NeedToBeTrimmed@VIDMM_DMA_POOL@@IEAAHXZ @ 0x1C00A2400 (-NeedToBeTrimmed@VIDMM_DMA_POOL@@IEAAHXZ.c)
 */

void __fastcall VIDMM_DMA_POOL::TrimPool(VIDMM_DMA_POOL **this, __int64 a2)
{
  char v2; // r15
  unsigned int v4; // ebp
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  VIDMM_DMA_POOL *v8; // rsi
  VIDMM_DMA_POOL *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int8 v13; // [rsp+48h] [rbp+10h] BYREF

  v2 = a2;
  v4 = 0;
  v5 = WdLogNewEntry5_WdEvent(this, a2);
  *(_QWORD *)(v5 + 24) = this[2];
  WdLogEvent5_WdEvent(v5);
  v8 = this[12];
  while ( (v2 || (unsigned int)VIDMM_DMA_POOL::NeedToBeTrimmed((VIDMM_DMA_POOL *)this, v6, v7))
       && v8 != (VIDMM_DMA_POOL *)(this + 12) )
  {
    v9 = v8;
    v8 = *(VIDMM_DMA_POOL **)v8;
    if ( v4 >= 2 || *((_BYTE *)v9 + 25) )
    {
      v13 = 0;
      VIDMM_DMA_POOL::WaitDmaBufferNotBusy((VIDMM_DMA_POOL *)this, v9, 1, &v13);
      if ( v13 )
      {
        v12 = WdLogNewEntry5_WdEvent(v11, v10);
        *(_QWORD *)(v12 + 24) = v9;
        *(_QWORD *)(v12 + 32) = this;
        WdLogEvent5_WdEvent(v12);
        return;
      }
      VIDMM_DMA_POOL::RemoveDmaBufferFromPool(this, v9);
    }
    else
    {
      ++v4;
    }
  }
}
