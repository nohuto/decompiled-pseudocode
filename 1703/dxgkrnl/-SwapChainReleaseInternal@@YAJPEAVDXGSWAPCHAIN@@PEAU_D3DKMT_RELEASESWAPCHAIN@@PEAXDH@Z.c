/*
 * XREFs of ?SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x1C01BE430
 * Callers:
 *     _lambda_16712371fc597dbb63c062fbcd9d104b_::_lambda_invoker_cdecl_ @ 0x1C01B3EF0 (_lambda_16712371fc597dbb63c062fbcd9d104b_--_lambda_invoker_cdecl_.c)
 *     DxgkReleaseSwapChain @ 0x1C01BF660 (DxgkReleaseSwapChain.c)
 * Callees:
 *     ??0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z @ 0x1C01BC398 (--0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z.c)
 *     ??1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ @ 0x1C01BC400 (--1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ.c)
 *     ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z @ 0x1C01BC434 (-Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z.c)
 *     ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z @ 0x1C01BDD94 (-ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z.c)
 */

__int64 __fastcall SwapChainReleaseInternal(
        struct DXGSWAPCHAIN *this,
        struct _D3DKMT_RELEASESWAPCHAIN *a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // si
  void *v5; // r14
  __int64 v8; // rax
  int v9; // edi
  __int64 v10; // r9
  _BYTE v12[96]; // [rsp+20h] [rbp-78h] BYREF
  struct DXGDEVICE *v13; // [rsp+A8h] [rbp+10h] BYREF

  v4 = a4;
  v5 = (void *)a3;
  if ( a2->pMetaData )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v8 + 24) = 993LL;
    WdLogEvent5_WdAssertion(v8);
  }
  a2->pMetaData = 0LL;
  LOBYTE(a4) = v4;
  LOBYTE(a3) = a2->bProducer;
  DXGSWAPCHAINLOCKWITHDEVICE::DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v12, this, a3, a4);
  v9 = DXGSWAPCHAINLOCKWITHDEVICE::Acquire((DXGSWAPCHAINLOCKWITHDEVICE *)v12, &v13, 1);
  if ( v9 >= 0 )
  {
    LOBYTE(v10) = v4;
    v9 = DXGSWAPCHAIN::ReleaseBuffer(this, a2, v5, v10);
  }
  DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v12);
  return (unsigned int)v9;
}
