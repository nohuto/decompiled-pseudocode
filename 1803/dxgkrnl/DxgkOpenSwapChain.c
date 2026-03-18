/*
 * XREFs of DxgkOpenSwapChain @ 0x1C01E1490
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
 *     McTemplateK0pqdqpp @ 0x1C0037DB0 (McTemplateK0pqdqpp.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?OpenSurfaceResourcesLocalForSequentialOpener@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z @ 0x1C01DECC8 (-OpenSurfaceResourcesLocalForSequentialOpener@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z.c)
 *     ?OpenSwapchainLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z @ 0x1C01DF34C (-OpenSwapchainLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z.c)
 */

__int64 __fastcall DxgkOpenSwapChain(ULONG64 a1, __int64 a2, __int64 a3)
{
  UINT *v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  struct _D3DKMT_OPENSWAPCHAIN *v12; // rax
  HANDLE *v13; // r15
  HANDLE *pNtSurfaceHandles; // r13
  _BOOL8 v15; // rcx
  SIZE_T v16; // rax
  HANDLE *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r8
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rax
  BOOL v39; // r8d
  _QWORD *v40; // rax
  _DWORD *v41; // rdx
  _DWORD *v42; // rdx
  size_t SurfaceCount; // r8
  __int64 v44; // rcx
  __int64 v45; // r8
  PVOID *Object; // [rsp+20h] [rbp-158h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-150h]
  __int64 v48; // [rsp+30h] [rbp-148h]
  int v49; // [rsp+50h] [rbp-128h] BYREF
  __int64 v50; // [rsp+58h] [rbp-120h]
  _QWORD v51[2]; // [rsp+60h] [rbp-118h] BYREF
  struct _D3DKMT_OPENSWAPCHAIN Handle; // [rsp+70h] [rbp-108h] BYREF
  PVOID v53; // [rsp+C0h] [rbp-B8h] BYREF
  HANDLE *v54; // [rsp+C8h] [rbp-B0h]
  UINT *v55; // [rsp+D0h] [rbp-A8h]
  _BYTE v56[152]; // [rsp+E0h] [rbp-98h] BYREF
  struct DXGPROCESS *Current; // [rsp+188h] [rbp+10h]
  struct DXGDEVICE *v59; // [rsp+190h] [rbp+18h] BYREF
  struct DXGDEVICE *v60; // [rsp+198h] [rbp+20h] BYREF

  v50 = 0LL;
  v49 = 2109;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2109);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v49, 2109);
  v4 = 0LL;
  Current = DXGPROCESS::GetCurrent(v6, v5);
  if ( !Current )
  {
    v8 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v8 + 24) = 667LL;
LABEL_6:
    WdLogEvent5_WdError(v8);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v9, &EventProfilerExit, v10, v49);
    return -1073741811LL;
  }
  v12 = (struct _D3DKMT_OPENSWAPCHAIN *)a1;
  if ( a1 >= MmUserProbeAddress )
    v12 = (struct _D3DKMT_OPENSWAPCHAIN *)MmUserProbeAddress;
  Handle = *v12;
  v13 = 0LL;
  v54 = 0LL;
  pNtSurfaceHandles = Handle.pNtSurfaceHandles;
  v15 = Handle.SurfaceCount == 0;
  if ( v15 != (Handle.pNtSurfaceHandles == 0LL) )
  {
    v8 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v8 + 24) = Handle.SurfaceCount;
    *(_QWORD *)(v8 + 32) = Handle.pNtSurfaceHandles;
    goto LABEL_6;
  }
  if ( Handle.SurfaceCount )
  {
    v16 = 8LL * Handle.SurfaceCount;
    if ( !is_mul_ok(Handle.SurfaceCount, 8uLL) )
      v16 = -1LL;
    v17 = (HANDLE *)operator new[](v16, 0x4B677844u, PagedPool);
    v13 = v17;
    v54 = v17;
    if ( !v17 )
    {
      v19 = WdLogNewEntry5_WdLowResource(v18);
      *(_QWORD *)(v19 + 24) = 697LL;
      WdLogEvent5_WdLowResource(v19);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49);
      if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v20, &EventProfilerExit, v21, v49);
      return 3221225495LL;
    }
    Handle.pNtSurfaceHandles = v17;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v59, Handle.hDevice, (struct _KTHREAD **)Current, &v60);
  v23 = (__int64)v60;
  if ( v60 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v51, v60);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v56, v23, 2, v28, 0);
    LODWORD(v23) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v56);
    if ( (int)v23 < 0 )
      goto LABEL_59;
    if ( !Handle.hNtSwapChain )
    {
      if ( Handle.pObjectAttributes )
      {
        LOBYTE(v29) = 1;
        v30 = ObOpenObjectByName(
                Handle.pObjectAttributes,
                g_pDxgkSharedSwapChainObjectType,
                v29,
                0LL,
                Handle.DesiredAccess,
                0LL,
                &Handle);
        v23 = v30;
        if ( v30 < 0 )
        {
          v34 = WdLogNewEntry5_WdWarning(v32, v31, v33);
          *(_QWORD *)(v34 + 24) = v23;
LABEL_30:
          WdLogEvent5_WdWarning(v34);
LABEL_59:
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v56);
          if ( v51[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v51);
          goto LABEL_61;
        }
      }
    }
    LODWORD(v23) = ObReferenceObjectByHandle(
                     Handle.hNtSwapChain,
                     0x20000u,
                     g_pDxgkSharedSwapChainObjectType,
                     1,
                     &v53,
                     0LL);
    if ( (int)v23 < 0 )
    {
      v34 = WdLogNewEntry5_WdWarning(v36, v35, v37);
      *(_QWORD *)(v34 + 24) = Handle.hNtSwapChain;
      *(_QWORD *)(v34 + 32) = (int)v23;
      goto LABEL_30;
    }
    v4 = *(UINT **)v53;
    v55 = v4;
    if ( v4[58] )
    {
      if ( Handle.SurfaceCount || Handle.pNtSurfaceHandles )
      {
        v38 = WdLogNewEntry5_WdError(v36);
        *(_QWORD *)(v38 + 24) = 760LL;
LABEL_41:
        WdLogEvent5_WdError(v38);
        LODWORD(v23) = -1073741811;
      }
    }
    else
    {
      if ( !Handle.pNtSurfaceHandles )
      {
        Handle.SurfaceCount = v4[13];
        LODWORD(v23) = -1073741789;
LABEL_45:
        ObfDereferenceObject(v53);
        if ( (int)(v23 + 0x80000000) < 0 || (_DWORD)v23 == -1073741789 )
        {
          v39 = v4[58] != 0;
          v40 = (_QWORD *)a1;
          if ( a1 >= MmUserProbeAddress )
            v40 = (_QWORD *)MmUserProbeAddress;
          *v40 = Handle.hNtSwapChain;
          v41 = (_DWORD *)(a1 + 48);
          if ( a1 + 48 >= MmUserProbeAddress )
            v41 = (_DWORD *)MmUserProbeAddress;
          *v41 = Handle.SurfaceCount;
          v42 = (_DWORD *)(a1 + 64);
          if ( a1 + 64 >= MmUserProbeAddress )
            v42 = (_DWORD *)MmUserProbeAddress;
          *v42 = v39;
          if ( pNtSurfaceHandles && Handle.SurfaceCount )
          {
            SurfaceCount = Handle.SurfaceCount;
            if ( (unsigned __int64)&pNtSurfaceHandles[SurfaceCount] > MmUserProbeAddress
              || &pNtSurfaceHandles[SurfaceCount] <= pNtSurfaceHandles )
            {
              *(_BYTE *)MmUserProbeAddress = 0;
            }
            memmove(pNtSurfaceHandles, v13, SurfaceCount * 8);
          }
        }
        goto LABEL_59;
      }
      if ( Handle.SurfaceCount != v4[13] )
      {
        v38 = WdLogNewEntry5_WdError(v36);
        *(_QWORD *)(v38 + 24) = Handle.SurfaceCount;
        *(_QWORD *)(v38 + 32) = v4[13];
        goto LABEL_41;
      }
    }
    if ( (int)v23 >= 0 )
    {
      LODWORD(v23) = DXGSWAPCHAIN::OpenSwapchainLocal(
                       (DXGSWAPCHAIN *)v4,
                       Handle.hDevice,
                       v60,
                       Handle.BufferAvailableEvent,
                       Handle.bFailAcquireIfSurfaceBusy,
                       Handle.bProducer);
      if ( (int)v23 >= 0 )
      {
        v4[16] = Handle.DesiredAccessTextures;
        LODWORD(v23) = DXGSWAPCHAIN::OpenSurfaceResourcesLocalForSequentialOpener((DXGSWAPCHAIN *)v4, &Handle);
      }
    }
    goto LABEL_45;
  }
  v24 = WdLogNewEntry5_WdError(v22);
  *(_QWORD *)(v24 + 24) = Handle.hDevice;
  LODWORD(v23) = -1073741811;
  *(_QWORD *)(v24 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v24);
LABEL_61:
  if ( v59 )
  {
    v26 = _InterlockedDecrement64((volatile signed __int64 *)v59 + 8);
    if ( !v26 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v59 + 2), v59);
  }
  if ( v13 )
    operator delete[](v13);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000000) != 0 )
  {
    LODWORD(v48) = Handle.hDevice;
    LODWORD(HandleInformation) = Handle.bProducer;
    LODWORD(Object) = v23;
    McTemplateK0pqdqpp(
      v26,
      v25,
      v27,
      v4,
      Object,
      HandleInformation,
      v48,
      Handle.BufferAvailableEvent,
      Handle.hNtSwapChain);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v44, &EventProfilerExit, v45, v49);
  return (unsigned int)v23;
}
