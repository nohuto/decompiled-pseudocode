/*
 * XREFs of ??_GDXGSWAPCHAIN@@QEAAPEAXI@Z @ 0x1C002C570
 * Callers:
 *     ?SwapChainObDeleteProcedure@@YAXPEAX@Z @ 0x1C01D6B00 (-SwapChainObDeleteProcedure@@YAXPEAX@Z.c)
 *     DxgkCreateSwapChain @ 0x1C01D7080 (DxgkCreateSwapChain.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 *     ??1DXGSWAPCHAIN@@QEAA@XZ @ 0x1C01D4A20 (--1DXGSWAPCHAIN@@QEAA@XZ.c)
 */

DXGSWAPCHAIN *__fastcall DXGSWAPCHAIN::`scalar deleting destructor'(DXGSWAPCHAIN *this)
{
  DXGSWAPCHAIN::~DXGSWAPCHAIN(this);
  operator delete(this);
  return this;
}
