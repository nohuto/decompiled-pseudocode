/*
 * XREFs of ?DuplicateSurfacesForOpen@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z @ 0x1C01BCE98
 * Callers:
 *     DxgkOpenSwapChain @ 0x1C01BF0A0 (DxgkOpenSwapChain.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?SwitchClient@DXGSWAPCHAIN@@AEAA?AW4SWAPCHAIN_CLIENT_TYPE@1@W421@@Z @ 0x1C003C368 (-SwitchClient@DXGSWAPCHAIN@@AEAA-AW4SWAPCHAIN_CLIENT_TYPE@1@W421@@Z.c)
 *     ?DestroyLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z @ 0x1C01BCB60 (-DestroyLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::DuplicateSurfacesForOpen(
        UINT *this,
        struct _D3DKMT_OPENSWAPCHAIN *a2,
        __int64 a3,
        __int64 a4)
{
  BOOL bProducer; // r15d
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  __int64 v12; // r9
  __int64 v13; // r8
  HANDLE *pNtSurfaceHandles; // rcx
  unsigned __int64 v15; // rdx
  UINT v16; // eax
  __int64 v17; // rbp
  __int64 v18; // r14
  __int64 v19; // r12
  __int64 CurrentProcess; // rax
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rax
  int v29; // [rsp+38h] [rbp-50h]
  _BYTE v30[72]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v31; // [rsp+90h] [rbp+8h]

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v30, (struct DXGFASTMUTEX *const)this, a3, a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v30);
  bProducer = a2->bProducer;
  LODWORD(v7) = 0;
  v11 = DXGSWAPCHAIN::SwitchClient(v8, !bProducer, v9, v10);
  v13 = v11;
  pNtSurfaceHandles = (HANDLE *)(unsigned int)-v11;
  v15 = -(__int64)(v11 != 0) & 0xFFFFFFFFFFFFFFC8uLL;
  v31 = *(_QWORD *)((char *)this + v15 + 144);
  if ( !v31 )
  {
    LODWORD(v7) = -1073741738;
    goto LABEL_13;
  }
  v16 = this[10];
  if ( a2->SurfaceCount < v16 )
  {
    LODWORD(v7) = -1073741811;
    v27 = WdLogNewEntry5_WdWarning(pNtSurfaceHandles, v15, v13, v12);
    *(_QWORD *)(v27 + 24) = a2->SurfaceCount;
    *(_QWORD *)(v27 + 32) = this[10];
    WdLogEvent5_WdWarning(v27);
  }
  else
  {
    v17 = 0LL;
    if ( !v16 )
      goto LABEL_13;
    v18 = 2 * (v13 + 2);
    while ( 1 )
    {
      v19 = *((_QWORD *)this + 6) + 56LL * (unsigned int)v17;
      CurrentProcess = PsGetCurrentProcess(pNtSurfaceHandles);
      LOBYTE(v29) = 1;
      v21 = ObDuplicateObject(
              v31,
              *(_QWORD *)(v19 + 8 * v18),
              CurrentProcess,
              v19 + 16 * (!bProducer + 2LL),
              a2->DesiredAccessTextures,
              0,
              4,
              v29);
      v7 = v21;
      if ( v21 < 0 )
        break;
      pNtSurfaceHandles = a2->pNtSurfaceHandles;
      pNtSurfaceHandles[v17] = *(HANDLE *)(v19 + 16 * (!bProducer + 2LL));
      v17 = (unsigned int)(v17 + 1);
      if ( (unsigned int)v17 >= this[10] )
        goto LABEL_11;
    }
    v23 = WdLogNewEntry5_WdError(v22, v15);
    v24 = *(_QWORD *)(v19 + 8 * v18);
    v25 = v23;
    *(_QWORD *)(v23 + 24) = v24;
    *(_QWORD *)(v23 + 32) = v31;
    v26 = PsGetCurrentProcess(v24);
    *(_QWORD *)(v25 + 48) = v7;
    *(_QWORD *)(v25 + 40) = v26;
    WdLogEvent5_WdError(v25);
  }
LABEL_11:
  if ( (int)v7 < 0 )
    DXGSWAPCHAIN::DestroyLocalClient(
      (DXGSWAPCHAIN *)this,
      (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)((char *)this + (bProducer ? 0x38 : 0) + 72));
LABEL_13:
  if ( v30[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v30, v15, v13, v12);
  return (unsigned int)v7;
}
