/*
 * XREFs of ?SwapChainAbandonInternal@@YAJPEAVDXGSWAPCHAIN@@_N@Z @ 0x1C01DFCC0
 * Callers:
 *     ?SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z @ 0x1C0036D84 (-SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z.c)
 *     ?ResetWorker@BLTQUEUE@@AEAAXXZ @ 0x1C01D6444 (-ResetWorker@BLTQUEUE@@AEAAXXZ.c)
 *     DxgkAbandonSwapChain @ 0x1C01E0180 (DxgkAbandonSwapChain.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z @ 0x1C01DEC18 (-MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z.c)
 */

__int64 __fastcall SwapChainAbandonInternal(struct DXGSWAPCHAIN *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v5, this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v5);
  DXGSWAPCHAIN::MarkAbandoned((struct _KTHREAD **)this, v2, v3);
  if ( v5[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v5);
  return 0LL;
}
