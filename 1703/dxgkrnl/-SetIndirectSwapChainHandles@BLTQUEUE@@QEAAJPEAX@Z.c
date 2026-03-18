/*
 * XREFs of ?SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z @ 0x1C003B7DC
 * Callers:
 *     ?DodSetIndirectSwapchain@ADAPTER_DISPLAY@@QEAAJIPEAX@Z @ 0x1C0170E50 (-DodSetIndirectSwapchain@ADAPTER_DISPLAY@@QEAAJIPEAX@Z.c)
 *     ?Cleanup@BLTQUEUE@@QEAAXXZ @ 0x1C01B407C (-Cleanup@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     ?SwapChainAbandonInternal@@YAJPEAVDXGSWAPCHAIN@@@Z @ 0x1C01BE24C (-SwapChainAbandonInternal@@YAJPEAVDXGSWAPCHAIN@@@Z.c)
 *     ?SwapChainOpenInternal@@YAPEAUDXGSWAPCHAIN_CONTAINER@@PEAX@Z @ 0x1C01BE3C4 (-SwapChainOpenInternal@@YAPEAUDXGSWAPCHAIN_CONTAINER@@PEAX@Z.c)
 *     ?SwapChainUsesWarpInternal@@YAJPEAVDXGSWAPCHAIN@@PEAH@Z @ 0x1C01BE4E4 (-SwapChainUsesWarpInternal@@YAJPEAVDXGSWAPCHAIN@@PEAH@Z.c)
 *     DpiDoInterfaceDereference @ 0x1C01C9CB0 (DpiDoInterfaceDereference.c)
 */

__int64 __fastcall BLTQUEUE::SetIndirectSwapChainHandles(BLTQUEUE *this, void *a2)
{
  struct _KMUTANT *v2; // rbx
  struct DXGSWAPCHAIN **v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  signed int v8; // edi
  __int64 v9; // rax
  struct DXGSWAPCHAIN_CONTAINER *v10; // rax
  struct DXGSWAPCHAIN **v11; // rcx
  int v13; // [rsp+40h] [rbp+8h] BYREF

  v2 = (struct _KMUTANT *)((char *)this + 2568);
  KeWaitForSingleObject((char *)this + 2568, Executive, 0, 0, 0LL);
  v5 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 320);
  if ( !v5 )
    goto LABEL_5;
  v8 = SwapChainAbandonInternal(*v5);
  if ( v8 < 0 )
  {
    v9 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v9 + 24) = this;
    *(_QWORD *)(v9 + 32) = **((_QWORD **)this + 320);
    WdLogEvent5_WdError(v9);
  }
  DpiDoInterfaceDereference(*((PVOID *)this + 320));
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
