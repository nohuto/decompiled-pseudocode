/*
 * XREFs of ?InitGlobals@VIDMM_DMA_POOL@@SAJXZ @ 0x1C0076E5C
 * Callers:
 *     ?InitGlobals@VIDMM_GLOBAL@@SAJXZ @ 0x1C0076CF4 (-InitGlobals@VIDMM_GLOBAL@@SAJXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001DE4 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002798 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 VIDMM_DMA_POOL::InitGlobals(void)
{
  unsigned __int64 v0; // rdx
  unsigned __int64 v1; // rdx
  struct _ERESOURCE *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  NTSTATUS v5; // ebx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax

  qword_1C003C6B8 = (__int64)&VIDMM_DMA_POOL::_DmaPoolsListHead;
  VIDMM_DMA_POOL::_DmaPoolsListHead.Flink = &VIDMM_DMA_POOL::_DmaPoolsListHead;
  VIDMM_DMA_POOL::_MaxNbDmaBuffers = dword_1C003C260;
  VIDMM_DMA_POOL::_MaxNbCddDmaBuffers = dword_1C003C264;
  VIDMM_DMA_POOL::_MaxDmaBufferBytes = (unsigned int)dword_1C003C268;
  VIDMM_DMA_POOL::_MaxAllocationListBytes = (unsigned int)dword_1C003C26C;
  VIDMM_DMA_POOL::_MaxPatchLocationListBytes = (unsigned int)dword_1C003C26C;
  v0 = ((unsigned __int64)((unsigned int)dword_1C003C268
                         + (((unsigned __int128)(unsigned int)dword_1C003C268 * (__int64)0xA3D70A3D70A3D70BuLL) >> 64)) >> 63)
     + ((__int64)((unsigned int)dword_1C003C268
                + (((unsigned __int128)(unsigned int)dword_1C003C268 * (__int64)0xA3D70A3D70A3D70BuLL) >> 64)) >> 6);
  VIDMM_DMA_POOL::_CriticalDmaBufferBytes = 95 * v0;
  VIDMM_DMA_POOL::_HighDmaBufferBytes = 85 * v0;
  VIDMM_DMA_POOL::_LowDmaBufferBytes = 75 * v0;
  v1 = ((unsigned __int64)((unsigned int)dword_1C003C26C
                         + (((unsigned __int128)(unsigned int)dword_1C003C26C * (__int64)0xA3D70A3D70A3D70BuLL) >> 64)) >> 63)
     + ((__int64)((unsigned int)dword_1C003C26C
                + (((unsigned __int128)(unsigned int)dword_1C003C26C * (__int64)0xA3D70A3D70A3D70BuLL) >> 64)) >> 6);
  VIDMM_DMA_POOL::_CriticalAllocationListBytes = 95 * v1;
  VIDMM_DMA_POOL::_HighAllocationListBytes = 85 * v1;
  VIDMM_DMA_POOL::_LowAllocationListBytes = 75 * v1;
  VIDMM_DMA_POOL::_CriticalPatchLocationListBytes = 95 * v1;
  VIDMM_DMA_POOL::_HighPatchLocationListBytes = 85 * v1;
  VIDMM_DMA_POOL::_LowPatchLocationListBytes = 75 * v1;
  v2 = (struct _ERESOURCE *)operator new[](0x68uLL, 0x39326956u, (POOL_TYPE)512);
  VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock = v2;
  if ( v2 )
  {
    v5 = ExInitializeResourceLite(v2);
    if ( v5 < 0 )
    {
      operator delete(VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock);
      VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock = 0LL;
      v10 = WdLogNewEntry5_WdAssertion(v9, v8);
      *(_QWORD *)(v10 + 24) = 273LL;
      WdLogEvent5_WdAssertion(v10);
      return (unsigned int)v5;
    }
    else
    {
      VIDMM_DMA_POOL::_NbDmaBufferLimitCompareWatermark = dword_1C003C270;
      return 0LL;
    }
  }
  else
  {
    v7 = WdLogNewEntry5_WdAssertion(v4, v3);
    *(_QWORD *)(v7 + 24) = 264LL;
    WdLogEvent5_WdAssertion(v7);
    return 3221225495LL;
  }
}
