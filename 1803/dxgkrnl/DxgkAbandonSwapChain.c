/*
 * XREFs of DxgkAbandonSwapChain @ 0x1C01E0180
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?SwapChainAbandonInternal@@YAJPEAVDXGSWAPCHAIN@@_N@Z @ 0x1C01DFCC0 (-SwapChainAbandonInternal@@YAJPEAVDXGSWAPCHAIN@@_N@Z.c)
 */

__int64 __fastcall DxgkAbandonSwapChain(__int64 a1, __int64 a2, __int64 a3)
{
  void **v3; // rbx
  void *v4; // rbx
  NTSTATUS v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // r8
  PVOID v13; // rbx
  int v14; // [rsp+30h] [rbp-18h] BYREF
  __int64 v15; // [rsp+38h] [rbp-10h]
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  v3 = (void **)a1;
  v15 = 0LL;
  v14 = 2113;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2113);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v14, 2113);
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (void **)MmUserProbeAddress;
  v4 = *v3;
  v5 = ObReferenceObjectByHandle(v4, 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &Object, 0LL);
  v9 = v5;
  if ( v5 >= 0 )
  {
    v13 = Object;
    LODWORD(v9) = SwapChainAbandonInternal(*(struct DXGSWAPCHAIN **)Object);
    ObfDereferenceObject(v13);
  }
  else
  {
    v10 = WdLogNewEntry5_WdWarning(v7, v6, v8);
    *(_QWORD *)(v10 + 24) = v4;
    *(_QWORD *)(v10 + 32) = v9;
    WdLogEvent5_WdWarning(v10);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v14);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(qword_1C0079010, &EventProfilerExit, v11, v14);
  return (unsigned int)v9;
}
