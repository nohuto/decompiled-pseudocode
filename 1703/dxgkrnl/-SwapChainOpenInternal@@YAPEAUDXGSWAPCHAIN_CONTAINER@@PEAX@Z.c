/*
 * XREFs of ?SwapChainOpenInternal@@YAPEAUDXGSWAPCHAIN_CONTAINER@@PEAX@Z @ 0x1C01BE3C4
 * Callers:
 *     ?SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z @ 0x1C003B7DC (-SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z.c)
 *     ?DodSetIndirectSwapchain@ADAPTER_DISPLAY@@QEAAJIPEAX@Z @ 0x1C0170E50 (-DodSetIndirectSwapchain@ADAPTER_DISPLAY@@QEAAJIPEAX@Z.c)
 * Callees:
 *     <none>
 */

struct DXGSWAPCHAIN_CONTAINER *__fastcall SwapChainOpenInternal(void *a1)
{
  NTSTATUS v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdi
  __int64 v8; // rax
  PVOID v10; // [rsp+48h] [rbp+10h] BYREF

  v2 = ObReferenceObjectByHandle(a1, 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &v10, 0LL);
  v7 = v2;
  if ( v2 >= 0 )
    return (struct DXGSWAPCHAIN_CONTAINER *)v10;
  v8 = WdLogNewEntry5_WdWarning(v4, v3, v5, v6);
  *(_QWORD *)(v8 + 24) = a1;
  *(_QWORD *)(v8 + 32) = v7;
  WdLogEvent5_WdWarning(v8);
  return 0LL;
}
