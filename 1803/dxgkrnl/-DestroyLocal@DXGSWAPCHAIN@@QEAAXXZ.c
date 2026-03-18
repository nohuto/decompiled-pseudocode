/*
 * XREFs of ?DestroyLocal@DXGSWAPCHAIN@@QEAAXXZ @ 0x1C01DE090
 * Callers:
 *     ?SwapChainObCloseProcedure@@YAXPEAU_EPROCESS@@PEAX_K2@Z @ 0x1C01DFDC0 (-SwapChainObCloseProcedure@@YAXPEAU_EPROCESS@@PEAX_K2@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z @ 0x1C01DE3BC (-DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z @ 0x1C01DEC18 (-MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z.c)
 */

void __fastcall DXGSWAPCHAIN::DestroyLocal(DXGSWAPCHAIN *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  bool v4; // dl
  __int64 CurrentProcess; // rdi
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v6, this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v6);
  CurrentProcess = PsGetCurrentProcess(v3, v2);
  if ( *((_QWORD *)this + 13) == CurrentProcess )
  {
    DXGSWAPCHAIN::MarkAbandoned(this, v4);
    DXGSWAPCHAIN::DestroySwapchainLocalClient(this, (DXGSWAPCHAIN *)((char *)this + 88));
  }
  if ( *((_QWORD *)this + 19) == CurrentProcess )
  {
    DXGSWAPCHAIN::MarkAbandoned(this, v4);
    DXGSWAPCHAIN::DestroySwapchainLocalClient(this, (DXGSWAPCHAIN *)((char *)this + 136));
  }
  if ( v6[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v6);
}
