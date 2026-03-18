/*
 * XREFs of ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z @ 0x1C01D64C0
 * Callers:
 *     ?AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@@Z @ 0x1C01D4DFC (-AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@@Z.c)
 *     ?SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x1C01D6BB4 (-SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     ?Add@DXGFIXEDQUEUE@@QEAAJI@Z @ 0x1C002C598 (-Add@DXGFIXEDQUEUE@@QEAAJI@Z.c)
 *     ?GetClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO@1@PEAPEAUSWAPCHAIN_CLIENT_SURF_INFO@1@@Z @ 0x1C002C6CC (-GetClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO.c)
 *     ?GetOtherClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO@1@PEAPEAUSWAPCHAIN_CLIENT_SURF_INFO@1@@Z @ 0x1C002C748 (-GetOtherClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF.c)
 *     ?SwitchClient@DXGSWAPCHAIN@@AEAA?AW4SWAPCHAIN_CLIENT_TYPE@1@W421@@Z @ 0x1C002C898 (-SwitchClient@DXGSWAPCHAIN@@AEAA-AW4SWAPCHAIN_CLIENT_TYPE@1@W421@@Z.c)
 *     McTemplateK0pqddqqqqq @ 0x1C002C990 (McTemplateK0pqddqqqqq.c)
 *     McTemplateK0pqdqp @ 0x1C002CA7C (McTemplateK0pqdqp.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C00FC108 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z @ 0x1C01D5D70 (-InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z @ 0x1C01D5FC4 (-MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z.c)
 *     ?SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADATA_ETW_INFO@1@D@Z @ 0x1C01D67D8 (-SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADA.c)
 */

__int64 __fastcall DXGSWAPCHAIN::ReleaseBuffer(
        DXGSWAPCHAIN *this,
        struct _D3DKMT_RELEASESWAPCHAIN *a2,
        void *a3,
        char a4)
{
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 v9; // rax
  char *v10; // rbx
  unsigned int v11; // r8d
  __int64 v12; // rdx
  int inserted; // esi
  __int64 v14; // r8
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rcx
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v19; // r12
  UINT MetaDataSize; // ecx
  struct AUTOEXPANDALLOCATION *v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  int *v24; // r8
  int v25; // ecx
  __int64 v26; // rcx
  __int64 v27; // rax
  size_t Size; // [rsp+20h] [rbp-69h]
  void *Src; // [rsp+28h] [rbp-61h]
  struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *v31; // [rsp+30h] [rbp-59h]
  char v32[8]; // [rsp+38h] [rbp-51h]
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v33; // [rsp+60h] [rbp-29h] BYREF
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO *v34; // [rsp+68h] [rbp-21h] BYREF
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v35; // [rsp+70h] [rbp-19h] BYREF
  void *v36; // [rsp+78h] [rbp-11h]
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO *v37; // [rsp+80h] [rbp-9h] BYREF
  __int64 v38; // [rsp+88h] [rbp-1h] BYREF
  __int64 v39; // [rsp+90h] [rbp+7h]
  __int64 v40; // [rsp+98h] [rbp+Fh]
  int v41; // [rsp+A0h] [rbp+17h]

  v36 = a3;
  if ( *((struct _KTHREAD **)this + 1) != KeGetCurrentThread() )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v7 + 24) = 1987LL;
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = 0LL;
  if ( a2->pMetaData )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v9 + 24) = 1994LL;
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = (char *)this + (a2->bProducer ? 128LL : 80LL);
  v11 = *((_DWORD *)v10 + 10);
  if ( v11 != -1
    && (DXGSWAPCHAIN::GetClientSurfaceInfo(
          this,
          (DXGSWAPCHAIN *)((char *)this + (a2->bProducer ? 128LL : 80LL)),
          v11,
          &v33,
          &v37),
        *(_DWORD *)v33 == 1)
    && *((_DWORD *)v33 + 1) == *((_DWORD *)v10 + 7) )
  {
    inserted = DXGSWAPCHAIN::InsertGPUSignal(
                 this,
                 (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v10,
                 v33,
                 *((_DWORD *)this + 44));
    if ( inserted < 0 )
    {
      DXGSWAPCHAIN::MarkAbandoned((struct _KTHREAD **)this, v12, v14);
      goto LABEL_26;
    }
    DXGSWAPCHAIN::GetOtherClientSurfaceInfo(
      this,
      (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v10,
      *((_DWORD *)v10 + 10),
      &v35,
      &v34);
    v18 = *((unsigned int *)this + 44);
    v19 = v35;
    *(_DWORD *)v34 = v18;
    ++*((_DWORD *)this + 44);
    *(_DWORD *)v19 = 2;
    *((_DWORD *)v19 + 1) = DXGSWAPCHAIN::SwitchClient(v18, *((_DWORD *)v10 + 7));
    MetaDataSize = a2->MetaDataSize;
    if ( MetaDataSize )
    {
      v21 = (struct AUTOEXPANDALLOCATION *)*((_QWORD *)v19 + 1);
      v38 = 0LL;
      v39 = 0LL;
      v40 = 0LL;
      v41 = 0;
      LODWORD(v38) = a2->bProducer;
      LODWORD(Size) = MetaDataSize;
      inserted = DXGSWAPCHAIN::SetMetaDataInternal(
                   this,
                   v21,
                   (int *)v19 + 4,
                   0,
                   Size,
                   v36,
                   (struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *)&v38,
                   a4);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
      {
        *(_DWORD *)v32 = v39;
        LODWORD(v31) = HIDWORD(v38);
        LODWORD(Src) = v38;
        LODWORD(Size) = inserted;
        McTemplateK0pqddqqqqq(
          v22,
          &EventIndirectSwapChainSetMetaData,
          v17,
          this,
          Size,
          Src,
          v31,
          *(_QWORD *)v32,
          HIDWORD(v39),
          v40,
          HIDWORD(v40),
          v41);
      }
      if ( inserted < 0 )
      {
        v23 = WdLogNewEntry5_WdError(v22);
        *(_QWORD *)(v23 + 24) = *((_QWORD *)v10 + 2);
        *(_QWORD *)(v23 + 32) = this;
LABEL_15:
        WdLogEvent5_WdError(v23);
        goto LABEL_26;
      }
    }
    if ( !*((_DWORD *)v19 + 4) )
      AUTOEXPANDALLOCATION::GetBuffer(*((PVOID **)v19 + 1), 0, 0);
    if ( !*((_DWORD *)v10 + 7) )
    {
      v24 = (int *)*((_QWORD *)this + 27);
      v25 = *v24 + 1;
      if ( *v24 == v24[1] )
        v25 = 0;
      *v24 = v25;
      inserted = DXGFIXEDQUEUE::Add(*((const void ***)this + 26), *((_DWORD *)v10 + 10));
      if ( inserted < 0 )
      {
        v23 = WdLogNewEntry5_WdError(v26);
        *(_QWORD *)(v23 + 24) = 2070LL;
        goto LABEL_15;
      }
    }
    *((_DWORD *)v10 + 10) = -1;
    v16 = -(__int64)a2->bProducer & 0xFFFFFFFFFFFFFFD0uLL;
    v8 = *(_QWORD *)((char *)this + v16 + 160);
    if ( v8 )
      KeSetEvent(*(PRKEVENT *)((char *)this + v16 + 160), 2, 0);
  }
  else
  {
    v27 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v27 + 24) = *((_QWORD *)v10 + 2);
    *(_QWORD *)(v27 + 32) = this;
    WdLogEvent5_WdError(v27);
    inserted = -1073741811;
  }
LABEL_26:
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
  {
    LODWORD(v31) = a2->MetaDataSize;
    LODWORD(Src) = a2->bProducer;
    LODWORD(Size) = inserted;
    McTemplateK0pqdqp(v16, v15, v17, this, Size, Src, v31, v8);
  }
  return (unsigned int)inserted;
}
