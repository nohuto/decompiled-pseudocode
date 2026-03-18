/*
 * XREFs of DxgkCreateSwapChain @ 0x1C01E0B00
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0001884 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0001954 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00151B0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     ??_GDXGSWAPCHAIN@@QEAAPEAXI@Z @ 0x1C00377DC (--_GDXGSWAPCHAIN@@QEAAPEAXI@Z.c)
 *     McTemplateK0pqdqqpp @ 0x1C0037E70 (McTemplateK0pqdqqpp.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGSWAPCHAIN@@QEAA@XZ @ 0x1C01DD570 (--0DXGSWAPCHAIN@@QEAA@XZ.c)
 *     ??0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z @ 0x1C01DD638 (--0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z.c)
 *     ??1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ @ 0x1C01DD6A4 (--1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ.c)
 *     ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z @ 0x1C01DD6D8 (-Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z.c)
 *     ?AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z @ 0x1C01DDC6C (-AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z.c)
 *     ?InitializeSwapchainGlobalState@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESWAPCHAIN@@@Z @ 0x1C01DE85C (-InitializeSwapchainGlobalState@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESWAPCHA.c)
 *     ?OpenSwapchainLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z @ 0x1C01DF34C (-OpenSwapchainLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z.c)
 */

__int64 __fastcall DxgkCreateSwapChain(ULONG64 a1, __int64 a2, __int64 a3)
{
  DXGSWAPCHAIN *v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  struct _KTHREAD **Current; // r13
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  _D3DKMT_CREATESWAPCHAIN *v13; // rax
  __int64 SurfaceCount; // rdi
  PVOID v15; // r12
  __int64 v16; // rdi
  SIZE_T v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  HANDLE *pNtSurfaceHandles; // rdx
  HANDLE *v23; // rcx
  __int64 v24; // rcx
  struct DXGDEVICE *v25; // r13
  __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rdx
  HANDLE v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  DXGSWAPCHAIN *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // r9
  __int64 v39; // rax
  int v40; // esi
  struct DXGDEVICE *v41; // r13
  int v42; // eax
  NTSTATUS inserted; // eax
  _QWORD *v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  PVOID *NewObject; // [rsp+20h] [rbp-1B8h]
  PHANDLE Handle; // [rsp+28h] [rbp-1B0h]
  __int64 v49; // [rsp+30h] [rbp-1A8h]
  __int64 v50; // [rsp+38h] [rbp-1A0h]
  struct DXGDEVICE *v51; // [rsp+50h] [rbp-188h] BYREF
  int v52; // [rsp+58h] [rbp-180h] BYREF
  __int64 v53; // [rsp+60h] [rbp-178h]
  _QWORD v54[3]; // [rsp+68h] [rbp-170h] BYREF
  HANDLE v55; // [rsp+80h] [rbp-158h] BYREF
  _D3DKMT_CREATESWAPCHAIN v56; // [rsp+88h] [rbp-150h] BYREF
  PVOID Object; // [rsp+C0h] [rbp-118h] BYREF
  void *v58; // [rsp+C8h] [rbp-110h]
  struct DXGDEVICE *v59; // [rsp+D0h] [rbp-108h] BYREF
  struct DXGDEVICE *v60; // [rsp+D8h] [rbp-100h] BYREF
  _BYTE v61[96]; // [rsp+E0h] [rbp-F8h] BYREF
  _BYTE v62[152]; // [rsp+140h] [rbp-98h] BYREF
  char v64; // [rsp+1E8h] [rbp+10h]
  char v65; // [rsp+1F0h] [rbp+18h]
  unsigned int v66; // [rsp+1F8h] [rbp+20h] BYREF

  v53 = 0LL;
  v52 = 2108;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2108);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v52, 2108);
  v4 = 0LL;
  v64 = 0;
  Object = 0LL;
  v55 = 0LL;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v6, v5);
  if ( !Current )
  {
    v9 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v9 + 24) = 426LL;
LABEL_6:
    WdLogEvent5_WdError(v9);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v10, &EventProfilerExit, v11, v52);
    return -1073741811LL;
  }
  v13 = (_D3DKMT_CREATESWAPCHAIN *)a1;
  if ( a1 >= MmUserProbeAddress )
    v13 = (_D3DKMT_CREATESWAPCHAIN *)MmUserProbeAddress;
  v56 = *v13;
  v65 = (char)v56.Flags.0;
  if ( (*(_BYTE *)&v56.Flags.0 & 2) != 0 )
  {
    if ( v56.SurfaceCount )
    {
      v9 = WdLogNewEntry5_WdError(MmUserProbeAddress);
      *(_QWORD *)(v9 + 24) = 449LL;
      goto LABEL_6;
    }
    if ( !v56.bProducer )
    {
      v9 = WdLogNewEntry5_WdError(MmUserProbeAddress);
      *(_QWORD *)(v9 + 24) = 456LL;
      goto LABEL_6;
    }
  }
  else
  {
    SurfaceCount = v56.SurfaceCount;
    if ( v56.SurfaceCount > 0x32 )
    {
      v9 = WdLogNewEntry5_WdError(MmUserProbeAddress);
      *(_QWORD *)(v9 + 24) = SurfaceCount;
      goto LABEL_6;
    }
    if ( !v56.SurfaceCount )
    {
      v9 = WdLogNewEntry5_WdError(MmUserProbeAddress);
      *(_QWORD *)(v9 + 24) = 470LL;
      goto LABEL_6;
    }
  }
  v15 = 0LL;
  v58 = 0LL;
  v16 = v56.SurfaceCount;
  if ( v56.SurfaceCount )
  {
    v17 = 8LL * v56.SurfaceCount;
    if ( !is_mul_ok(v56.SurfaceCount, 8uLL) )
      v17 = -1LL;
    v15 = operator new[](v17, 0x4B677844u, PagedPool);
    v58 = v15;
    if ( !v15 )
    {
      v19 = WdLogNewEntry5_WdLowResource(v18);
      *(_QWORD *)(v19 + 24) = 482LL;
      WdLogEvent5_WdLowResource(v19);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52);
      if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v20, &EventProfilerExit, v21, v52);
      return 3221225495LL;
    }
    pNtSurfaceHandles = v56.pNtSurfaceHandles;
    v23 = &v56.pNtSurfaceHandles[v16];
    if ( v23 < v56.pNtSurfaceHandles || (unsigned __int64)v23 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v15, pNtSurfaceHandles, 8 * v16);
    v56.pNtSurfaceHandles = (HANDLE *)v15;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v51, v56.hDevice, Current, &v59);
  v25 = v59;
  if ( !v59 )
  {
    v26 = WdLogNewEntry5_WdError(v24);
    *(_QWORD *)(v26 + 24) = v56.hDevice;
    LODWORD(v27) = -1073741811;
    *(_QWORD *)(v26 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v26);
LABEL_35:
    if ( v51 )
    {
      v29 = (HANDLE)_InterlockedDecrement64((volatile signed __int64 *)v51 + 8);
      if ( !v29 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v51 + 2), v51);
    }
    goto LABEL_68;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v54, v59);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v62, (__int64)v25, 2, v31, 0);
  LODWORD(v27) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v62);
  if ( (int)v27 < 0 )
    goto LABEL_39;
  v32 = (DXGSWAPCHAIN *)operator new[](0xF0uLL, 0x4B677844u, (POOL_TYPE)512);
  if ( v32 )
    v4 = DXGSWAPCHAIN::DXGSWAPCHAIN(v32);
  else
    v4 = 0LL;
  v54[2] = v4;
  if ( !v4 )
  {
    v34 = WdLogNewEntry5_WdLowResource(v33);
    *(_QWORD *)(v34 + 24) = 522LL;
    WdLogEvent5_WdLowResource(v34);
    LODWORD(v27) = -1073741801;
LABEL_39:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v62);
LABEL_40:
    if ( v54[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v54);
    goto LABEL_35;
  }
  LODWORD(v27) = DXGSWAPCHAIN::InitializeSwapchainGlobalState(v4, *((struct ADAPTER_RENDER **)v25 + 2), &v56);
  if ( (int)v27 < 0 )
    goto LABEL_39;
  v35 = *((_QWORD *)v25 + 211);
  if ( v35 )
    *((_QWORD *)v4 + 25) = *(_QWORD *)(v35 + 268);
  LODWORD(v27) = DXGSWAPCHAIN::OpenSwapchainLocal(
                   v4,
                   v56.hDevice,
                   v25,
                   v56.BufferAvailableEvent,
                   v65 & 1,
                   v56.bProducer);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v62);
  if ( (int)v27 < 0 )
    goto LABEL_40;
  if ( v54[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v54);
  if ( v51 && _InterlockedExchangeAdd64((volatile signed __int64 *)v51 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v51 + 2), v51);
  DXGSWAPCHAINLOCKWITHDEVICE::DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v61, v4, v56.bProducer, 1);
  v36 = DXGSWAPCHAINLOCKWITHDEVICE::Acquire((DXGSWAPCHAINLOCKWITHDEVICE *)v61, &v60, 1);
  v27 = v36;
  if ( v36 < 0 )
    goto LABEL_57;
  v40 = 0;
  if ( v56.SurfaceCount )
  {
    v41 = v60;
    do
    {
      LODWORD(v27) = DXGSWAPCHAIN::AddSurface(
                       (const void **)v4,
                       *((DXGADAPTER ***)v41 + 2),
                       v56.bProducer,
                       v56.pNtSurfaceHandles[v40],
                       &v66);
      if ( (int)v27 < 0 )
        goto LABEL_67;
    }
    while ( ++v40 < v56.SurfaceCount );
  }
  LOBYTE(v38) = 1;
  LOBYTE(v37) = 1;
  v42 = ObCreateObject(v37, g_pDxgkSharedSwapChainObjectType, v56.pObjectAttributes, v38, 0LL, 8, 248, 0, &Object);
  v27 = v42;
  if ( v42 < 0
    || (*(_QWORD *)Object = v4,
        v64 = 1,
        inserted = ObInsertObject(Object, 0LL, v56.DesiredAccess, 0, 0LL, &v55),
        v27 = inserted,
        inserted < 0) )
  {
LABEL_57:
    v39 = WdLogNewEntry5_WdError(v37);
    *(_QWORD *)(v39 + 24) = v27;
    WdLogEvent5_WdError(v39);
  }
  else
  {
    v44 = (_QWORD *)(a1 + 48);
    if ( a1 + 48 >= MmUserProbeAddress )
      v44 = (_QWORD *)MmUserProbeAddress;
    *v44 = v55;
  }
LABEL_67:
  DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v61);
LABEL_68:
  if ( (int)v27 < 0 )
  {
    v29 = v55;
    if ( v55 )
      ObCloseHandle(v55, 1);
    if ( v4 && !v64 )
    {
      DXGSWAPCHAIN::`scalar deleting destructor'(v4);
      v4 = 0LL;
    }
  }
  if ( v15 )
    operator delete[](v15);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000000) != 0 )
  {
    LODWORD(v50) = v56.SurfaceCount;
    LODWORD(v49) = v56.hDevice;
    LODWORD(Handle) = v56.bProducer;
    LODWORD(NewObject) = v27;
    McTemplateK0pqdqqpp((__int64)v29, v28, v30, v4, NewObject, Handle, v49, v50, v56.BufferAvailableEvent, v55);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v45, &EventProfilerExit, v46, v52);
  return (unsigned int)v27;
}
