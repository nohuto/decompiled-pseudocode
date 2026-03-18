/*
 * XREFs of DxgkOpenSwapChain @ 0x1C01BF0A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00052C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000590C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000D61C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000D744 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     Template_pqdqpp @ 0x1C003C694 (Template_pqdqpp.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00B1A9C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DuplicateSurfacesForOpen@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z @ 0x1C01BCE98 (-DuplicateSurfacesForOpen@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z.c)
 *     ?OpenLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z @ 0x1C01BD8EC (-OpenLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z.c)
 */

__int64 __fastcall DxgkOpenSwapChain(ULONG64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v4; // r13
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _KTHREAD **Current; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  _OWORD *v12; // rax
  HANDLE *v13; // r12
  _BOOL8 v14; // rcx
  SIZE_T v15; // rax
  HANDLE *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
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
  __int64 v34; // r9
  __int64 v35; // rax
  NTSTATUS v36; // eax
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  __int64 v41; // r8
  __int64 v42; // r9
  _QWORD *v43; // rax
  _DWORD *v44; // rdx
  void *v45; // rcx
  size_t v46; // r8
  __int16 v47; // ax
  PVOID *Object; // [rsp+20h] [rbp-138h]
  int v49[2]; // [rsp+28h] [rbp-130h]
  __int64 v50; // [rsp+30h] [rbp-128h]
  _QWORD v51[2]; // [rsp+50h] [rbp-108h] BYREF
  struct _D3DKMT_OPENSWAPCHAIN Handle; // [rsp+60h] [rbp-F8h] BYREF
  PVOID v53; // [rsp+A8h] [rbp-B0h] BYREF
  HANDLE *v54; // [rsp+B0h] [rbp-A8h]
  void *pNtSurfaceHandles; // [rsp+B8h] [rbp-A0h]
  PVOID v56; // [rsp+C0h] [rbp-98h]
  _BYTE v57[136]; // [rsp+D0h] [rbp-88h] BYREF
  struct DXGDEVICE *v59; // [rsp+178h] [rbp+20h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2109);
  v4 = 0LL;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1);
  if ( !Current )
  {
    v8 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v8 + 24) = 619LL;
LABEL_6:
    WdLogEvent5_WdError(v8);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v9, &EventProfilerExit, v10, 2109);
    return -1073741811LL;
  }
  v12 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v12 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)&Handle.hNtSwapChain = *v12;
  *(_OWORD *)&Handle.bProducer = v12[1];
  *(_OWORD *)&Handle.DesiredAccessTextures = v12[2];
  *(_OWORD *)&Handle.SurfaceCount = v12[3];
  v13 = 0LL;
  v54 = 0LL;
  pNtSurfaceHandles = Handle.pNtSurfaceHandles;
  v14 = Handle.SurfaceCount == 0;
  if ( v14 != (Handle.pNtSurfaceHandles == 0LL) )
  {
    v8 = WdLogNewEntry5_WdError(v14, Handle.SurfaceCount);
    *(_QWORD *)(v8 + 24) = Handle.SurfaceCount;
    *(_QWORD *)(v8 + 32) = Handle.pNtSurfaceHandles;
    goto LABEL_6;
  }
  if ( Handle.SurfaceCount )
  {
    v15 = 8LL * Handle.SurfaceCount;
    if ( !is_mul_ok(Handle.SurfaceCount, 8uLL) )
      v15 = -1LL;
    v16 = (HANDLE *)operator new[](v15, 0x4B677844u, PagedPool);
    v13 = v16;
    v54 = v16;
    if ( !v16 )
    {
      v18 = WdLogNewEntry5_WdLowResource(v17);
      *(_QWORD *)(v18 + 24) = 649LL;
      WdLogEvent5_WdLowResource(v18);
      if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v19, &EventProfilerExit, v20, 2109);
      return 3221225495LL;
    }
    Handle.pNtSurfaceHandles = v16;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)&v59,
    Handle.hDevice,
    Current,
    (struct DXGDEVICE **)&Handle.bNonSequential);
  v23 = *(_QWORD *)&Handle.bNonSequential;
  if ( *(_QWORD *)&Handle.bNonSequential )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v51,
      *(struct DXGDEVICE **)&Handle.bNonSequential);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v57, v23, 2LL, v28, 0);
    LODWORD(v23) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v57);
    if ( (int)v23 >= 0 )
    {
      if ( Handle.hNtSwapChain
        || !Handle.pObjectAttributes
        || (LOBYTE(v29) = 1,
            v30 = ObOpenObjectByName(
                    Handle.pObjectAttributes,
                    g_pDxgkSharedSwapChainObjectType,
                    v29,
                    0LL,
                    Handle.DesiredAccess,
                    0LL,
                    &Handle),
            v23 = v30,
            v30 >= 0) )
      {
        v36 = ObReferenceObjectByHandle(Handle.hNtSwapChain, 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &v53, 0LL);
        v56 = v53;
        LODWORD(v23) = v36;
        if ( v36 >= 0 )
        {
          v4 = *(unsigned int **)v53;
          if ( Handle.pNtSurfaceHandles )
          {
            if ( Handle.SurfaceCount == *(_DWORD *)(*(_QWORD *)v53 + 40LL) )
            {
              LODWORD(v23) = DXGSWAPCHAIN::OpenLocal(
                               (DXGSWAPCHAIN *)v4,
                               Handle.hDevice,
                               *(struct DXGDEVICE **)&Handle.bNonSequential,
                               Handle.BufferAvailableEvent,
                               Handle.bFailAcquireIfSurfaceBusy,
                               Handle.bProducer);
              if ( (int)v23 >= 0 )
                LODWORD(v23) = DXGSWAPCHAIN::DuplicateSurfacesForOpen(v4, &Handle, v41, v42);
            }
            else
            {
              v40 = WdLogNewEntry5_WdWarning(v53, v37, v38, v39);
              *(_QWORD *)(v40 + 24) = Handle.SurfaceCount;
              *(_QWORD *)(v40 + 32) = v4[10];
              WdLogEvent5_WdWarning(v40);
              LODWORD(v23) = -1073741811;
            }
          }
          else
          {
            Handle.SurfaceCount = *(_DWORD *)(*(_QWORD *)v53 + 40LL);
            LODWORD(v23) = -1073741789;
          }
          ObfDereferenceObject(v53);
          if ( (int)(v23 + 0x80000000) < 0 || (_DWORD)v23 == -1073741789 )
          {
            v43 = (_QWORD *)a1;
            if ( a1 >= MmUserProbeAddress )
              v43 = (_QWORD *)MmUserProbeAddress;
            *v43 = Handle.hNtSwapChain;
            v44 = (_DWORD *)(a1 + 48);
            if ( a1 + 48 >= MmUserProbeAddress )
              v44 = (_DWORD *)MmUserProbeAddress;
            *v44 = Handle.SurfaceCount;
            v45 = pNtSurfaceHandles;
            if ( pNtSurfaceHandles && Handle.SurfaceCount )
            {
              v46 = 8LL * Handle.SurfaceCount;
              if ( (unsigned __int64)pNtSurfaceHandles + v46 > MmUserProbeAddress
                || (char *)pNtSurfaceHandles + v46 <= pNtSurfaceHandles )
              {
                *(_BYTE *)MmUserProbeAddress = 0;
              }
              memmove(v45, v13, v46);
            }
          }
          goto LABEL_51;
        }
        v35 = WdLogNewEntry5_WdWarning(v53, v37, v38, v39);
        *(_QWORD *)(v35 + 24) = Handle.hNtSwapChain;
        *(_QWORD *)(v35 + 32) = (int)v23;
      }
      else
      {
        v35 = WdLogNewEntry5_WdWarning(v32, v31, v33, v34);
        *(_QWORD *)(v35 + 24) = v23;
      }
      WdLogEvent5_WdWarning(v35);
    }
LABEL_51:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v57);
    if ( v51[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v51);
    goto LABEL_53;
  }
  v24 = WdLogNewEntry5_WdError(v22, v21);
  *(_QWORD *)(v24 + 24) = Handle.hDevice;
  LODWORD(v23) = -1073741811;
  *(_QWORD *)(v24 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v24);
LABEL_53:
  if ( v59 )
  {
    v26 = _InterlockedDecrement64((volatile signed __int64 *)v59 + 8);
    if ( !v26 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v59 + 2), v59);
  }
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  v47 = Microsoft_Windows_DxgKrnlEnableBits;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
  {
    LODWORD(v50) = Handle.hDevice;
    v49[0] = Handle.bProducer;
    LODWORD(Object) = v23;
    Template_pqdqpp(v26, v25, v27, v4, Object, *(_QWORD *)v49, v50, Handle.BufferAvailableEvent, Handle.hNtSwapChain);
    v47 = Microsoft_Windows_DxgKrnlEnableBits;
  }
  if ( (qword_1C006E790 & 2) != 0 && (v47 & 0x2000) != 0 )
    Template_q(qword_1C006E790, &EventProfilerExit, v27, 2109);
  return (unsigned int)v23;
}
