/*
 * XREFs of ?InitializeGlobalState@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESWAPCHAIN@@@Z @ 0x1C01D5AC0
 * Callers:
 *     DxgkCreateSwapChain @ 0x1C01D7080 (DxgkCreateSwapChain.c)
 * Callees:
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?Init@DXGFIXEDQUEUE@@QEAAJXZ @ 0x1C002C7CC (-Init@DXGFIXEDQUEUE@@QEAAJXZ.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C007A948 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00CECE8 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C00FC108 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::InitializeGlobalState(
        DXGSWAPCHAIN *this,
        struct ADAPTER_RENDER *a2,
        struct _D3DKMT_CREATESWAPCHAIN *a3)
{
  _DWORD *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  _QWORD *v10; // rax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rax
  SIZE_T v16; // rax
  PVOID v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned int v22; // esi
  _QWORD *v23; // rax
  __int64 v24; // rcx
  _QWORD *v25; // rbx
  __int64 v26; // rbp
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  struct _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 v32; // [rsp+40h] [rbp-88h] BYREF
  struct DXGSYNCOBJECT *v33; // [rsp+D0h] [rbp+8h] BYREF

  *((_DWORD *)this + 10) = a3->SurfaceCount;
  v6 = operator new(8uLL, 0x4B677844u, PagedPool);
  if ( v6 )
  {
    v7 = (unsigned int)(*((_DWORD *)this + 10) - 1);
    *v6 = 0;
    v6[1] = v7;
  }
  else
  {
    v6 = 0LL;
  }
  *((_QWORD *)this + 27) = v6;
  if ( !v6 )
  {
    v8 = WdLogNewEntry5_WdLowResource(v7);
    *(_QWORD *)(v8 + 24) = 1262LL;
LABEL_6:
    WdLogEvent5_WdLowResource(v8);
    return 3221225495LL;
  }
  v10 = operator new(0x18uLL, 0x4B677844u, PagedPool);
  if ( v10 )
  {
    v11 = *((unsigned int *)this + 50);
    *(_DWORD *)v10 = 20;
    v10[1] = 0LL;
    v10[2] = 0LL;
    *((_DWORD *)v10 + 1) = v11;
  }
  else
  {
    v10 = 0LL;
  }
  *((_QWORD *)this + 26) = v10;
  if ( !v10 )
  {
    v8 = WdLogNewEntry5_WdLowResource(v11);
    *(_QWORD *)(v8 + 24) = 1270LL;
    goto LABEL_6;
  }
  v12 = DXGFIXEDQUEUE::Init((DXGFIXEDQUEUE *)v10);
  v14 = v12;
  if ( v12 >= 0 )
  {
    *((_QWORD *)this + 23) = *(_QWORD *)(*((_QWORD *)a2 + 2) + 268LL);
    if ( (*(_DWORD *)(*((_QWORD *)a2 + 2) + 300LL) & 0x10) != 0 )
      *((_DWORD *)this + 45) = 1;
    v16 = 56LL * a3->SurfaceCount;
    if ( !is_mul_ok(a3->SurfaceCount, 0x38uLL) )
      v16 = -1LL;
    v17 = operator new[](v16, 0x4B677844u, PagedPool);
    *((_QWORD *)this + 7) = v17;
    if ( !v17 )
    {
      v8 = WdLogNewEntry5_WdLowResource(0LL);
      *(_QWORD *)(v8 + 24) = 1293LL;
      goto LABEL_6;
    }
    memset(v17, 0, 56LL * a3->SurfaceCount);
    v32.hDevice = 0;
    memset(&v32.Info, 0, 0x58uLL);
    v32.Info.Flags.Value |= 1u;
    v22 = 0;
    v32.Info.Type = D3DDDI_FENCE;
    if ( *((_DWORD *)this + 10) )
    {
      while ( 1 )
      {
        v23 = operator new(0x10uLL, 0x4B677844u, PagedPool);
        v25 = v23;
        if ( v23 )
        {
          *v23 = 0LL;
          v23[1] = 0LL;
          AUTOEXPANDALLOCATION::GetBuffer((PVOID *)v23, 0, 0);
        }
        else
        {
          v25 = 0LL;
        }
        v26 = 56LL * v22;
        *(_QWORD *)(*((_QWORD *)this + 7) + v26 + 8) = v25;
        if ( !*(_QWORD *)(*((_QWORD *)this + 7) + v26 + 8) )
          break;
        v27 = CreateSynchronizationObjectInternal(0LL, 1, (DXGADAPTER **)a2, &v32, &v33, 0LL, 0LL);
        v14 = v27;
        if ( v27 < 0 )
        {
          v15 = WdLogNewEntry5_WdError(v28);
          *(_QWORD *)(v15 + 24) = this;
          *(_QWORD *)(v15 + 32) = v14;
          goto LABEL_14;
        }
        v19 = *((_QWORD *)this + 7);
        ++v22;
        *(_DWORD *)(v19 + v26 + 20) = v32.Info.SharedHandle;
        if ( v22 >= *((_DWORD *)this + 10) )
          goto LABEL_28;
      }
      v8 = WdLogNewEntry5_WdLowResource(v24);
      *(_QWORD *)(v8 + 24) = 1309LL;
      goto LABEL_6;
    }
LABEL_28:
    v29 = WdLogNewEntry5_WdEvent(v19, v18, v20, v21);
    *(_QWORD *)(v29 + 24) = this;
    *(_QWORD *)(v29 + 32) = DXGPROCESS::GetCurrent(v31, v30);
    WdLogEvent5_WdEvent(v29);
    return 0LL;
  }
  else
  {
    v15 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v15 + 24) = v14;
LABEL_14:
    WdLogEvent5_WdError(v15);
    return (unsigned int)v14;
  }
}
