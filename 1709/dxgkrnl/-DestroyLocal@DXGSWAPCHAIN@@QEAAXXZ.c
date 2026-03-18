/*
 * XREFs of ?DestroyLocal@DXGSWAPCHAIN@@QEAAXXZ @ 0x1C01D5188
 * Callers:
 *     ?SwapChainObCloseProcedure@@YAXPEAU_EPROCESS@@PEAX_K2@Z @ 0x1C01D6AB0 (-SwapChainObCloseProcedure@@YAXPEAU_EPROCESS@@PEAX_K2@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?DestroyLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z @ 0x1C01D5214 (-DestroyLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z @ 0x1C01D5FC4 (-MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z.c)
 */

void __fastcall DXGSWAPCHAIN::DestroyLocal(DXGSWAPCHAIN *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  bool v4; // dl
  __int64 CurrentProcess; // rdi
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v6, this);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v6);
  CurrentProcess = PsGetCurrentProcess(v3, v2);
  if ( *((_QWORD *)this + 12) == CurrentProcess )
  {
    DXGSWAPCHAIN::MarkAbandoned(this, v4);
    DXGSWAPCHAIN::DestroyLocalClient(this, (DXGSWAPCHAIN *)((char *)this + 80));
  }
  if ( *((_QWORD *)this + 18) == CurrentProcess )
  {
    DXGSWAPCHAIN::MarkAbandoned(this, v4);
    DXGSWAPCHAIN::DestroyLocalClient(this, (DXGSWAPCHAIN *)((char *)this + 128));
  }
  if ( v6[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v6);
}
