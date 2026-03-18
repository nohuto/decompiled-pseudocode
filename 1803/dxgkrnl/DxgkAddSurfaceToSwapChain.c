/*
 * XREFs of DxgkAddSurfaceToSwapChain @ 0x1C01E0790
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
 *     ?AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z @ 0x1C01DDC6C (-AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z.c)
 */

__int64 __fastcall DxgkAddSurfaceToSwapChain(ULONG64 a1, __int64 a2, __int64 a3)
{
  _OWORD *v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  HANDLE v9; // r14
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rcx
  bool v18; // zf
  const void ***v19; // r12
  struct DXGSWAPCHAIN *v20; // r14
  __int64 v21; // rcx
  _DWORD *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // r8
  PVOID *Object; // [rsp+20h] [rbp-D8h]
  __int64 v29; // [rsp+28h] [rbp-D0h]
  __int64 v30; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v31; // [rsp+48h] [rbp-B0h]
  HANDLE Handle[2]; // [rsp+50h] [rbp-A8h]
  void *v33[2]; // [rsp+60h] [rbp-98h] BYREF
  _BYTE v34[136]; // [rsp+70h] [rbp-88h] BYREF
  PVOID v35; // [rsp+108h] [rbp+10h] BYREF
  struct DXGDEVICE *v36; // [rsp+110h] [rbp+18h] BYREF
  struct DXGSWAPCHAIN *v37; // [rsp+118h] [rbp+20h]

  v31 = 0LL;
  LODWORD(v30) = 2200;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2200);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v30, 2200);
  v4 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)Handle = *v4;
  *(_OWORD *)v33 = v4[1];
  if ( !LODWORD(Handle[1]) )
  {
    v5 = WdLogNewEntry5_WdError(MmUserProbeAddress);
    *(_QWORD *)(v5 + 24) = 863LL;
    WdLogEvent5_WdError(v5);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v6, &EventProfilerExit, v7, v30);
    return 3221225485LL;
  }
  v9 = Handle[0];
  v10 = ObReferenceObjectByHandle(Handle[0], 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &v35, 0LL);
  v14 = v10;
  if ( v10 < 0 )
  {
    v15 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v15 + 24) = v9;
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
  v19 = (const void ***)v35;
  v20 = *(struct DXGSWAPCHAIN **)v35;
  v37 = v20;
  DXGSWAPCHAINLOCKWITHDEVICE::DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v34, v20, 1, 1);
  LODWORD(v14) = DXGSWAPCHAINLOCKWITHDEVICE::Acquire((DXGSWAPCHAINLOCKWITHDEVICE *)v34, &v36, 1);
  if ( (int)v14 < 0 )
  {
LABEL_27:
    ObfDereferenceObject(v19);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
    {
      LODWORD(v29) = Handle[1];
      LODWORD(Object) = v14;
      McTemplateK0pqqpq(
        v26,
        &EventIndirectSwapChainAddSurface,
        v27,
        v20,
        Object,
        v29,
        v33[0],
        LODWORD(v33[1]),
        v30,
        v31);
    }
    DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v34);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
    v18 = (qword_1C0079010 & 2) == 0;
    goto LABEL_13;
  }
  if ( *((_DWORD *)v20 + 58) )
  {
    LODWORD(v14) = DXGSWAPCHAIN::AddSurface(
                     *v19,
                     *((DXGADAPTER ***)v36 + 2),
                     (int)Handle[1],
                     v33[0],
                     (unsigned int *)&v33[1]);
    if ( (int)v14 >= 0 )
    {
      v22 = (_DWORD *)(a1 + 24);
      if ( a1 + 24 >= MmUserProbeAddress )
        v22 = (_DWORD *)MmUserProbeAddress;
      *v22 = v33[1];
    }
    goto LABEL_27;
  }
  v23 = WdLogNewEntry5_WdError(v21);
  *(_QWORD *)(v23 + 24) = 909LL;
  WdLogEvent5_WdError(v23);
  DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v34);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v24, &EventProfilerExit, v25, v30);
  return 3221225659LL;
}
