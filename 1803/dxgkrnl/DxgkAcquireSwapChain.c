/*
 * XREFs of DxgkAcquireSwapChain @ 0x1C01E02F0
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
 *     ??0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z @ 0x1C01DD638 (--0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z.c)
 *     ??1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ @ 0x1C01DD6A4 (--1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ.c)
 *     ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z @ 0x1C01DD6D8 (-Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z.c)
 *     ?AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAI@Z @ 0x1C01DDA50 (-AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAI@Z.c)
 */

__int64 __fastcall DxgkAcquireSwapChain(ULONG64 a1, __int64 a2, __int64 a3)
{
  UINT *pDeferredFreeList; // r13
  UINT *v5; // r14
  struct _D3DKMT_ACQUIRESWAPCHAIN *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 DeferredFreeListSize; // rdi
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
  __int64 v23; // rdi
  __int64 v24; // rax
  struct _KTHREAD ***v25; // r12
  __int64 v26; // rcx
  __int64 v27; // rax
  int v28; // eax
  _DWORD *v29; // rdx
  _QWORD *v30; // rdx
  __m128i v31; // xmm1
  _DWORD *v32; // rdx
  _DWORD *v33; // rdx
  UINT v34; // eax
  size_t v35; // r8
  __int64 v36; // rcx
  __int64 v37; // r8
  int v38; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v39; // [rsp+38h] [rbp-F0h]
  struct _D3DKMT_ACQUIRESWAPCHAIN Handle; // [rsp+40h] [rbp-E8h] BYREF
  struct DXGDEVICE *v41; // [rsp+90h] [rbp-98h] BYREF
  _BYTE v42[136]; // [rsp+A0h] [rbp-88h] BYREF
  PVOID Object; // [rsp+138h] [rbp+10h] BYREF
  UINT *v45; // [rsp+140h] [rbp+18h]
  struct DXGSWAPCHAIN *v46; // [rsp+148h] [rbp+20h]

  v39 = 0LL;
  v38 = 2111;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2111);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v38, 2111);
  pDeferredFreeList = 0LL;
  v5 = 0LL;
  v45 = 0LL;
  v6 = (struct _D3DKMT_ACQUIRESWAPCHAIN *)a1;
  if ( a1 >= MmUserProbeAddress )
    v6 = (struct _D3DKMT_ACQUIRESWAPCHAIN *)MmUserProbeAddress;
  Handle = *v6;
  if ( Handle.bReleaseBeforeAcquire && Handle.bProducer != Handle.ReleaseInfo.bProducer )
  {
    v7 = WdLogNewEntry5_WdError(MmUserProbeAddress);
    *(_QWORD *)(v7 + 24) = 1104LL;
LABEL_9:
    WdLogEvent5_WdError(v7);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v8, &EventProfilerExit, v9, v38);
    return 3221225485LL;
  }
  DeferredFreeListSize = Handle.ReleaseInfo.DeferredFreeListSize;
  if ( Handle.ReleaseInfo.DeferredFreeListSize > 0x32 )
  {
    v7 = WdLogNewEntry5_WdError(MmUserProbeAddress);
    *(_QWORD *)(v7 + 24) = DeferredFreeListSize;
    goto LABEL_9;
  }
  if ( Handle.ReleaseInfo.DeferredFreeListSize )
  {
    pDeferredFreeList = Handle.ReleaseInfo.pDeferredFreeList;
    if ( !Handle.ReleaseInfo.pDeferredFreeList )
    {
      v7 = WdLogNewEntry5_WdError(MmUserProbeAddress);
      *(_QWORD *)(v7 + 24) = 1119LL;
      goto LABEL_9;
    }
    v12 = 4LL * Handle.ReleaseInfo.DeferredFreeListSize;
    if ( !is_mul_ok(Handle.ReleaseInfo.DeferredFreeListSize, 4uLL) )
      v12 = -1LL;
    v13 = (UINT *)operator new[](v12, 0x4B677844u, PagedPool);
    v5 = v13;
    v45 = v13;
    if ( !v13 )
    {
      v15 = WdLogNewEntry5_WdLowResource(v14);
      *(_QWORD *)(v15 + 24) = 1126LL;
      WdLogEvent5_WdLowResource(v15);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
      if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v16, &EventProfilerExit, v17, v38);
      return 3221225495LL;
    }
    memset(v13, 0, 4 * DeferredFreeListSize);
    Handle.ReleaseInfo.pDeferredFreeList = v5;
  }
  hNtSwapChain = Handle.hNtSwapChain;
  v19 = ObReferenceObjectByHandle(Handle.hNtSwapChain, 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &Object, 0LL);
  v23 = v19;
  if ( v19 >= 0 )
  {
    v25 = (struct _KTHREAD ***)Object;
    v46 = *(struct DXGSWAPCHAIN **)Object;
    DXGSWAPCHAINLOCKWITHDEVICE::DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v42, v46, Handle.bProducer, 1);
    LODWORD(v23) = DXGSWAPCHAINLOCKWITHDEVICE::Acquire((DXGSWAPCHAINLOCKWITHDEVICE *)v42, &v41, 1);
    if ( (int)v23 >= 0 )
    {
      if ( *((_DWORD *)v46 + 58) && Handle.bProducer )
      {
        v27 = WdLogNewEntry5_WdError(v26);
        *(_QWORD *)(v27 + 24) = 1199LL;
        WdLogEvent5_WdError(v27);
        LODWORD(v23) = -1073741637;
      }
      else
      {
        v28 = DXGSWAPCHAIN::AcquireBuffer(*v25, &Handle, 0LL);
        LODWORD(v23) = v28;
        if ( v28 >= 0 && v28 != 259 )
        {
          v29 = (_DWORD *)(a1 + 56);
          if ( a1 + 56 >= MmUserProbeAddress )
            v29 = (_DWORD *)MmUserProbeAddress;
          *v29 = Handle.AcquiredBufferIdx;
          v30 = (_QWORD *)(a1 + 64);
          if ( a1 + 64 >= MmUserProbeAddress )
            v30 = (_QWORD *)MmUserProbeAddress;
          v31 = *(__m128i *)&Handle.OpenerAcquiredSurfaceHandle;
          *v30 = Handle.OpenerAcquiredSurfaceHandle;
          v32 = (_DWORD *)(a1 + 72);
          if ( a1 + 72 >= MmUserProbeAddress )
            v32 = (_DWORD *)MmUserProbeAddress;
          *v32 = _mm_cvtsi128_si32(_mm_srli_si128(v31, 8));
          v33 = (_DWORD *)(a1 + 40);
          if ( a1 + 40 >= MmUserProbeAddress )
            v33 = (_DWORD *)MmUserProbeAddress;
          v34 = Handle.ReleaseInfo.DeferredFreeListSize;
          *v33 = Handle.ReleaseInfo.DeferredFreeListSize;
          if ( v34 )
          {
            v35 = v34;
            if ( (unsigned __int64)&pDeferredFreeList[v35] > MmUserProbeAddress
              || &pDeferredFreeList[v35] <= pDeferredFreeList )
            {
              *(_BYTE *)MmUserProbeAddress = 0;
            }
            memmove(pDeferredFreeList, Handle.ReleaseInfo.pDeferredFreeList, v35 * 4);
          }
        }
      }
    }
    DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v42);
  }
  else
  {
    v24 = WdLogNewEntry5_WdWarning(v21, v20, v22);
    *(_QWORD *)(v24 + 24) = hNtSwapChain;
    *(_QWORD *)(v24 + 32) = v23;
    WdLogEvent5_WdWarning(v24);
    v25 = (struct _KTHREAD ***)Object;
  }
  if ( v25 )
    ObfDereferenceObject(v25);
  if ( v5 )
    operator delete[](v5);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v36, &EventProfilerExit, v37, v38);
  return (unsigned int)v23;
}
