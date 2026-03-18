/*
 * XREFs of ?SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z @ 0x1C002BBAC
 * Callers:
 *     ?DodSetIndirectSwapchain@ADAPTER_DISPLAY@@QEAAJIPEAX@Z @ 0x1C01746A4 (-DodSetIndirectSwapchain@ADAPTER_DISPLAY@@QEAAJIPEAX@Z.c)
 *     ?Cleanup@BLTQUEUE@@QEAAXXZ @ 0x1C01CDDB4 (-Cleanup@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     ?SwapChainAbandonInternal@@YAJPEAVDXGSWAPCHAIN@@_N@Z @ 0x1C01D69BC (-SwapChainAbandonInternal@@YAJPEAVDXGSWAPCHAIN@@_N@Z.c)
 *     ?SwapChainOpenInternal@@YAPEAUDXGSWAPCHAIN_CONTAINER@@PEAX@Z @ 0x1C01D6B48 (-SwapChainOpenInternal@@YAPEAUDXGSWAPCHAIN_CONTAINER@@PEAX@Z.c)
 *     ?SwapChainUsesWarpInternal@@YAJPEAVDXGSWAPCHAIN@@PEAH@Z @ 0x1C01D6C68 (-SwapChainUsesWarpInternal@@YAJPEAVDXGSWAPCHAIN@@PEAH@Z.c)
 *     DpiDoInterfaceDereference @ 0x1C01E3E00 (DpiDoInterfaceDereference.c)
 */

__int64 __fastcall BLTQUEUE::SetIndirectSwapChainHandles(BLTQUEUE *this, void *a2)
{
  struct _KMUTANT *v2; // rbx
  bool v5; // dl
  struct DXGSWAPCHAIN **v6; // rcx
  __int64 v7; // rcx
  signed int v8; // edi
  __int64 v9; // rax
  struct DXGSWAPCHAIN_CONTAINER *v10; // rax
  struct DXGSWAPCHAIN **v11; // rcx
  int v13; // [rsp+40h] [rbp+8h] BYREF

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
      v10 = SwapChainOpenInternal(a2);
      *((_QWORD *)this + 320) = v10;
      v8 = v10 == 0LL ? 0xC0000001 : 0;
    }
    v11 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 320);
    if ( v11 )
    {
      v13 = 0;
      SwapChainUsesWarpInternal(*v11, &v13);
      *((_DWORD *)this + 657) = v13;
      *((_DWORD *)this + 656) = 1;
    }
  }
  KeReleaseMutex(v2, 0);
  return (unsigned int)v8;
}
