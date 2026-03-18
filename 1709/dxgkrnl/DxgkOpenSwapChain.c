/*
 * XREFs of DxgkOpenSwapChain @ 0x1C01D7820
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001B00 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00039DC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003AA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0003F60 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     McTemplateK0pqdqpp @ 0x1C002CB2C (McTemplateK0pqdqpp.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00CECE8 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DuplicateSurfacesForOpen@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z @ 0x1C01D553C (-DuplicateSurfacesForOpen@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z.c)
 *     ?OpenLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z @ 0x1C01D6074 (-OpenLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z.c)
 */

__int64 __fastcall DxgkOpenSwapChain(ULONG64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v4; // r13
  __int64 v5; // rcx
  struct _KTHREAD **Current; // rdi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  _OWORD *v11; // rax
  HANDLE *v12; // r15
  _BOOL8 v13; // rcx
  SIZE_T v14; // rax
  HANDLE *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r8
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rax
  _QWORD *v37; // rax
  _DWORD *v38; // rdx
  void *v39; // rcx
  size_t v40; // r8
  PVOID *Object; // [rsp+20h] [rbp-128h]
  int v42[2]; // [rsp+28h] [rbp-120h]
  __int64 v43; // [rsp+30h] [rbp-118h]
  _QWORD v44[2]; // [rsp+50h] [rbp-F8h] BYREF
  struct _D3DKMT_OPENSWAPCHAIN Handle; // [rsp+60h] [rbp-E8h] BYREF
  HANDLE *v46; // [rsp+A8h] [rbp-A0h]
  void *pNtSurfaceHandles; // [rsp+B0h] [rbp-98h]
  _BYTE v48[136]; // [rsp+C0h] [rbp-88h] BYREF
  struct DXGDEVICE *v50; // [rsp+160h] [rbp+18h] BYREF
  struct DXGDEVICE *v51; // [rsp+168h] [rbp+20h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2109);
  v4 = 0LL;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1, a2);
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v7 + 24) = 623LL;
LABEL_6:
    WdLogEvent5_WdError(v7);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v8, &EventProfilerExit, v9, 2109);
    return -1073741811LL;
  }
  v11 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v11 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)&Handle.hNtSwapChain = *v11;
  *(_OWORD *)&Handle.bProducer = v11[1];
  *(_OWORD *)&Handle.DesiredAccessTextures = v11[2];
  *(_OWORD *)&Handle.SurfaceCount = v11[3];
  v12 = 0LL;
  v46 = 0LL;
  pNtSurfaceHandles = Handle.pNtSurfaceHandles;
  v13 = Handle.SurfaceCount == 0;
  if ( v13 != (Handle.pNtSurfaceHandles == 0LL) )
  {
    v7 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v7 + 24) = Handle.SurfaceCount;
    *(_QWORD *)(v7 + 32) = Handle.pNtSurfaceHandles;
    goto LABEL_6;
  }
  if ( Handle.SurfaceCount )
  {
    v14 = 8LL * Handle.SurfaceCount;
    if ( !is_mul_ok(Handle.SurfaceCount, 8uLL) )
      v14 = -1LL;
    v15 = (HANDLE *)operator new[](v14, 0x4B677844u, PagedPool);
    v12 = v15;
    v46 = v15;
    if ( !v15 )
    {
      v17 = WdLogNewEntry5_WdLowResource(v16);
      *(_QWORD *)(v17 + 24) = 653LL;
      WdLogEvent5_WdLowResource(v17);
      if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v18, &EventProfilerExit, v19, 2109);
      return 3221225495LL;
    }
    Handle.pNtSurfaceHandles = v15;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v50, Handle.hDevice, Current, &v51);
  if ( v51 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v44, v51);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v48, (__int64)v51, 2, v26, 0);
    LODWORD(v22) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v48);
    if ( (int)v22 >= 0 )
    {
      if ( Handle.hNtSwapChain
        || !Handle.pObjectAttributes
        || (LOBYTE(v27) = 1,
            v28 = ObOpenObjectByName(
                    Handle.pObjectAttributes,
                    g_pDxgkSharedSwapChainObjectType,
                    v27,
                    0LL,
                    Handle.DesiredAccess,
                    0LL,
                    &Handle),
            v22 = v28,
            v28 >= 0) )
      {
        LODWORD(v22) = ObReferenceObjectByHandle(
                         Handle.hNtSwapChain,
                         0x20000u,
                         g_pDxgkSharedSwapChainObjectType,
                         1,
                         (PVOID *)&Handle.bNonSequential,
                         0LL);
        if ( (int)v22 >= 0 )
        {
          v4 = **(unsigned int ***)&Handle.bNonSequential;
          if ( Handle.pNtSurfaceHandles )
          {
            if ( Handle.SurfaceCount == *(_DWORD *)(**(_QWORD **)&Handle.bNonSequential + 40LL) )
            {
              LODWORD(v22) = DXGSWAPCHAIN::OpenLocal(
                               (DXGSWAPCHAIN *)v4,
                               Handle.hDevice,
                               v51,
                               Handle.BufferAvailableEvent,
                               Handle.bFailAcquireIfSurfaceBusy,
                               Handle.bProducer);
              if ( (int)v22 >= 0 )
                LODWORD(v22) = DXGSWAPCHAIN::DuplicateSurfacesForOpen(v4, &Handle);
            }
            else
            {
              v36 = WdLogNewEntry5_WdWarning(v34, v33, v35);
              *(_QWORD *)(v36 + 24) = Handle.SurfaceCount;
              *(_QWORD *)(v36 + 32) = v4[10];
              WdLogEvent5_WdWarning(v36);
              LODWORD(v22) = -1073741811;
            }
          }
          else
          {
            Handle.SurfaceCount = *(_DWORD *)(**(_QWORD **)&Handle.bNonSequential + 40LL);
            LODWORD(v22) = -1073741789;
          }
          ObfDereferenceObject(*(PVOID *)&Handle.bNonSequential);
          if ( (int)(v22 + 0x80000000) < 0 || (_DWORD)v22 == -1073741789 )
          {
            v37 = (_QWORD *)a1;
            if ( a1 >= MmUserProbeAddress )
              v37 = (_QWORD *)MmUserProbeAddress;
            *v37 = Handle.hNtSwapChain;
            v38 = (_DWORD *)(a1 + 48);
            if ( a1 + 48 >= MmUserProbeAddress )
              v38 = (_DWORD *)MmUserProbeAddress;
            *v38 = Handle.SurfaceCount;
            v39 = pNtSurfaceHandles;
            if ( pNtSurfaceHandles && Handle.SurfaceCount )
            {
              v40 = 8LL * Handle.SurfaceCount;
              if ( (unsigned __int64)pNtSurfaceHandles + v40 > MmUserProbeAddress
                || (char *)pNtSurfaceHandles + v40 <= pNtSurfaceHandles )
              {
                *(_BYTE *)MmUserProbeAddress = 0;
              }
              memmove(v39, v12, v40);
            }
          }
          goto LABEL_51;
        }
        v32 = WdLogNewEntry5_WdWarning(v34, v33, v35);
        *(_QWORD *)(v32 + 24) = Handle.hNtSwapChain;
        *(_QWORD *)(v32 + 32) = (int)v22;
      }
      else
      {
        v32 = WdLogNewEntry5_WdWarning(v30, v29, v31);
        *(_QWORD *)(v32 + 24) = v22;
      }
      WdLogEvent5_WdWarning(v32);
    }
LABEL_51:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v48);
    if ( v44[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v44);
    goto LABEL_53;
  }
  v21 = WdLogNewEntry5_WdError(v20);
  *(_QWORD *)(v21 + 24) = Handle.hDevice;
  LODWORD(v22) = -1073741811;
  *(_QWORD *)(v21 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v21);
LABEL_53:
  if ( v50 )
  {
    v24 = _InterlockedDecrement64((volatile signed __int64 *)v50 + 8);
    if ( !v24 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v50 + 2), v50);
  }
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000000) != 0 )
  {
    LODWORD(v43) = Handle.hDevice;
    v42[0] = Handle.bProducer;
    LODWORD(Object) = v22;
    McTemplateK0pqdqpp(v24, v23, v25, v4, Object, *(_QWORD *)v42, v43, Handle.BufferAvailableEvent, Handle.hNtSwapChain);
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v24, &EventProfilerExit, v25, 2109);
  return (unsigned int)v22;
}
