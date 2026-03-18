/*
 * XREFs of DxgkCreateSwapChain @ 0x1C01D7080
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
 *     ??_GDXGSWAPCHAIN@@QEAAPEAXI@Z @ 0x1C002C570 (--_GDXGSWAPCHAIN@@QEAAPEAXI@Z.c)
 *     McTemplateK0pqdqqpp @ 0x1C002CBEC (McTemplateK0pqdqqpp.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00CECE8 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DXGSWAPCHAIN@@QEAA@XZ @ 0x1C01D4930 (--0DXGSWAPCHAIN@@QEAA@XZ.c)
 *     ?DuplicateSurfacesForCreate@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_CREATESWAPCHAIN@@@Z @ 0x1C01D5390 (-DuplicateSurfacesForCreate@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_CREATESWAPCHAIN@@@Z.c)
 *     ?InitializeGlobalState@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESWAPCHAIN@@@Z @ 0x1C01D5AC0 (-InitializeGlobalState@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESWAPCHAIN@@@Z.c)
 *     ?OpenLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z @ 0x1C01D6074 (-OpenLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z.c)
 */

__int64 __fastcall DxgkCreateSwapChain(ULONG64 a1, __int64 a2, __int64 a3)
{
  DXGSWAPCHAIN *v4; // r14
  __int64 v5; // rcx
  struct _KTHREAD **Current; // r15
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r8
  _D3DKMT_CREATESWAPCHAIN *v12; // rax
  SIZE_T v13; // rax
  __int64 v14; // rcx
  PVOID v15; // r9
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 SurfaceCount; // r8
  HANDLE *pNtSurfaceHandles; // rdx
  __int64 v21; // rcx
  struct DXGDEVICE *v22; // r15
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // r9
  DXGSWAPCHAIN *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r9
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rax
  NTSTATUS inserted; // eax
  _QWORD *v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  PVOID *NewObject; // [rsp+20h] [rbp-138h]
  PHANDLE Handle; // [rsp+28h] [rbp-130h]
  __int64 v42; // [rsp+30h] [rbp-128h]
  __int64 v43; // [rsp+38h] [rbp-120h]
  _QWORD v44[2]; // [rsp+50h] [rbp-108h] BYREF
  HANDLE v45; // [rsp+60h] [rbp-F8h] BYREF
  PVOID Object; // [rsp+68h] [rbp-F0h] BYREF
  _D3DKMT_CREATESWAPCHAIN v47; // [rsp+70h] [rbp-E8h] BYREF
  PVOID P; // [rsp+A8h] [rbp-B0h]
  struct DXGDEVICE *v49; // [rsp+B0h] [rbp-A8h] BYREF
  _BYTE v50[152]; // [rsp+C0h] [rbp-98h] BYREF
  char v51; // [rsp+168h] [rbp+10h]
  struct DXGDEVICE *v52; // [rsp+170h] [rbp+18h] BYREF
  DXGSWAPCHAIN *v53; // [rsp+178h] [rbp+20h]

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2108);
  v4 = 0LL;
  v51 = 0;
  Object = 0LL;
  v45 = 0LL;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1, a2);
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v7 + 24) = 425LL;
LABEL_6:
    v8 = v7;
LABEL_7:
    WdLogEvent5_WdError(v8);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v9, &EventProfilerExit, v10, 2108);
    return -1073741811LL;
  }
  v12 = (_D3DKMT_CREATESWAPCHAIN *)a1;
  if ( a1 >= MmUserProbeAddress )
    v12 = (_D3DKMT_CREATESWAPCHAIN *)MmUserProbeAddress;
  v47 = *v12;
  if ( v47.SurfaceCount > 0x32 )
  {
    v8 = WdLogNewEntry5_WdError(MmUserProbeAddress);
    *(_QWORD *)(v8 + 24) = v47.SurfaceCount;
    goto LABEL_7;
  }
  if ( !v47.SurfaceCount )
  {
    v7 = WdLogNewEntry5_WdError(MmUserProbeAddress);
    *(_QWORD *)(v7 + 24) = 451LL;
    goto LABEL_6;
  }
  v13 = 8LL * v47.SurfaceCount;
  if ( !is_mul_ok(v47.SurfaceCount, 8uLL) )
    v13 = -1LL;
  v15 = operator new[](v13, 0x4B677844u, PagedPool);
  P = v15;
  if ( v15 )
  {
    SurfaceCount = v47.SurfaceCount;
    pNtSurfaceHandles = v47.pNtSurfaceHandles;
    if ( &v47.pNtSurfaceHandles[SurfaceCount] < v47.pNtSurfaceHandles
      || &v47.pNtSurfaceHandles[SurfaceCount] > (HANDLE *)MmUserProbeAddress )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(v15, pNtSurfaceHandles, SurfaceCount * 8);
    v47.pNtSurfaceHandles = (HANDLE *)P;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v52, v47.hDevice, Current, &v49);
    v22 = v49;
    if ( v49 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v44, v49);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v50, (__int64)v22, 2, v25, 0);
      LODWORD(v24) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v50);
      if ( (int)v24 >= 0 )
      {
        v26 = (DXGSWAPCHAIN *)operator new(0xE0uLL, 0x4B677844u, (POOL_TYPE)512);
        if ( v26 )
          v4 = DXGSWAPCHAIN::DXGSWAPCHAIN(v26);
        else
          v4 = 0LL;
        v53 = v4;
        if ( v4 )
        {
          LODWORD(v24) = DXGSWAPCHAIN::InitializeGlobalState(v4, *((struct ADAPTER_RENDER **)v22 + 2), &v47);
          if ( (int)v24 >= 0 )
          {
            v29 = *((_QWORD *)v22 + 209);
            if ( v29 )
              *((_QWORD *)v4 + 24) = *(_QWORD *)(v29 + 268);
            LODWORD(v24) = DXGSWAPCHAIN::OpenLocal(
                             v4,
                             v47.hDevice,
                             v22,
                             v47.BufferAvailableEvent,
                             v47.Flags.Value,
                             v47.bProducer);
            if ( (int)v24 >= 0 )
            {
              LODWORD(v24) = DXGSWAPCHAIN::DuplicateSurfacesForCreate(v4, &v47);
              if ( (int)v24 >= 0 )
              {
                LOBYTE(v31) = 1;
                LOBYTE(v30) = 1;
                v32 = ObCreateObject(
                        v30,
                        g_pDxgkSharedSwapChainObjectType,
                        v47.pObjectAttributes,
                        v31,
                        0LL,
                        8,
                        232,
                        0,
                        &Object);
                v24 = v32;
                if ( v32 < 0
                  || (*(_QWORD *)Object = v4,
                      v51 = 1,
                      inserted = ObInsertObject(Object, 0LL, v47.DesiredAccess, 0, 0LL, &v45),
                      v24 = inserted,
                      inserted < 0) )
                {
                  v34 = WdLogNewEntry5_WdError(v33);
                  *(_QWORD *)(v34 + 24) = v24;
                  WdLogEvent5_WdError(v34);
                }
                else
                {
                  v36 = (_QWORD *)(a1 + 48);
                  if ( a1 + 48 >= MmUserProbeAddress )
                    v36 = (_QWORD *)MmUserProbeAddress;
                  *v36 = v45;
                }
              }
            }
          }
        }
        else
        {
          v28 = WdLogNewEntry5_WdLowResource(v27);
          *(_QWORD *)(v28 + 24) = 496LL;
          WdLogEvent5_WdLowResource(v28);
          LODWORD(v24) = -1073741801;
        }
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v50);
      if ( v44[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v44);
    }
    else
    {
      v23 = WdLogNewEntry5_WdError(v21);
      *(_QWORD *)(v23 + 24) = v47.hDevice;
      LODWORD(v24) = -1073741811;
      *(_QWORD *)(v23 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v23);
    }
    if ( v52 && _InterlockedExchangeAdd64((volatile signed __int64 *)v52 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v52 + 2), v52);
    if ( (int)v24 < 0 )
    {
      if ( v45 )
        ObCloseHandle(v45, 1);
      if ( v4 && !v51 )
      {
        DXGSWAPCHAIN::`scalar deleting destructor'(v4);
        v4 = 0LL;
      }
    }
    ExFreePoolWithTag(P, 0);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000000) != 0 )
    {
      LODWORD(v43) = v47.SurfaceCount;
      LODWORD(v42) = v47.hDevice;
      LODWORD(Handle) = v47.bProducer;
      LODWORD(NewObject) = v24;
      McTemplateK0pqdqqpp(v38, v37, v39, v4, NewObject, Handle, v42, v43, v47.BufferAvailableEvent, v45);
    }
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v38, &EventProfilerExit, v39, 2108);
    return (unsigned int)v24;
  }
  else
  {
    v16 = WdLogNewEntry5_WdLowResource(v14);
    *(_QWORD *)(v16 + 24) = 457LL;
    WdLogEvent5_WdLowResource(v16);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v17, &EventProfilerExit, v18, 2108);
    return 3221225495LL;
  }
}
