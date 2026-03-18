/*
 * XREFs of ?Init@DXGFIXEDQUEUE@@QEAAJXZ @ 0x1C0037A50
 * Callers:
 *     ?InitializeSwapchainGlobalState@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESWAPCHAIN@@@Z @ 0x1C01DE85C (-InitializeSwapchainGlobalState@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESWAPCHA.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGFIXEDQUEUE::Init(DXGFIXEDQUEUE *this)
{
  SIZE_T v2; // rax
  PVOID v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax

  v2 = 4LL * *((unsigned int *)this + 1);
  if ( !is_mul_ok(*((unsigned int *)this + 1), 4uLL) )
    v2 = -1LL;
  v3 = operator new[](v2, 0x4B677844u, PagedPool);
  *((_QWORD *)this + 2) = v3;
  if ( v3 )
    return 0LL;
  v5 = WdLogNewEntry5_WdLowResource(v4);
  *(_QWORD *)(v5 + 24) = *((unsigned int *)this + 1);
  WdLogEvent5_WdLowResource(v5);
  return 3221225495LL;
}
