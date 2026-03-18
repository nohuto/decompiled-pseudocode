/*
 * XREFs of ?SwapChainObCloseProcedure@@YAXPEAU_EPROCESS@@PEAX_K2@Z @ 0x1C01BE340
 * Callers:
 *     <none>
 * Callees:
 *     Template_p @ 0x1C0013458 (Template_p.c)
 *     ?DestroyLocal@DXGSWAPCHAIN@@QEAAXXZ @ 0x1C01BCAD4 (-DestroyLocal@DXGSWAPCHAIN@@QEAAXXZ.c)
 */

void __fastcall SwapChainObCloseProcedure(struct _EPROCESS *a1, DXGSWAPCHAIN **a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // r8

  if ( *a2 )
  {
    DXGSWAPCHAIN::DestroyLocal(*a2, (__int64)a2, a3, a4);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
      Template_p(v5, &EventIndirectSwapChainCloseHandle, v6, *a2);
  }
}
