/*
 * XREFs of DxgkReleaseSwapChain @ 0x1C01BF660
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x1C01BE430 (-SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z.c)
 */

__int64 __fastcall DxgkReleaseSwapChain(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // rbx
  NTSTATUS v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r8
  PVOID pMetaData; // r8
  PVOID v14; // rbx
  unsigned int v15; // esi
  __int64 v16; // r8
  struct _D3DKMT_RELEASESWAPCHAIN Handle; // [rsp+30h] [rbp-28h] BYREF
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF

  v3 = a1;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2112);
  if ( v3 >= MmUserProbeAddress )
    v3 = MmUserProbeAddress;
  *(_OWORD *)&Handle.hNtSwapChain = *(_OWORD *)v3;
  Handle.pMetaData = *(PVOID *)(v3 + 16);
  v4 = ObReferenceObjectByHandle(Handle.hNtSwapChain, 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &Object, 0LL);
  v9 = v4;
  if ( v4 >= 0 )
  {
    pMetaData = Handle.pMetaData;
    Handle.pMetaData = 0LL;
    LOBYTE(v8) = 1;
    v14 = Object;
    v15 = SwapChainReleaseInternal(*(struct DXGSWAPCHAIN **)Object, &Handle, (__int64)pMetaData, v8);
    ObfDereferenceObject(v14);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(qword_1C006E790, &EventProfilerExit, v16, 2112);
    return v15;
  }
  else
  {
    v10 = WdLogNewEntry5_WdWarning(v6, v5, v7, v8);
    *(_QWORD *)(v10 + 24) = Handle.hNtSwapChain;
    *(_QWORD *)(v10 + 32) = v9;
    WdLogEvent5_WdWarning(v10);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(qword_1C006E790, &EventProfilerExit, v11, 2112);
    return (unsigned int)v9;
  }
}
