/*
 * XREFs of DxgkCreateSwapChain @ 0x1C01BE8F0
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
 *     ??_GDXGSWAPCHAIN@@QEAAPEAXI@Z @ 0x1C003C240 (--_GDXGSWAPCHAIN@@QEAAPEAXI@Z.c)
 *     Template_pqdqqpp @ 0x1C003C758 (Template_pqdqqpp.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00B1A9C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DXGSWAPCHAIN@@QEAA@XZ @ 0x1C01BC2F0 (--0DXGSWAPCHAIN@@QEAA@XZ.c)
 *     ?DuplicateSurfacesForCreate@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_CREATESWAPCHAIN@@@Z @ 0x1C01BCCEC (-DuplicateSurfacesForCreate@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_CREATESWAPCHAIN@@@Z.c)
 *     ?InitializeGlobalState@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESWAPCHAIN@@@Z @ 0x1C01BD40C (-InitializeGlobalState@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESWAPCHAIN@@@Z.c)
 *     ?OpenLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z @ 0x1C01BD8EC (-OpenLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z.c)
 */

__int64 __fastcall DxgkCreateSwapChain(ULONG64 a1, __int64 a2, __int64 a3)
{
  DXGSWAPCHAIN *v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _KTHREAD **Current; // r15
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r8
  _D3DKMT_CREATESWAPCHAIN *v13; // rax
  SIZE_T v14; // rax
  __int64 v15; // rcx
  PVOID v16; // r9
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 SurfaceCount; // r8
  HANDLE *pNtSurfaceHandles; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct DXGDEVICE *v24; // r15
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // r9
  DXGSWAPCHAIN *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rcx
  __int64 v35; // r9
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  NTSTATUS inserted; // eax
  _QWORD *v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int16 v45; // ax
  PVOID *NewObject; // [rsp+20h] [rbp-128h]
  PHANDLE Handle; // [rsp+28h] [rbp-120h]
  __int64 v48; // [rsp+30h] [rbp-118h]
  __int64 v49; // [rsp+38h] [rbp-110h]
  _QWORD v50[3]; // [rsp+50h] [rbp-F8h] BYREF
  HANDLE v51; // [rsp+68h] [rbp-E0h] BYREF
  PVOID Object; // [rsp+70h] [rbp-D8h] BYREF
  _D3DKMT_CREATESWAPCHAIN v53; // [rsp+78h] [rbp-D0h] BYREF
  PVOID P; // [rsp+B0h] [rbp-98h]
  struct DXGDEVICE *v55; // [rsp+B8h] [rbp-90h] BYREF
  _BYTE v56[136]; // [rsp+C0h] [rbp-88h] BYREF
  char v58; // [rsp+158h] [rbp+10h]
  struct DXGDEVICE *v59; // [rsp+168h] [rbp+20h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2108);
  v4 = 0LL;
  v58 = 0;
  Object = 0LL;
  v51 = 0LL;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1);
  if ( !Current )
  {
    v8 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v8 + 24) = 421LL;
LABEL_6:
    v9 = v8;
LABEL_7:
    WdLogEvent5_WdError(v9);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v10, &EventProfilerExit, v11, 2108);
    return -1073741811LL;
  }
  v13 = (_D3DKMT_CREATESWAPCHAIN *)a1;
  if ( a1 >= MmUserProbeAddress )
    v13 = (_D3DKMT_CREATESWAPCHAIN *)MmUserProbeAddress;
  v53 = *v13;
  if ( v53.SurfaceCount > 0x32 )
  {
    v9 = WdLogNewEntry5_WdError(MmUserProbeAddress, v5);
    *(_QWORD *)(v9 + 24) = v53.SurfaceCount;
    goto LABEL_7;
  }
  if ( !v53.SurfaceCount )
  {
    v8 = WdLogNewEntry5_WdError(MmUserProbeAddress, v5);
    *(_QWORD *)(v8 + 24) = 447LL;
    goto LABEL_6;
  }
  v14 = 8LL * v53.SurfaceCount;
  if ( !is_mul_ok(v53.SurfaceCount, 8uLL) )
    v14 = -1LL;
  v16 = operator new[](v14, 0x4B677844u, PagedPool);
  P = v16;
  if ( v16 )
  {
    SurfaceCount = v53.SurfaceCount;
    pNtSurfaceHandles = v53.pNtSurfaceHandles;
    if ( &v53.pNtSurfaceHandles[SurfaceCount] < v53.pNtSurfaceHandles
      || &v53.pNtSurfaceHandles[SurfaceCount] > (HANDLE *)MmUserProbeAddress )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(v16, pNtSurfaceHandles, SurfaceCount * 8);
    v53.pNtSurfaceHandles = (HANDLE *)P;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v59, v53.hDevice, Current, &v55);
    v24 = v55;
    if ( v55 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v50, v55);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v56, (__int64)v24, 2LL, v27, 0);
      LODWORD(v26) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v56);
      if ( (int)v26 >= 0 )
      {
        v28 = (DXGSWAPCHAIN *)operator new(0xD0uLL, 0x4B677844u, (POOL_TYPE)512);
        if ( v28 )
          v4 = DXGSWAPCHAIN::DXGSWAPCHAIN(v28);
        else
          v4 = 0LL;
        v50[2] = v4;
        if ( v4 )
        {
          LODWORD(v26) = DXGSWAPCHAIN::InitializeGlobalState(v4, *((struct ADAPTER_RENDER **)v24 + 2), &v53);
          if ( (int)v26 >= 0 )
          {
            v31 = *((_QWORD *)v24 + 225);
            if ( v31 )
              *((_QWORD *)v4 + 25) = *(_QWORD *)(v31 + 268);
            LODWORD(v26) = DXGSWAPCHAIN::OpenLocal(
                             v4,
                             v53.hDevice,
                             v24,
                             v53.BufferAvailableEvent,
                             v53.Flags.Value,
                             v53.bProducer);
            if ( (int)v26 >= 0 )
            {
              LODWORD(v26) = DXGSWAPCHAIN::DuplicateSurfacesForCreate(v4, &v53, v32, v33);
              if ( (int)v26 >= 0 )
              {
                LOBYTE(v35) = 1;
                LOBYTE(v34) = 1;
                v36 = ObCreateObject(
                        v34,
                        g_pDxgkSharedSwapChainObjectType,
                        v53.pObjectAttributes,
                        v35,
                        0LL,
                        8,
                        216,
                        0,
                        &Object);
                v26 = v36;
                if ( v36 < 0
                  || (*(_QWORD *)Object = v4,
                      v58 = 1,
                      inserted = ObInsertObject(Object, 0LL, v53.DesiredAccess, 0, 0LL, &v51),
                      v26 = inserted,
                      inserted < 0) )
                {
                  v39 = WdLogNewEntry5_WdError(v38, v37);
                  *(_QWORD *)(v39 + 24) = v26;
                  WdLogEvent5_WdError(v39);
                }
                else
                {
                  v41 = (_QWORD *)(a1 + 48);
                  if ( a1 + 48 >= MmUserProbeAddress )
                    v41 = (_QWORD *)MmUserProbeAddress;
                  *v41 = v51;
                }
              }
            }
          }
        }
        else
        {
          v30 = WdLogNewEntry5_WdLowResource(v29);
          *(_QWORD *)(v30 + 24) = 492LL;
          WdLogEvent5_WdLowResource(v30);
          LODWORD(v26) = -1073741801;
        }
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v56);
      if ( v50[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v50);
    }
    else
    {
      v25 = WdLogNewEntry5_WdError(v23, v22);
      *(_QWORD *)(v25 + 24) = v53.hDevice;
      LODWORD(v26) = -1073741811;
      *(_QWORD *)(v25 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v25);
    }
    if ( v59 && _InterlockedExchangeAdd64((volatile signed __int64 *)v59 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v59 + 2), v59);
    if ( (int)v26 < 0 )
    {
      if ( v51 )
        ObCloseHandle(v51, 1);
      if ( v4 && !v58 )
      {
        DXGSWAPCHAIN::`scalar deleting destructor'(v4);
        v4 = 0LL;
      }
    }
    ExFreePoolWithTag(P, 0);
    v45 = Microsoft_Windows_DxgKrnlEnableBits;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
    {
      LODWORD(v49) = v53.SurfaceCount;
      LODWORD(v48) = v53.hDevice;
      LODWORD(Handle) = v53.bProducer;
      LODWORD(NewObject) = v26;
      Template_pqdqqpp(v43, v42, v44, v4, NewObject, Handle, v48, v49, v53.BufferAvailableEvent, v51);
      v45 = Microsoft_Windows_DxgKrnlEnableBits;
    }
    if ( (qword_1C006E790 & 2) != 0 && (v45 & 0x2000) != 0 )
      Template_q(qword_1C006E790, &EventProfilerExit, v44, 2108);
    return (unsigned int)v26;
  }
  else
  {
    v17 = WdLogNewEntry5_WdLowResource(v15);
    *(_QWORD *)(v17 + 24) = 453LL;
    WdLogEvent5_WdLowResource(v17);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v18, &EventProfilerExit, v19, 2108);
    return 3221225495LL;
  }
}
