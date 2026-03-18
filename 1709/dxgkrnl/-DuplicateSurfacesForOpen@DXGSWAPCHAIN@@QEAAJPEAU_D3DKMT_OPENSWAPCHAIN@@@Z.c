/*
 * XREFs of ?DuplicateSurfacesForOpen@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z @ 0x1C01D553C
 * Callers:
 *     DxgkOpenSwapChain @ 0x1C01D7820 (DxgkOpenSwapChain.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?SwitchClient@DXGSWAPCHAIN@@AEAA?AW4SWAPCHAIN_CLIENT_TYPE@1@W421@@Z @ 0x1C002C898 (-SwitchClient@DXGSWAPCHAIN@@AEAA-AW4SWAPCHAIN_CLIENT_TYPE@1@W421@@Z.c)
 *     ?DestroyLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z @ 0x1C01D5214 (-DestroyLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::DuplicateSurfacesForOpen(UINT *this, struct _D3DKMT_OPENSWAPCHAIN *a2)
{
  BOOL bProducer; // r12d
  __int64 v5; // rdi
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // r8
  HANDLE *pNtSurfaceHandles; // rcx
  unsigned __int64 v10; // rdx
  UINT v11; // eax
  __int64 v12; // rbp
  __int64 v13; // r15
  __int64 v14; // r13
  __int64 CurrentProcess; // rax
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  int v25; // [rsp+38h] [rbp-50h]
  _BYTE v26[72]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v27; // [rsp+90h] [rbp+8h]

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v26, (struct DXGFASTMUTEX *const)this);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v26);
  bProducer = a2->bProducer;
  LODWORD(v5) = 0;
  v7 = DXGSWAPCHAIN::SwitchClient(v6, !bProducer);
  v8 = v7;
  pNtSurfaceHandles = (HANDLE *)(unsigned int)-v7;
  v10 = -(__int64)(v7 != 0) & 0xFFFFFFFFFFFFFFD0uLL;
  v27 = *(_QWORD *)((char *)this + v10 + 144);
  if ( !v27 )
  {
    LODWORD(v5) = -1073741738;
    goto LABEL_13;
  }
  v11 = this[10];
  if ( a2->SurfaceCount < v11 )
  {
    LODWORD(v5) = -1073741811;
    v23 = WdLogNewEntry5_WdWarning(pNtSurfaceHandles, v10, v8);
    *(_QWORD *)(v23 + 24) = a2->SurfaceCount;
    *(_QWORD *)(v23 + 32) = this[10];
    WdLogEvent5_WdWarning(v23);
  }
  else
  {
    v12 = 0LL;
    if ( !v11 )
      goto LABEL_13;
    v13 = 2 * (v8 + 2);
    while ( 1 )
    {
      v14 = *((_QWORD *)this + 7) + 56LL * (unsigned int)v12;
      CurrentProcess = PsGetCurrentProcess(pNtSurfaceHandles, v10);
      LOBYTE(v25) = 1;
      v16 = ObDuplicateObject(
              v27,
              *(_QWORD *)(v14 + 8 * v13),
              CurrentProcess,
              v14 + 16 * (!bProducer + 2LL),
              a2->DesiredAccessTextures,
              0,
              4,
              v25);
      v5 = v16;
      if ( v16 < 0 )
        break;
      pNtSurfaceHandles = a2->pNtSurfaceHandles;
      pNtSurfaceHandles[v12] = *(HANDLE *)(v14 + 16 * (!bProducer + 2LL));
      v12 = (unsigned int)(v12 + 1);
      if ( (unsigned int)v12 >= this[10] )
        goto LABEL_11;
    }
    v18 = WdLogNewEntry5_WdError(v17);
    v19 = *(_QWORD *)(v14 + 8 * v13);
    v20 = v18;
    *(_QWORD *)(v18 + 24) = v19;
    *(_QWORD *)(v18 + 32) = v27;
    v22 = PsGetCurrentProcess(v19, v21);
    *(_QWORD *)(v20 + 48) = v5;
    *(_QWORD *)(v20 + 40) = v22;
    WdLogEvent5_WdError(v20);
  }
LABEL_11:
  if ( (int)v5 < 0 )
    DXGSWAPCHAIN::DestroyLocalClient(
      (DXGSWAPCHAIN *)this,
      (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)((char *)this + (bProducer ? 128LL : 80LL)));
LABEL_13:
  if ( v26[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v26);
  return (unsigned int)v5;
}
