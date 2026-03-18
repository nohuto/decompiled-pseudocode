/*
 * XREFs of ?UnOrderedPresent@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_UNORDEREDPRESENTSWAPCHAIN@@@Z @ 0x1C01DFFC4
 * Callers:
 *     DxgkUnOrderedPresentSwapChain @ 0x1C01E20F0 (DxgkUnOrderedPresentSwapChain.c)
 * Callees:
 *     memset @ 0x1C001C940 (memset.c)
 *     ?AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAI@Z @ 0x1C01DDA50 (-AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAI@Z.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z @ 0x1C01DEC18 (-MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z.c)
 *     ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z @ 0x1C01DF630 (-ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::UnOrderedPresent(struct _KTHREAD **this, struct _D3DKMT_UNORDEREDPRESENTSWAPCHAIN *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  UINT *p_PresentBufferIdx; // r14
  __int64 PresentBufferIdx; // rax
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdi
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rax
  PVOID pMetaData; // r8
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rax
  struct _D3DKMT_RELEASESWAPCHAIN v23; // [rsp+20h] [rbp-88h] BYREF
  _D3DKMT_ACQUIRESWAPCHAIN v24; // [rsp+50h] [rbp-58h] BYREF

  if ( this[1] != KeGetCurrentThread() )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v4 + 24) = 2488LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( !*((_DWORD *)this + 58) )
  {
    v5 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v5 + 24) = 2493LL;
    WdLogEvent5_WdError(v5);
    return 3221225659LL;
  }
  p_PresentBufferIdx = &a2->PresentBufferIdx;
  PresentBufferIdx = a2->PresentBufferIdx;
  if ( (unsigned int)PresentBufferIdx >= *((_DWORD *)this + 12) )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdError(this);
    v9[3] = *p_PresentBufferIdx;
    v10 = *((unsigned int *)this + 12);
LABEL_7:
    v9[4] = v10;
LABEL_8:
    WdLogEvent5_WdError(v9);
    DXGSWAPCHAIN::MarkAbandoned(this, v11, v12);
    return 3221225485LL;
  }
  v13 = (__int64)this[7] + 96 * PresentBufferIdx;
  if ( !*(_DWORD *)(v13 + 8) )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdError(this);
    v9[3] = *p_PresentBufferIdx;
    v10 = *(int *)(v13 + 8);
    goto LABEL_7;
  }
  if ( *(HANDLE *)(v13 + 48) != a2->hNtPresentSurfaceHandle )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdError(this);
    v9[3] = a2->hNtPresentSurfaceHandle;
    v9[4] = *((_QWORD *)this[7] + 6);
    v9[5] = *p_PresentBufferIdx;
    goto LABEL_8;
  }
  memset(&v24, 0, sizeof(v24));
  v24.bProducer = a2->bProducer;
  v14 = DXGSWAPCHAIN::AcquireBuffer(this, &v24, &a2->PresentBufferIdx);
  v16 = v14;
  if ( v14 >= 0 )
  {
    memset(&v23, 0, sizeof(v23));
    pMetaData = a2->pMetaData;
    v23.bProducer = a2->bProducer;
    v23.MetaDataSize = a2->MetaDataSize;
    v19 = DXGSWAPCHAIN::ReleaseBuffer((DXGSWAPCHAIN *)this, &v23, pMetaData, 1);
    v21 = v19;
    if ( v19 < 0 )
    {
      v22 = WdLogNewEntry5_WdError(v20);
      *(_QWORD *)(v22 + 24) = v21;
      WdLogEvent5_WdError(v22);
    }
    return (unsigned int)v21;
  }
  else
  {
    v17 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v17 + 24) = v16;
    WdLogEvent5_WdError(v17);
    return (unsigned int)v16;
  }
}
