/*
 * XREFs of ?InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z @ 0x1C01DE9B8
 * Callers:
 *     ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z @ 0x1C01DF630 (-ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C00F5360 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?GetContexts@DXGDEVICE@@QEAAXPEAIQEAI@Z @ 0x1C018ACD4 (-GetContexts@DXGDEVICE@@QEAAXPEAIQEAI@Z.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z @ 0x1C01DEC18 (-MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::InsertGPUSignal(
        DXGSWAPCHAIN *this,
        struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *a2,
        struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *a3,
        unsigned int a4)
{
  unsigned __int64 v5; // rbp
  DXGDEVICE *v6; // rcx
  __int64 v9; // rax
  struct DXGPROCESS *v10; // rsi
  __int64 v11; // rax
  bool v12; // dl
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned int v16[4]; // [rsp+60h] [rbp-148h] BYREF
  unsigned int v17[64]; // [rsp+70h] [rbp-138h] BYREF

  v5 = a4;
  v6 = (DXGDEVICE *)*((_QWORD *)a2 + 1);
  if ( !v6 )
  {
    v9 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v9 + 24) = 3189LL;
    WdLogEvent5_WdAssertion(v9);
    v6 = (DXGDEVICE *)*((_QWORD *)a2 + 1);
  }
  v10 = (struct DXGPROCESS *)*((_QWORD *)v6 + 5);
  if ( v10 )
  {
    DXGDEVICE::GetContexts(v6, v16, v17);
    if ( v16[0] )
    {
      return SignalSynchronizationObjectInternal(
               1LL,
               (unsigned int *)a3 + 8 * *((int *)a2 + 7) + 10,
               0,
               v16[0],
               v17,
               0LL,
               v5,
               0LL,
               v10,
               0,
               1);
    }
    else
    {
      v15 = WdLogNewEntry5_WdError(v14);
      *(_QWORD *)(v15 + 24) = this;
      *(_QWORD *)(v15 + 32) = *((_QWORD *)a2 + 1);
      WdLogEvent5_WdError(v15);
      return 3221225473LL;
    }
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v11 + 24) = 3195LL;
    WdLogEvent5_WdError(v11);
    DXGSWAPCHAIN::MarkAbandoned(this, v12);
    return 3221225485LL;
  }
}
