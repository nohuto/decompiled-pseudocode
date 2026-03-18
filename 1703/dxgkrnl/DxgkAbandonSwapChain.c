/*
 * XREFs of DxgkAbandonSwapChain @ 0x1C01BE530
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?SwapChainAbandonInternal@@YAJPEAVDXGSWAPCHAIN@@@Z @ 0x1C01BE24C (-SwapChainAbandonInternal@@YAJPEAVDXGSWAPCHAIN@@@Z.c)
 */

__int64 __fastcall DxgkAbandonSwapChain(__int64 a1, __int64 a2, __int64 a3)
{
  void **v3; // rbx
  void *v4; // rbx
  NTSTATUS v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // r8
  PVOID v14; // rbx
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  v3 = (void **)a1;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2113);
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (void **)MmUserProbeAddress;
  v4 = *v3;
  v5 = ObReferenceObjectByHandle(v4, 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &Object, 0LL);
  v10 = v5;
  if ( v5 >= 0 )
  {
    v14 = Object;
    LODWORD(v10) = SwapChainAbandonInternal(*(struct DXGSWAPCHAIN **)Object, v6, v8, v9);
    ObfDereferenceObject(v14);
  }
  else
  {
    v11 = WdLogNewEntry5_WdWarning(v7, v6, v8, v9);
    *(_QWORD *)(v11 + 24) = v4;
    *(_QWORD *)(v11 + 32) = v10;
    WdLogEvent5_WdWarning(v11);
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(qword_1C006E790, &EventProfilerExit, v12, 2113);
  return (unsigned int)v10;
}
