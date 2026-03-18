/*
 * XREFs of ?InitializeSwapchainGlobalState@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESWAPCHAIN@@@Z @ 0x1C01DE85C
 * Callers:
 *     DxgkCreateSwapChain @ 0x1C01E0B00 (DxgkCreateSwapChain.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Init@DXGFIXEDQUEUE@@QEAAJXZ @ 0x1C0037A50 (-Init@DXGFIXEDQUEUE@@QEAAJXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGSWAPCHAIN::InitializeSwapchainGlobalState(
        DXGSWAPCHAIN *this,
        struct ADAPTER_RENDER *a2,
        struct _D3DKMT_CREATESWAPCHAIN *a3)
{
  UINT v3; // r9d
  _DWORD *v7; // rax
  __int64 v8; // rcx
  UINT SurfaceCount; // ecx
  __int64 v10; // rax
  _DWORD *v12; // rax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx

  v3 = a3->Flags.Value & 2;
  *((_DWORD *)this + 58) = v3 != 0;
  if ( !v3 )
  {
    v7 = operator new[](8uLL, 0x4B677844u, PagedPool);
    if ( v7 )
    {
      SurfaceCount = a3->SurfaceCount;
      *v7 = 0;
      v8 = SurfaceCount - 1;
      v7[1] = v8;
    }
    *((_QWORD *)this + 28) = v7;
    if ( !v7 )
    {
      v10 = WdLogNewEntry5_WdLowResource(v8);
      *(_QWORD *)(v10 + 24) = 1644LL;
LABEL_6:
      WdLogEvent5_WdLowResource(v10);
      return 3221225495LL;
    }
  }
  v12 = operator new[](0x18uLL, 0x4B677844u, PagedPool);
  if ( v12 )
  {
    v13 = *((unsigned int *)this + 52);
    v12[2] = 0;
    v12[3] = 0;
    *((_QWORD *)v12 + 2) = 0LL;
    *v12 = 20;
    v12[1] = v13;
  }
  *((_QWORD *)this + 27) = v12;
  if ( !v12 )
  {
    v10 = WdLogNewEntry5_WdLowResource(v13);
    *(_QWORD *)(v10 + 24) = 1653LL;
    goto LABEL_6;
  }
  v14 = DXGFIXEDQUEUE::Init((DXGFIXEDQUEUE *)v12);
  v17 = v14;
  if ( v14 >= 0 )
  {
    *((_QWORD *)this + 24) = *(_QWORD *)(*((_QWORD *)a2 + 2) + 268LL);
    v19 = *(unsigned int *)(*((_QWORD *)a2 + 2) + 300LL);
    if ( (v19 & 0x10) != 0 )
      *((_DWORD *)this + 47) = 1;
    v20 = WdLogNewEntry5_WdEvent(v19, v15);
    *(_QWORD *)(v20 + 24) = this;
    *(_QWORD *)(v20 + 32) = DXGPROCESS::GetCurrent(v22, v21);
    WdLogEvent5_WdEvent(v20);
    return 0LL;
  }
  else
  {
    v18 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v18 + 24) = v17;
    WdLogEvent5_WdError(v18);
    return (unsigned int)v17;
  }
}
