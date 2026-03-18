/*
 * XREFs of ?InitializeGlobalState@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESWAPCHAIN@@@Z @ 0x1C01BD40C
 * Callers:
 *     DxgkCreateSwapChain @ 0x1C01BE8F0 (DxgkCreateSwapChain.c)
 * Callees:
 *     memset @ 0x1C0015700 (memset.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C00881D8 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C00A63E0 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00B1A9C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::InitializeGlobalState(
        DXGSWAPCHAIN *this,
        struct ADAPTER_RENDER *a2,
        struct _D3DKMT_CREATESWAPCHAIN *a3)
{
  SIZE_T v6; // rax
  PVOID v7; // rax
  __int64 v8; // rax
  UINT SurfaceCount; // ebx
  __int64 v11; // rcx
  unsigned int v12; // esi
  _DWORD *v13; // rax
  __int64 v14; // rcx
  _DWORD *v15; // rbx
  __int64 v16; // rbp
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rax
  struct _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 v24; // [rsp+40h] [rbp-78h] BYREF
  struct DXGSYNCOBJECT *v25; // [rsp+C0h] [rbp+8h] BYREF

  *((_QWORD *)this + 24) = *(_QWORD *)(*((_QWORD *)a2 + 2) + 268LL);
  if ( (*(_DWORD *)(*((_QWORD *)a2 + 2) + 300LL) & 0x10) != 0 )
    *((_DWORD *)this + 47) = 1;
  v6 = 56LL * a3->SurfaceCount;
  if ( !is_mul_ok(a3->SurfaceCount, 0x38uLL) )
    v6 = -1LL;
  v7 = operator new[](v6, 0x4B677844u, PagedPool);
  *((_QWORD *)this + 6) = v7;
  if ( !v7 )
  {
    v8 = WdLogNewEntry5_WdLowResource(0LL);
    *(_QWORD *)(v8 + 24) = 1220LL;
LABEL_7:
    WdLogEvent5_WdLowResource(v8);
    return 3221225495LL;
  }
  memset(v7, 0, 56LL * a3->SurfaceCount);
  SurfaceCount = a3->SurfaceCount;
  v24.hDevice = 0;
  *((_DWORD *)this + 10) = SurfaceCount;
  memset(&v24.Info, 0, 0x58uLL);
  v24.Info.Flags.Value |= 1u;
  v12 = 0;
  v24.Info.Type = D3DDDI_FENCE;
  if ( SurfaceCount )
  {
    while ( 1 )
    {
      v13 = operator new(0x10uLL, 0x4B677844u, PagedPool);
      v15 = v13;
      if ( v13 )
      {
        *(_QWORD *)v13 = 0LL;
        v13[2] = 0;
        v13[3] = 0;
        AUTOEXPANDALLOCATION::GetBuffer((PVOID *)v13, 0, 0);
      }
      else
      {
        v15 = 0LL;
      }
      v16 = 56LL * v12;
      *(_QWORD *)(*((_QWORD *)this + 6) + v16 + 8) = v15;
      if ( !*(_QWORD *)(*((_QWORD *)this + 6) + v16 + 8) )
        break;
      v17 = CreateSynchronizationObjectInternal(0LL, 1, (DXGADAPTER **)a2, &v24, &v25, 0LL, 0LL);
      v20 = v17;
      if ( v17 < 0 )
      {
        v23 = WdLogNewEntry5_WdError(v19, v18);
        *(_QWORD *)(v23 + 24) = this;
        *(_QWORD *)(v23 + 32) = v20;
        WdLogEvent5_WdError(v23);
        return (unsigned int)v20;
      }
      v11 = *((_QWORD *)this + 6);
      ++v12;
      *(_DWORD *)(v11 + v16 + 20) = v24.Info.SharedHandle;
      if ( v12 >= *((_DWORD *)this + 10) )
        goto LABEL_15;
    }
    v8 = WdLogNewEntry5_WdLowResource(v14);
    *(_QWORD *)(v8 + 24) = 1238LL;
    goto LABEL_7;
  }
LABEL_15:
  v21 = WdLogNewEntry5_WdEvent(v11);
  *(_QWORD *)(v21 + 24) = this;
  *(_QWORD *)(v21 + 32) = DXGPROCESS::GetCurrent(v22);
  WdLogEvent5_WdEvent(v21);
  return 0LL;
}
