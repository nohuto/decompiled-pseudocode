/*
 * XREFs of _lambda_16712371fc597dbb63c062fbcd9d104b_::_lambda_invoker_cdecl_ @ 0x1C01B3EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x1C01BE430 (-SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z.c)
 */

LONG_PTR __fastcall lambda_16712371fc597dbb63c062fbcd9d104b_::_lambda_invoker_cdecl_(struct DXGSWAPCHAIN **Object)
{
  struct DXGSWAPCHAIN *v2; // rcx
  __int64 v3; // rdi
  LONG_PTR result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // [rsp+20h] [rbp-38h]
  struct _D3DKMT_RELEASESWAPCHAIN v9; // [rsp+30h] [rbp-28h] BYREF

  v9.pMetaData = 0LL;
  v2 = *Object;
  v9.hNtSwapChain = 0LL;
  v9.MetaDataSize = 0;
  v9.pMetaData = 0LL;
  v9.bProducer = 1;
  v3 = (int)SwapChainReleaseInternal(v2, &v9, 0LL, 0, v8);
  result = ObfDereferenceObject(Object);
  if ( (int)v3 < 0 )
  {
    v7 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v7 + 24) = v3;
    return WdLogEvent5_WdError(v7);
  }
  return result;
}
