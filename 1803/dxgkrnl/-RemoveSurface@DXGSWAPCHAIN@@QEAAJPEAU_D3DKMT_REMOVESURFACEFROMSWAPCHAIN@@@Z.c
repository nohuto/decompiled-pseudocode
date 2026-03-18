/*
 * XREFs of ?RemoveSurface@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_REMOVESURFACEFROMSWAPCHAIN@@@Z @ 0x1C01DF9A4
 * Callers:
 *     DxgkRemoveSurfaceFromSwapChain @ 0x1C01E1E70 (DxgkRemoveSurfaceFromSwapChain.c)
 * Callees:
 *     memset @ 0x1C001C940 (memset.c)
 *     ?DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x1C01DE11C (-DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z.c)
 *     ?DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x1C01DE1B0 (-DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_I.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z @ 0x1C01DEC18 (-MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::RemoveSurface(struct _KTHREAD **this, struct _D3DKMT_REMOVESURFACEFROMSWAPCHAIN *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 BufferIdx; // rax
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rbx
  DXGSWAPCHAIN *v13; // rcx

  if ( this[1] != KeGetCurrentThread() )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v4 + 24) = 2390LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( !*((_DWORD *)this + 58) )
  {
    v5 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v5 + 24) = 2396LL;
    WdLogEvent5_WdError(v5);
    return 3221225659LL;
  }
  BufferIdx = a2->BufferIdx;
  if ( (unsigned int)BufferIdx >= *((_DWORD *)this + 12) )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdError(this);
    v8[3] = a2->BufferIdx;
    v9 = *((unsigned int *)this + 12);
LABEL_7:
    v8[4] = v9;
LABEL_8:
    WdLogEvent5_WdError(v8);
    DXGSWAPCHAIN::MarkAbandoned(this, v10, v11);
    return 3221225485LL;
  }
  v12 = (__int64)this[7] + 96 * BufferIdx;
  if ( !*(_DWORD *)(v12 + 8) )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdError(this);
    v8[3] = a2->BufferIdx;
    v9 = *(int *)(v12 + 8);
    goto LABEL_7;
  }
  if ( *(HANDLE *)(v12 + 48) != a2->hNtSurfaceHandle )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdError(this);
    v8[3] = a2->hNtSurfaceHandle;
    v8[4] = *((_QWORD *)this[7] + 6);
    v8[5] = a2->BufferIdx;
    goto LABEL_8;
  }
  DXGSWAPCHAIN::DestroySurfacesResourcesLocal((__int64)this, 0LL, v12);
  if ( *(_BYTE *)(v12 + 64) )
  {
    *(_DWORD *)(v12 + 8) = 2;
  }
  else
  {
    DXGSWAPCHAIN::DestroySurfacesResourcesGlobal(v13, (struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *)v12);
    memset((void *)v12, 0, 0x60uLL);
    --*((_DWORD *)this + 13);
  }
  return 0LL;
}
