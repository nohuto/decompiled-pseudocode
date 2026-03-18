/*
 * XREFs of ?SwapChainObDeleteProcedure@@YAXPEAX@Z @ 0x1C01BE380
 * Callers:
 *     <none>
 * Callees:
 *     Template_p @ 0x1C0013458 (Template_p.c)
 *     ??_GDXGSWAPCHAIN@@QEAAPEAXI@Z @ 0x1C003C240 (--_GDXGSWAPCHAIN@@QEAAPEAXI@Z.c)
 */

void __fastcall SwapChainObDeleteProcedure(DXGSWAPCHAIN **a1)
{
  DXGSWAPCHAIN *v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // r8

  v2 = *a1;
  if ( v2 )
  {
    DXGSWAPCHAIN::`scalar deleting destructor'(v2);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
      Template_p(v3, &EventIndirectSwapChainDestroy, v4, *a1);
    *a1 = 0LL;
  }
}
