/*
 * XREFs of ?GetSetMetaData@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@IPEAXD@Z @ 0x1C01DE5F8
 * Callers:
 *     ?SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z @ 0x1C01DFD0C (-SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ?GetClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO@1@PEAPEAUSWAPCHAIN_CLIENT_SURF_INFO@1@@Z @ 0x1C0037948 (-GetClientSurfaceInfo@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@IPEAPEAUSWAPCHAIN_SURF_INFO.c)
 *     McTemplateK0pqddqqqqq @ 0x1C0037C14 (McTemplateK0pqddqqqqq.c)
 *     ?GetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@IPEAXAEAUSWAPCHAIN_METADATA_ETW_INFO@1@DPEAI@Z @ 0x1C01DE488 (-GetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@IPEAXAEAUSWAPCHAIN_METADATA_ET.c)
 *     ?SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADATA_ETW_INFO@1@D@Z @ 0x1C01DFADC (-SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADA.c)
 */

__int64 __fastcall DXGSWAPCHAIN::GetSetMetaData(
        struct _KTHREAD **this,
        struct _D3DKMT_GETSETSWAPCHAINMETADATA *a2,
        unsigned int a3,
        void *a4,
        char a5)
{
  __int64 v7; // r15
  __int64 v9; // rax
  __int64 v10; // rax
  BOOL *p_bSetMetaData; // r14
  __int64 v12; // rax
  unsigned int bProducer; // ecx
  BOOL bGlobalMetaData; // eax
  struct AUTOEXPANDALLOCATION *v15; // rdx
  UINT BufferSize; // r8d
  struct _KTHREAD **v17; // rcx
  unsigned int MetaDataInternal; // eax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  char *v22; // rbx
  unsigned int v23; // r8d
  unsigned int v24; // ebx
  const EVENT_DESCRIPTOR *v25; // rdx
  __int64 v27; // rcx
  size_t Size; // [rsp+20h] [rbp-61h]
  size_t Sizea; // [rsp+20h] [rbp-61h]
  size_t Sizeb; // [rsp+20h] [rbp-61h]
  void *Src; // [rsp+28h] [rbp-59h]
  struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *v32; // [rsp+30h] [rbp-51h]
  __int64 v33; // [rsp+38h] [rbp-49h]
  __int64 v34; // [rsp+60h] [rbp-21h] BYREF
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *v35; // [rsp+68h] [rbp-19h] BYREF
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO *v36; // [rsp+70h] [rbp-11h] BYREF
  unsigned __int64 v37; // [rsp+78h] [rbp-9h] BYREF
  __int64 v38; // [rsp+80h] [rbp-1h]
  __int64 v39; // [rsp+88h] [rbp+7h]
  int v40; // [rsp+90h] [rbp+Fh]

  v7 = a3;
  if ( this[1] != KeGetCurrentThread() )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v9 + 24) = 2913LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( a2->pBuffer )
  {
    v10 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v10 + 24) = 2918LL;
    WdLogEvent5_WdAssertion(v10);
  }
  p_bSetMetaData = &a2->bSetMetaData;
  if ( !(_DWORD)v7 || *p_bSetMetaData )
  {
    bProducer = a2->bProducer;
    v37 = 0LL;
    v38 = 0LL;
    v39 = 0LL;
    v40 = 0;
    bGlobalMetaData = a2->bGlobalMetaData;
    v37 = __PAIR64__(bGlobalMetaData, bProducer);
    if ( bGlobalMetaData )
    {
      v15 = (struct AUTOEXPANDALLOCATION *)(this + 9);
      BufferSize = a2->BufferSize;
      v17 = this;
      if ( *p_bSetMetaData )
      {
        LODWORD(Size) = a2->BufferSize;
        LODWORD(v34) = 1;
        MetaDataInternal = DXGSWAPCHAIN::SetMetaDataInternal(
                             (DXGSWAPCHAIN *)this,
                             v15,
                             (int *)&v34,
                             v7,
                             Size,
                             a4,
                             (struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *)&v37,
                             a5);
LABEL_19:
        v24 = MetaDataInternal;
        if ( *p_bSetMetaData )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) == 0 )
            return v24;
          v25 = (const EVENT_DESCRIPTOR *)&EventIndirectSwapChainSetMetaData;
        }
        else
        {
          if ( !a2->pBuffer || (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) == 0 )
            return v24;
          v25 = (const EVENT_DESCRIPTOR *)&EventIndirectSwapChainGetMetaData;
        }
        LODWORD(v33) = v38;
        LODWORD(v32) = HIDWORD(v37);
        LODWORD(Src) = v37;
        LODWORD(Sizea) = MetaDataInternal;
        McTemplateK0pqddqqqqq(v19, v25, v20, this, Sizea, Src, v32, v33, HIDWORD(v38), v39, HIDWORD(v39), v40, v34);
        return v24;
      }
    }
    else
    {
      v21 = -bProducer;
      v22 = (char *)this + ((_DWORD)v21 != 0 ? 136LL : 88LL);
      v23 = *((_DWORD *)v22 + 10);
      if ( v23 == -1
        || (DXGSWAPCHAIN::GetClientSurfaceInfo(
              (DXGSWAPCHAIN *)this,
              (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)((char *)this + ((_DWORD)v21 != 0 ? 136LL : 88LL)),
              v23,
              &v35,
              &v36),
            *(_DWORD *)v35 != 1)
        || *((_DWORD *)v35 + 1) != *((_DWORD *)v22 + 7) )
      {
        v12 = WdLogNewEntry5_WdError(v21);
        v27 = *((_QWORD *)v22 + 2);
        *(_QWORD *)(v12 + 32) = this;
        *(_QWORD *)(v12 + 24) = v27;
        goto LABEL_28;
      }
      if ( a2->bSetMetaData )
      {
        LODWORD(Sizeb) = a2->BufferSize;
        MetaDataInternal = DXGSWAPCHAIN::SetMetaDataInternal(
                             (DXGSWAPCHAIN *)this,
                             *((struct AUTOEXPANDALLOCATION **)v35 + 2),
                             (int *)v35 + 6,
                             v7,
                             Sizeb,
                             a4,
                             (struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *)&v37,
                             a5);
        goto LABEL_19;
      }
      v15 = (struct AUTOEXPANDALLOCATION *)*((_QWORD *)v35 + 2);
      BufferSize = a2->BufferSize;
      v17 = this;
    }
    MetaDataInternal = DXGSWAPCHAIN::GetMetaDataInternal(
                         v17,
                         v15,
                         BufferSize,
                         (char *)a4,
                         (struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *)&v37,
                         a5,
                         &a2->DataCopied);
    goto LABEL_19;
  }
  v12 = WdLogNewEntry5_WdError(this);
  *(_QWORD *)(v12 + 24) = v7;
LABEL_28:
  WdLogEvent5_WdError(v12);
  return 3221225485LL;
}
