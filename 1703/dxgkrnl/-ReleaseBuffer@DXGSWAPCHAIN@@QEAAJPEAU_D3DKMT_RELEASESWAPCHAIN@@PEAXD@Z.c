/*
 * XREFs of ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z @ 0x1C01BDD94
 * Callers:
 *     ?AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@@Z @ 0x1C01BC7B8 (-AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@@Z.c)
 *     ?SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x1C01BE430 (-SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?GetClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO@1@PEAPEAUSWAPCHAIN_CLIENT_SURF_INFO@1@@Z @ 0x1C003C268 (-GetClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO.c)
 *     ?GetOtherClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO@1@PEAPEAUSWAPCHAIN_CLIENT_SURF_INFO@1@@Z @ 0x1C003C2E4 (-GetOtherClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF.c)
 *     ?SwitchClient@DXGSWAPCHAIN@@AEAA?AW4SWAPCHAIN_CLIENT_TYPE@1@W421@@Z @ 0x1C003C368 (-SwitchClient@DXGSWAPCHAIN@@AEAA-AW4SWAPCHAIN_CLIENT_TYPE@1@W421@@Z.c)
 *     Template_pqddqqqqq @ 0x1C003C4F0 (Template_pqddqqqqq.c)
 *     Template_pqdqp @ 0x1C003C5E0 (Template_pqdqp.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C00A63E0 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z @ 0x1C01BD5FC (-InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAXXZ @ 0x1C01BD850 (-MarkAbandoned@DXGSWAPCHAIN@@QEAAXXZ.c)
 *     ?SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADATA_ETW_INFO@1@D@Z @ 0x1C01BE068 (-SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADA.c)
 */

__int64 __fastcall DXGSWAPCHAIN::ReleaseBuffer(
        DXGSWAPCHAIN *this,
        struct _D3DKMT_RELEASESWAPCHAIN *a2,
        void *a3,
        __int64 a4)
{
  char v4; // r13
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 v9; // rax
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  int inserted; // esi
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rcx
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v21; // r12
  __int64 v22; // r8
  __int64 v23; // r9
  UINT MetaDataSize; // ecx
  struct AUTOEXPANDALLOCATION *v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  int *v28; // rax
  int v29; // ecx
  __int64 v30; // rax
  size_t Size; // [rsp+20h] [rbp-69h]
  void *Src; // [rsp+28h] [rbp-61h]
  struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *v34; // [rsp+30h] [rbp-59h]
  char v35[8]; // [rsp+38h] [rbp-51h]
  int v36; // [rsp+40h] [rbp-49h]
  int v37; // [rsp+48h] [rbp-41h]
  int v38; // [rsp+50h] [rbp-39h]
  int v39; // [rsp+58h] [rbp-31h]
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v40; // [rsp+60h] [rbp-29h] BYREF
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO *v41; // [rsp+68h] [rbp-21h] BYREF
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v42; // [rsp+70h] [rbp-19h] BYREF
  void *v43; // [rsp+78h] [rbp-11h]
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO *v44; // [rsp+80h] [rbp-9h] BYREF
  __int64 v45; // [rsp+88h] [rbp-1h] BYREF
  __int64 v46; // [rsp+90h] [rbp+7h]
  __int64 v47; // [rsp+98h] [rbp+Fh]
  int v48; // [rsp+A0h] [rbp+17h]

  v4 = a4;
  v43 = a3;
  if ( *((struct _KTHREAD **)this + 1) != KeGetCurrentThread() )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v7 + 24) = 1891LL;
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = 0LL;
  if ( a2->pMetaData )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v9 + 24) = 1898LL;
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = (DXGSWAPCHAIN *)((char *)this + (a2->bProducer ? 0x38 : 0) + 72);
  DXGSWAPCHAIN::GetClientSurfaceInfo(this, v10, **((unsigned int **)v10 + 4), &v40, &v44);
  if ( *(_DWORD *)v40 == 1 && *((_DWORD *)v40 + 1) == *((_DWORD *)v10 + 10) )
  {
    inserted = DXGSWAPCHAIN::InsertGPUSignal(this, v10, v40, *((unsigned int *)this + 46));
    if ( inserted >= 0 )
    {
      DXGSWAPCHAIN::GetOtherClientSurfaceInfo(this, v10, **((unsigned int **)v10 + 4), &v42, &v41);
      v20 = *((unsigned int *)this + 46);
      v21 = v42;
      *(_DWORD *)v41 = v20;
      ++*((_DWORD *)this + 46);
      *(_DWORD *)v21 = 2;
      *((_DWORD *)v21 + 1) = DXGSWAPCHAIN::SwitchClient(v20, *((unsigned int *)v10 + 10), v22, v23);
      MetaDataSize = a2->MetaDataSize;
      if ( !MetaDataSize )
        goto LABEL_27;
      v25 = (struct AUTOEXPANDALLOCATION *)*((_QWORD *)v21 + 1);
      v45 = 0LL;
      v46 = 0LL;
      v47 = 0LL;
      v48 = 0;
      LODWORD(v45) = a2->bProducer;
      LODWORD(Size) = MetaDataSize;
      inserted = DXGSWAPCHAIN::SetMetaDataInternal(
                   this,
                   v25,
                   (int *)v21 + 4,
                   0,
                   Size,
                   v43,
                   (struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *)&v45,
                   v4);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
      {
        v39 = v48;
        v38 = HIDWORD(v47);
        v37 = v47;
        v36 = HIDWORD(v46);
        *(_DWORD *)v35 = v46;
        LODWORD(v34) = HIDWORD(v45);
        LODWORD(Src) = v45;
        LODWORD(Size) = inserted;
        Template_pqddqqqqq(
          v26,
          &EventIndirectSwapChainSetMetaData,
          v19,
          this,
          Size,
          Src,
          v34,
          *(_QWORD *)v35,
          v36,
          v37,
          v38,
          v39);
      }
      if ( inserted < 0 )
      {
        v27 = WdLogNewEntry5_WdError(v26, v17);
        *(_QWORD *)(v27 + 24) = *((_QWORD *)v10 + 2);
        *(_QWORD *)(v27 + 32) = this;
        WdLogEvent5_WdError(v27);
      }
      else
      {
LABEL_27:
        if ( !*((_DWORD *)v21 + 4) )
          AUTOEXPANDALLOCATION::GetBuffer(*((PVOID **)v21 + 1), 0, 0);
        v28 = (int *)*((_QWORD *)v10 + 4);
        if ( *v28 == v28[1] )
          v29 = 0;
        else
          v29 = *v28 + 1;
        *v28 = v29;
        v18 = -(__int64)a2->bProducer & 0xFFFFFFFFFFFFFFC8uLL;
        v8 = *(_QWORD *)((char *)this + v18 + 176);
        if ( v8 )
          KeSetEvent(*(PRKEVENT *)((char *)this + v18 + 176), 2, 0);
      }
    }
    else
    {
      DXGSWAPCHAIN::MarkAbandoned((struct _KTHREAD **)this, v13, v15, v16);
    }
  }
  else
  {
    v30 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v30 + 24) = *((_QWORD *)v10 + 2);
    *(_QWORD *)(v30 + 32) = this;
    WdLogEvent5_WdError(v30);
    inserted = -1073741811;
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
  {
    LODWORD(v34) = a2->MetaDataSize;
    LODWORD(Src) = a2->bProducer;
    LODWORD(Size) = inserted;
    Template_pqdqp(v18, v17, v19, this, Size, Src, v34, v8);
  }
  return (unsigned int)inserted;
}
