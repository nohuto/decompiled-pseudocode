/*
 * XREFs of ?MarkAbandoned@DXGSWAPCHAIN@@QEAAXXZ @ 0x1C01BD850
 * Callers:
 *     ?AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@@Z @ 0x1C01BC7B8 (-AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@@Z.c)
 *     ?DestroyLocal@DXGSWAPCHAIN@@QEAAXXZ @ 0x1C01BCAD4 (-DestroyLocal@DXGSWAPCHAIN@@QEAAXXZ.c)
 *     ?InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z @ 0x1C01BD5FC (-InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z.c)
 *     ?InsertGPUWait@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z @ 0x1C01BD720 (-InsertGPUWait@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z.c)
 *     ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z @ 0x1C01BDD94 (-ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z.c)
 *     ?SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADATA_ETW_INFO@1@D@Z @ 0x1C01BE068 (-SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADA.c)
 *     ?SwapChainAbandonInternal@@YAJPEAVDXGSWAPCHAIN@@@Z @ 0x1C01BE24C (-SwapChainAbandonInternal@@YAJPEAVDXGSWAPCHAIN@@@Z.c)
 * Callees:
 *     Template_ppp @ 0x1C003C3A0 (Template_ppp.c)
 */

void __fastcall DXGSWAPCHAIN::MarkAbandoned(struct _KTHREAD **this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  struct _KEVENT *v6; // rcx
  struct _KEVENT *v7; // rcx

  if ( this[1] != KeGetCurrentThread() )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v5 + 24) = 2367LL;
    WdLogEvent5_WdAssertion(v5);
  }
  v6 = (struct _KEVENT *)this[15];
  *((_DWORD *)this + 11) = 1;
  if ( v6 )
    KeSetEvent(v6, 2, 0);
  v7 = (struct _KEVENT *)this[22];
  if ( v7 )
    KeSetEvent(v7, 2, 0);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
    Template_ppp((__int64)v7, a2, a3, this, this[22], this[15]);
}
