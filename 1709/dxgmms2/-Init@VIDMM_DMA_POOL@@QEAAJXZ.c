/*
 * XREFs of ?Init@VIDMM_DMA_POOL@@QEAAJXZ @ 0x1C0073D84
 * Callers:
 *     VidMmInitDmaPool @ 0x1C0015BC0 (VidMmInitDmaPool.c)
 *     ?InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C0079CB4 (-InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C00677E0 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?LockAllPoolForAddRemove@VIDMM_DMA_POOL@@KAXE@Z @ 0x1C0073498 (-LockAllPoolForAddRemove@VIDMM_DMA_POOL@@KAXE@Z.c)
 *     ?UpdateFairResourceUsage@VIDMM_DMA_POOL@@IEAAXXZ @ 0x1C0074118 (-UpdateFairResourceUsage@VIDMM_DMA_POOL@@IEAAXXZ.c)
 *     ?VerifySegmentSet@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z @ 0x1C0074208 (-VerifySegmentSet@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z.c)
 */

__int64 __fastcall VIDMM_DMA_POOL::Init(VIDMM_DMA_POOL *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // edi
  int v5; // esi
  VIDMM_DMA_POOL **v6; // rdx
  VIDMM_DMA_POOL *v7; // rcx
  __int64 v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // rax
  unsigned int v12; // [rsp+40h] [rbp+8h] BYREF

  if ( (*((_BYTE *)this + 32) & 1) != 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      v9 = WdLogNewEntry5_WdTrace(this);
      *(_QWORD *)(v9 + 24) = this;
      *(_QWORD *)(v9 + 32) = 2LL;
    }
  }
  else if ( g_IsInternalReleaseOrDbg )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v10[3] = this;
    v10[4] = *((_QWORD *)this + 2);
    v10[5] = 2LL;
  }
  if ( VIDMM_GLOBAL::VerifySegmentSet(*(VIDMM_GLOBAL **)this, *((_DWORD *)this + 2), *((_DWORD *)this + 9), 1u, &v12) )
  {
    v4 = 0;
    while ( 1 )
    {
      v5 = VIDMM_DMA_POOL::AddDmaBufferToPool(
             this,
             *((_QWORD *)this + 5),
             *((_DWORD *)this + 16),
             *((_DWORD *)this + 19));
      if ( v5 < 0 )
        break;
      if ( (unsigned int)++v4 >= 2 )
      {
        VIDMM_DMA_POOL::LockAllPoolForAddRemove(1);
        v6 = (VIDMM_DMA_POOL **)qword_1C0040720;
        v7 = (VIDMM_DMA_POOL *)((char *)this + 112);
        if ( *(struct _LIST_ENTRY **)qword_1C0040720 != &VIDMM_DMA_POOL::_DmaPoolsListHead )
          __fastfail(3u);
        *(_QWORD *)v7 = &VIDMM_DMA_POOL::_DmaPoolsListHead;
        *((_QWORD *)this + 15) = v6;
        *v6 = v7;
        qword_1C0040720 = (__int64)this + 112;
        _InterlockedIncrement(&VIDMM_DMA_POOL::_NbActiveDmaPools);
        VIDMM_DMA_POOL::UpdateFairResourceUsage(v7);
        ExReleaseResourceLite(VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock);
        *((_DWORD *)this + 8) |= 0xAu;
        return (unsigned int)v5;
      }
    }
    return (unsigned int)v5;
  }
  else
  {
    v11 = WdLogNewEntry5_WdAssertion(v3, v2);
    *(_QWORD *)(v11 + 24) = *((unsigned int *)this + 9);
    WdLogEvent5_WdAssertion(v11);
    return 3221225485LL;
  }
}
