/*
 * XREFs of ?DestroyLocal@DXGSWAPCHAIN@@QEAAXXZ @ 0x1C01BCAD4
 * Callers:
 *     ?SwapChainObCloseProcedure@@YAXPEAU_EPROCESS@@PEAX_K2@Z @ 0x1C01BE340 (-SwapChainObCloseProcedure@@YAXPEAU_EPROCESS@@PEAX_K2@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?DestroyLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z @ 0x1C01BCB60 (-DestroyLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAXXZ @ 0x1C01BD850 (-MarkAbandoned@DXGSWAPCHAIN@@QEAAXXZ.c)
 */

void __fastcall DXGSWAPCHAIN::DestroyLocal(DXGSWAPCHAIN *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 CurrentProcess; // rdi
  __int64 v8; // r8
  __int64 v9; // r9
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, this, a3, a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
  CurrentProcess = PsGetCurrentProcess(v5);
  if ( *((_QWORD *)this + 11) == CurrentProcess )
  {
    DXGSWAPCHAIN::MarkAbandoned(this);
    DXGSWAPCHAIN::DestroyLocalClient(this, (DXGSWAPCHAIN *)((char *)this + 72));
  }
  if ( *((_QWORD *)this + 18) == CurrentProcess )
  {
    DXGSWAPCHAIN::MarkAbandoned(this);
    DXGSWAPCHAIN::DestroyLocalClient(this, (DXGSWAPCHAIN *)((char *)this + 128));
  }
  if ( v10[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v10, v6, v8, v9);
}
