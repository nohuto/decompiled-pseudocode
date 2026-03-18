/*
 * XREFs of ?AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAI@Z @ 0x1C01DDA50
 * Callers:
 *     ?UnOrderedPresent@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_UNORDEREDPRESENTSWAPCHAIN@@@Z @ 0x1C01DFFC4 (-UnOrderedPresent@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_UNORDEREDPRESENTSWAPCHAIN@@@Z.c)
 *     DxgkAcquireSwapChain @ 0x1C01E02F0 (DxgkAcquireSwapChain.c)
 * Callees:
 *     ?GetClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO@1@PEAPEAUSWAPCHAIN_CLIENT_SURF_INFO@1@@Z @ 0x1C0037948 (-GetClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO.c)
 *     ?Remove@DXGFIXEDQUEUE@@QEAAJPEAI@Z @ 0x1C0037AB4 (-Remove@DXGFIXEDQUEUE@@QEAAJPEAI@Z.c)
 *     McTemplateK0pqddqq @ 0x1C0037B54 (McTemplateK0pqddqq.c)
 *     ?InsertGPUWait@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z @ 0x1C01DEAE0 (-InsertGPUWait@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z @ 0x1C01DEC18 (-MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z.c)
 *     ?OpenSurfacesResourcesLocalForOpener@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@HPEAPEAX@Z @ 0x1C01DF0B0 (-OpenSurfacesResourcesLocalForOpener@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@HPEAPEAX@Z.c)
 *     ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z @ 0x1C01DF630 (-ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::AcquireBuffer(
        struct _KTHREAD **this,
        struct _D3DKMT_ACQUIRESWAPCHAIN *a2,
        unsigned int *a3)
{
  unsigned int *v3; // r14
  struct _KTHREAD **v5; // rdi
  __int64 v6; // rax
  char *v7; // rsi
  __int64 v8; // rax
  int inserted; // ebx
  PVOID pMetaData; // r8
  unsigned int v11; // r15d
  int v12; // eax
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO *v13; // r13
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v14; // r14
  unsigned int v15; // r9d
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO **v17; // [rsp+20h] [rbp-68h]
  BOOL bProducer; // [rsp+28h] [rbp-60h]
  BOOL bReleaseBeforeAcquire; // [rsp+30h] [rbp-58h]
  UINT AcquiredBufferIdx; // [rsp+38h] [rbp-50h]
  UINT AcquireMetadataSize; // [rsp+40h] [rbp-48h]
  unsigned int v22; // [rsp+90h] [rbp+8h] BYREF
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO *v23; // [rsp+98h] [rbp+10h] BYREF
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v24; // [rsp+A8h] [rbp+20h] BYREF

  v3 = a3;
  v5 = this;
  if ( this[1] != KeGetCurrentThread() )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v6 + 24) = 2560LL;
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = (char *)v5 + (a2->bProducer ? 136LL : 88LL);
  if ( a2->bReleaseBeforeAcquire )
  {
    if ( *((_DWORD *)v7 + 7) != 1 )
    {
      v8 = WdLogNewEntry5_WdError(this);
      *(_QWORD *)(v8 + 24) = 2572LL;
      WdLogEvent5_WdError(v8);
      inserted = -1073741637;
      goto LABEL_28;
    }
    this = (struct _KTHREAD **)v5[27];
    if ( *((_DWORD *)this + 2) == *((_DWORD *)this + 3) )
      goto LABEL_27;
    pMetaData = a2->ReleaseInfo.pMetaData;
    a2->ReleaseInfo.pMetaData = 0LL;
    inserted = DXGSWAPCHAIN::ReleaseBuffer((DXGSWAPCHAIN *)v5, &a2->ReleaseInfo, pMetaData, 1);
    if ( inserted < 0 )
    {
LABEL_8:
      DXGSWAPCHAIN::MarkAbandoned((DXGSWAPCHAIN *)v5, (bool)a2);
      goto LABEL_28;
    }
  }
  if ( *((_DWORD *)v7 + 10) != -1 )
    goto LABEL_27;
  if ( !*((_DWORD *)v7 + 7) )
  {
    if ( !v3 )
      v3 = (unsigned int *)v5[28];
    v11 = *v3;
    goto LABEL_17;
  }
  v12 = DXGFIXEDQUEUE::Remove(v5[27], &v22);
  inserted = v12;
  if ( v12 == -2147483622 )
  {
LABEL_27:
    inserted = 259;
    goto LABEL_28;
  }
  if ( v12 < 0 )
    goto LABEL_8;
  v11 = v22;
LABEL_17:
  DXGSWAPCHAIN::GetClientSurfaceInfo(
    (DXGSWAPCHAIN *)v5,
    (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v7,
    v11,
    &v24,
    &v23);
  v13 = v23;
  v14 = v24;
  if ( *((_DWORD *)v5 + 58) )
  {
    if ( !*(_BYTE *)v23 )
    {
      inserted = DXGSWAPCHAIN::OpenSurfacesResourcesLocalForOpener((DXGSWAPCHAIN *)v5, v24, 0, 0LL);
      if ( inserted < 0 )
        goto LABEL_8;
    }
  }
  if ( *(_DWORD *)v14 == 2 )
    *(_DWORD *)v14 = 0;
  if ( *(_DWORD *)v14 || *((_DWORD *)v14 + 1) != *((_DWORD *)v7 + 7) )
    goto LABEL_27;
  *(_DWORD *)v14 = 1;
  inserted = 0;
  *((_DWORD *)v7 + 10) = v11;
  *((_DWORD *)v14 + 6) = 0;
  v15 = *((_DWORD *)v13 + 1);
  if ( v15 )
  {
    inserted = DXGSWAPCHAIN::InsertGPUWait(
                 (DXGSWAPCHAIN *)v5,
                 (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v7,
                 v14,
                 v15);
    if ( inserted < 0 )
      goto LABEL_8;
  }
  a2->AcquiredBufferIdx = v11;
  a2->OpenerAcquiredSurfaceHandle = (HANDLE)*((_QWORD *)v13 + 3);
  this = (struct _KTHREAD **)*(unsigned int *)(*((_QWORD *)v14 + 2) + 8LL);
  a2->AcquireMetadataSize = (unsigned int)this;
LABEL_28:
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
  {
    AcquireMetadataSize = a2->AcquireMetadataSize;
    AcquiredBufferIdx = a2->AcquiredBufferIdx;
    bReleaseBeforeAcquire = a2->bReleaseBeforeAcquire;
    bProducer = a2->bProducer;
    LODWORD(v17) = inserted;
    McTemplateK0pqddqq(
      (__int64)this,
      (__int64)a2,
      (__int64)a3,
      v5,
      v17,
      bProducer,
      bReleaseBeforeAcquire,
      AcquiredBufferIdx,
      AcquireMetadataSize);
  }
  return (unsigned int)inserted;
}
