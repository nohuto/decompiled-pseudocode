/*
 * XREFs of DxgkUnOrderedPresentSwapChain @ 0x1C01E20F0
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     McTemplateK0pqqpqq @ 0x1C0038064 (McTemplateK0pqqpqq.c)
 *     ??0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z @ 0x1C01DD638 (--0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z.c)
 *     ??1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ @ 0x1C01DD6A4 (--1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ.c)
 *     ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z @ 0x1C01DD6D8 (-Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z.c)
 *     ?UnOrderedPresent@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_UNORDEREDPRESENTSWAPCHAIN@@@Z @ 0x1C01DFFC4 (-UnOrderedPresent@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_UNORDEREDPRESENTSWAPCHAIN@@@Z.c)
 */

__int64 __fastcall DxgkUnOrderedPresentSwapChain(__int64 a1, __int64 a2, __int64 a3)
{
  struct _D3DKMT_UNORDEREDPRESENTSWAPCHAIN *v3; // rdi
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
  struct _KTHREAD ***v19; // r15
  struct DXGSWAPCHAIN *v20; // r14
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  PVOID *Object; // [rsp+20h] [rbp-E8h]
  __int64 v29; // [rsp+28h] [rbp-E0h]
  int v30; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v31; // [rsp+58h] [rbp-B0h]
  struct _D3DKMT_UNORDEREDPRESENTSWAPCHAIN Handle; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v33[96]; // [rsp+90h] [rbp-78h] BYREF
  PVOID v34; // [rsp+118h] [rbp+10h] BYREF

  v3 = (struct _D3DKMT_UNORDEREDPRESENTSWAPCHAIN *)a1;
  v31 = 0LL;
  v30 = 2202;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2202);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v30, 2202);
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (struct _D3DKMT_UNORDEREDPRESENTSWAPCHAIN *)MmUserProbeAddress;
  Handle = *v3;
  bProducer = Handle.bProducer;
  if ( !Handle.bProducer )
  {
    v5 = WdLogNewEntry5_WdError(MmUserProbeAddress);
    *(_QWORD *)(v5 + 24) = 1022LL;
    WdLogEvent5_WdError(v5);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v6, &EventProfilerExit, v7, v30);
    return 3221225485LL;
  }
  hNtSwapChain = Handle.hNtSwapChain;
  v10 = ObReferenceObjectByHandle(Handle.hNtSwapChain, 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &v34, 0LL);
  v14 = v10;
  if ( v10 < 0 )
  {
    v15 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v15 + 24) = hNtSwapChain;
    *(_QWORD *)(v15 + 32) = v14;
    WdLogEvent5_WdWarning(v15);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
    v17 = qword_1C0079010;
    v18 = (qword_1C0079010 & 2) == 0;
LABEL_13:
    if ( !v18 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v17, &EventProfilerExit, v16, v30);
    return (unsigned int)v14;
  }
  v19 = (struct _KTHREAD ***)v34;
  v20 = *(struct DXGSWAPCHAIN **)v34;
  DXGSWAPCHAINLOCKWITHDEVICE::DXGSWAPCHAINLOCKWITHDEVICE(
    (DXGSWAPCHAINLOCKWITHDEVICE *)v33,
    *(struct DXGSWAPCHAIN **)v34,
    1,
    1);
  LODWORD(v14) = DXGSWAPCHAINLOCKWITHDEVICE::Acquire((DXGSWAPCHAINLOCKWITHDEVICE *)v33, (struct DXGDEVICE **)&v34, 1);
  if ( (int)v14 < 0 )
  {
LABEL_20:
    ObfDereferenceObject(v19);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
    {
      LODWORD(v29) = bProducer;
      LODWORD(Object) = v14;
      McTemplateK0pqqpqq(
        v23,
        v22,
        v24,
        v20,
        Object,
        v29,
        Handle.hNtPresentSurfaceHandle,
        Handle.PresentBufferIdx,
        Handle.MetaDataSize);
    }
    DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v33);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
    v18 = (qword_1C0079010 & 2) == 0;
    goto LABEL_13;
  }
  if ( *((_DWORD *)v20 + 58) )
  {
    LODWORD(v14) = DXGSWAPCHAIN::UnOrderedPresent(*v19, &Handle);
    goto LABEL_20;
  }
  v25 = WdLogNewEntry5_WdError(v21);
  *(_QWORD *)(v25 + 24) = 1055LL;
  WdLogEvent5_WdError(v25);
  DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v33);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v26, &EventProfilerExit, v27, v30);
  return 3221225659LL;
}
