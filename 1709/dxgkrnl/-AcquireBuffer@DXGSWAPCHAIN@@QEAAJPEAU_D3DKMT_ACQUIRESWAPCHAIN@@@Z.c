/*
 * XREFs of ?AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@@Z @ 0x1C01D4DFC
 * Callers:
 *     DxgkAcquireSwapChain @ 0x1C01D6E00 (DxgkAcquireSwapChain.c)
 * Callees:
 *     ?GetClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO@1@PEAPEAUSWAPCHAIN_CLIENT_SURF_INFO@1@@Z @ 0x1C002C6CC (-GetClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO.c)
 *     ?Remove@DXGFIXEDQUEUE@@QEAAJPEAI@Z @ 0x1C002C830 (-Remove@DXGFIXEDQUEUE@@QEAAJPEAI@Z.c)
 *     McTemplateK0pqddqq @ 0x1C002C8D0 (McTemplateK0pqddqq.c)
 *     ?InsertGPUWait@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z @ 0x1C01D5E94 (-InsertGPUWait@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z @ 0x1C01D5FC4 (-MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z.c)
 *     ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z @ 0x1C01D64C0 (-ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::AcquireBuffer(struct _KTHREAD **this, struct _D3DKMT_ACQUIRESWAPCHAIN *a2, __int64 a3)
{
  struct _KTHREAD **v4; // rsi
  __int64 v5; // rax
  char *v6; // rdi
  __int64 v7; // rax
  PVOID pMetaData; // r8
  int inserted; // ebx
  unsigned int v11; // r15d
  int v12; // eax
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v13; // r14
  unsigned int *v14; // rax
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO **v15; // [rsp+20h] [rbp-58h]
  BOOL bProducer; // [rsp+28h] [rbp-50h]
  BOOL bReleaseBeforeAcquire; // [rsp+30h] [rbp-48h]
  UINT DeferredFreeListSize; // [rsp+38h] [rbp-40h]
  int v19; // [rsp+40h] [rbp-38h]
  unsigned int v20; // [rsp+80h] [rbp+8h] BYREF
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v21; // [rsp+88h] [rbp+10h] BYREF
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO *v22; // [rsp+90h] [rbp+18h] BYREF

  v4 = this;
  if ( this[1] != KeGetCurrentThread() )
  {
    v5 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v5 + 24) = 1824LL;
    WdLogEvent5_WdAssertion(v5);
  }
  v6 = (char *)v4 + (a2->bProducer ? 128LL : 80LL);
  if ( a2->bReleaseBeforeAcquire )
  {
    if ( *((_DWORD *)v6 + 7) != 1 )
    {
      v7 = WdLogNewEntry5_WdError(this);
      *(_QWORD *)(v7 + 24) = 1836LL;
      WdLogEvent5_WdError(v7);
      return 3221225659LL;
    }
    this = (struct _KTHREAD **)v4[26];
    if ( *((_DWORD *)this + 2) == *((_DWORD *)this + 3) )
      goto LABEL_24;
    pMetaData = a2->ReleaseInfo.pMetaData;
    a2->ReleaseInfo.pMetaData = 0LL;
    inserted = DXGSWAPCHAIN::ReleaseBuffer((DXGSWAPCHAIN *)v4, &a2->ReleaseInfo, pMetaData, 1);
    if ( inserted < 0 )
      goto LABEL_8;
  }
  if ( *((_DWORD *)v6 + 10) != -1 )
    goto LABEL_24;
  if ( *((_DWORD *)v6 + 7) )
  {
    v12 = DXGFIXEDQUEUE::Remove(v4[26], &v20);
    inserted = v12;
    if ( v12 == -2147483622 )
      goto LABEL_24;
    if ( v12 < 0 )
      goto LABEL_8;
    v11 = v20;
  }
  else
  {
    v11 = *(_DWORD *)v4[27];
  }
  DXGSWAPCHAIN::GetClientSurfaceInfo(
    (DXGSWAPCHAIN *)v4,
    (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v6,
    v11,
    &v21,
    &v22);
  v13 = v21;
  if ( *(_DWORD *)v21 == 2 )
  {
    if ( !*((_DWORD *)v6 + 6) )
    {
      *(_DWORD *)v21 = 0;
      goto LABEL_20;
    }
    *(_DWORD *)v21 = 0;
  }
  if ( *(_DWORD *)v13 )
  {
LABEL_24:
    inserted = 259;
    goto LABEL_25;
  }
LABEL_20:
  if ( *((_DWORD *)v13 + 1) != *((_DWORD *)v6 + 7) )
    goto LABEL_24;
  v14 = (unsigned int *)v22;
  inserted = 0;
  *(_DWORD *)v13 = 1;
  *((_DWORD *)v6 + 10) = v11;
  *((_DWORD *)v13 + 4) = 0;
  if ( !*v14
    || (inserted = DXGSWAPCHAIN::InsertGPUWait(
                     (DXGSWAPCHAIN *)v4,
                     (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v6,
                     v13,
                     *v14),
        inserted >= 0) )
  {
    a2->ReleaseInfo.DeferredFreeListSize = v11;
    this = (struct _KTHREAD **)*(unsigned int *)(*((_QWORD *)v13 + 1) + 8LL);
    *(&a2->ReleaseInfo.DeferredFreeListSize + 1) = (unsigned int)this;
    goto LABEL_25;
  }
LABEL_8:
  DXGSWAPCHAIN::MarkAbandoned((DXGSWAPCHAIN *)v4, (bool)a2);
LABEL_25:
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
  {
    v19 = *(&a2->ReleaseInfo.DeferredFreeListSize + 1);
    DeferredFreeListSize = a2->ReleaseInfo.DeferredFreeListSize;
    bReleaseBeforeAcquire = a2->bReleaseBeforeAcquire;
    bProducer = a2->bProducer;
    LODWORD(v15) = inserted;
    McTemplateK0pqddqq(
      (__int64)this,
      (__int64)a2,
      a3,
      v4,
      v15,
      bProducer,
      bReleaseBeforeAcquire,
      DeferredFreeListSize,
      v19);
  }
  return (unsigned int)inserted;
}
