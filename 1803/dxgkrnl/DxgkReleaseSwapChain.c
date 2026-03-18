/*
 * XREFs of DxgkReleaseSwapChain @ 0x1C01E1B00
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x1C01DFEC4 (-SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z.c)
 */

__int64 __fastcall DxgkReleaseSwapChain(ULONG64 a1, __int64 a2, __int64 a3)
{
  UINT *pDeferredFreeList; // r15
  UINT *v5; // rdi
  struct _D3DKMT_RELEASESWAPCHAIN *v6; // rax
  __int64 DeferredFreeListSize; // rsi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  SIZE_T v12; // rax
  UINT *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  HANDLE hNtSwapChain; // r12
  NTSTATUS v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rsi
  __int64 v24; // rax
  PVOID pMetaData; // r8
  PVOID v26; // r12
  _DWORD *v27; // r8
  UINT v28; // eax
  size_t v29; // r8
  __int64 v30; // rcx
  __int64 v31; // r8
  int v32; // [rsp+30h] [rbp-68h] BYREF
  __int64 v33; // [rsp+38h] [rbp-60h]
  struct _D3DKMT_RELEASESWAPCHAIN Handle[2]; // [rsp+40h] [rbp-58h] BYREF
  PVOID Object; // [rsp+B0h] [rbp+18h] BYREF

  v33 = 0LL;
  v32 = 2112;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2112);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v32, 2112);
  pDeferredFreeList = 0LL;
  v5 = 0LL;
  v6 = (struct _D3DKMT_RELEASESWAPCHAIN *)a1;
  if ( a1 >= MmUserProbeAddress )
    v6 = (struct _D3DKMT_RELEASESWAPCHAIN *)MmUserProbeAddress;
  Handle[0] = *v6;
  DeferredFreeListSize = Handle[0].DeferredFreeListSize;
  if ( Handle[0].DeferredFreeListSize > 0x32 )
  {
    v8 = WdLogNewEntry5_WdError(MmUserProbeAddress);
    *(_QWORD *)(v8 + 24) = DeferredFreeListSize;
LABEL_8:
    WdLogEvent5_WdError(v8);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v9, &EventProfilerExit, v10, v32);
    return 3221225485LL;
  }
  if ( Handle[0].DeferredFreeListSize )
  {
    pDeferredFreeList = Handle[0].pDeferredFreeList;
    if ( !Handle[0].pDeferredFreeList )
    {
      v8 = WdLogNewEntry5_WdError(MmUserProbeAddress);
      *(_QWORD *)(v8 + 24) = 1260LL;
      goto LABEL_8;
    }
    v12 = 4LL * Handle[0].DeferredFreeListSize;
    if ( !is_mul_ok(Handle[0].DeferredFreeListSize, 4uLL) )
      v12 = -1LL;
    v13 = (UINT *)operator new[](v12, 0x4B677844u, PagedPool);
    v5 = v13;
    if ( !v13 )
    {
      v15 = WdLogNewEntry5_WdLowResource(v14);
      *(_QWORD *)(v15 + 24) = 1267LL;
      WdLogEvent5_WdLowResource(v15);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
      if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v16, &EventProfilerExit, v17, v32);
      return 3221225495LL;
    }
    memset(v13, 0, 4 * DeferredFreeListSize);
    Handle[0].pDeferredFreeList = v5;
  }
  hNtSwapChain = Handle[0].hNtSwapChain;
  v19 = ObReferenceObjectByHandle(Handle[0].hNtSwapChain, 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &Object, 0LL);
  v23 = v19;
  if ( v19 >= 0 )
  {
    pMetaData = Handle[0].pMetaData;
    Handle[0].pMetaData = 0LL;
    v26 = Object;
    LODWORD(v23) = SwapChainReleaseInternal(*(struct DXGSWAPCHAIN **)Object, Handle, pMetaData, 1);
    if ( (int)v23 >= 0 )
    {
      v27 = (_DWORD *)(a1 + 24);
      if ( a1 + 24 >= MmUserProbeAddress )
        v27 = (_DWORD *)MmUserProbeAddress;
      v28 = Handle[0].DeferredFreeListSize;
      *v27 = Handle[0].DeferredFreeListSize;
      if ( v28 )
      {
        v29 = v28;
        if ( (unsigned __int64)&pDeferredFreeList[v29] > MmUserProbeAddress
          || &pDeferredFreeList[v29] <= pDeferredFreeList )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
        }
        memmove(pDeferredFreeList, Handle[0].pDeferredFreeList, v29 * 4);
      }
    }
    ObfDereferenceObject(v26);
  }
  else
  {
    v24 = WdLogNewEntry5_WdWarning(v21, v20, v22);
    *(_QWORD *)(v24 + 24) = hNtSwapChain;
    *(_QWORD *)(v24 + 32) = v23;
    WdLogEvent5_WdWarning(v24);
  }
  if ( v5 )
    operator delete[](v5);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v30, &EventProfilerExit, v31, v32);
  return (unsigned int)v23;
}
