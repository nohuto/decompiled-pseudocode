/*
 * XREFs of ?SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z @ 0x1C0036D84
 * Callers:
 *     ?DodSetIndirectSwapchain@ADAPTER_DISPLAY@@QEAAJIPEAX@Z @ 0x1C0153C84 (-DodSetIndirectSwapchain@ADAPTER_DISPLAY@@QEAAJIPEAX@Z.c)
 *     ?Cleanup@BLTQUEUE@@QEAAXXZ @ 0x1C01D4448 (-Cleanup@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     ?SwapChainAbandonInternal@@YAJPEAVDXGSWAPCHAIN@@_N@Z @ 0x1C01DFCC0 (-SwapChainAbandonInternal@@YAJPEAVDXGSWAPCHAIN@@_N@Z.c)
 *     ?SwapChainOpenInternal@@YAPEAUDXGSWAPCHAIN_CONTAINER@@PEAX@Z @ 0x1C01DFE58 (-SwapChainOpenInternal@@YAPEAUDXGSWAPCHAIN_CONTAINER@@PEAX@Z.c)
 *     ?SwapChainUsesWarpInternal@@YAJPEAVDXGSWAPCHAIN@@PEAH@Z @ 0x1C01DFF78 (-SwapChainUsesWarpInternal@@YAJPEAVDXGSWAPCHAIN@@PEAH@Z.c)
 *     DpiDoInterfaceDereference @ 0x1C0202010 (DpiDoInterfaceDereference.c)
 */

__int64 __fastcall BLTQUEUE::SetIndirectSwapChainHandles(BLTQUEUE *this, void *a2)
{
  struct _KMUTANT *v2; // rbx
  bool v5; // dl
  struct DXGSWAPCHAIN **v6; // rax
  __int64 v7; // rcx
  int v8; // edi
  __int64 v9; // rax
  struct DXGSWAPCHAIN **v10; // rax
  int v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = (struct _KMUTANT *)((char *)this + 2568);
  KeWaitForSingleObject((char *)this + 2568, Executive, 0, 0, 0LL);
  v6 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 320);
  if ( !v6 )
    goto LABEL_5;
  v8 = SwapChainAbandonInternal(*v6, v5);
  if ( v8 < 0 )
  {
    v9 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v9 + 24) = this;
    *(_QWORD *)(v9 + 32) = **((_QWORD **)this + 320);
    WdLogEvent5_WdError(v9);
  }
  DpiDoInterfaceDereference(*((_QWORD *)this + 320));
  *((_QWORD *)this + 320) = 0LL;
  if ( v8 >= 0 )
  {
LABEL_5:
    v8 = 0;
    if ( a2 )
    {
      v10 = (struct DXGSWAPCHAIN **)SwapChainOpenInternal(a2);
      *((_QWORD *)this + 320) = v10;
      if ( v10 )
      {
        v12 = 0;
        SwapChainUsesWarpInternal(*v10, &v12);
        *((_DWORD *)this + 657) = v12;
        *((_DWORD *)this + 656) = 1;
      }
      else
      {
        v8 = -1073741823;
      }
    }
  }
  KeReleaseMutex(v2, 0);
  return (unsigned int)v8;
}
