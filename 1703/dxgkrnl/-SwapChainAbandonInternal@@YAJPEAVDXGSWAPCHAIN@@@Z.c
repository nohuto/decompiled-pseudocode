/*
 * XREFs of ?SwapChainAbandonInternal@@YAJPEAVDXGSWAPCHAIN@@@Z @ 0x1C01BE24C
 * Callers:
 *     ?SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z @ 0x1C003B7DC (-SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z.c)
 *     ?ResetWorker@BLTQUEUE@@AEAAXXZ @ 0x1C01B5E8C (-ResetWorker@BLTQUEUE@@AEAAXXZ.c)
 *     DxgkAbandonSwapChain @ 0x1C01BE530 (DxgkAbandonSwapChain.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAXXZ @ 0x1C01BD850 (-MarkAbandoned@DXGSWAPCHAIN@@QEAAXXZ.c)
 */

__int64 __fastcall SwapChainAbandonInternal(struct DXGSWAPCHAIN *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _BYTE v12[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, this, a3, a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
  DXGSWAPCHAIN::MarkAbandoned((struct _KTHREAD **)this, v5, v6, v7);
  if ( v12[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12, v8, v9, v10);
  return 0LL;
}
