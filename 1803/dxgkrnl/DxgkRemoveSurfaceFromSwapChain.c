/*
 * XREFs of DxgkRemoveSurfaceFromSwapChain @ 0x1C01E1E70
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     McTemplateK0pqqpq @ 0x1C0037FBC (McTemplateK0pqqpq.c)
 *     ??0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z @ 0x1C01DD638 (--0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z.c)
 *     ??1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ @ 0x1C01DD6A4 (--1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ.c)
 *     ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z @ 0x1C01DD6D8 (-Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z.c)
 *     ?RemoveSurface@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_REMOVESURFACEFROMSWAPCHAIN@@@Z @ 0x1C01DF9A4 (-RemoveSurface@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_REMOVESURFACEFROMSWAPCHAIN@@@Z.c)
 */

__int64 __fastcall DxgkRemoveSurfaceFromSwapChain(__int64 a1, __int64 a2, __int64 a3)
{
  struct _D3DKMT_REMOVESURFACEFROMSWAPCHAIN *v3; // rdi
  BOOL bProducer; // esi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  HANDLE hNtSwapChain; // r14
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rcx
  bool v18; // zf
  struct _KTHREAD ***v19; // r14
  struct DXGSWAPCHAIN *v20; // r15
  __int64 v21; // rcx
  __int64 v22; // r8
  PVOID *Object; // [rsp+20h] [rbp-B8h]
  __int64 v24; // [rsp+28h] [rbp-B0h]
  __int64 v25; // [rsp+40h] [rbp-98h] BYREF
  __int64 v26; // [rsp+48h] [rbp-90h]
  struct _D3DKMT_REMOVESURFACEFROMSWAPCHAIN Handle; // [rsp+50h] [rbp-88h] BYREF
  _BYTE v28[96]; // [rsp+70h] [rbp-68h] BYREF
  PVOID v29; // [rsp+E8h] [rbp+10h] BYREF

  v3 = (struct _D3DKMT_REMOVESURFACEFROMSWAPCHAIN *)a1;
  v26 = 0LL;
  LODWORD(v25) = 2200;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2200);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v25, 2200);
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (struct _D3DKMT_REMOVESURFACEFROMSWAPCHAIN *)MmUserProbeAddress;
  Handle = *v3;
  bProducer = Handle.bProducer;
  if ( Handle.bProducer )
  {
    hNtSwapChain = Handle.hNtSwapChain;
    v10 = ObReferenceObjectByHandle(Handle.hNtSwapChain, 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &v29, 0LL);
    v14 = v10;
    if ( v10 >= 0 )
    {
      v19 = (struct _KTHREAD ***)v29;
      v20 = *(struct DXGSWAPCHAIN **)v29;
      DXGSWAPCHAINLOCKWITHDEVICE::DXGSWAPCHAINLOCKWITHDEVICE(
        (DXGSWAPCHAINLOCKWITHDEVICE *)v28,
        *(struct DXGSWAPCHAIN **)v29,
        1,
        1);
      LODWORD(v14) = DXGSWAPCHAINLOCKWITHDEVICE::Acquire(
                       (DXGSWAPCHAINLOCKWITHDEVICE *)v28,
                       (struct DXGDEVICE **)&v29,
                       1);
      if ( (int)v14 >= 0 )
        LODWORD(v14) = DXGSWAPCHAIN::RemoveSurface(*v19, &Handle);
      ObfDereferenceObject(v19);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
      {
        LODWORD(v24) = bProducer;
        LODWORD(Object) = v14;
        McTemplateK0pqqpq(
          v21,
          &EventIndirectSwapChainRemoveSurface,
          v22,
          v20,
          Object,
          v24,
          Handle.hNtSurfaceHandle,
          Handle.BufferIdx,
          v25,
          v26);
      }
      DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v28);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
      v18 = (qword_1C0079010 & 2) == 0;
    }
    else
    {
      v15 = WdLogNewEntry5_WdWarning(v12, v11, v13);
      *(_QWORD *)(v15 + 24) = hNtSwapChain;
      *(_QWORD *)(v15 + 32) = v14;
      WdLogEvent5_WdWarning(v15);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
      v17 = qword_1C0079010;
      v18 = (qword_1C0079010 & 2) == 0;
    }
    if ( !v18 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v17, &EventProfilerExit, v16, v25);
    return (unsigned int)v14;
  }
  else
  {
    v5 = WdLogNewEntry5_WdError(MmUserProbeAddress);
    *(_QWORD *)(v5 + 24) = 953LL;
    WdLogEvent5_WdError(v5);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v6, &EventProfilerExit, v7, v25);
    return 3221225485LL;
  }
}
