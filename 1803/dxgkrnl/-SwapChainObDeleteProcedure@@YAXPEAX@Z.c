/*
 * XREFs of ?SwapChainObDeleteProcedure@@YAXPEAX@Z @ 0x1C01DFE10
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0p @ 0x1C0027764 (McTemplateK0p.c)
 *     ??_GDXGSWAPCHAIN@@QEAAPEAXI@Z @ 0x1C00377DC (--_GDXGSWAPCHAIN@@QEAAPEAXI@Z.c)
 */

void __fastcall SwapChainObDeleteProcedure(DXGSWAPCHAIN **a1)
{
  DXGSWAPCHAIN *v2; // rcx
  __int64 v3; // r8

  v2 = *a1;
  if ( v2 )
  {
    DXGSWAPCHAIN::`scalar deleting destructor'(v2);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000000) != 0 )
      McTemplateK0p(&DxgkControlGuid_Context, &EventIndirectSwapChainDestroy, v3, *a1);
    *a1 = 0LL;
  }
}
